/**
 * @file app_light_powerprofiler_demo.h
 * @brief Header file for the Light Power Profiler demo application.
 *
 * This file contains the declaration of the Light Power Profiler demo application.
 * The application demonstrates the usage of the Light Power Profiler module to measure power consumption of a device under test.
 *
 * @author emanuel-d-p
 */
#ifndef APP_LIGHT_POWERPROFILER_DEMO_H
#define APP_LIGHT_POWERPROFILER_DEMO_H

#include "app_threadx.h"

UINT app_light_powerprofiler_demo_start(TX_BYTE_POOL* memory_pool);

#endif // APP_LIGHT_POWERPROFILER_DEMO_H