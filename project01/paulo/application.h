#pragma once

#include "snake.h"

#include <cinder/app/App.h>
#include <cinder/app/RendererGl.h>

class Application : public ci::app::App
{
public:
	using Canvas = ci::Rectf;
	Application();

	void keyDown(ci::app::KeyEvent) override;
	void setup() override;
	void draw() override;
	void update() override;

	static void prepareSettings(Settings*);

private:
	bool mGameOver{false};
	Snake mSnake;
	Canvas mCanvas;
};
