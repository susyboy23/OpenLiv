#include "VertexArray.h"

VertexArray::VertexArray()
{
	glCall(glGenVertexArrays(1, &m_RendererID));
}
VertexArray::~VertexArray()
{
	glCall(glDeleteVertexArrays(1, &m_RendererID));
}

void VertexArray::AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout)
{
	Bind();
	vb.Bind();
	const auto& elements = layout.GetElements();
	uint32_t offset = 0;

	for (uint32_t i = 0; i < elements.size(); i++)
	{
		const auto& element = elements[i];

		glCall(glEnableVertexAttribArray(i));
		glCall(glVertexAttribPointer(i, element.count, element.type,
			element.normalized, layout.GetStride(), (const void*)offset));
		offset += element.count * LayoutElement::GetSizeOfType(element.type);
	}
}

void VertexArray::Bind() const
{
	glCall(glBindVertexArray(m_RendererID));
}

void VertexArray::UnBind() const
{
	glCall(glBindVertexArray(0));
}