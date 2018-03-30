/* Draw text on screen.
 * Requires freetype library.
 * Code is taken from "OpenGL source examples from the OpenGL Programming wikibook:
 * http://en.wikibooks.org/wiki/OpenGL_Programming"
 */

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <assert.h>

#include "Platform.h"
#include "DisplayWindow.h"
#include "GraphicsDrawer.h"
#include "Textures.h"
#include "Config.h"
#include "Log.h"

#include "Graphics/Context.h"
#include "Graphics/Parameters.h"

#include "TextDrawer.h"

#ifdef MUPENPLUSAPI
#include "mupenplus/GLideN64_mupenplus.h"
#include <osal_files.h>
#endif

using namespace graphics;

// Maximum texture width
#define MAXWIDTH 1024

TextDrawer g_textDrawer;

struct Atlas {
    
};

void TextDrawer::init()
{
}

void TextDrawer::destroy()
{
}

/**
 * Render text using the currently loaded font and currently set font size.
 * Rendering starts at coordinates (x, y), z is always 0.
 * The pixel coordinates that the FreeType2 library uses are scaled by (sx, sy).
 */
void TextDrawer::drawText(const char *_pText, float _x, float _y) const
{
}

void TextDrawer::getTextSize(const char *_pText, float & _w, float & _h) const
{
}

void TextDrawer::setTextColor(float * _color)
{
}
