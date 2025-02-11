#ifndef COLLISION_DETECTOR_H
#define COLLISION_DETECTOR_H

#include <iostream>
using namespace std;

#include "MC.h"

#include"GameObject.h"
class collision{
public:
bool collider(Mc obj1, Gameobject obj2) {
    if (obj1.pos_x < (obj2.pos_x + obj2.width) && (obj1.pos_x + obj1.width) > obj2.pos_x &&  obj1.pos_y < (obj2.pos_y + obj2.height) &&  (obj1.pos_y + obj1.height) > obj2.pos_y) {
        
        
        return true;
    } 
	
	else {
        return false;
    }
}

bool collider(Gameobject obj1 ,Gameobject obj2){
	 if (obj1.pos_x < (obj2.pos_x + obj2.width) && (obj1.pos_x + obj1.width) > obj2.pos_x &&  obj1.pos_y < (obj2.pos_y + obj2.height) &&  (obj1.pos_y + obj1.height) > obj2.pos_y) {
        
        
        return true;
    } 
	
	else {
        return false;
    }
}

}c1,c2,c3;

void posholder(Mc p1, Gameobject obj){
		
	if(c1.collider(p1,obj)){

		
		p1.pos_y = obj.pos_y;
	
		
		init_posy=p1.pos_y;
		
		

	}

	else{
		
		init_posy=0;
		
	}


	

		
		
	
}



void objposholder(Gameobject obj1, Gameobject obj2){
		
	if(c1.collider(obj1,obj2)){

		
		obj1.pos_y = obj2.pos_y;
	
		
		initposy=obj1.pos_y;
		
		

	}

	else{
		
		initposy=0;
		
	}



		
		

}



#endif // COLLISION_DETECTOR_H