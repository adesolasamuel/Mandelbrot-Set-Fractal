//============================================================================
// Name        : Vector.cpp
// Author      : ADESOLA SAMUEL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"

int main() {

	sam::FractalCreator fractalCreator(800, 600);

	fractalCreator.addRange(0.0, sam::RGB(0, 0, 255));
	fractalCreator.addRange(0.05, sam::RGB(255, 99, 71));
	fractalCreator.addRange(0.08, sam::RGB(255, 215, 0));
	fractalCreator.addRange(1.0, sam::RGB(255, 255, 255));


	fractalCreator.addZoom(sam::Zoom(295, 202, 0.1));
	fractalCreator.addZoom(sam::Zoom(312, 304, 0.1));
	fractalCreator.run("test.bmp");

	std::cout << "Finished" << std::endl;

	return 0;
}
