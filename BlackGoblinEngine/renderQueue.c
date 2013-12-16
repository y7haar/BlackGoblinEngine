//
//  renderQueue.c
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 13.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "renderQueue.h"
#include "renderNode.h"

RenderQueue *createRenderQueue()
{
    RenderQueue *q;
    q = malloc(sizeof(RenderQueue));
    q->start = NULL;
    return q;
}

void removeRenderQueue(RenderQueue *q)
{
    /*
    free(q->start);
    free(q);
     */
}

void addToRenderQueue(RenderQueue *q, RenderObject *o)
{
    RenderNode *n;
    
    n = createRenderNode(o);
    
    RenderNode *start;
    start = q->start;
    
    if(q->start == NULL)
    {
        q->start = n;
        return;
    }
    
    while(start->next != NULL)
    {
        start = start->next;
    }
    
    start->next = n;
}

void removeFromRenderQueue(RenderQueue *q, RenderObject *o)
{
    RenderNode *start;
    start = q->start;
    
    if(q->start->content == o)
    {
        q->start = q->start->next;
        return;
    }
    
    while(start->next->content != o)
    {
        start = start->next;
    }
    
    start->next = start->next->next;
}