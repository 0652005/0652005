#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void ran(void);
void bubble(void);
int GG[10];
int input=0,output=0;
int i,c,j,k;
int main (void){
	ran();
	printf("\n");
	bubble();
	scanf("%d",&input);
for(i=0;i<=9;i++){
	if(GG[i]==input){
	printf("²Ä%d­Ó",i+1);
		output=1;
	}
}
if(output==0){
	printf("error");
}
	return 0;
}
void bubble(void){
int temp;
	for(c = 0; c <=9; c++){
		for(k= c; k < 10; k++){
			if( GG[k] < GG[c] ) {
				temp = GG[k];
				GG[k] = GG[c];
				GG[c] = temp;	
		}
	}
}
for(j =0;j<=8;j++){
	printf("%d,",GG[j]);
	}  
	printf("%d",GG[9]);
}

void ran (void){

	srand(time(NULL));

	for(i=0;i<=10;i++){
		GG[i]=(rand()%91)+10;
        }
        for(i=0;i<=10;i++){
		for(j=i+1;j<=10;j++){
			if(GG[i]==GG[j]){
				GG[i]=(rand()%91)+10;
							if(GG[i]==GG[j]){
				printf("");
				GG[i]=(rand()%91)+10;
				if(GG[i]==GG[j]){
				GG[i]=(rand()%91)+10;
			}	
		}							
    }
}
}
for(j =0;j<=8;j++){
		printf("%d,",GG[j]);
	}
	printf("%d",GG[9]);
}
