//
//  CannonLayer.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__CannonLayer__
#define __FishJoyLy__CannonLayer__

#include "cocos2d.h"
#include "Weapon.h"

class CannonLayer : public cocos2d::CCLayer
{
public:
    CREATE_FUNC(CannonLayer);
    bool init();
    CC_SYNTHESIZE_READONLY(Weapon*, _weapon, Weapon);
protected:
    void switchCannon(cocos2d::CCMenuItemSprite* sender);
    cocos2d::CCMenuItemSprite* _subItem;
    cocos2d::CCMenuItemSprite* _addItem;
};

#endif /* defined(__FishJoyLy__CannonLayer__) */
