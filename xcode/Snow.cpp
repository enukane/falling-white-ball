//
//  Snow.cpp
//  Test
//
//  Created by 金子 直矢 on 11/11/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Snow.h"

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/Rand.h"

using namespace ci;
using namespace ci::app;
using namespace std;

Snow::Snow( Vec2f initLoc )
{
    _currentLoc = initLoc;
    _direction = Vec2f( 0.0f, 1.0f );
    _fallVelocity = Rand::randFloat( 5.0f ); // EXPERIMENTAL
    _radius = Rand::randFloat( 15.0f ); // EXPERIMENTAL
}

void Snow::reset( float x )
{
    _currentLoc = Vec2f( x, 0.0f );
}

void Snow::update()
{
    _currentLoc += _direction * _fallVelocity;
}

void Snow::draw()
{
    gl::drawSolidCircle( _currentLoc, _radius );
}

bool Snow::isFallen()
{
    return (_currentLoc.y > app::getWindowHeight() );
}