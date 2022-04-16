//
// Created by jsj on 2020-11-05.
//

#include "makeCarFunc.h"

bool MakeSedanFunc::avante(const std::string& carName, CarData* data, ResultCar* resultCar) {
    // ¹Ì±¸Çö
    resultCar->createData = data->createData;
    resultCar->licenseNum = data->licenseNum;
    resultCar->size += 100;
    resultCar->weight += 50;
    resultCar->price += 10000;
    return true;
}
bool MakeSedanFunc::sonata(const std::string& carName, CarData* data, ResultCar* resultCar) {
    resultCar->createData = data->createData;
    resultCar->licenseNum = data->licenseNum;
    resultCar->size += 200;
    resultCar->weight += 100;
    resultCar->price += 20000;
    return true;
}

bool MakeSuvFunc::trax(const std::string& carName, CarData* data, ResultCar* resultCar) {
    resultCar->createData = data->createData;
    resultCar->licenseNum = data->licenseNum;
    resultCar->size += 150;
    resultCar->weight += 150;
    resultCar->price += 15000;
    return true;
}