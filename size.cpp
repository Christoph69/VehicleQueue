//
//  size.cpp
//  VehicleQueue
//
//  Created by Christoph Wagner on 27/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "VehicleQueue.h"

size_t VehicleQueue::size(){
    size_t count = 0;
    Vehicle_t* current = this->start;
    while(current != nullptr){
        count++;
        current = current->next;
    }
    return count;
}