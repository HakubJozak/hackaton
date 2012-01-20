/*
 *  testApp.h
 *  assimpExample
 *
 *  Created by Javier Lloret on 12/5/11.
 *  Copyright 2011 Promociones Lloret SL. All rights reserved.
 *
 */

#ifndef _TEST_APP
#define _TEST_APP

// Computer Vision
#include "ofxOpenCv.h"
#include "ofxARToolkitPlus.h"

// 3Dmodel
#include "ofx3DModelLoader.h"

#include "ofMain.h"

// Uncomment this to use a camera instead of a video file
#define CAMERA_CONNECTED

class testApp : public ofBaseApp{
	
public:
	
	void setup();
	void update();
	void draw();
	
	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	
	/* Size of the image */
	int width, height;
	
	/* Use either camera or a video file */
#ifdef CAMERA_CONNECTED
	ofVideoGrabber vidGrabber;
#else
	ofVideoPlayer vidPlayer;
#endif
	
	/* ARToolKitPlus class */	
	ofxARToolkitPlus artk;	
	int threshold;
	
	/* OpenCV images */
	ofxCvColorImage colorImage;
	ofxCvGrayscaleImage grayImage;
	ofxCvGrayscaleImage	grayThres;
	
	ofx3DModelLoader squirrelModel;
	
};

#endif
