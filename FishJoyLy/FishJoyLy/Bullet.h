//
//  Bullet.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__Bullet__
#define __FishJoyLy__Bullet__

#include "cocos2d.h"

class Bullet : public cocos2d::CCNode {
public:
    CREATE_FUNC(Bullet);
    bool init();
protected:
    cocos2d::CCSprite* _bulletSprite;
};

#endif /* defined(__FishJoyLy__Bullet__) */
