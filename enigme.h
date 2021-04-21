#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enig.h"

void init_enigme(enigme * e)
{
	e->p.x=0;
	e->p.y=0;	
	e->img=NULL;


}

 void generate_afficher (SDL_Surface * screen  , char image [],enigme *e,int *alea)
{ 
	int test=*alea ;
do{
 *alea = rand()%4;
}while(*alea==test) ;
 sprintf(image ,"image/enigmefichier/%d.jpg",*alea);
e->img = IMG_Load(image);
 SDL_BlitSurface(e->img,NULL,screen,&(e->p)) ;
  SDL_Flip(screen) ;
}
 
 int solution_e (char image [])
 {
 	int solution =0 ;
 	
 	if(strcmp(image,"image/enigmefichier/1.jpg")==0)
 	{
     solution =1 ;
 	}
 	else  	if(strcmp(image,"image/enigmefichier/2.jpg")==0)
 	{
 		solution =2;

 	}
 	else 	if(strcmp(image,"image/enigmefichier/3.jpg")==0)
 	{
 		solution =1;	
 	}
 	return solution;
 }

int resolution (int * running,int *run )
{
	SDL_Event event ;
  int r=0 ;
	SDL_PollEvent(&event);
	switch(event.type)
	{
