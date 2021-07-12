#pragma once
#ifndef __PLAYSCENE_H__
#define __PLAYSCENE_H__

#include "cocos2d.h"

class playScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(playScene);
};

#endif // __PLAYSCENE_H__

