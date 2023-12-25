#include <iostream>
#include <vector>

#include "SDL2\SDL.h" 

const int SCREEN_WIDTH = 244;
const int SCREEN_HEIGHT = 288;

int main(int argc, const char* argv[]) {

	system("pause");
	 
	if (SDL_Init(SDL_INIT_VIDEO)) {
		std::cout << "ERROR!!" << std::endl;
		return 1;
	}

	SDL_Window* optrWindow = SDL_CreateWindow("Arcade", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
	

	return 0;
}