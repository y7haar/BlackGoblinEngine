//
//  renderList.h
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 13.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#ifndef BlackGoblinEngine_renderList_h
#define BlackGoblinEngine_renderList_h


// ============================================================================
// [Include Section]
// ============================================================================

#include "renderQueue.h"

// ============================================================================
// [Constant Section]
// ============================================================================

const int MAX_RENDER_QUEUES = 10;

// ============================================================================
// [Struct Section]
// ============================================================================

typedef struct RenderList
{
    RenderQueue *queues[MAX_RENDER_QUEUES];
    
}   RenderList;

// ============================================================================
// [Prototype Section]
// ============================================================================

RenderList *createRenderList();

#endif
