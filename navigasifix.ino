/* Mode Navigasi 1 */
/* Robot bergerak kiri kanan depan belakang tanpa berotasi*/
/* Inputs */
/* Direction
 *  1 North
 *  2 East
 *  3 South
 *  4 West
 */
short pulang[10000];
short maze[10000];

void setup() {
  maze[0]=9;
}

void loop() {
  mapping(9,0);
}
int x=0;
int mapping(int a, int b){
  if(isFireAround()){
      putFire();
      return 1; 
  }
  if(abs(a-maze[b-1])=2) return 0;
  if(a==1){
	if(isNorthOpen()){
		moveNorth();
	}  
  }
  if(a==2){
	if(isEastOpen()){
		moveEast();
	}
  }
  if(a==3){
	if(isSouthOpen()){
		moveSouth();
	}
  }
  if(a==4){
	if(isWestOpen()){
		moveWest();
	}
  }
  x++;
  maze[x]=a;
  if(mapping(1,x)==1) return 1;
  if(mapping(2,x)==1) return 1;
  if(mapping(3,x)==1) return 1;
  if(mapping(4,x)==1) return 1;
  maze[x]=9;
  move(abs(a-2));
  return 0;
}

void putFire(){
  
}
int isFireAround(){
  
}

void mst(){
  
}

void back(){
  
}

boolean isNorthOpen(){
  
}

boolean isWestOpen(){

}
boolean isSouthOpen(){

}

boolean isEastOpen(){
  
}
void moveNorth(){
  
}
void moveWest(){

}
void moveSouth(){
   
}
void moveEast(){
  
}
void move(int a){
	if(a==1){
		moveNorth();
	}
	if(a==2){
		moveEast();
	}
	if(a==3){
		moveSouth();
	}
	if(a==4){
		moveWest();
	}
}
