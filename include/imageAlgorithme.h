/* -*- c-basic-offset: 4 -*-
 */

/**
 * @author Reynald Pereira <KS10928@kingston.ac.uk>
 * @version 0.0.1 - Friday May 16 2014
 *
 * @todo create the class 
 * @bug nothing atm
 */

#ifndef _IMAGEALGORITHME_H
#define _IMAGEALGORITHME_H

/**
 * @file imageAlgorithme.h 
 *
 * algoithme precize corners points found in a picture/image/frame
 */

#include <iostream>
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include "imageEnum.h"

class ImageAlgorithme :  
{

private:
	CvArr**		_imageArray;

public:
	ImageAlgorithme(CvArr** array);
	~ImageAlgorithme();
	virtual void perform() = 0;
};

#endif