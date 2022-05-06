/*
 * Mandelbrot.h
 *
 *  Created on: 27 Apr 2022
 *      Author: Sam
 */

#ifndef PROJECT_MANDELBROT_H_
#define PROJECT_MANDELBROT_H_

namespace sam {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;
public:
	Mandelbrot();

	static int getIterations(double x, double y);

	virtual ~Mandelbrot();
};

} /* namespace sam */

#endif /* PROJECT_MANDELBROT_H_ */
