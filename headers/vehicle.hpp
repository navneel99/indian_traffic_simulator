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
        int brake;     //break = 1 means no brake and brake = 0 means break is applied
        float acceleration; //If brake = false
        float decelaration;
        float speed;
        float maxspeed;
        float maxAcceleration;

        float laneChangeProb;
        int sumAllVeh;

        int start_time;
        float x,y; //location of the top left of the vehicle
        vector<tuple<int,int> > coverage;
        vector<tuple<int,int> > corners;
        vector<int> free_area; //A vector of length 4 which tells the space free in the 4 directions of the vehicle
        vector<int> core_free_area;
        bool rlc,llc; //right lane change and left lane change
        bool rlp,llp; //right lane possible and left lane possible
        //It is possible to change lanes only if there is space all over.

        void calSpeed();
        void calAcceleration();

    public:
        bool infSignal;
        //Intialising the position and specification of the vehicle. 
        void setVehicle(string type, string colour, int len, int wid, int ispeed, int start_time, int ac, int maxSpeed);//, float x0, float y0);
        void setBasicAttributes(int l, int w, int acc, float initSpeed);
        void setColour(string c);
        void setPosition(float x, float y);         
        void setStartTime(int t);
        void setMaxSpeed(float maxspeed);
        void setType(string type);
        void setLength(int t);
        void setWidth(int w);
        void setMaxAcc(float a);
        void setCoverage(int mat_len);
        void setSpeed(float speed);
        void setAcceleration(float ac);
        void setFreeArea(vector<int> fa);
        void setCoreFreeArea(vector<int> fa);
        void setBrake(int t);
        void setLCProb(float f);
        void setSumAllVeh(int i);
        float callaneChangeProb();
        void collisionAvoider(int mat_len);
        vector<tuple<int,int> > getCorners();
        void setCorners();        
        void laneChange();
        void laneChanger();
        void rotate();
        //functions for getting the coordinates and dimension of the vehicle.
        float Get_x();
        float Get_y();
        int Get_lenth();
        int Get_width();
        string getType();
        int Get_start_time();
        vector<tuple<int,int> >Get_coverage();
        float GetMaxSpeed();
        float GetMaxAccleration();
        vector<int> Get_free_area();
        vector<int> Get_core_free_area();

        string GetColour();
        float Get_speed();
        float Get_acceleration();


        void posInit(int road_wid);

        //Calculating the Next Set of coordinates from the previous set of the cooridinate of the vehicle. 
        void NextPosition();

        //Showing the basic attributes of the object of the class
        void ShowVehicle();
        void ShowOrder();
        void ShowEssential();
        void ShowBasic();

        void ShowCorners();

};

#endif