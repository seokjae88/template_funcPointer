//
// Created by jsj on 2020-11-05.
//

#ifndef PORTFOLIO_API_HPP
#define PORTFOLIO_API_HPP

#include <map>
#include <string>

#include "api.h"
#include "carData.h"
#include "makeCarFunc.h"
#include "resultCar.h"

typedef enum class _logoType {
    Hyundai,
    KIA,
    Chevrolet,
    BMW,
    Audi,
    Benz,
    Volvo,
    Ferrari
}logoType;

typedef enum class _carType {
    Sedan,
    Hatchback,
    SUV,
    Coupe
}carType;

typedef std::tuple<logoType, carType, void*> CarInfo;
typedef bool(*makeCarFunc)(const std::string& carName, CarData* data, ResultCar* resultCar);

class CarMakerV1 {
public:
    static const std::map<std::string, CarInfo> carInfoMap;
    static const std::map<std::string, CarInfo> initailize();
};

class CarMakerV2 {
public:
    static const std::map<std::string, CarInfo> carInfoMap;
    static const std::map<std::string, CarInfo> initailize();
};

template <class T>
class CarMaker {
public:
    static bool makeCar(const std::string& carName, CarData* data, ResultCar* resultCar);
};
#endif //PORTFOLIO_API_HPP
#pragma once
