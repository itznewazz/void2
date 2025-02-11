#ifndef IMAGE_H
#define IMAGE_H

#include<iostream>

#include<string>

using namespace std;


int mcAnimShower[20];
int bgMenuShower[20];
int settingMenuShower[20];
int mcIdleAnimShower[20];
int mcLeftAnimShower[20];
int mcAnimJumpShower[20];
int levelImageShower[30];
int mcleftAnimJumpShower[20];


void mcIdleAnimSaver(){
	mcIdleAnimShower[0]=iLoadImage("MC\\Idle(1).png");
	mcIdleAnimShower[1]=iLoadImage("MC\\Idle(2).png");
	mcIdleAnimShower[2]=iLoadImage("MC\\Idle(3).png");
	mcIdleAnimShower[3]=iLoadImage("MC\\Idle(4).png");
	mcIdleAnimShower[4]=iLoadImage("MC\\Idle(5).png");
	mcIdleAnimShower[5]=iLoadImage("MC\\Idle(6).png");
	mcIdleAnimShower[6]=iLoadImage("MC\\Idle(7).png");
	mcIdleAnimShower[7]=iLoadImage("MC\\Idle(8).png");
	mcIdleAnimShower[8]=iLoadImage("MC\\Idle(9).png");
	mcIdleAnimShower[9]=iLoadImage("MC\\Idle(10).png");
	


}

void mcAnimWalkSaver(){
	
		mcAnimShower[0]=iLoadImage("MC\\Run(1).png");
	mcAnimShower[1]=iLoadImage("MC\\Run(2).png");
	mcAnimShower[2]=iLoadImage("MC\\Run(3).png");
	mcAnimShower[3]=iLoadImage("MC\\Run(4).png");
	mcAnimShower[4]=iLoadImage("MC\\Run(5).png");
	mcAnimShower[5]=iLoadImage("MC\\Run(6).png");
	mcAnimShower[6]=iLoadImage("MC\\Run(7).png");
	mcAnimShower[7]=iLoadImage("MC\\Run(8).png");
}

void mcAnimLeftWalkSaver(){
	mcLeftAnimShower[0]=iLoadImage("MC\\Runleft(1).png");
	mcLeftAnimShower[1]=iLoadImage("MC\\Runleft(2).png");
	mcLeftAnimShower[2]=iLoadImage("MC\\Runleft(3).png");
	mcLeftAnimShower[3]=iLoadImage("MC\\Runleft(4).png");
	mcLeftAnimShower[4]=iLoadImage("MC\\Runleft(5).png");
	mcLeftAnimShower[5]=iLoadImage("MC\\Runleft(6).png");
	mcLeftAnimShower[6]=iLoadImage("MC\\Runleft(7).png");
	mcLeftAnimShower[7]=iLoadImage("MC\\Runleft(8).png");


}
void mcAnimJumpSaver(){

	mcAnimJumpShower[0]=iLoadImage("MC\\Jump(1).png");
	mcAnimJumpShower[1]=iLoadImage("MC\\Jump(2).png");
	mcAnimJumpShower[2]=iLoadImage("MC\\Jump(3).png");
	mcAnimJumpShower[3]=iLoadImage("MC\\Jump(4).png");
	mcAnimJumpShower[4]=iLoadImage("MC\\Jump(5).png");
	mcAnimJumpShower[5]=iLoadImage("MC\\Jump(6).png");
	mcAnimJumpShower[6]=iLoadImage("MC\\Jump(7).png");
	mcAnimJumpShower[7]=iLoadImage("MC\\Jump(8).png");
	mcAnimJumpShower[8]=iLoadImage("MC\\Jump(9).png");
	mcAnimJumpShower[9]=iLoadImage("MC\\Jump(10).png");

}


void leftAnimJumpSaver(){
	mcleftAnimJumpShower[0]=iLoadImage("MC\\Jumpleft(1).png");
	mcleftAnimJumpShower[1]=iLoadImage("MC\\Jumpleft(2).png");
	mcleftAnimJumpShower[2]=iLoadImage("MC\\Jumpleft(3).png");
	mcleftAnimJumpShower[3]=iLoadImage("MC\\Jumpleft(4).png");
	mcleftAnimJumpShower[4]=iLoadImage("MC\\Jumpleft(5).png");
	mcleftAnimJumpShower[5]=iLoadImage("MC\\Jumpleft(6).png");
	mcleftAnimJumpShower[6]=iLoadImage("MC\\Jumpleft(7).png");
	mcleftAnimJumpShower[7]=iLoadImage("MC\\Jumpleft(8).png");
	mcleftAnimJumpShower[8]=iLoadImage("MC\\Jumpleft(9).png");
	mcleftAnimJumpShower[9]=iLoadImage("MC\\Jumpleft(10).png");
}
void bgMenuSaver(){
	bgMenuShower[0]=iLoadImage("bgMenu.png");
	bgMenuShower[1]=iLoadImage("AHtext2.png");
	bgMenuShower[2]=iLoadImage("buttonPlay2.png");
	bgMenuShower[3]=iLoadImage("buttonPlay1.png");
	bgMenuShower[4]=iLoadImage("ButtonSetting1.png");
	bgMenuShower[5]=iLoadImage("ButtonSetting2.png");
	bgMenuShower[6]=iLoadImage("ButtonAbout1.png");
	bgMenuShower[7]=iLoadImage("ButtonAbout2.png");
	




}


void settingMenuSaver(){
	settingMenuShower[0]=iLoadImage("settingBg0.png");
	settingMenuShower[1]=iLoadImage("settingBg1.png");
	settingMenuShower[2]=iLoadImage("table.png");
	settingMenuShower[3]=iLoadImage("92.png");
	settingMenuShower[4]=iLoadImage("96.png");
	settingMenuShower[5]=iLoadImage("95.png");
	settingMenuShower[6]=iLoadImage("ButtonExit1.png");
	settingMenuShower[7]=iLoadImage("ButtonExit2.png");
	settingMenuShower[8]=iLoadImage("newgameMenu1.png");
	settingMenuShower[9]=iLoadImage("newgameMenu2.png");
	settingMenuShower[10]=iLoadImage("continueMenu1.png");
	settingMenuShower[11]=iLoadImage("continueMenu2.png");
	settingMenuShower[12]=iLoadImage("settingMenu1.png");
	settingMenuShower[13]=iLoadImage("settingMenu2.png");
	settingMenuShower[14]=iLoadImage("exitMenu1.png");
	settingMenuShower[15]=iLoadImage("exitMenu2.png");
	settingMenuShower[16]=iLoadImage("bganim.png");

	
       levelImageShower[0]=iLoadImage("levelone\\soil.png");
	   levelImageShower[1]=iLoadImage("levelone\\grass.png");
	   levelImageShower[2]=iLoadImage("levelone\\puregrass.png");
	   levelImageShower[3]=iLoadImage("levelone\\tree_2.png");
	   levelImageShower[4]=iLoadImage("levelone\\tree_3.png");
	   levelImageShower[5]=iLoadImage("levelone\\water.png");
	   levelImageShower[6]=iLoadImage("levelone\\wave.png");
	    levelImageShower[7]=iLoadImage("levelone\\crate.png");
		levelImageShower[8]=iLoadImage("levelone\\soiledgeleft.png");
		levelImageShower[9]=iLoadImage("levelone\\rightedgegrass.png");
		levelImageShower[10]=iLoadImage("levelone\\Bush (1).png");
		levelImageShower[11]=iLoadImage("levelone\\Bush (2).png");
		levelImageShower[12]=iLoadImage("levelone\\Bush (3).png");
		levelImageShower[13]=iLoadImage("levelone\\Bush (4).png");
		levelImageShower[14]=iLoadImage("levelone\\Mushroom_1.png");
		levelImageShower[15]=iLoadImage("levelone\\Mushroom_2.png");
		levelImageShower[16]=iLoadImage("levelone\\Sign_2.png");
		levelImageShower[17]=iLoadImage("airplat(1).png");
		levelImageShower[18]=iLoadImage("airplat(2).png");
		levelImageShower[19]=iLoadImage("airplat(3).png");
		levelImageShower[20]=iLoadImage("boat.png");
		levelImageShower[21]=iLoadImage("enemy.png");



		




}




#endif