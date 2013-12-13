//
//  renderQueue.h
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 12.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#ifndef BlackGoblinEngine_renderQueue_h
#define BlackGoblinEngine_renderQueue_h


// ============================================================================
// [Include Section]
// ============================================================================

#include "renderNode.h"

// ============================================================================
// [Constant Section]
// ============================================================================


// ============================================================================
// [Struct Section]
// ============================================================================

typedef struct RenderQueue
{
    RenderNode *start;
    
}   RenderQueue;

// ============================================================================
// [Prototype Section]
// ============================================================================

extern RenderQueue *createRenderQueue();

extern void addToRenderQueue(RenderQueue *q, RenderObject *o);
extern void removeFromRenderQueue(RenderQueue *q, RenderObject *o);

#endif
