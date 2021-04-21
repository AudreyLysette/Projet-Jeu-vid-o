#include "enigme.h"
#include "fonction.h"
#include "option.h"
#include "stage1.h"
#define speed 6
#include <string.h>

void enigme3(SDL_Surface **ecran,int **continuer,Mix_Music **intro,Mix_Chunk **effet,Mix_Chunk **effet2,Mix_Music **musique,int **mute,SDL_Rect **posvolb,Mix_Chunk **dying,int *victory)
{
	SDL_Surface *fond=NULL,*gameover=NULL,*solution=NULL,*heroactu=NULL,*hurt=NULL,*idlel=NULL,*idler=NULL,*sol1=NULL,*sol2=NULL,*sol3=NULL,*herod=NULL,*herog=NULL,*platforme1=NULL,*platforme2=NULL,*platforme3=NULL,*bulle1=NULL,*bulle2=NULL,*enigme=NULL,*platforme=NULL,*platformenormal=NULL,*platformepiege=NULL;
	SDL_Rect posfond,poshero,possolution,posgameover,posenigme,framed[8],frame2[8],possol1,possol2,possol3,posplatforme,posbulle,posplatforme1,posvictory,posplatforme2,posplatforme3,posplatformen1,posplatformen2,posplatformen3,posplatformep1,posplatformep2,posplatformep3;
	poshero.x=1200;
	poshero.y=460;
	posfond.x=0;
	posfond.y=0;
	
	SDL_Color couleur ={145,0,0};
	posgameover.x=500;
	pos
