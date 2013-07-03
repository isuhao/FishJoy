//
//  Cannon.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__Cannon__
#define __FishJoyLy__Cannon__

#include "cocos2d.h"
#include "Bullet.h"

typedef enum{
    k_Cannon_Type_1 = 0,
    k_Cannon_Type_2,
    k_Cannon_Type_Count,
    k_Cannon_Type_Invalid
}CannonType;

class Cannon : public cocos2d::CCNode {
public:
    Cannon();
    ~Cannon();
    static Cannon* create(CannonType type = k_Cannon_Type_1);
    bool init(CannonType type = k_Cannon_Type_1);
    CC_PROPERTY(CannonType, _type, Type);
    cocos2d::CCSprite* getCurCannonSprite();
protected:
    cocos2d::CCArray* _cannonSprites;
};

#endif /* defined(__FishJoyLy__Cannon__) */
