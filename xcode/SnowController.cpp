//
//  SnowController.cpp
//  Test
//
//  Created by 金子 直矢 on 11/11/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "SnowController.h"
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/Rand.h"

using namespace ci;
using namespace ci::app;
using namespace std;
using namespace std;

SnowController::SnowController(int num) 
{
    for (int i = 0; i < num; i++) {
        float x = Rand::randFloat( app::getWindowWidth() );
        _Snows.push_back( Snow( Vec2f( x, 0 ) ) );
    }
}

void SnowController::update()
{
    for( list<Snow>::iterator p = _Snows.begin(); p != _Snows.end(); ++p ){
        p->update();
        if ( p->isFallen() ) {
            p->reset( Rand::randFloat( app::getWindowWidth() ) );
        }
    }
}

void SnowController::draw()
{
    for( list<Snow>::iterator p = _Snows.begin(); p != _Snows.end(); ++p ){
        p->draw();
    }
}
