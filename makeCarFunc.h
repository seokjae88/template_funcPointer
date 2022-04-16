//
// Created by jsj on 2020-11-05.
//

#ifndef PORTFOLIO_MAKECARFUNC_HPP
#define PORTFOLIO_MAKECARFUNC_HPP

#include <iostream>
#include <string>

#include "carData.h"
#include "resultCar.h"

class MakeSedanFunc {
public:
    static bool avante(const std::string& carName, CarData* data, ResultCar* resultCar);
    static bool sonata(const std::string& carName, CarData* data, ResultCar* resultCar);
};
class MakeSuvFunc {
public:
    static bool trax(const std::string& carName, CarData* data, ResultCar* resultCar);
};

#endif //PORTFOLIO_MAKECARFUNC_HPP
#pragma once
