//
//  Fish.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__Fish__
#define __FishJoyLy__Fish__

#include "cocos2d.h"
typedef enum{
    k_Fish_Type_Red = 0,
    k_Fish_Type_Yellow,
    k_Fish_Type_Count
}FishType;

class Fish : public cocos2d::CCNode {
public:
    static Fish* create(FishType type = k_Fish_Type_Red);
    bool init(FishType type = k_Fish_Type_Red);
    CC_SYNTHESIZE_READONLY(cocos2d::CCSprite*, _fishSprite, FishSprite);
    CC_SYNTHESIZE_READONLY(int, _type, Type);
};

#endif /* defined(__FishJoyLy__Fish__) */
