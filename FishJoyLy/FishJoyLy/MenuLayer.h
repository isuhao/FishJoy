//
//  MenuLayer.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__MenuLayer__
#define __FishJoyLy__MenuLayer__

#include "cocos2d.h"

class MenuLayer : public cocos2d::CCLayer
{
public:
    CREATE_FUNC(MenuLayer);
    bool init();
    
    //设置音乐和音效按钮的状态
    void setSoundAndMusicVolume(float soundVolume,float musicVolume);
protected:
    void resume();
    void mainMenu();
    void sound();
    void music();
    void reset();
    
    void createMenu();
    void createBackground();
    
    cocos2d::CCMenuItemToggle* _sound;
    cocos2d::CCMenuItemToggle* _music;
};

#endif /* defined(__FishJoyLy__MenuLayer__) */
