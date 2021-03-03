//
// Created by cemigdir on 2.03.2021.
//

#ifndef SKETCH_MAR02A_CEATYPES_H
#define SKETCH_MAR02A_CEATYPES_H

#define WINDOW_SIZE = 10;
typedef unsigned char uint8;
typedef unsigned int uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

typedef char int8;
typedef int int16;
typedef long int32;
typedef long long int64;

typedef enum TemperatureUnitEnum {
    celsius,
    fahrenheit,
    kelvin
};

typedef enum FlowRateUnitEnum {
    //TODO:
};

typedef enum LightUnitEnum {
    //TODO:
};
typedef enum HumidityUnitEnum {
    //TODO:
};

typedef enum AcidityUnitEnum {

};

typedef enum ElectricalCondUnitEnum {

};

typedef enum CO2UnitEnum {

};
typedef enum Validity {
    invalid,
    valid

};

#endif //SKETCH_MAR02A_CEATYPES_H
