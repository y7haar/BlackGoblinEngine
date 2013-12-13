//
//  renderNode.c
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 13.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "renderNode.h"
#include "renderObject.h"

RenderNode *createRenderNode(RenderObject *o)
{
    RenderNode *n;
    n = malloc(sizeof(RenderNode));
    n->content = o;
    n->next = NULL;
    
    return n;
}