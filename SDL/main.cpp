#include <SDL.h>
#include <iostream>
#include "function.h"	

void DrawPoint(SDL_Renderer* renderer)
{
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	for (int i = 0; i <= 200; i++)
	{
		for (int y = 0; y <= 200; y++)
		{
			SDL_RenderDrawPoint(renderer, i, y);
		}

	}
}

void DrawHorizontalLine(SDL_Renderer* renderer,int x,int y,int length)
{
	int lengthx =0;
	SDL_SetRenderDrawColor(renderer, 100, 230, 30, 255);
	for(lengthx;lengthx<=length;lengthx++ )
	{
		SDL_RenderDrawPoint(renderer, lengthx, y);
	}
}
void DrawVerticalLine(SDL_Renderer* renderer, int x, int y, int length)
{
	int lengthy = 0;
	SDL_SetRenderDrawColor(renderer, 100, 230, 30, 255);
	for (lengthy; lengthy <= length; lengthy++)
	{
		SDL_RenderDrawPoint(renderer,x , lengthy);
	}
}
void DrawLine(SDL_Renderer* renderer,int x ,int y, int length, int heigth)
{
	int lx = 0;
	int hy = 0;
	SDL_SetRenderDrawColor(renderer, 80, 255, 50, 255);
	for (lx; lx <= length; lx++)
	{
		SDL_RenderDrawPoint(renderer, lx, hy);
	}
}


int main(int arcg, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

	SDL_Window* window = SDL_CreateWindow("SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!window)
	{
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
		return 1;
	}
	SDL_Renderer* renderer = SDL_CreateRenderer(window,-1, 1);
	//DrawPoint(renderer);
	//DrawHorizontalLine(renderer, 10, 10, 100);	
	//DrawVerticalLine(renderer,50,50,200);
	DrawLine(renderer,200,100,400,300);


	SDL_RenderPresent(renderer);
	SDL_Delay(2000);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
