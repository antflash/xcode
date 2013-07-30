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
#include "EPGestureRecognizerLayer.h"

class ___FILEBASENAMEASIDENTIFIER___ : public EPGestureRecognizerLayer
{
public:    
    ___FILEBASENAMEASIDENTIFIER___();
    
    ~___FILEBASENAMEASIDENTIFIER___();
    
    static cocos2d::CCScene* scene();
    
    virtual bool init();  

    virtual void onExit();
    
    virtual void onEnterTransitionDidFinish();
	
	LAYER_NODE_FUNC(___FILEBASENAMEASIDENTIFIER___);
    
private:
    bool gestureRecognizer(GestureRecognizer *gestureRecognizer);
    void performTap(TapGestureRecognizer *recognizer ,CCNode *node);
    void performLongPress(LongPressGestureRecognizer *recognizer ,CCNode *node);
    void performPan(PanGestureRecognizer *recognizer ,CCNode *node);
    void performPinch(PinchGestureRecognizer *recognizer ,CCNode *node);
    void performRotation(RotationGestureRecognizer *recognizer ,CCNode *node);
    
};

#endif // _____FILEBASENAMEASIDENTIFIER_____SCENE_H__