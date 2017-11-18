#include <stdio.h>

main(){
	float input,x;
	int y=10,z;
	scanf("%f",&input);
	x=input;
	printf("X: %.2f\n",x);
	do{
		x=input;
		x*=y;
		x=(int)x;
		x=(float)x;
		x/=y;
		y*=10;
	}while(x!=input);
	y/=10;
	x*=y;
	z=(int)x;
	while((z%5==0 && y%5==0) || (z%2==0 && y%2==0)){
		if(z%2==0&&y%2==0){
			z/=2;
			y/=2;
		}
		if(z%5==0&&y%5==0){
			z/=5;
			y/=5;
		}
		printf(">>X: %f\n",z);
	}
	printf("%d\n",z);
	printf("-");
	if(x>=10) printf("-");
	if(x>=100) printf("--");
	if(x>=1000) printf("--");
	printf("\n%d",y);
}
