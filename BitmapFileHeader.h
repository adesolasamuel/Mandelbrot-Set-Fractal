#ifndef PROJECT_BITMAPFILEHEADER_H_
#define PROJECT_BITMAPFILEHEADER_H_

#include <cstdint>

#pragma pack(2)

namespace sam{

struct BitmapFileHearder{
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};


}
#endif /* PROJECT_BITMAPFILEHEADER_H_ */
