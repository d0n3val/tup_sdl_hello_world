#include <stdio.h>
//#include "SDL_stdinc.h"
//#include "main.h"
//#include "version.h"
//#include "SDL_version.h"
#include "SDL.h"
#include "other.h"

int main()
{
	int c = foo(34);
	printf("foo %i", c);

	//float c2 = SDL_sin(3.3f);
	SDL_version sdl_version;
	//SDL_GetVideoDevice();
	SDL_GetVersion(&sdl_version);

//	printf("version %i.%i-%s (%s)\n", VER_MAJOR, VER_MINOR, VER_TUP_PLATFORM,VER_COMPILATION_TYPE);
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Quit();
	return(0);
}
