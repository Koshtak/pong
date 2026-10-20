#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_keycode.h>
#include <SDL3/SDL_oldnames.h>
#include <SDL3/SDL_rect.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_stdinc.h>
#include <SDL3/SDL_surface.h>
#include <SDL3/SDL_timer.h>
#include <SDL3/SDL_video.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
//setting window
  SDL_InitSubSystem(SDL_INIT_VIDEO);
  SDL_Window *window = SDL_CreateWindow("PENCERE", 640, 480, 0);
  SDL_Surface *surface = SDL_GetWindowSurface(window);
  SDL_ClearSurface(surface, 0.5, 0.5, 0.5, 0.5);
  
//creating rectangles 
  Uint32 color = 0xCCCCCC;
  SDL_Rect p1 = {40, 40, 20, 200};
  SDL_FillSurfaceRect(surface, &p1, color);
  SDL_Rect p2 = {500, 100, 20, 200};
  SDL_FillSurfaceRect(surface, &p2, color);
  

  
  SDL_UpdateWindowSurface(window);
  /*  SDL_Renderer *renderer = SDL_GetRenderer(SDL_Window *window)
    SDL_SetRenderDrawColor(SDL_Renderer *renderer, Uint8 r, Uint8 g, Uint8 b,
    Uint8 a); SDL_RenderClear();

      SDL_RenderDrawRect p1 = {};
      SDL_RenderDrawRect p2 = {};
  */
    SDL_Event event;
    int running = 1;

    while(running)
    {
        //taking inputs
        SDL_PollEvent(&event);
        if(event.type == SDL_EVENT_KEY_DOWN)
        switch(event.key.key)
        {
            
            case (SDLK_S):
                {
                    p1.y += 10;
                    printf("sssssss");}break;
  SDL_FillSurfaceRect(surface, &p1, color);
            case (SDLK_W):
                {printf("wwwwwww");}break;
            case (SDLK_D):
                {
                    p1.x += 10;
                    printf("dddddd");}break;
  SDL_FillSurfaceRect(surface, &p1, color);
            case (SDLK_A):
                {printf("aaaaaa");}break;
            case (SDLK_ESCAPE):
                SDL_DestroyWindow(window);
                break;
        }
  SDL_UpdateWindowSurface(window);
    }
  return 0;

}
