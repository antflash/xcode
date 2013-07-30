//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "___FILEBASENAME___.h"

using namespace cocos2d;

CCScene* ___FILEBASENAME___::scene()
{
	CCScene *scene = CCScene::node();
	
	___FILEBASENAME___ *layer = ___FILEBASENAME___::node();
    
	scene->addChild(layer);
    
	return scene;
}

___FILEBASENAME___::___FILEBASENAME___()
{
}

___FILEBASENAME___::~___FILEBASENAME___()
{
}

bool ___FILEBASENAME___::init()
{
	if ( !EPGestureRecognizerLayer::init() )
	{
		return false;
	}
    
	return true;
}

void ___FILEBASENAME___::onEnterTransitionDidFinish()
{
    EPGestureRecognizerLayer::onEnterTransitionDidFinish();
}

void ___FILEBASENAME___::onExit()
{
    EPGestureRecognizerLayer::onExit();
}

bool ___FILEBASENAME___::gestureRecognizer(GestureRecognizer *gestureRecognizer)
{
    // Sample
    //    if (gestureRecognizer->getRecognizerType() == kTapGestureRecognizer)
    //        return true;
    return true;
}

void ___FILEBASENAME___::performTap(TapGestureRecognizer *recognizer ,CCNode *node)
{
    // Sample
    // this->pressButton(node, callfuncN_selector(___FILEBASENAME___::pressAction));
}

void ___FILEBASENAME___::performLongPress(LongPressGestureRecognizer *recognizer ,CCNode *node)
{
    
}

void ___FILEBASENAME___::performPan(PanGestureRecognizer *recognizer ,CCNode *node)
{
    // Sample
    // 
    //     CCPoint pt = recognizer->getTranslationView();
    //     if (recognizer->getGestureRecognizerState() == kGestureRecognizerStateBegan)
    //         m_from = pt;
    //     else if (recognizer->getGestureRecognizerState() == kGestureRecognizerStateChanged)
    //     {
    //         CCPoint distance = ccpSub(pt, m_from); 
    //         node->setPosition(ccpAdd(node->getPosition(),distance));
    //         m_from = pt;
    //     }        
}

void ___FILEBASENAME___::performPinch(PinchGestureRecognizer *recognizer ,CCNode *node)
{
    // Sample
    // node->setScale(recognizer->getPinchScale());
}

void ___FILEBASENAME___::performRotation(RotationGestureRecognizer *recognizer ,CCNode *node)
{
    // Sample 
    // node->setRotation(recognizer->getGestureRotation() + node->getRotation());
}

