//
//  append.cpp
//  VehicleQueue
//
//  Created by Christoph Wagner on 27/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "VehicleQueue.h"

static Vehicle_t* newVehicle_t(Vehicle* data){
    Vehicle_t* pVehicle_t = new Vehicle_t;
    if(pVehicle_t != nullptr){
        pVehicle_t->vehicle = data;
        pVehicle_t->next = nullptr;
    }
    return pVehicle_t;
}


bool VehicleQueue::append(Vehicle *vehicle){
    bool valid = false;
    Vehicle_t* pVehicle_t = newVehicle_t(vehicle);
    if(pVehicle_t != nullptr){
        if(this->end == nullptr) {
            this->end = pVehicle_t;
            this->start = pVehicle_t;
            valid = true;
        }
        else{
            this->end->next = pVehicle_t;
            this->end = pVehicle_t;
            valid = true;
        }
    }
    return valid;
}