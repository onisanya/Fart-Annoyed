#pragma once

#include "Rectangle.h"
#include "Colors.h"
#include "Graphics.h"

class Brick
{
public:
	Brick() = default;
	Brick(const RectF& rect_in, Color color_in);
	void Draw(Graphics& gfx) const;
private:
	RectF rect;
	Color color;
	bool isDestroyed = false;

};

