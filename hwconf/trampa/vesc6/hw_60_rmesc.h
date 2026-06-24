/*
This file is part of the VESC firmware.

Copyright (C) 2026  Roger Li
Copyright (C) 2026  Yau-ming Leung

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef HW_60_RMESC_H_
#define HW_60_RMESC_H_

#define HW60_IS_RMESC

// RMESC specific configuration overrides
#define MCCONF_L_CURRENT_MAX					10.0
#define MCCONF_L_CURRENT_MIN					-5.0
#define MCCONF_L_MAX_ABS_CURRENT				30.0
#define MCCONF_L_RPM_MAX						120000.0
#define MCCONF_L_RPM_MIN						-120000.0
#define MCCONF_FOC_F_ZV							40000.0
#define MCCONF_M_ENCODER_SIN_AMP				0.6
#define MCCONF_M_ENCODER_SIN_OFFSET				1.0
#define MCCONF_M_ENCODER_COS_AMP				0.6
#define MCCONF_M_ENCODER_COS_OFFSET				1.0
// So that when used with RM2006, we don't fault that easily.
#define MCCONF_M_ENCODER_SINCOS_FAULT_RATE		0.1
#define MCCONF_M_SENSOR_PORT_MODE				SENSOR_PORT_MODE_SINCOS

#include "hw_60_core.h"

#endif /* HW_60_RMESC_H_ */