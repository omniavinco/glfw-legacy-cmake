//========================================================================
// GLFW - An OpenGL framework
// File:     x11_enable.c
// Platform: X11 (Unix)
// Version:  2.4
// Date:     2003.01.08
// Author:   Marcus Geelnard (marcus.geelnard@home.se)
// WWW:      http://hem.passagen.se/opengl/glfw/
//------------------------------------------------------------------------
// Copyright (c) 2002-2003 Marcus Geelnard
//
// GLFW is provided "as-is", without any express or implied warranty,
// without even the implied warranty of fitness for a particular purpose.
// In no event will the author be held liable for any damage araising from
// the use of GLFW.
//
// Permission is granted to anyone to use GLFW for any purpose, including
// commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. You must not claim that you wrote GLFW.
// 2. If you modify any parts of GLFW, it must be clearly stated which
//    modifications have been made, and that those modifications are not
//    the work of the author of GLFW.
// 3. If you use GLFW in a product, an acknowledgment in the product
//    documentation would be appreciated, but is not required.
// 4. This notice may not be removed or altered from any source
//    distribution of GLFW.
//
// Marcus Geelnard
// marcus.geelnard@home.se
//========================================================================

#include "internal.h"


//************************************************************************
//****               Platform implementation functions                ****
//************************************************************************

//========================================================================
// _glfwPlatformEnableSystemKeys() - Enable system keys
// _glfwPlatformDisableSystemKeys() - Disable system keys
//========================================================================

void _glfwPlatformEnableSystemKeys( void )
{
    // Not supported under X11 (yet)
}

void _glfwPlatformDisableSystemKeys( void )
{
    // Not supported under X11 (yet)
}
