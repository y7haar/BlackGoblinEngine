//
//  renderObject.c
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 13.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "renderObject.h"

RenderObject *createRenderObject(SDL_Texture *tex)
{
    RenderObject *ro;
    
    ro = malloc(sizeof(RenderObject));
    ro->layer = 0;
    ro->texture = tex;
    ro->flags.visible = true;
    ro->flags.transparent = false;
    
    SDL_QueryTexture(tex, NULL, NULL, &ro->dimensions.w, &ro->dimensions.h);
    
    return ro;
}

void removeRenderObject(RenderObject *o)
{
    free(o->texture);
    free(o);
}

void renderObject(RenderObject *o, SDL_Renderer *renderer)
{
    SDL_RenderCopy(renderer, o->texture, NULL, &o->dimensions);
}
