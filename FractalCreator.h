#ifndef PROJECT_FRACTALCREATOR_H_
#define PROJECT_FRACTALCREATOR_H_

#include <string>
#include <memory>
#include <vector>
#include "Zoom.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "RGB.h"
#include "ZoomList.h"

namespace sam {

class FractalCreator {
private:
	int m_width;
	int m_height;
	std::unique_ptr<int[]> m_histogram;
	std::unique_ptr<int[]> m_fractal;
	sam::Bitmap m_bitmap;
	sam::ZoomList m_zoomList;
	int m_total{0};

	std::vector<int> m_ranges;
	std::vector<RGB> m_colors;

	std::vector<int> m_rangeTotal;
	bool m_bGotFirstRange{false};

private:
	void calculateIterations();
	void calculateTotalIterations();
	void drawFractal();
	void writeBitmap(std::string name);
	int getRange(int iterations) const;

public:
	FractalCreator(int width, int height);
	void addRange(double rangeEnd, const RGB &rgb);
	void calculateRangeTotals();
	virtual ~FractalCreator();
	void addZoom(const Zoom &zoom);
	void run(std::string name);
};

} /* namespace sam */

#endif /* PROJECT_FRACTALCREATOR_H_ */
