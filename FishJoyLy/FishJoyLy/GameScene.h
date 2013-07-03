//
//  GameScene.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__GameScene__
#define __FishJoyLy__GameScene__
#include "FishLayer.h"
#include "PanelLayer.h"
#include "MenuLayer.h"
#include "BackgroundLayer.h"
#include "CannonLayer.h"
#include "cocos2d.h"
typedef enum{
    k_Operate_Pause = 0,
    k_OPerate_Resume
}OperateFlag;

class GameScene : public cocos2d::CCScene {
public:
    CREATE_FUNC(GameScene);
    bool init();
    ~GameScene();
    
    void pause();
    void resume();
    void sound();
    void music();
    void reset();
    void transToMainMenu();
    
protected:
    
    
    
};

#endif /* defined(__FishJoyLy__GameScene__) */
