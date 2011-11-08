//
//  Snow.h
//  Test
//
//  Created by 金子 直矢 on 11/11/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef Test_Snow_h
#define Test_Snow_h

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Snow {
private:
    Vec2f _currentLoc;
    Vec2f _direction;
    float _fallVelocity;
    float _radius;
public:
    Snow( Vec2f initLoc );
    void reset( float x );
    void update();
    void draw();
    bool isFallen();
};


#endif
