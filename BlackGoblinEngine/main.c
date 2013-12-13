//
//  main.c
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 12.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <SDL2_image/SDL_image.h>
#include "renderObject.h"
#include "renderNode.h"
#include "renderQueue.h"

int main(int argc, const char * argv[])
{
    RenderQueue *q;
    RenderObject *o1, *o2;
    q = createRenderQueue();
    o1 = createRenderObject(NULL);
    o2 = createRenderObject(NULL);
    
    o1->layer = 1;
    o2->layer = 2;
    
    addToRenderQueue(q, o1);
    addToRenderQueue(q, o2);
    
    printf("%d\n", q->start->content->layer);
    printf("%d\n", q->start->next->content->layer);
    
    removeFromRenderQueue(q, o2);
    
    printf("%d\n", q->start->content->layer);
    
    addToRenderQueue(q, o2);
    
    printf("%d\n", q->start->next->content->layer);
    
}