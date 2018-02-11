//
// Created by Nikolay Yakovets on 2018-01-31.
//

#ifndef QS_ESTIMATOR_H
#define QS_ESTIMATOR_H

#include "RPQTree.h"
#include <iostream>

struct cardStat {
    int noOut;
    int noPaths;
    int noIn;

    void print() {
        std::cout << "(" << noOut << ", " << noPaths << ", " << noIn << ")" << std::endl;
    }
};

class Estimator {

public:

    virtual void prepare() = 0;
    virtual cardStat estimate(RPQTree *q) = 0;

};


#endif //QS_ESTIMATOR_H