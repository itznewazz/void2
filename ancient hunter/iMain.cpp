#include "iGraphics.h"

#include"image.h"

#include "GameObject.h"

#include "CollisionDetector.h"

#include "MC.h"

#include "levelone.h"

# include <iostream>
# include <string>



using namespace std;


//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

string bganimname;
int bgShower[150];
int resWidth=1000;
int resHeight=750;
int tempo;
int add = 00001;
 
int k=0,l=2,m=4,aboutindex=6,settingindex=4,exitindex=6,newgamemenuindex=8,continuemenuindex=10,settingmenuindex=12,exitmenuindex=14,bgindex=0,moveindex=0,jump=0;

int posx;
int posy=50;


int tempposx;
int tempposy;


bool musicController=true;
bool hovermusiccontroller = true;
bool passivemainmusicon =true;

int  movementdetector;

bool boxcollider=false,crposcheck=false;
bool dec;
int temp;


int gamephase=0;
int subgamephase=0;

void iDraw()
{
	iClear();
	
	
	if(gamephase==0){
		 if(subgamephase==0){
		iShowImage(0,0,resWidth,resHeight,bgMenuShower[0]);
		iShowImage(350,250,300,250,bgMenuShower[1]);
		iShowImage(450,100,80,50,bgMenuShower[l]);
		iShowImage(900,550,80,50,bgMenuShower[m]);
		iShowImage(30,550,80,50,bgMenuShower[aboutindex]);
		
	
		

		 

		}
		  else if (subgamephase==1){
			iShowImage(0,0,resWidth,resHeight,settingMenuShower[0]);
			iShowImage(150,125, 700,450,settingMenuShower[1]);
			iShowImage(190,185, 600,350,settingMenuShower[2]);
			iShowImage(150,550,700,150,settingMenuShower[3]);
			iSetColor(0,0,0);
			iText(350,450,"Music", GLUT_BITMAP_TIMES_ROMAN_24);

			iText (350,400,"Sound",GLUT_BITMAP_TIMES_ROMAN_24);
			iShowImage (500,450,40,20,settingMenuShower[settingindex]);
			iShowImage(750,550,80,50,settingMenuShower[exitindex]);

			


		} 

		  else if(subgamephase==2){
			  iShowImage(0,0,resWidth,resHeight,settingMenuShower[0]);
			iShowImage(150,125, 700,450,settingMenuShower[1]);
			iShowImage(190,185, 600,350,settingMenuShower[2]);
			iShowImage(150,550,700,150,settingMenuShower[3]);
		  }

		  else if(subgamephase==3){
			 iShowImage(0,0,resWidth,resHeight,bgMenuShower[0]);
			  iShowImage(100 ,500,250,50,settingMenuShower[newgamemenuindex]);
			  iShowImage(100,430,250,50,settingMenuShower[continuemenuindex]);
			   iShowImage(100,360,250,50,settingMenuShower[settingmenuindex]);
			    iShowImage(100,290,250,50,settingMenuShower[exitmenuindex]);
			 


		  }
		
		

	}
	

	
	else if (gamephase==1){
		
		tileShower();
		p1.forcegravitation();
		p1collcheck.forcegravitation();
			
			crate.objgravitation();
			//boat.objgravitation1();

			//crtopline.objgravitation();
	crate.showimage();
		airplat.airplatshowimage();
		airplat1.airplatshowimage();
		boat.showimage();
		enemy.showimage();
		enemy.enemymovement();
		/*crtopline.pseudoimage();
		obj.pseudoimage();
		obj1.pseudoimage();
		groundverline.pseudoimage();
		water.pseudoimage();
		crate.pseudoimage();
		ground.pseudoimage();
		 p1collcheck.pseudoimage();

		platverline.pseudoimage();
		platverline1.pseudoimage();*/

		upground.pseudoimage();
		//boat.pseudoimage();
		// p1.pseudoimage();
		p1.charecterIdle();
	p1.charecterRun();
	p1.charecterjump();

	airplat.platmovement();
	airplat1.platmovement1();
		
	if((p1.pos_x>=-100 && p1.pos_x<100 ) ){
		posholder(p1collcheck,obj);
		
	}
	
	
	else if(p1.pos_x>80 && p1.pos_x<350  ){

	
		posholder(p1collcheck,ground);
		
	
	}
	 else if((p1.pos_x>350 && p1.pos_x<450  )) {
		posholder(p1collcheck,crtopline);
	}

	else if(p1.pos_x>450 && p1.pos_x<=850){
		posholder(p1collcheck,obj1);
	}
	
	
	if(crate.pos_x>=-100 && crate.pos_x<150){
		objposholder(crate,obj);
	}

	else if(crate.pos_x>150 && crate.pos_x<350 ){
		objposholder(crate,ground);
	}

	else if(crate.pos_x>=300 && crate.pos_x<550){
		objposholder(crate,water);
	}
	if( c1.collider(crate,water)){
		crate.pos_x+=.009;
		if(crate.pos_x>=430){
			crate.pos_x=430;
		}
	}
	
	boxcollider = c2.collider(p1collcheck, crate);

	if(boxcollider && !posleftdetector){
		crate.pos_x++;
		
	
	}

	if (boxcollider && posleftdetector){
		crate.pos_x--;
	
	}

	}
	
      if(c2.collider(p1collcheck,groundverline)){
		   p1.pos_x=120;
		   p1collcheck.pos_x=150;
	   }

	  if(crate.pos_x>=450){
		  crposcheck=true;
	  }

	 

	 if(c1.collider(p1collcheck,platverline)){
		// posholder(p1,platverline);
		 posholder(p1collcheck,platverline);

		
	 }
	 if(c1.collider(p1collcheck,platverline1)){
		 // posholder(p1,platverline1);
		 posholder(p1collcheck,platverline1);
	 }
	
    //cout<<p1.pos_x<<endl;
	//cout<<p1.pos_y<<endl;
	/*if(c2.collider(boat,upground)){
		objposholder(boat,upground);
	}*/
	 if(c1.collider(p1collcheck,enemy)){
		 if(z2==-1){
		 p1.pos_x-=200;
		 p1collcheck.pos_x-=200;
		 }

		 else{
			  p1.pos_x+=200;
			  p1collcheck.pos_x+=200;
		 }

	 }


	
	

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{	if(gamephase==0 && subgamephase==0){
	if(mx>=450 && mx<=530 && my>=100 && my<=150){
		l=2;
		
	}
	
	else if(mx>=900 && mx<=980 && my>=550 && my<=600){
		m=5;
	}

	else if(mx>=30 && mx<=110 && my>=550 && my<=600){
		aboutindex=7;
	
	}
	else{
		l=3;
		m=4;
		aboutindex=6;
	}
	
	}

		else if(gamephase==0&&subgamephase==1){
			if(mx>=750 && mx<=830 && my>=550 && my<=600){
				exitindex=7;
			}
			else{
				exitindex=6;
			}


		}

		else if(gamephase==1){
			if(mx>=750 && mx<=830 && my>=550 && my<=600){
				
				exitindex=7;
			}
			else{
				
				exitindex=6;
			}
		}

		else if (subgamephase==3){

			if(mx>=100 && mx<=350 && ((my>=500 && my<=550) ||( my>=430 && my<=470) || (my>=360 && my<=420) ||  (my>=290 && my<=340))){
				if(hovermusiccontroller){
					 PlaySound("sfx1", NULL, SND_ASYNC);
				}
					 hovermusiccontroller = false;
		}

			else{
				hovermusiccontroller =true;
	
				
			}
			if(mx>=100 && mx<=350 && my>=500 && my<=550){
					
						
					
				
				newgamemenuindex =9;
			}
			else {

				
				
				newgamemenuindex=8;
				
			}
			if(mx>=100 && mx<=350 && my>=430 && my<=470){
				continuemenuindex =11;
				

			}
			else{
				continuemenuindex=10;
				
			}

			if(mx>=100 && mx<=350 && my>=360 && my<=420){
				settingmenuindex =13;
				
			}
			else{
				settingmenuindex=12;
				
			}
			if(mx>=100 & mx<=350 && my>=290 && my<=340){
				exitmenuindex=15;
				
			}
			else{
				exitmenuindex=14;
			
			}


		}
		

	
}

//else if (gamephase==0 && subgamephase==1){

	//if(mx>=500 && mx<=540 && my>=450 && my<=470){
		//settingindex=5;
	//}
	//else{
		//settingindex=4;
	//}
//}
//}
	
//

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx>=450 && mx<=530 && my>=100 && my<=150){
			subgamephase=3;
		}

		else if(gamephase==0 && subgamephase==3){
			 if(mx>=100 && mx<=350 && my>=500 && my<=550){
				 gamephase=1;
			 }

			 else if(mx>=100 & mx<=350 && my>=290 && my<=340){
				 gamephase=0;
				 subgamephase=0;
		}
		 }
		else if(mx>=900 && mx<=980 && my>=550 && my<=600){
			subgamephase=1;
		}

		else if (gamephase==0 && subgamephase==1){

			
			 if(mx>=500 && mx<=540 && my>=450 && my<=470){
				if(musicController==true){

				musicController=false;
				settingindex=5;
				PlaySound(NULL, NULL, SND_PURGE);
			}

				else if(musicController==false){
					musicController=true;
					settingindex=4;
					 PlaySound("openingmusicAH.wav", NULL, SND_LOOP | SND_ASYNC);
					
				}

				
			}
			 else if(mx>=750 && mx<=830 && my>=550 && my<=600){
				
			subgamephase=0;

			
			
		}
 
			
		


		
	
		
		
	}
		else if(mx>=30 && mx<=110 && my>=550 && my<=600){
			subgamephase=2;
		}

		 /*else if(gamephase==1){
			 if(mx>=750 && mx<=830 && my>=550 && my<=600) {
				 gamephase=0;
			 }

		 }*/

		
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{	if(key == 27 ){
			if(gamephase==1){
			gamephase=0;
			}
		
	}
	if (key == '\r')
	{
		
	}

	if (key == ' '){
			if(!inAir && !posleftdetector ){
				p1.pos_x+=100;
				p1collcheck.pos_x+=100;
			p1.pos_y+=150;
			p1collcheck.pos_y+=150;
			}

			else if(!inAir && posleftdetector){
				p1.pos_x-=100;
				p1collcheck.pos_x-=100;
			p1.pos_y+=150;
			p1collcheck.pos_y+=150;
			}
		}

		
			
	

	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	
	
	if (key == GLUT_KEY_RIGHT){

	
		
		posleftdetector=false;
		idledetector=false;
		p1.pos_x+=3;
		p1collcheck.pos_x+=3;
		movementdetector++;
		counter=0;
	


	
		
		
		
		
			

		
			
		
	

	}

	

	//cout<<movementdetector<<endl;

	
	if (key == GLUT_KEY_LEFT)
	{	
		
		posleftdetector=true;
		idledetector=false;
		p1.pos_x-=3;
		p1collcheck.pos_x-=3;
		movementdetector++;
		counter=0;
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


/*void bgAnimSaver(){

	for (bgindex = 0; bgindex< 111; bgindex++){
			add++;
			 bganimname= "bgAnim\\bgAnimation";
		bganimname = bganimname + to_string(add) + ".png";
		bgShower[bgindex] = iLoadImage(const_cast<char*>(bganimname.c_str()));
		cout << bganimname << endl;
		cout << bgShower[bgindex] << endl;
	}
}*/
		
	void jumper(){
		jumpindex++;
		
		if(p1.pos_y==init_posy){
			jumpindex=0;

		}
		if(jumpindex>=9){
			jumpindex=0;
		}
		
	
	}
	void idle(){

		

		if(!idledetector && movementdetector>0 && !posleftdetector ){
			i++;
				if(i>=8){
					i=0;
				}

		

		}

		else if (!idledetector && movementdetector>0 && posleftdetector){

			j++;
			if(j>=8){
				j=0;
			}
		}

		 if(idledetector){
		idleindex++;

		
		if(idleindex>=9){
			idleindex=0;
		}

		}

		counter++;
			if(counter>=3){
				 movementdetector=0;
				counter=0;
				idledetector=true;
			}

			//cout<<counter<<endl;

			

	}


int main()
{	
	///srand((unsigned)time(NULL));
	iInitialize(1000, 750, "Ancient Hunter");
	mcIdleAnimSaver();
	mcAnimWalkSaver();
	mcAnimLeftWalkSaver();
	mcAnimJumpSaver();
	 leftAnimJumpSaver();
	bgMenuSaver();
	settingMenuSaver();

	

	

	if(musicController){
	PlaySound("openingmusicAH.wav",NULL,SND_LOOP | SND_ASYNC);
	}
	
	
	Gameobject o1(200,200,700,400);

	


	
	


	
	
	iSetTimer(100,jumper);
	iSetTimer(100,idle);
	
	 a =iLoadImage("BG.png");
	///updated see the documentations
	iStart();
	
	return 0;
}