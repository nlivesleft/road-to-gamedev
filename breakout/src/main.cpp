#include <SDL.h>

int bricks[5][10];
int paddle_x = 0, paddle_y = 0;
int ball_x = 0, ball_y = 0;
int score = 0;
bool running = true;

void drawBricks()
{
}

void drawBall()
{
}

void drawPaddle()
{
}

void handleInput()
{
}

void updatePaddle()
{
}

void updateBricks()
{
}

void updateBall()
{

}

int main()
{
	for(int y=0;y<5;y++)
	{
		for(int x=0;x<10;x++)
		{
			bricks[y][x] = 1;
		}
	}


	while(running)
	{
		handleInput();

		updatePaddle();
		updateBricks();
		updateBall();

		//clear screen

		drawBricks();
		drawBall();
		drawPaddle();

		//limit loop time to 60fps
	}

	return 0;
}
