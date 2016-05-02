//
//  VehicleQueue.h
//  VehicleQueue
//
//  Created by Christoph Wagner on 27/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#ifndef VehicleQueue_h
#define VehicleQueue_h

#include "Vehicle.h"

// ListenElemente die aneinander hängen
struct Vehicle_t{
    Vehicle* vehicle;
    Vehicle_t* next;
};

class VehicleQueue {
public:
    VehicleQueue();
    ~VehicleQueue();
    // hängt ein Fahrzeuge hinten in der Liste ein
    bool append(Vehicle* vehicle);
    // entkoppelt das erste Fahrzeuge in der Liste und gibt den Pointer zurück
    Vehicle* release();
    // gibt die Anzahl der Fahrzeuge in der Liste zurück
    size_t size();
    // erstellt ein neues Auto und hängt es hinten in die Liste ein
    bool createCar();
    // gibt den Pointer auf das erste Vehicle zurück
    Vehicle* info();
private:
    Vehicle_t* start;   // Listenanfang(erstes Element)
    Vehicle_t* end;     // Listenende(letztes Element)
};


#endif /* VehicleQueue_h */
