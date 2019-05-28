#include "version.h"
#include "SDL.h"

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_version sdl_version;
	SDL_GetVersion(&sdl_version);

	printf("My version is version %i.%i-%i -%s (%s)\n", 
			VER_MAJOR, VER_MINOR, 
			VER_PATCH, VER_TUP_PLATFORM, 
			VER_COMPILATION_TYPE);

	printf("SDL Version %i.%i-%i\n", 
			sdl_version.major, sdl_version.minor, sdl_version.patch);

	SDL_Quit();
	return(0);
}
