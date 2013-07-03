//
//  Weapon.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__Weapon__
#define __FishJoyLy__Weapon__

#include "cocos2d.h"
#include "Cannon.h"
#include "Bullet.h"
#include "FishingNet.h"
enum{
    k_Weapon_Status_None = 0,
    k_Weapon_Status_Bullet,
    k_Weapon_Status_FishingNet
};

class Weapon : public cocos2d::CCNode {
public:
    static Weapon* create(CannonType type = k_Cannon_Type_1);
    bool init(CannonType type = k_Cannon_Type_1);
    
    CC_SYNTHESIZE_READONLY(Cannon*, _cannon, Cannon);
    CC_SYNTHESIZE_READONLY(Bullet*, _bullet, Bullet);
    CC_SYNTHESIZE_READONLY(FishingNet*, _fishingNet, FishingNet);
    
    int getCannonType();
};

#endif /* defined(__FishJoyLy__Weapon__) */
