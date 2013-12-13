//
//  renderNode.h
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 12.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#ifndef BlackGoblinEngine_renderNode_h
#define BlackGoblinEngine_renderNode_h


// ============================================================================
// [Include Section]
// ============================================================================

#include "renderObject.h"
#include "renderNode.h"

// ============================================================================
// [Constant Section]
// ============================================================================


// ============================================================================
// [Struct Section]
// ============================================================================

typedef struct RenderNode
{
    RenderObject *content;
    struct RenderNode *next;
    
}   RenderNode;

// ============================================================================
// [Prototype Section]
// ============================================================================

extern RenderNode *createRenderNode(RenderObject *o);

#endif
