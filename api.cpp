//
// Created by jsj on 2020-11-05.
//

#include "api.h"

const std::map<std::string, CarInfo> CarMakerV1::carInfoMap = CarMakerV1::initailize();

// car maker V1
const std::map<std::string, CarInfo> CarMakerV1::initailize() {
    std::map<std::string, CarInfo> initMap;
    initMap.insert(std::make_pair(
        "avante", std::make_tuple(logoType::Hyundai, carType::Sedan, (void*)MakeSedanFunc::avante)));
    initMap.insert(std::make_pair(
        "sonata", std::make_tuple(logoType::Hyundai, carType::Sedan, (void*)MakeSedanFunc::sonata)));
    return initMap;
}

const std::map<std::string, CarInfo> CarMakerV2::carInfoMap = CarMakerV2::initailize();
// car maker V2
const std::map<std::string, CarInfo> CarMakerV2::initailize() {
    std::map<std::string, CarInfo> initMap;
    initMap.insert(std::make_pair(
        "avante", std::make_tuple(logoType::Hyundai, carType::Sedan, (void*)MakeSedanFunc::avante)));
    initMap.insert(std::make_pair(
        "sonata", std::make_tuple(logoType::Hyundai, carType::Sedan, (void*)MakeSedanFunc::sonata)));
    return initMap;
}

bool makeLogo(logoType lType, ResultCar* resultCar) {
    bool ret = true;
    switch (lType) {
    case logoType::Audi :
        resultCar->price += 100000;
        break;
    case logoType::Benz :
        resultCar->price += 90000;
        break;
    case logoType::BMW:
        resultCar->price += 80000;
        break;
    case logoType::Chevrolet:
        resultCar->price += 70000;
        break;
    case logoType::Ferrari:
        resultCar->price += 1110000;
        break;
    case logoType::Hyundai:
        resultCar->price += 120000;
        break;
    case logoType::KIA:
        resultCar->price += 130000;
        break;
    case logoType::Volvo:
        resultCar->price += 110000;
        break;
    default:
        ret = false;
        break;
    }

    //resultCar->lType = lType;
    return ret;
}


// =============================================================================================================================================

template bool CarMaker<CarMakerV1>::makeCar(const std::string& carName, CarData* data, ResultCar* resultCar);
template bool CarMaker<CarMakerV2>::makeCar(const std::string& carName, CarData* data, ResultCar* resultCar);

template <class T>
bool CarMaker<T>::makeCar(const std::string& carName, CarData* data, ResultCar* resultCar) {
    bool result = false;
    if (T::carInfoMap.count(carName)) {
        logoType lType;
        carType cType;
        void* makeFunc;
        std::tie(lType, cType, makeFunc) = T::carInfoMap.at(carName);
        switch (cType) {
        case carType::Sedan: {
            if (makeFunc != nullptr) {
                if (makeLogo(lType, resultCar)) {
                    resultCar->size = 10000;
                    resultCar->weight = 100;
                    result = (*(makeCarFunc)makeFunc)(carName, data, resultCar);
                }
            }
            break;
        }
        case carType::SUV: {
            if (makeFunc != nullptr) {
                if (makeLogo(lType, resultCar)) {
                    resultCar->size = 20000;
                    resultCar->weight = 200;
                    result = (*(makeCarFunc)makeFunc)(carName, data, resultCar);
                }
            }
            break;
        }
        default:
            result = false;
            break;
        }
    }

    return result;
}