#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include "ourTypes.h"
#include "funtzioak.h"

int main(int argc, char* str[])
{
    int jokalaria, egoera = 1;
    char puntuazioa;

    if (sgHasieratu() == -1)
    {
        fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }
    do
    {
        jokalaria = hasierakoPantaila();
        if (jokalaria == 6)
        {
            egoera = 0;
        }
        else
        {
            puntuazioa = jokoa(jokalaria);
            egoera = amaierakoPantaila(puntuazioa);
        }
    } while (egoera == 1);
    sgItxi();
    return 0;
}