#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>

#include "LinearDT.h"
#include "load.hpp"

#define DEFAULT_MODEL_FNAME "model_bunny.pcd"
#define DEFAULT_DATA_FNAME "data_bunny.pcd"

using namespace std;
using namespace std::chrono;

int main(){
	PointCloudPtr pModel;
	pModel = LoadPCDFile(DEFAULT_MODEL_FNAME);

	LinearDT ldt(pModel, 2.0, 300);
}
