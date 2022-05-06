#ifndef PROJECT_ZOOMLIST_H_
#define PROJECT_ZOOMLIST_H_

#include <vector>
#include <utility>
#include "Zoom.h"

namespace sam {

class ZoomList {
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};

	int m_height;
	int m_width;
	std::vector<Zoom> zooms;

public:
	ZoomList(int height, int width);
	void add(const Zoom &zoom);
	std::pair<double, double> doZoom(int x, int y);
};

} /* namespace sam */

#endif /* PROJECT_ZOOMLIST_H_ */
