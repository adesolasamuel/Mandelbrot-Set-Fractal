#ifndef PROJECT_ZOOM_H_
#define PROJECT_ZOOM_H_



namespace sam {

struct Zoom {

	int x{0};
	int y{0};
	double scale{0.0};

	Zoom(int x, int y, double scale) : x(x), y(y), scale(scale) {};

};

} /* namespace sam */

#endif /* PROJECT_ZOOM_H_ */
