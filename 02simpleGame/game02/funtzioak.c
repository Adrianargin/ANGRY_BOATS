#include "funtzioak.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>
#include <imagen.h>
#include <time.h>

#define JOKOA_SOUND ".\\sound\\musika.wav"
#define JOKOA_SOUND1 ".\\sound\\musika1.wav"
#define JOKOA_SOUND2 ".\\sound\\musika2.wav"
#define JOKOA_SOUND3 ".\\sound\\musika3.wav"
#define JOKOA_PLAYER_IMAGE1 ".\\img\\jokalaria2.bmp"
#define JOKOA_PLAYER_IMAGE2 ".\\img\\jokalaria3.bmp"
#define JOKOA_PLAYER_IMAGE3 ".\\img\\jokalaria1.bmp"
#define FONDO_PLAYER_IMAGE0 ".\\img\\sprite_00.bmp"
#define FONDO_PLAYER_IMAGE1 ".\\img\\sprite_01.bmp"
#define FONDO_PLAYER_IMAGE2 ".\\img\\sprite_02.bmp"
#define FONDO_PLAYER_IMAGE3 ".\\img\\sprite_03.bmp"
#define FONDO_PLAYER_IMAGE4 ".\\img\\sprite_04.bmp"
#define FONDO_PLAYER_IMAGE5 ".\\img\\sprite_05.bmp"
#define FONDO_PLAYER_IMAGE6 ".\\img\\sprite_06.bmp"
#define FONDO_PLAYER_IMAGE7 ".\\img\\sprite_07.bmp"
#define FONDO_PLAYER_IMAGE8 ".\\img\\sprite_08.bmp"
#define FONDO_PLAYER_IMAGE9 ".\\img\\sprite_09.bmp"
#define FONDO_PLAYER_IMAGE10 ".\\img\\sprite_10.bmp"
#define FONDO_PLAYER_IMAGE11 ".\\img\\sprite_11.bmp"
#define FONDO_PLAYER_IMAGE12 ".\\img\\sprite_12.bmp"
#define FONDO_PLAYER_IMAGE13 ".\\img\\sprite_13.bmp"
#define FONDO_PLAYER_IMAGE14 ".\\img\\sprite_14.bmp"
#define FONDO_PLAYER_IMAGE15 ".\\img\\sprite_15.bmp"
#define FONDO_PLAYER_IMAGE16 ".\\img\\sprite_16.bmp"
#define FONDO_PLAYER_IMAGE17 ".\\img\\sprite_17.bmp"
#define FONDO_PLAYER_IMAGE18 ".\\img\\sprite_18.bmp"
#define FONDO_PLAYER_IMAGE19 ".\\img\\sprite_19.bmp"
#define FONDO_PLAYER_IMAGE20 ".\\img\\sprite_20.bmp"
#define FONDO_PLAYER_IMAGE21 ".\\img\\sprite_21.bmp"
#define FONDO_PLAYER_IMAGE22 ".\\img\\sprite_22.bmp"
#define FONDO_PLAYER_IMAGE23 ".\\img\\sprite_23.bmp"
#define FONDO_PLAYER_IMAGE24 ".\\img\\sprite_24.bmp"
#define FONDO_PLAYER_IMAGE25 ".\\img\\sprite_25.bmp"
#define FONDO_PLAYER_IMAGE26 ".\\img\\sprite_26.bmp"
#define FONDO_PLAYER_IMAGE27 ".\\img\\sprite_27.bmp"
#define FONDO_PLAYER_IMAGE28 ".\\img\\sprite_28.bmp"
#define FONDO_PLAYER_IMAGE29 ".\\img\\sprite_29.bmp"
#define FONDO_PLAYER_IMAGE30 ".\\img\\sprite_30.bmp"
#define FONDO_PLAYER_IMAGE31 ".\\img\\sprite_31.bmp"
#define HASIERA_IMAGE1 ".\\img\\hasiera1.bmp"
#define HASIERA_IMAGE2 ".\\img\\hasiera2.bmp"
#define HASIERA_IMAGE3 ".\\img\\hasiera3.bmp"
#define HASIERA_IMAGE4 ".\\img\\hasiera4.bmp"
#define HASIERA_IMAGE5 ".\\img\\hasiera5.bmp"
#define PERTSONAIA_IMAGE1 ".\\img\\pertsonaia1.bmp"
#define PERTSONAIA_IMAGE2 ".\\img\\pertsonaia2.bmp"
#define PERTSONAIA_IMAGE3 ".\\img\\pertsonaia3.bmp"
#define PUNTUAZIO1 ".\\img\\puntuazio1.bmp"
#define PUNTUAZIO2 ".\\img\\puntuazio2.bmp"
#define ZENB0 ".\\img\\zenb0.bmp"
#define ZENB1 ".\\img\\zenb1.bmp"
#define ZENB2 ".\\img\\zenb2.bmp"
#define ZENB3 ".\\img\\zenb3.bmp"
#define ZENB4 ".\\img\\zenb4.bmp"
#define ZENB5 ".\\img\\zenb5.bmp"
#define ZENB6 ".\\img\\zenb6.bmp"
#define ZENB7 ".\\img\\zenb7.bmp"
#define ZENB8 ".\\img\\zenb8.bmp"
#define ZENB9 ".\\img\\zenb9.bmp"
#define ARROKA ".\\img\\arroka.bmp"
#define EGILEAK ".\\img\\egileak.bmp"
#define ARAUAK ".\\img\\arauak.bmp"
#define AMAIERA1 ".\\img\\amaiera1.bmp"
#define AMAIERA2 ".\\img\\amaiera2.bmp"
#define PAUSE1 ".\\img\\pause1.bmp"
#define PAUSE2 ".\\img\\pause2.bmp"
#define TXANPONA ".\\img\\txanpona.bmp"
#define BOMBA ".\\img\\bomba.bmp"
#define BOMBA2 ".\\img\\bomba2.bmp"
#define BOMBAGEHITU ".\\img\\bombagehitu.bmp"

int hasierakoPantaila();
void egileakErakutsi();
int pertsonaiaAukeratu();
int pausePantaila();
int ausazkoPosizioa();
int txanponaSortu(int x, int y);
int amaierakoPantaila(int puntuak);
int arrokakSortu(int x, int y);
void puntuakJokoanPantailaratu(int puntuak);
int puntuazioa(int puntuak);
void JOKOA_puntuazioIrudiaSortu(int x, int y, int zenbaki);
int JOKOA_pertsonaiaAukeratu(int jokalaria);
int JOKOA_jokalariaIrudiaSortu(int x, int y, int jokalaria);
int kolisioakKonprobatu(int arrokax, int arrokay, int txalupax, int txalupay);
int kolisioakTxanponarekin(int txanponax, int txanponay, int txalupax, int txalupay);
int JOKOA_hasierakoIrudiaSortu(int x, int y);
int JOKOA_fondokoIrudiaSortu( int x);
int jokoa(int jokalaria);
int bombaGehigarriaSortu(int x, int y);
int JOKOA_amaieraPantailak(int x);
int JOKOA_puntuazioPantailak(int x, int puntuak);
void arauakErakutsi();
void bombakJokoanPantailaratu(int bombaKop);
int kolisioakBombaGehigarriarekin(int bombax, int bombay, int arrokax, int arrokay);
int kolisioakBombarekin(int bombax, int bombay, int arrokax, int arrokay);
int bombaSortu(int x, int y);
void puntuakPantailaratu(int puntuak);
void puntuMaximoakPantailaratu(int puntuak);

int puntuazioMaximoa = 0;

int jokoa(int jokalaria)
{
    int ebentu, x = 0, i = 0, k = 3, c = 5, egoera = 0, txanponarenEgoera = 0, bombarenEgoera = 0, bombaGehituEgoera = 0, kont = 1, puntuak = 0, maiztasuna = 0, abiadura = 25, bombakop = 5;
    JOKO_ELEMENTUA txalupa, fondo, arroka1, arroka2, arroka3, arroka4, arroka5, arroka6, txanpona, bomba, bombaGehitu;
    audioInit();
    loadTheMusic(JOKOA_SOUND);
    playMusic();
    textuaGaitu();
    srand(time(NULL));

    arroka1.pos.y = -255;
    arroka2.pos.y = -255;
    arroka3.pos.y = -255;
    arroka4.pos.y = -255;
    arroka5.pos.y = -255;
    arroka6.pos.y = -255;
    bomba.pos.y = -255;
    bomba.pos.x = 10;
    txanpona.pos.y = -255;
    txanpona.pos.x = 10;
    bombaGehitu.pos.y = -255;
    bombaGehitu.pos.x = 10;
    arroka1.pos.x = 10;
    arroka2.pos.x = 150;
    arroka3.pos.x = 290;
    arroka4.pos.x = 430;
    arroka5.pos.x = 570;
    arroka6.pos.x = 710;
    fondo.id = JOKOA_fondokoIrudiaSortu(i);
    txalupa.pos.x = 370;
    txalupa.pos.y = 675;
    txalupa.id = JOKOA_jokalariaIrudiaSortu(txalupa.pos.x, txalupa.pos.y, jokalaria);
    txanpona.id = txanponaSortu(txanpona.pos.x, txanpona.pos.y);
    bomba.id = bombaSortu(bomba.pos.x, bomba.pos.y);
    bombaGehitu.id = bombaGehigarriaSortu(bombaGehitu.pos.x, bombaGehitu.pos.y);
    arroka1.id = arrokakSortu(arroka1.pos.x, arroka1.pos.y);
    arroka2.id = arrokakSortu(arroka2.pos.x, arroka2.pos.y);
    arroka3.id = arrokakSortu(arroka3.pos.x, arroka3.pos.y);
    arroka4.id = arrokakSortu(arroka4.pos.x, arroka4.pos.y);
    arroka5.id = arrokakSortu(arroka5.pos.x, arroka5.pos.y);
    arroka6.id = arrokakSortu(arroka6.pos.x, arroka6.pos.y);
    
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            if (bombakop > 0)
            {
                if (bombarenEgoera == 0)
                {
                    bomba.pos.x = txalupa.pos.x + 23;
                    bomba.pos.y = txalupa.pos.y + 10;
                    bombakop--;
                }
            }
        }
        if (ebentu == TECLA_a)
        {
            txalupa.pos.x = txalupa.pos.x - 10;
            if (txalupa.pos.x < 0)
            {
                txalupa.pos.x = 770;
            }
        }
        if (ebentu == TECLA_d)
        {
            txalupa.pos.x = txalupa.pos.x + 10;
            if (txalupa.pos.x > 770)
            {
                txalupa.pos.x = 0;
            }
        }
        if (ebentu == TECLA_w)
        {
            if (txalupa.pos.y > 0)
            {
                txalupa.pos.y = txalupa.pos.y - 10;
            }
        }
        if (ebentu == TECLA_s)
        {
            if (txalupa.pos.y < 785)
            {
                txalupa.pos.y = txalupa.pos.y + 10;
            }
        }
        if (ebentu == TECLA_SPACE)
        {
            egoera = pausePantaila();
            if (egoera == 1)
            {
                return puntuak;
            }
        }
        kont--;
        if (kont == 0)
        {
            kont = 100000;
            i++;
            if (i > 31)
            {
                i = 0;
                puntuak++;
                k++;
                c++;
            }
            if (k >= 5)
            {
                k = 0;
                abiadura = abiadura + 1;
                txanponarenEgoera = 1;
                txanpona.pos.x = ausazkoPosizioa();
            }
            if (c >= 8)
            {
                c = 0;
                bombaGehituEgoera = 1;
                bombaGehitu.pos.x = ausazkoPosizioa();
                bombaGehitu.pos.x = bombaGehitu.pos.x + 30;
            }
            arroka1.pos.y = arroka1.pos.y + 30;
            arroka2.pos.y = arroka2.pos.y + 20;
            arroka3.pos.y = arroka3.pos.y + 13;
            arroka4.pos.y = arroka4.pos.y + 25;
            arroka5.pos.y = arroka5.pos.y + 30;
            arroka6.pos.y = arroka6.pos.y + 35;
            if (arroka1.pos.y > 920)
            {
                arroka1.pos.y = -255;
            }
            if (arroka2.pos.y > 920)
            {
                arroka2.pos.y = -255;
            }
            if (arroka3.pos.y > 920)
            {
                arroka3.pos.y = -255;
            }
            if (arroka4.pos.y > 920)
            {
                arroka4.pos.y = -255;
            }
            if (arroka5.pos.y > 920)
            {
                arroka5.pos.y = -255;
            }
            if (arroka6.pos.y > 920)
            {
                arroka6.pos.y = -255;
            }
            if (txanpona.pos.y > 920)
            {
                txanpona.pos.y = -255;
                txanponarenEgoera = 0;
            }
            if (bomba.pos.y > -235)
            {
                bomba.pos.y = bomba.pos.y - 20;
                bombarenEgoera = 1;
            }
            else
            {
                bombarenEgoera = 0;
            }
            if (bombaGehitu.pos.y > 920)
            {
                bombaGehitu.pos.y = -255;
                bombaGehituEgoera = 0;
            }
            irudiaKendu(fondo.id);
            fondo.id = JOKOA_fondokoIrudiaSortu(i);
            irudiaKendu(txalupa.id);
            txalupa.id = JOKOA_jokalariaIrudiaSortu(txalupa.pos.x, txalupa.pos.y, jokalaria);
            puntuakJokoanPantailaratu(puntuak);
            bombakJokoanPantailaratu(bombakop);
            irudiaKendu(bomba.id);
            bomba.id = bombaSortu(bomba.pos.x, bomba.pos.y);
            if (txanponarenEgoera == 1)
            {
                txanpona.pos.y = txanpona.pos.y + (abiadura * 0.5);
                irudiaKendu(txanpona.id);
                txanpona.id = txanponaSortu(txanpona.pos.x, txanpona.pos.y);
            }
            if (bombaGehituEgoera == 1)
            {
                bombaGehitu.pos.y = bombaGehitu.pos.y + (abiadura * 0.5);
                irudiaKendu(bombaGehitu.id);
                bombaGehitu.id = bombaGehigarriaSortu(bombaGehitu.pos.x, bombaGehitu.pos.y);
            }
            irudiaKendu(arroka1.id);
            irudiaKendu(arroka2.id);
            irudiaKendu(arroka3.id);
            irudiaKendu(arroka4.id);
            irudiaKendu(arroka5.id);
            irudiaKendu(arroka6.id);
            arroka1.id = arrokakSortu(arroka1.pos.x, arroka1.pos.y);
            arroka2.id = arrokakSortu(arroka2.pos.x, arroka2.pos.y);
            arroka3.id = arrokakSortu(arroka3.pos.x, arroka3.pos.y);
            arroka4.id = arrokakSortu(arroka4.pos.x, arroka4.pos.y);
            arroka5.id = arrokakSortu(arroka5.pos.x, arroka5.pos.y);
            arroka6.id = arrokakSortu(arroka6.pos.x, arroka6.pos.y);
        }
        egoera = kolisioakKonprobatu(arroka1.pos.x, arroka1.pos.y, txalupa.pos.x, txalupa.pos.y);
        if (egoera == 1)
        {
            return puntuak;
        }
        egoera = kolisioakKonprobatu(arroka2.pos.x, arroka2.pos.y, txalupa.pos.x, txalupa.pos.y);
        if (egoera == 1)
        {
            return puntuak;
        }
        egoera = kolisioakKonprobatu(arroka3.pos.x, arroka3.pos.y, txalupa.pos.x, txalupa.pos.y);
        if (egoera == 1)
        {
            return puntuak;
        }
        egoera = kolisioakKonprobatu(arroka4.pos.x, arroka4.pos.y, txalupa.pos.x, txalupa.pos.y);
        if (egoera == 1)
        {
            return puntuak;
        }
        egoera = kolisioakKonprobatu(arroka5.pos.x, arroka5.pos.y, txalupa.pos.x, txalupa.pos.y);
        if (egoera == 1)
        {
            return puntuak;
        }
        egoera = kolisioakKonprobatu(arroka6.pos.x, arroka6.pos.y, txalupa.pos.x, txalupa.pos.y);
        if (egoera == 1)
        {
            return puntuak;
        }
        if (txanponarenEgoera == 1)
        {
            if (kolisioakTxanponarekin(txanpona.pos.x, txanpona.pos.y, txalupa.pos.x, txalupa.pos.y) == 1)
            {
                puntuak = puntuak + 5;
                txanponarenEgoera = 0;
                txanpona.pos.y = -225;
            }
        }
        if (bombarenEgoera == 1)
        {
            if (kolisioakBombarekin(bomba.pos.x, bomba.pos.y, arroka1.pos.x, arroka1.pos.y) == 1)
            {
                arroka1.pos.y = -245;
                bomba.pos.y = -255;
                bombarenEgoera = 0;
            }
            if (kolisioakBombarekin(bomba.pos.x, bomba.pos.y, arroka2.pos.x, arroka2.pos.y) == 1)
            {
                arroka2.pos.y = -245;
                bomba.pos.y = -255;
                bombarenEgoera = 0;
            }
            if (kolisioakBombarekin(bomba.pos.x, bomba.pos.y, arroka3.pos.x, arroka3.pos.y) == 1)
            {
                arroka3.pos.y = -245;
                bomba.pos.y = -255;
                bombarenEgoera = 0;
            }
            if (kolisioakBombarekin(bomba.pos.x, bomba.pos.y, arroka4.pos.x, arroka4.pos.y) == 1)
            {
                arroka4.pos.y = -245;
                bomba.pos.y = -255;
                bombarenEgoera = 0;
            }
            if (kolisioakBombarekin(bomba.pos.x, bomba.pos.y, arroka5.pos.x, arroka5.pos.y) == 1)
            {
                arroka5.pos.y = -245;
                bomba.pos.y = -255;
                bombarenEgoera = 0;
            }
            if (kolisioakBombarekin(bomba.pos.x, bomba.pos.y, arroka6.pos.x, arroka6.pos.y) == 1)
            {
                arroka6.pos.y = -245;
                bomba.pos.y = -255;
                bombarenEgoera = 0;
            }
        }
        if (bombaGehituEgoera == 1)
        {
            if (kolisioakBombaGehigarriarekin(bombaGehitu.pos.x, bombaGehitu.pos.y, txalupa.pos.x, txalupa.pos.y) == 1)
            {
                bombaGehitu.pos.y = -225;
                bombaGehituEgoera = 0;
                if (bombakop < 5)
                {
                    bombakop++;
                }
            }
        }
    } while (egoera == 0);
    pantailaGarbitu();
    pantailaBerriztu();
    audioTerminate();
    return puntuak;
}

int hasierakoPantaila()
{
    int ebentu, i = 1, x = 1, egoera = 0, jokalaria = 1, soinuaId;
    JOKO_ELEMENTUA hasiera;
    audioInit();
    loadTheMusic(JOKOA_SOUND1);
    playMusic();

    hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == TECLA_d)
        {
            x++;
            if (x == 3)
            {
                x = 1;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
        }
        if (ebentu == TECLA_a)
        {
            
            x--;
            if (x == 0)
            {
                x = 2;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
        }
        if (ebentu == TECLA_w)
        {

            i--;
            if (i == 0)
            {
                i = 3;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
        }
        if (ebentu == TECLA_s)
        {

            i++;
            if (i == 4)
            {
                i = 1;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
        }
        if (i == 1 && x == 1)
        {
            if (ebentu == TECLA_RETURN)
            {
                audioTerminate();
                audioInit();
                loadTheMusic(JOKOA_SOUND2);
                playMusic();
                Sleep(2000);
                egoera = 1;
            }
        }
        if (i == 1 && x == 2)
        {
            if (ebentu == TECLA_RETURN)
            {
                irudiaKendu(hasiera.id);
                jokalaria = pertsonaiaAukeratu(jokalaria);
                hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
            }
        }
        if (i == 2 && x == 1)
        {
            if (ebentu == TECLA_RETURN)
            {
                irudiaKendu(hasiera.id);
                egileakErakutsi();
                hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
            }
        }
        if (i == 2 && x == 2)
        {
            if (ebentu == TECLA_RETURN)
            {
                jokalaria = 6;
                egoera = 1;
            }
        }
        if (i == 3)
        {
            if (ebentu == TECLA_RETURN)
            {
                irudiaKendu(hasiera.id);
                arauakErakutsi();
                hasiera.id = JOKOA_hasierakoIrudiaSortu(i, x);
            }
        }
    } while (egoera == 0);
    irudiaKendu(hasiera.id);
    return jokalaria;
}

int pausePantaila()
{
    int arrokaId = -1, i = 1, ebentu, egoera;

    arrokaId = irudiaKargatu(PAUSE1);
    irudiaMugitu(arrokaId, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == TECLA_d)
        {
            i++;
            if (i == 3)
            {
                i = 1;
            }
            if (i == 1)
            {
                irudiaKendu(arrokaId);
                arrokaId = irudiaKargatu(PAUSE1);
                irudiaMugitu(arrokaId, 0, 0);
                pantailaGarbitu();
                irudiakMarraztu();
                pantailaBerriztu();
            }
            if (i == 2)
            {
                irudiaKendu(arrokaId);
                arrokaId = irudiaKargatu(PAUSE2);
                irudiaMugitu(arrokaId, 0, 0);
                pantailaGarbitu();
                irudiakMarraztu();
                pantailaBerriztu();
            }
        }
        if (ebentu == TECLA_a)
        {

            i--;
            if (i == 0)
            {
                i = 2;
            }
            if (i == 1)
            {
                irudiaKendu(arrokaId);
                arrokaId = irudiaKargatu(PAUSE1);
                irudiaMugitu(arrokaId, 0, 0);
                pantailaGarbitu();
                irudiakMarraztu();
                pantailaBerriztu();
            }
            if (i == 2)
            {
                irudiaKendu(arrokaId);
                arrokaId = irudiaKargatu(PAUSE2);
                irudiaMugitu(arrokaId, 0, 0);
                pantailaGarbitu();
                irudiakMarraztu();
                pantailaBerriztu();
            }
        }
    } while (ebentu != TECLA_RETURN);
    if (i == 1)
    {
        egoera = 0;
    }
    else
    {
        egoera = 1;
    }
    return egoera;
}

int ausazkoPosizioa()
{
    int pos, x;
    pos = rand() % 6;
    if (pos == 0)
    {
        x = 10;
    }
    if (pos == 1)
    {
        x = 150;
    }
    if (pos == 2)
    {
        x = 290;
    }
    if (pos == 3)
    {
        x = 430;
    }
    if (pos == 4)
    {
        x = 570;
    }
    if (pos == 5)
    {
        x = 710;
    }
    return x;
}

int txanponaSortu(int x, int y)
{
    int txanponaId = -1;
    txanponaId = irudiaKargatu(TXANPONA);
    irudiaMugitu(txanponaId, x, y);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return txanponaId;
}

int bombaGehigarriaSortu(int x, int y)
{
    int bombaId = -1;
    bombaId = irudiaKargatu(BOMBAGEHITU);
    irudiaMugitu(bombaId, x, y);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return bombaId;
}

int arrokakSortu(int x, int y)
{
    int arrokaId = -1;
    arrokaId = irudiaKargatu(ARROKA);
    irudiaMugitu(arrokaId, x, y);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return arrokaId;
}

int bombaSortu(int x, int y)
{
    int bombaId = -1;
    bombaId = irudiaKargatu(BOMBA);
    irudiaMugitu(bombaId, x, y);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return bombaId;
}

int kolisioakKonprobatu(int arrokax, int arrokay, int txalupax, int txalupay)
{
    int arrokazabalera = 120, arrokaaltuera = 108, txalupazabalera = 78, txalupaaltuera = 126, egoera = 0;
    // Cuadro 1.1 con 1.2
    if (arrokax + 24 < txalupax + 42 && arrokax + 92 > txalupax + 36 && arrokay + 96 < txalupay + 6 && arrokay + 96 > txalupay)
    {
        egoera = 1;
    }
    // Cuadro 1.1 con 2.2
    if (arrokax + 24 < txalupax + 48 && arrokax + 96 > txalupax + 30 && arrokay + 96 < txalupay + 12 && arrokay + 96 > txalupay + 6)
    {
        egoera = 1;
    }
    // Cuadro 1.1 con 3.2
    if (arrokax + 24 < txalupax + 54 && arrokax + 96 > txalupax + 24 && arrokay + 96 < txalupay + 18 && arrokay + 96 > txalupay + 12)
    {
        egoera = 1;
    }
    // Cuadro 1.1 con 4.2
    if (arrokax + 24 < txalupax + 60 && arrokax + 96 > txalupax + 18 && arrokay + 96 < txalupay + 36 && arrokay + 96 > txalupay + 18)
    {
        egoera = 1;
    }
    // Cuadro 1.1 con 5.2
    if (arrokax + 24 < txalupax + 66 && arrokax + 96 > txalupax + 12 && arrokay + 96 < txalupay + 108 && arrokay + 96 > txalupay + 36)
    {
        egoera = 1;
    }
    // Cuadro 2.1 con 1.2
    if (arrokax + 12 < txalupax + 42 && arrokax + 96 > txalupax + 36 && arrokay + 84 < txalupay + 6 && arrokay + 108 > txalupay)
    {
        egoera = 1;
    }
    // Cuadro 2.1 con 2.2
    if (arrokax + 12 < txalupax + 48 && arrokax + 108 > txalupax + 30 && arrokay + 84 < txalupay + 12 && arrokay + 108 > txalupay + 6)
    {
        egoera = 1;
    }
    // Cuadro 2.1 con 3.2
    if (arrokax + 12 < txalupax + 54 && arrokax + 108 > txalupax + 24 && arrokay + 84 < txalupay + 18 && arrokay + 108 > txalupay + 12)
    {
        egoera = 1;
    }
    // Cuadro 2.1 con 4.2
    if (arrokax + 12 < txalupax + 60 && arrokax + 108 > txalupax + 18 && arrokay + 84 < txalupay + 36 && arrokay + 108 > txalupay + 18)
    {
        egoera = 1;
    }
    // Cuadro 2.1 con 5.2
    if (arrokax + 12 < txalupax + 66 && arrokax + 108 > txalupax + 12 && arrokay + 84 < txalupay + 108 && arrokay + 108 > txalupay + 42)
    {
        egoera = 1;
    }
    // Cuadro 3.1 con 1.2
    if (arrokax< txalupax + 42 && arrokax + arrokazabalera > txalupax + 36 && arrokay + 24 < txalupay + 6 && arrokay + 96 > txalupay)
    {
        egoera = 1;
    }
    // Cuadro 3.1 con 2.2
    if (arrokax< txalupax + 48 && arrokax + arrokazabalera > txalupax + 30 && arrokay + 24 < txalupay + 12 && arrokay + 96 > txalupay + 6)
    {
        egoera = 1;
    }
    // Cuadro 3.1 con 3.2
    if (arrokax< txalupax + 54 && arrokax + arrokazabalera > txalupax + 24 && arrokay + 24 < txalupay + 18 && arrokay + 96 > txalupay + 12)
    {
        egoera = 1;
    }
    // Cuadro 3.1 con 4.2
    if (arrokax< txalupax + 60 && arrokax + arrokazabalera > txalupax + 18 && arrokay + 24 < txalupay + 36 && arrokay + 96 > txalupay + 18)
    {
        egoera = 1;
    }
    // Cuadro 3.1 con 5.2
    if (arrokax < txalupax + 66 && arrokax + arrokazabalera > txalupax + 12 && arrokay + 24 < txalupay + 108 && arrokay + 96 > txalupay + 42)
    {
        egoera = 1;
    }
    // Cuadro 4.1 con 5.2
    if (arrokax + 12 < txalupax + 66 && arrokax + 108 > txalupax + 12 && arrokay + 12 < txalupay + 110 && arrokay + 24 > txalupay + 42)
    {
        egoera = 1;
    }
    // Cuadro 4.1 con 6.2
    if (arrokax + 12 < txalupax + 60 && arrokax + 108 > txalupax + 18 && arrokay + 12 < txalupay + 120 && arrokay + 24 > txalupay + 120)
    {
        egoera = 1;
    }
    // Cuadro 4.1 con 7.2
    if (arrokax + 12 < txalupax + 54 && arrokax + 108 > txalupax + 12 && arrokay + 12 < txalupay + 126 && arrokay + 24 > txalupay + txalupaaltuera)
    {
        egoera = 1;
    }
    // Cuadro 5.1 con 5.2
    if (arrokax + 24 < txalupax + 66 && arrokax + 96 > txalupax + 12 && arrokay< txalupay + 110 && arrokay + 12 > txalupay + 96)
    {
        egoera = 1;
    }
    // Cuadro 5.1 con 6.2
    if (arrokax + 24 < txalupax + 60 && arrokax + 96 > txalupax + 18 && arrokay < txalupay + 120 && arrokay + 12 > txalupay + 114)
    {
        egoera = 1;
    }
    // Cuadro 5.1 con 7.2
    if (arrokax + 24 < txalupax + 54 && arrokax + 96 > txalupax + 12 && arrokay < txalupay + 126 && arrokay + 12  > txalupay + 120)
    {
        egoera = 1;
    }
    return egoera;
}

int kolisioakTxanponarekin(int txanponax, int txanponay, int txalupax, int txalupay)
{
    int txanponaZabalera = 120, txanponaAltuera = 30, txalupazabalera = 75, txalupaaltuera = 133, egoera = 0;
    txalupax = txalupax + 10;
    if (txanponax < txalupax + txalupazabalera && txanponax + txanponaZabalera > txalupax && txanponay < txalupay + txalupaaltuera && txanponaAltuera + txanponay > txalupay)
    {
        egoera = 1;
    }
    return egoera;
}

int kolisioakBombarekin(int bombax, int bombay, int arrokax, int arrokay)
{
    int bombaZabalera = 32, bombaAltuera = 32, arrokazabalera = 120, arrokaaltuera = 108, egoera = 0;
    arrokax = arrokax + 10;
    if (bombax < arrokax + arrokazabalera && bombax + bombaZabalera > arrokax && bombay < arrokay + arrokaaltuera && bombaAltuera + bombay > arrokay)
    {
        egoera = 1;
    }
    return egoera;
}

int kolisioakBombaGehigarriarekin(int bombax, int bombay, int txalupax, int txalupay)
{
    int bombaZabalera = 70, bombaAltuera = 70, arrokazabalera = 78, arrokaaltuera = 126, egoera = 0;
    if (bombax < txalupax + arrokazabalera && bombax + bombaZabalera > txalupax && bombay < txalupay + arrokaaltuera && bombaAltuera + bombay > txalupay)
    {
        egoera = 1;
    }
    return egoera;
}

int pertsonaiaAukeratu()
{
    int ebentu, jokalaria = 1;
    JOKO_ELEMENTUA hasiera;

    hasiera.id = JOKOA_pertsonaiaAukeratu(jokalaria);
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == TECLA_d)
        {
            jokalaria++;
            if (jokalaria == 4)
            {
                jokalaria = 1;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_pertsonaiaAukeratu(jokalaria);
        }
        if (ebentu == TECLA_a)
        {

            jokalaria--;
            if (jokalaria == 0)
            {
                jokalaria = 3;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_pertsonaiaAukeratu(jokalaria);
        }
    } while (ebentu != TECLA_RETURN);
    irudiaKendu(hasiera.id);
    return jokalaria;
}

void egileakErakutsi()
{
    int ebentu, irudia;

    irudia = irudiaKargatu(EGILEAK);
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        irudiaKendu(irudia);
        irudia = irudiaKargatu(EGILEAK);
        irudiaMugitu(irudia, 0, 0);
        pantailaGarbitu();
        irudiakMarraztu();
        pantailaBerriztu();
    } while (ebentu != TECLA_RETURN);
    irudiaKendu(irudia);
}

void arauakErakutsi()
{
    int ebentu, irudia;

    irudia = irudiaKargatu(ARAUAK);
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        irudiaKendu(irudia);
        irudia = irudiaKargatu(ARAUAK);
        irudiaMugitu(irudia, 0, 0);
        pantailaGarbitu();
        irudiakMarraztu();
        pantailaBerriztu();
    } while (ebentu != TECLA_RETURN);
    irudiaKendu(irudia);
}

int amaierakoPantaila(int puntuak)
{
    int ebentu, x = 1, y;
    JOKO_ELEMENTUA hasiera;
    audioInit();
    loadTheMusic(JOKOA_SOUND3);
    playMusic();

    hasiera.id = JOKOA_amaieraPantailak(x);
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == TECLA_d)
        {
            x++;
            if (x == 3)
            {
                x = 1;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_amaieraPantailak(x);
        }
        if (ebentu == TECLA_a)
        {

            x--;
            if (x == 0)
            {
                x = 2;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_amaieraPantailak(x);
        }
    } while (ebentu != TECLA_RETURN);
    if (x == 1)
    {
        y = 1;
    }
    else
    {
        irudiaKendu(hasiera.id);
        y = puntuazioa(puntuak);
    }
    irudiaKendu(hasiera.id);
    return y;
}

int puntuazioa(int puntuak)
{
    int ebentu, x = 1, y = 0;
    JOKO_ELEMENTUA hasiera;

    hasiera.id = JOKOA_puntuazioPantailak(x, puntuak);
    do
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == TECLA_d)
        {
            x++;
            if (x == 3)
            {
                x = 1;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_puntuazioPantailak(x, puntuak);
        }
        if (ebentu == TECLA_a)
        {

            x--;
            if (x == 0)
            {
                x = 2;
            }
            irudiaKendu(hasiera.id);
            hasiera.id = JOKOA_puntuazioPantailak(x, puntuak);
        }
    } while (ebentu != TECLA_RETURN);
    if (x == 1)
    {
        y = 1;
    }
    irudiaKendu(hasiera.id);
    return y;
}

int JOKOA_amaieraPantailak(int x)
{
    int pantailaId = -1;
    if (x == 1)
    {
        pantailaId = irudiaKargatu(AMAIERA1);
    }
    if (x == 2)
    {
        pantailaId = irudiaKargatu(AMAIERA2);
    }
    irudiaMugitu(pantailaId, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return pantailaId;
}

int JOKOA_puntuazioPantailak(int x, int puntuak)
{
    int puntuId = -1;
    if (x == 1)
    {
        puntuId = irudiaKargatu(PUNTUAZIO1);
    }
    if (x == 2)
    {
        puntuId = irudiaKargatu(PUNTUAZIO2);

    }
    irudiaMugitu(puntuId, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    puntuakPantailaratu(puntuak);
    puntuMaximoakPantailaratu(puntuak);
    return puntuId;
}

void puntuakPantailaratu(int puntuak)
{
    int digitua, kont, x = 370, y = 200, kopia;
    kopia = puntuak;
    if (puntuak == 0)
    {
        x = 410;
        digitua = 0;
        JOKOA_puntuazioIrudiaSortu(x, y, digitua);
    }
    for (kont = 0; kopia > 0; kont++)
    {
        kopia = kopia / 10;
        x = x + 40;
    }
    for (kont = kont; kont > 0; kont--)
    {
        digitua = puntuak % 10;
        puntuak = puntuak / 10;
        JOKOA_puntuazioIrudiaSortu(x, y, digitua);
        x = x - 40;
    }
}

void puntuakJokoanPantailaratu(int puntuak)
{
    int digitua, kont, x = 5, y = 30, kopia;
    kopia = puntuak;
    if (puntuak == 0)
    {
        x = 45;
        digitua = 0;
        JOKOA_puntuazioIrudiaSortu(x, y, digitua);
    }
    for (kont = 0; kopia > 0; kont++)
    {
        kopia = kopia / 10;
        x = x + 40;
    }
    for (kont = kont; kont > 0; kont--)
    {
        digitua = puntuak % 10;
        puntuak = puntuak / 10;
        JOKOA_puntuazioIrudiaSortu(x, y, digitua);
        x = x - 40;
    }
}

void bombakJokoanPantailaratu(int bombaKop)
{
    int x = 795, y = 30, bombaId;
    if (bombaKop > 0)
    {
        bombaId = irudiaKargatu(BOMBA2);
        irudiaMugitu(bombaId, x, y);
        if (bombaKop > 1)
        {
            x = x - 30;
            bombaId = irudiaKargatu(BOMBA2);
            irudiaMugitu(bombaId, x, y);
            if (bombaKop > 2)
            {
                x = x - 30;
                bombaId = irudiaKargatu(BOMBA2);
                irudiaMugitu(bombaId, x, y);
                if (bombaKop > 3)
                {
                    x = x - 30;
                    bombaId = irudiaKargatu(BOMBA2);
                    irudiaMugitu(bombaId, x, y);
                }
                if (bombaKop > 4)
                {
                    x = x - 30;
                    bombaId = irudiaKargatu(BOMBA2);
                    irudiaMugitu(bombaId, x, y);
                }
            }
        }
    }
}

void puntuMaximoakPantailaratu(int puntuak)
{
    int digitua, kont, x = 380, y = 320, kopia;
    if (puntuak > puntuazioMaximoa)
    {
        puntuazioMaximoa = puntuak;
    }
    kopia = puntuazioMaximoa;
    if (puntuazioMaximoa == 0)
    {
        x = 420;
        digitua = 0;
        JOKOA_puntuazioIrudiaSortu(x, y, digitua);
    }
    for (kont = 0; kopia > 0; kont++)
    {
        kopia = kopia / 10;
        x = x + 40;
    }
    kopia = puntuazioMaximoa;
    for (kont = kont; kont > 0; kont--)
    {
        digitua = kopia % 10;
        kopia = kopia / 10;
        JOKOA_puntuazioIrudiaSortu(x, y, digitua);
        x = x - 40;
    }
}

void JOKOA_puntuazioIrudiaSortu(int x, int y, int zenbaki)
{
    int zenbakiId = -1;
    if (zenbaki == 1)
    {
        zenbakiId = irudiaKargatu(ZENB1);
    }
    if (zenbaki == 2)
    {
        zenbakiId = irudiaKargatu(ZENB2);
    }
    if (zenbaki == 3)
    {
        zenbakiId = irudiaKargatu(ZENB3);
    }
    if (zenbaki == 4)
    {
        zenbakiId = irudiaKargatu(ZENB4);
    }
    if (zenbaki == 5)
    {
        zenbakiId = irudiaKargatu(ZENB5);
    }
    if (zenbaki == 6)
    {
        zenbakiId = irudiaKargatu(ZENB6);
    }
    if (zenbaki == 7)
    {
        zenbakiId = irudiaKargatu(ZENB7);
    }
    if (zenbaki == 8)
    {
        zenbakiId = irudiaKargatu(ZENB8);
    }
    if (zenbaki == 9)
    {
        zenbakiId = irudiaKargatu(ZENB9);
    }
    if (zenbaki == 0)
    {
        zenbakiId = irudiaKargatu(ZENB0);
    }
    irudiaMugitu(zenbakiId, x, y);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
}

int JOKOA_jokalariaIrudiaSortu(int x, int y, int jokalaria)
{
  int jokalariId = -1;
  if (jokalaria == 1)
  {
      jokalariId = irudiaKargatu(JOKOA_PLAYER_IMAGE1);
  }
  if (jokalaria == 2)
  {
      jokalariId = irudiaKargatu(JOKOA_PLAYER_IMAGE2);
  }
  if (jokalaria == 3)
  {
      jokalariId = irudiaKargatu(JOKOA_PLAYER_IMAGE3);
  }
  irudiaMugitu(jokalariId, x, y);
  pantailaGarbitu();
  irudiakMarraztu();
  pantailaBerriztu();
  return jokalariId;
}

int JOKOA_pertsonaiaAukeratu(int jokalaria)
{
    int pertsonaiaId = -1;
    if (jokalaria == 1)
    {
        irudiaKargatu(PERTSONAIA_IMAGE1);
    }
    if (jokalaria == 2)
    {
        irudiaKargatu(PERTSONAIA_IMAGE2);
    }
    if (jokalaria == 3)
    {
        irudiaKargatu(PERTSONAIA_IMAGE3);
    }
    irudiaMugitu(pertsonaiaId, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return pertsonaiaId;
}

int JOKOA_hasierakoIrudiaSortu(int x, int y)
{
    int hasieraId = -1;
    if (x == 1 && y == 1)
    {
        hasieraId = irudiaKargatu(HASIERA_IMAGE1);
    }
    if (x == 2 && y == 1)
    {
        hasieraId = irudiaKargatu(HASIERA_IMAGE2);
    }
    if (x == 1 && y == 2)
    {
        hasieraId = irudiaKargatu(HASIERA_IMAGE3);
    }
    if (x == 2 && y == 2)
    {
        hasieraId = irudiaKargatu(HASIERA_IMAGE4);
    }
    if (x == 3)
    {
        hasieraId = irudiaKargatu(HASIERA_IMAGE5);
    }
    irudiaMugitu(hasieraId, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return hasieraId;
}

int JOKOA_fondokoIrudiaSortu( int x)
{
    int fondoaId = -1;
    if (x == 0)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE0);
    }
    if (x == 1)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE1);
    }
    if (x == 2)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE2);
    }
    if (x == 3)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE3);
    }
    if (x == 4)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE4);
    }
    if (x == 5)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE5);
    }
    if (x == 6)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE6);
    }
    if (x == 7)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE7);
    }
    if (x == 8)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE8);
    }
    if (x == 9)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE9);
    }
    if (x == 10)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE10);
    }
    if (x == 11)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE11);
    }
    if (x == 12)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE12);
    }
    if (x == 13)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE13);
    }
    if (x == 14)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE14);
    }
    if (x == 15)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE15);
    }
    if (x == 16)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE16);
    }
    if (x == 17)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE17);
    }
    if (x == 18)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE18);
    }
    if (x == 19)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE19);
    }
    if (x == 20)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE20);
    }
    if (x == 21)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE21);
    }
    if (x == 22)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE22);
    }
    if (x == 23)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE23);
    }
    if (x == 24)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE24);
    }
    if (x == 25)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE25);
    }
    if (x == 26)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE26);
    }
    if (x == 27)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE27);
    }
    if (x == 28)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE28);
    }
    if (x == 29)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE29);
    }
    if (x == 30)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE30);
    }
    if (x == 31)
    {
        fondoaId = irudiaKargatu(FONDO_PLAYER_IMAGE31);
    }
    irudiaMugitu(fondoaId, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return fondoaId;
}