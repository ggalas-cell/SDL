#include <SDL.h>
#include <iostream>
#include "Geometry.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Image.h"



struct Color
{
	int r, g, b, a;
};
void DrawPoint(SDL_Renderer* renderer,const Color& color)
{
	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
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
void DrawRectangle(SDL_Renderer* renderer, int x, int y, int width, int heigth)
{

	SDL_RenderDrawLine(renderer, x, y, x + width, y);
	SDL_RenderDrawLine(renderer, x + width, y, x + width, heigth + y);
	SDL_RenderDrawLine(renderer, x, y, x, heigth + y);
	SDL_RenderDrawLine(renderer, x, y+heigth, x + width, y + heigth);
}
void DrawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius, int precision)
{
	float step = (float)(2 * M_PI) / precision;
	for (int i = 0; i <= precision; i++)
	{
		int x1= radius * cos(step*i)+centerX; 
		int y1= radius * sin(step*i)+centerY;
		int x2= radius * cos(step*i)+centerX;
		int y2= radius * sin(step*i)+centerY;
		SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
	}
}

//special circle
//float step = (2 * M_PI) / m_height;
//for (int i = 0; i <= m_height; i++)
//{
//	Vector2 center = GetPosition(0.5f, 0.5f);
//
//	int x1 = m_width * cos(step * i) + center.x;
//	int y1 = m_width * sin(step * i) + center.y;
//	int x2 = m_width * cos(step * i + 1) + center.x;
//	int y2 = m_width * sin(step * i + 1) + center.y;
//	SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
//}
void DrawLine(SDL_Renderer* renderer,int x ,int y, int x2, int y2)
{
	int lx = x2-x;
	int hy = y2-y;
	int lengthx= abs(lx);
	int heigthy = abs(hy);
	int max = std::max(lengthx, heigthy);
	float stepx = lx / (float)max;
	float stepy = hy / (float)max;
	float x1 = (float)x;
	float y1 = (float)y;
	for (int i=0; i <= max; ++i)
	{
		SDL_RenderDrawPoint(renderer, x1, y1);

		x1 += (int)stepx;
		y1 += (int)stepy;
	}
}

//#define WIDTH =640
//#define HEIGHT = 480
//#define CENTER_X = WIDTH / 2
//#define CENTER_Y = HEIGHT / 2

int main(int arcg, char** argv)
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}
	int windx = 999;
	int windy = 799;
	int centerx = windx / 2;
	int centery = windy / 2;
	SDL_Window* window = SDL_CreateWindow("SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 800, SDL_WINDOW_OPENGL);


	if (!window)
	{
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
		return 1;
	}
	SDL_Renderer* renderer = SDL_CreateRenderer(window,-1, SDL_RENDERER_PRESENTVSYNC);
	//Geometry* geometry;
	//Color color = { 200,140,0,255 };
	SDL_SetRenderDrawColor(renderer, 200, 140, 0, 255);
	//DrawPoint(renderer,color);
	//DrawHorizontalLine(renderer, 10, 10, 100);	
	//DrawVerticalLine(renderer,50,50,200);
	//DrawRectangle(renderer,50,50,150,100);
	//DrawCircle(renderer, 200, 200, 200, 2000);
	//DrawLine(renderer,200,100,400,300);

	//		// Rectangle : placement 
	//Rectangle* rectangle= new Rectangle(100,100);
	//Rectangle* rectangle2= new Rectangle(100,100);
	//Rectangle* rectangle3 = new Rectangle(100, 100);
	//Rectangle* rectangle4 = new Rectangle(100, 100);
	//Rectangle* rectangle5 = new Rectangle(100, 100);

	//rectangle->SetPosition(10, 10, 0.f, 0.f);
	//rectangle->Draw(renderer);

	//rectangle2->SetPosition(windx-10, 10, 1.f, 0.f);
	//rectangle2->Draw(renderer);

	//rectangle3->SetPosition(centerx, centery, 0.5f, 0.5f);
	//rectangle3->Draw(renderer);

	//rectangle4->SetPosition(10, windy-10, 0.f, 1.f);
	//rectangle4->Draw(renderer);

	//rectangle5->SetPosition(windx-10, windy-10, 1.f, 1.f);
	//rectangle5->Draw(renderer);

	//		//Circle: placement
	//Circle* cir = new Circle();
	//Circle* cir2 = new Circle();
	//Circle* cir3 = new Circle();
	//Circle* cir4 = new Circle();


	//Vector2 TL = rectangle3->GetPosition(0.f, 0.f);	// top left
	//Vector2 TR = rectangle3->GetPosition(1.f, 0.f); // top right 
	//Vector2 BL = rectangle3->GetPosition(0.f, 1.f); // bottom left 
	//Vector2 BR = rectangle3->GetPosition(1.f, 1.f); // bottom right 

	//
	//cir->SetPosition(TL.x, TL.y, 0.5f,0.5f);	//top left
	//cir->Draw(renderer);
	//
	//cir2->SetPosition(TR.x, TR.y, 0.5f, 0.5f);	//top right
	//cir2->Draw(renderer);
	//
	//cir3->SetPosition(BL.x, BL.y, 0.5f, 0.5f); // bottom right
	//cir3->Draw(renderer);
	//
	//cir4->SetPosition(BR.x, BR.y, 0.5f, 0.5f); // bottom left
	//cir4->Draw(renderer);

	//img a verifier
	//Image* img = new Image(renderer, "..\SDL\image.bmp");
	//img->Draw(renderer);

	Circle* ci = new Circle(100);
	ci->SetPosition(centerx, centery, 0.5f, 0.5f);
	ci->Draw(renderer);

	SDL_RenderPresent(renderer);
	SDL_Delay(2000);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
