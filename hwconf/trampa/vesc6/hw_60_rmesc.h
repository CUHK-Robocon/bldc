#ifndef HW_60_RMESC_H_
#define HW_60_RMESC_H_

#define HW60_IS_RMESC

// RMESC specific configuration overrides
#define MCCONF_L_CURRENT_MAX                   10.0
#define MCCONF_L_CURRENT_MIN                   -5.0
#define MCCONF_L_MAX_ABS_CURRENT               30.0
#define MCCONF_L_RPM_MAX                       120000.0
#define MCCONF_L_RPM_MIN                       -120000.0
#define MCCONF_FOC_F_ZV                        40000.0
#define MCCONF_M_ENCODER_SIN_AMP               0.6
#define MCCONF_M_ENCODER_SIN_OFFSET            1.0
#define MCCONF_M_ENCODER_COS_AMP               0.6
#define MCCONF_M_ENCODER_COS_OFFSET            1.0
#define MCCONF_M_SENSOR_PORT_MODE              SENSOR_PORT_MODE_SINCOS

#include "hw_60_core.h"

#endif /* HW_60_RMESC_H_ */