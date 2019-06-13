#pragma once
#ifndef GRAPHICS_H
#define GRAPHICS_H

// forward declare allows us to use variable names as pointers even if they haven't been included yet
struct SDL_Window;
struct SDL_Renderer;


class Graphics {
public: 
	//Constructor
	Graphics();
	//Destructor
	~Graphics();
private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;
};


#endif