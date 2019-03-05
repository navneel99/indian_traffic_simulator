#ifndef VEHICLE_H
#define VEHICLE_H

#include "common.hpp"

// enum {car, bike, bus, truck}

class Vehicle{
    protected:  
            string vehicle_type; //Can change into enum type afterwards
            string colour;
            int length;
            int width;
            bool brake;
            float acceleration; //If brake = false
            float speed;
            float x,y; //location of the top left of the vehicle
    public:
        //Intialising the position and specification of the vehicle. 
        void setType(string type);
        void setBasicAttributes(int l, int w, int acc, float initSpeed);
        void setColour(string c);
        void setPosition(float x, float y);      

        //functions for getting the coordinates and dimension of the vehicle.
        float Get_x();
        float Get_y();
        int Get_lenth();
        int Get_width();

        //Calculating the Next Set of coordinates from the previous set of the cooridinate of the vehicle. 
        void NextPosition();

};

#endif