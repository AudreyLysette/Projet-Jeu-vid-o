#include "debut.h"
#include "fonction.h"

void debut(SDL_Surface *ecran)
{
SDL_Surface *parag[8]={NULL},*black=NULL,*skip=NULL,*paragg=NULL;
SDL_Rect postexte,posskip,pos;
posskip.x=1100;
posskip.y=650;
pos.x=0;
pos.y=0;
postexte.x=0;
postexte.y=770;
parag[0]=IMG_Load ("image/histoire/parag1.png");
parag[1]=IMG_Load ("image/histoire/parag2.png");
parag[2]=IMG_Load ("image/histoire/parag3.png");
parag[3]=IMG_Load ("image/histoire/parag4.png");
parag[4]=IMG_Load ("image/histoire/parag5.png");
parag[5]=IMG_Load ("image/histoire/parag6.png");
parag[6]=IMG_Load ("image/histoire/parag7.png");
parag[7]=IMG_Load ("image/histoire/parag8.png");
black=IMG_Load ("image/histoire/black.png");
Mix_Music *intro;
SDL_Color couleurr ={255,255,255};
int continuer=1,i=0,j=0,a=0;
SDL_Event event;
intro = Mix_LoadMUS("music/tuto.mp3");
TTF_Font *text = NULL;
text=TTF_OpenFont("fonts/Takota.ttf", 30);
skip=TTF_RenderText_Blended(text,"Press x to skip",couleurr);
SDL_FillRect(ecran, NULL, SDL_MapRGB(ecr
