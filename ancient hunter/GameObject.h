#ifndef GAME_OBJECT_H

#define GAME_OBJECT_H


#include<iostream>
#include<string>


using namespace std;
int initposy=0;
int n=1;
int z1=1,z2=1;
class  Gameobject {
public:
	float  pos_x;
	int  pos_y;
	int width;
	int height;
	int index;

	
	 Gameobject(int pos_x,int pos_y,int width ,int height){
		 this ->pos_x= pos_x;

		 this ->pos_y = pos_y;
		 this -> width =width;
		 this ->height =height;

	 }

	 Gameobject(int pos_x,int pos_y,int width ,int height,int index){
		  this ->pos_x= pos_x;

		 this ->pos_y = pos_y;
		 this -> width =width;
		 this ->height =height;
		 this -> index = index;
	 }
	
	 void objgravitation(){

		  if(pos_y>initposy ){

				pos_y-=.05;

				
				

				
			 

		 }

	 }
	 void objgravitation1(){

		  if(pos_y>initposy ){

				pos_y-=.05;

				
				

				
			 

		 }

	 }


		void showimage(){
			
			iShowImage(pos_x,pos_y,width,height,levelImageShower[index]);
		}
		void airplatshowimage(){
			iShowImage(pos_x,pos_y,width,height,levelImageShower[17]);
			iShowImage(pos_x+50,pos_y,width,height,levelImageShower[18]);
			iShowImage(pos_x+100,pos_y,width,height,levelImageShower[19]);
		}

		void pseudoimage(){
			iSetColor(255,0,0);
			iFilledRectangle(pos_x,pos_y,width,height);

		}
		
		void  platmovement( ){
			  airplat.pos_x= airplat.pos_x+(.03*n);
			   platverline.pos_x= airplat.pos_x+(.03*n);
			

		if(airplat.pos_x>=450 ){
			n=-1;
		}
		if(airplat.pos_x<=250){
			n=1;
		}

		}

		void  platmovement1( ){
			  airplat1.pos_x= airplat1.pos_x+(.04*z1);
			   platverline1.pos_x= airplat1.pos_x+(.04*z1);

		if(airplat1.pos_x>=750 ){
			z1=-1;
		}
		if(airplat1.pos_x<=550){
			z1=1;
		}

		}
		void enemymovement(){
			  enemy.pos_x= enemy.pos_x+(.05*z2);
			   

		if(enemy.pos_x>=850 ){
			z2=-1;
		}
		if(enemy.pos_x<=550){
			z2=1;
		}

		}
		



}obj(0,250,150,1),obj1(550,250,300,1),obj2(200,250,400,150),ground(150,150,200,1),groundverline(150,150,1,90),water(350,70,200,1),crate(50,250,50,50,7),crtopline(430,120,50,1),airplat(300,350,50,50),airplat1(300,500,50,50),platverline(300,400,150,1),platverline1(300,550,150,1),boat(850,650,100,50,20),enemy(550,250,40,40,21),upground(850,650,150,1);


//crline(200,140,1,50),crleftline(250,140,1,50)
#endif