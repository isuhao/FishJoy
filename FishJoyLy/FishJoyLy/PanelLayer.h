//
//  PanelLayer.h
//  FishJoyLy
//
//  Created by 廖云 on 13-7-3.
//
//

#ifndef __FishJoyLy__PanelLayer__
#define __FishJoyLy__PanelLayer__

#include "cocos2d.h"

class PanelLayer : public cocos2d::CCLayer {
public:
    CREATE_FUNC(PanelLayer);
    bool init();
protected:
    void pause();
};

#endif /* defined(__FishJoyLy__PanelLayer__) */
