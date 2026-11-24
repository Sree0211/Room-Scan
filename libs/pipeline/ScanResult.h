#pragma once

#include "io/Dataset.h"

struct ScanResult{
    FloorPlan plan;
    ScanReport report;

    ScanResult runScan(const Dataset& data, const CalibHandler& calib, const ScanConfig& cfg);
}