//
//  renderObject.h
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 12.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#ifndef BlackGoblinEngine_renderObject_h
#define BlackGoblinEngine_renderObject_h


// ============================================================================
// [Include Section]
// ============================================================================

#include <SDL2/SDL.h>
#include "renderFlags.h"

// ============================================================================
// [Constant Section]
// ============================================================================


// ============================================================================
// [Struct Section]
// ============================================================================

typedef struct RenderObject
{
    SDL_Texture *texture;
    SDL_Rect dimensions;
    
    RenderFlags flags;
    unsigned int layer;
    
}   RenderObject;

// ============================================================================
// [Prototype Section]
// ============================================================================

extern RenderObject *createRenderObject(SDL_Texture *tex);
extern void removeRenderObject(RenderObject *o);

extern void renderObject(RenderObject *o, SDL_Renderer *renderer);

#endif
