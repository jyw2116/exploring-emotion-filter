#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyReleased(int key);
    
        void loadLUT(string path);
        void applyLUT(ofPixelsRef pix);
        
        bool doLUT;
        ofVideoGrabber 		vidGrabber;
        int dirLoadIndex;
        ofDirectory dir;
        ofPoint lutPos;
        ofPoint thumbPos;
        
        bool LUTloaded;
        ofVec3f lut[32][32][32];
        
        ofImage lutImg;
};
