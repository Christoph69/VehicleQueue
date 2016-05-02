//
//  structor.cpp
//  VehicleQueue
//
//  Created by Christoph Wagner on 27/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "VehicleQueue.h"

VehicleQueue::VehicleQueue() : start(nullptr), end(nullptr) {
    
}

VehicleQueue::~VehicleQueue(){
    // hier muss die komplette Liste gelöscht werden mit den dazugehörigen Fahrzeugen
    Vehicle_t* current = this->start;
    while(current != nullptr){
        this->start = this->start->next;
        // delete current->vehicle;
        delete current;
        current = this->start;
    }
}