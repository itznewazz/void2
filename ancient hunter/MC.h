#ifndef MC_H

#define MC_H


#include<iostream>
#include<string>
#include"image.h"

using namespace std;

int  i;
int j;
bool posleftdetector;
int jumpindex=0;
int idleindex=0;
bool jumpdetector=false;
bool idledetector=true;
bool inAir=false;

int  init_posy=0;
int init_posx=120;
int  counter=0;

class Mc {
public:
	int  pos_x;
	float pos_y;
	int width;
	int height;


	//float heatlh;

	// int attack;

	 Mc(int pos_x,int pos_y,int width ,int height){
		 this ->pos_x= pos_x;

		 this ->pos_y = pos_y;
		 this -> width =width;
		 this ->height =height;

	 }

	 void charecterIdle(){

		 if(idledetector && !inAir){
			 iShowImage(pos_x,pos_y,width,height,mcIdleAnimShower[idleindex]);

		 }


	 }

	 void charecterRun(){

		
		if(!inAir && !idledetector){ 	
	if(posleftdetector==false){
	iShowImage(pos_x,pos_y,width,height,mcAnimShower[i]);
	}
	
	else if(posleftdetector==true){
	iShowImage(pos_x,pos_y,width,height, mcLeftAnimShower[j]);
	}
		
	 }

		
	 }

	 

	 void  forcegravitation(){
		 if(pos_y>init_posy ){

				pos_y-=.3;

				inAir=true;
				

				
			 

		 }

	




		 else{
			 inAir=false;

		 }


		 //cout<<inAir<<endl;

	 }

	 void charecterjump(){

				if(inAir && !posleftdetector){
			 iShowImage(pos_x,pos_y,width,height,mcAnimJumpShower[jumpindex]);
				}

				if(inAir && posleftdetector){
					iShowImage(pos_x,pos_y,width,height,mcleftAnimJumpShower[jumpindex]);

				}

		 }
	 
	  void pseudoimage(){
			iSetColor(255,0,0);
		  iFilledRectangle(pos_x,pos_y,width,height);
	  }
	 


} p1(120,140,120,100),p1collcheck(150,140,50,90) ;

#endif