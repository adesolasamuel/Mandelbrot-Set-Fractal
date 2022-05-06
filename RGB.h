/*
 * RGB.h
 *
 *  Created on: 4 May 2022
 *      Author: Sam
 */

#ifndef PROJECT_RGB_H_
#define PROJECT_RGB_H_

namespace sam {

struct RGB {

	double r;
	double g;
	double b;

	RGB(double r, double g, double b);


	};
RGB operator-(const RGB& first, const RGB& second);

		} /* namespace sam */

#endif /* PROJECT_RGB_H_ */
