#include<stdio.h>
int main(){
	int x=5,y=34,z=4;
	if(x>y){
		if(x>z){
			printf("x");
		}
		else{
			printf("z");
		}
	}
	else{
		if(y>z){
			printf("y");
		}
		else{
			printf("z");
		}
	}
	
}
