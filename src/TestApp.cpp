#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "SnowController.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class TestApp : public AppBasic {
private:
    SnowController* _snowController;
    
  public:
    void prepareSettings( Settings *settings );
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void TestApp::prepareSettings( Settings *settings ) 
{
    settings->setWindowSize(800, 600);
    settings->setFrameRate(60.0f);
}

void TestApp::setup()
{
    _snowController = new SnowController( 100 );
}

void TestApp::mouseDown( MouseEvent event )
{
}

void TestApp::update()
{
    _snowController->update();
}

void TestApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
    
    gl::drawSolidCircle( Vec2f( 15.0f, 25.0f ), 50.0f );
    
    _snowController->draw();
}


CINDER_APP_BASIC( TestApp, RendererGl )
