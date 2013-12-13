//
//  renderFlags.h
//  BlackGoblinEngine
//
//  Created by Yannic Siebenhaar on 12.12.13.
//  Copyright (c) 2013 Yannic Siebenhaar. All rights reserved.
//

#ifndef BlackGoblinEngine_renderFlags_h
#define BlackGoblinEngine_renderFlags_h


// ============================================================================
// [Include Section]
// ============================================================================

#include <stdbool.h>

// ============================================================================
// [Constant Section]
// ============================================================================


// ============================================================================
// [Struct Section]
// ============================================================================

typedef struct RenderFlags
{
    bool visible : 1;
    bool transparent : 1;
    
}   RenderFlags;

// ============================================================================
// [Prototype Section]
// ============================================================================


#endif
