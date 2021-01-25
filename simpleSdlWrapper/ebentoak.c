#include "ebentoak.h"

POSIZIOA saguPos;
SDL_Event event;

POSIZIOA saguarenPosizioa() { return saguPos;}

int ebentuaJasoGertatuBada(void){
	int ret = 0;
	if( SDL_PollEvent( &event ) )
	{
		/* We are only worried about SDL_KEYDOWN and SDL_KEYUP events */
		switch( event.type )
		{
			case SDL_KEYDOWN:
				switch(event.key.keysym.sym)
				{
					case SDLK_a:
						ret = TECLA_a;
						//actualizaPlayer(-15);
						break;
					case SDLK_d:
						ret = TECLA_d;
						//actualizaPlayer(15);
						break;
					case SDLK_s:
						ret = TECLA_s;	
						break;
					case SDLK_w:
						ret = TECLA_w;
						break;
					case SDLK_SPACE:
						ret = TECLA_SPACE;
						break;
					default:
						ret = event.key.keysym.sym;
						break;
				}
				break;
			case SDL_QUIT:
					ret = GERTAERA_IRTEN;
					break;
			case SDL_MOUSEBUTTONUP:
					switch ( event.button.button ){
						case SDL_BUTTON_LEFT:
							ret = SAGU_BOTOIA_EZKERRA;
							break;
						case SDL_BUTTON_RIGHT:
							ret = SAGU_BOTOIA_ESKUMA;
							break;
						default:
							ret = event.button.button;
							break;
					}
					break;
			case SDL_MOUSEMOTION:
					//ALDAGIA OROKOR BATEN EZARRIK ODUGU X ETA Y GERO FUNZTIO BATEKIN IRAKURTZEKO AZKEN EBENTUAREN POSIZIOA
					saguPos.x = event.motion.x;
					saguPos.y =event.motion.y;
					ret = SAGU_MUGIMENDUA;
					break;
			default:
				break;
		}
	}
	return ret;
}

