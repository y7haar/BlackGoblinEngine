//
//  renderList.c
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 13.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "renderList.h"
#include "renderQueue.h"

RenderList *createRenderList()
{
    RenderList *list;
    
    list = malloc(sizeof(RenderList));
    
    for(int i = 0;i < MAX_RENDER_QUEUES;i++)
    {
        list->queues[i] = createRenderQueue();
    }
    
    return list;
}

void removeRenderList(RenderList *l)
{
    
}