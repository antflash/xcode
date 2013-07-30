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
	if ( !CCLayer::init() )
	{
		return false;
	}
    
	return true;
}

void ___FILEBASENAME___::onEnterTransitionDidFinish()
{
    CCLayer::onEnterTransitionDidFinish();
}

void ___FILEBASENAME___::onExit()
{
    CCLayer::onExit();
}
