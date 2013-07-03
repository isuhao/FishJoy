//
//  FishingNet.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__FishingNet__
#define __FishJoyLy__FishingNet__

#include "cocos2d.h"
class FishingNet : public cocos2d::CCNode
{
public:
    CREATE_FUNC(FishingNet);
    bool init();
protected:
    cocos2d::CCSprite *_fishingNetSprite;
};

#endif /* defined(__FishJoyLy__FishingNet__) */
