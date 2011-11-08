//
//  SnowController.h
//  Test
//
//  Created by 金子 直矢 on 11/11/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef Test_SnowController_h
#define Test_SnowController_h

#include <list>
#include "Snow.h"

class SnowController {
private:
    std::list<Snow> _Snows;
public:
    SnowController(int num);
    void update();
    void draw();
};


#endif
