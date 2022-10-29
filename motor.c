#include<stdio.h>

#define ANGLE_LSMALL		150
#define ANGLE_L600		176
#define ANGLE_L650		180
#define ANGLE_L450		220
#define ANGLE_L500		250
#define ANGLE_RSMALL		-1*ANGLE_LSMALL
#define ANGLE_R600		-1*ANGLE_L600
#define ANGLE_R650		-1*ANGLE_L650
#define ANGLE_R450		-1*ANGLE_L450
#define ANGLE_R500		-1*ANGLE_L500


void main(){
	int angle;
	for(angle=-300;angle<=300;angle++){
		if (angle>ANGLE_L500) {
			printf("L500\n");
		}else if (angle > ANGLE_L450) {
			printf("L450\n");
		}else if (angle > ANGLE_L650) {	
			printf("L650\n");	
		}else if (angle > ANGLE_L600) {
			printf("L600\n");	
		}else if (angle < ANGLE_R500) {
			printf("R500\n");	
		}else if (angle < ANGLE_R450) {
			printf("R450\n");	
		}else if (angle < ANGLE_R650) {
			printf("R650\n");	
		}else if (angle < ANGLE_R600) {
			printf("R600\n");	
		}else if (angle < ANGLE_RSMALL){
			printf("small\n");	
		}else{
			printf("strate\n");	
		}
	}
}
