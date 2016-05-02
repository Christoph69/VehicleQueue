//
//  release.cpp
//  VehicleQueue
//
//  Created by Christoph Wagner on 27/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "VehicleQueue.h"

Vehicle* VehicleQueue::release(){
    Vehicle* vehicle = nullptr;
    Vehicle_t* current = this->start;
    if(current != nullptr){
        vehicle = current->vehicle;
        this->start = current->next;
        delete current;
    }
    return vehicle;
}