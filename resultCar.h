//
// Created by jsj on 2020-11-05.
//

#ifndef PORTFOLIO_RESULTCAR_HPP
#define PORTFOLIO_RESULTCAR_HPP

#include <iostream>

class ResultCar {
public:
    // car!!
    int licenseNum = 0;
    int createData = 0;
    //logoType lType;
    int price = 0;
    int size = 0;
    int weight = 0;

    //std::string showLog() {
    //    std::string ret;
    //    switch (lType) {
    //    case logoType::Audi:
    //        ret = "Audi";
    //        break;
    //    case logoType::Benz:
    //        ret = "Benz";
    //        break;
    //    case logoType::BMW:
    //        ret = "BMW";
    //        break;
    //    case logoType::Chevrolet:
    //        ret = "Chevrolet";
    //        break;
    //    case logoType::Ferrari:
    //        ret = "Ferrari";
    //        break;
    //    case logoType::Hyundai:
    //        ret = "Hyundai";
    //        break;
    //    case logoType::KIA:
    //        ret = "KIA";
    //        break;
    //    case logoType::Volvo:
    //        ret = "Volvo";
    //        break;
    //    }
    //}
    
    void showInfo() {
        std::cout << "licenseNum: " << licenseNum << "\n";
        std::cout << "createData: " << createData << "\n";
        //std::cout << "lType: " << showLog() << "\n";
        std::cout << "price: " << price << "\n";
        std::cout << "size: " << size << "\n";
        std::cout << "weight: " << weight << "\n";
    }

};


#endif //PORTFOLIO_RESULTCAR_HPP
#pragma once
