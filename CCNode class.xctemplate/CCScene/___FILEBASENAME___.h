//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ Erawppa Co., Ltd.. All rights reserved.
//

#ifndef _____FILEBASENAMEASIDENTIFIER_____SCENE_H__
#define _____FILEBASENAMEASIDENTIFIER_____SCENE_H__

#include "cocos2d.h"

class ___FILEBASENAMEASIDENTIFIER___ : public cocos2d::CCLayer
{
public:
    ___FILEBASENAMEASIDENTIFIER___();
    
    ~___FILEBASENAMEASIDENTIFIER___();
    
    static cocos2d::CCScene* scene();
    
	virtual bool init();  
    
    virtual void onExit();
    
    virtual void onEnterTransitionDidFinish();
	
	CREATE_FUNC(___FILEBASENAMEASIDENTIFIER___);
    
private:
    
};

#endif // _____FILEBASENAMEASIDENTIFIER_____SCENE_H__