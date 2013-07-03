//
//  FishLayer.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__FishLayer__
#define __FishJoyLy__FishLayer__

#include "cocos2d.h"
#include "Fish.h"
class FishLayer : public cocos2d::CCLayer
{
public:
    CREATE_FUNC(FishLayer);
    bool init();
    CC_SYNTHESIZE_READONLY(cocos2d::CCArray*, _fishes, Fishes);
    ~FishLayer();
protected:
    void addFish();
};

#endif /* defined(__FishJoyLy__FishLayer__) */
