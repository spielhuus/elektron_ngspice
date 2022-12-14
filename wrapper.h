#include <stdbool.h>
#include <ngspice/sharedspice.h>

#ifndef ngspice_SIM_H
#define ngspice_SIM_H

enum simulation_types {
  SV_NOTYPE,
  SV_TIME,
  SV_FREQUENCY,
  SV_VOLTAGE,
  SV_CURRENT,
  SV_VOLTAGE_DENSITY,
  SV_CURRENT_DENSITY,
  SV_SQR_VOLTAGE_DENSITY,
  SV_SQR_CURRENT_DENSITY,
  SV_SQR_VOLTAGE,
  SV_SQR_CURRENT,
  SV_POLE,
  SV_ZERO,
  SV_SPARAM,
  SV_TEMP,
  SV_RES,
  SV_IMPEDANCE,
  SV_ADMITTANCE,
  SV_POWER,
  SV_PHASE,
  SV_DB,
  SV_CAPACITANCE,
  SV_CHARGE
};

#endif
