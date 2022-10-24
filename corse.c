//SPDX-FileCopyrightText:2022 Ken Inaba

#include<stdio.h>
#include<math.h>
#define line	1000
	 struct log{
		 int ln,pat,speed,handle,psd,sensor,centor,enctotal,enc;
		 };

        struct mot{
		 int front_right,front_left,back_right,back_left;
	        };
int main(void){
	struct log macne[line];
	struct mot moto[line]; 

	for(int i=0;i<line;i++){
		if((i+1)%13==0){
			scanf("%d",&macne[i].enctotal);
			printf("ajsf\n");
		}else if((i+1)%12==0){
			scanf("%d",&macne[i].enc);
		}else if((i+1)%11==0){
			scanf("%d",&macne[i].centor);
		}else if((i+1)%10==0){
			scanf("%d",&macne[i].sensor);
		}else if((i+1)%9==0){
			scanf("%d",&macne[i].psd);
		}else if((i+1)%8==0){
			scanf("%d",&moto[i].front_right);
		}else if((i+1)%7==0){
			scanf("%d",&moto[i].front_left);
		}else if((i+1)%6==0){
			scanf("%d",&moto[i].back_right);
		}else if((i+1)%5==0){
			scanf("%d",&moto[i].back_left);
		}else if((i+1)%4==0){
			scanf("%d",&macne[i].handle);
		}else if((i+1)%3==0){
			scanf("%d",&macne[i].speed);
		}else if((i+1)%2==0){
			scanf("%d",&macne[i].pat);
		}else{
			scanf("%d",&macne[i].ln);
		}
	}

	for(int i=0;i<line;i++){
		printf("%d\n",macne[i].enctotal);
	}
}
