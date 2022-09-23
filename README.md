# Simple Non-Profit 2D Game Engine made with C++ and OpenGL
![](https://github.com/susyboy23/OpenLiv/blob/main/screenshots/example_image_1.png)
![](https://github.com/susyboy23/OpenLiv/blob/main/screenshots/example_image_0.png)

# Plan
  For now i just have planed to add an editor, add a x64 build,
  and implement a simplier way to create a project, thas all,
  i'm not going to add fancy stuff, cuz this engine its made as
  a base for you to make a simple 2D game, its not made to compite with
  unity, godot or flixel, i made it for fun, and for build a game with my friend

# Compiling - ( Only windows )
  ### For now, you can only compile in x86 and not x64 :/
  - Get inside the solution, build "OpenLiv"
  - copy "res" and paste it inside "bin/(Debug/Release)-Win32/"
  
# Dependencies
  - [GLFW](https://github.com/taniwha/glfw/commits/master/include/GLFW/glfw3.h)
  - [GLEW](http://glew.sourceforge.net)
  - [GLM](https://github.com/g-truc/glm)
  - [ImGui](https://github.com/ocornut/imgui)
  - [stb_image](https://github.com/nothings/stb/blob/master/stb_image.h)

# Comon errors
  ### Textures
    Your texture shows in screen, but it looks strange?
    The reason is that this engine, only suports square res images
    i.e 24x24, 50x50, 124x123
    and it will deform everything that isnt in a square res
  ### Shaders
    So you are trying to compile a shader but it gives errors?
    maybe its cuz you have a "#version 330 core" or what ever version at the start, remove it
    all that is handled by Shaders.h so you dont have to struggle with it
    ( Also cuz it casued a lot of file reading errors )
  
# Thanks
  - [TheCherno](https://twitter.com/thecherno) for your epic OpenGL Series :)
  - [Taniwha](https://github.com/taniwha) thanks for all the help in discord mate
