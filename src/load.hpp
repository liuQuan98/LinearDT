#pragma once

#include "common.hpp"

// Load PCD file as an 1D array of points
// The loading procedure in PCL crashes in debug build, so we write our own.
PointCloudPtr LoadPCDFile(const std::string& path);