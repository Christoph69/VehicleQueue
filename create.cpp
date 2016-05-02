//
//  create.cpp
//  VehicleQueue
//
//  Created by Christoph Wagner on 28/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "VehicleQueue.h"
#include "Car.h"

bool VehicleQueue::createCar(){
    bool valid = false;
    Vehicle* pVehicle = new Car(0,0);
    if(pVehicle != nullptr){
        this->append(pVehicle);
        valid = true;
    }
    return valid;
}
