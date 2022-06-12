#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int table[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int before[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int score=0;

void tablo(){
	int i,j,k,l;
	printf("                             \n");
	printf("         2048 GAME           \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("|  %d  |",table[i][j]);		
		}
		printf("\n");	
	}
	printf("                 \n");
	printf("                SCORE:%d\n",score);
	printf(" W:Yukari  D:Sag  A:Sol  S:Asagi  R:Restore  E:Exit ");

}

void left(){
	int i,j,k,l, sayac=0;
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			before[i][j]=table[i][j];
		}
	}
	for(i=0;i<4;i++){
		for(l=0;l<4;l++){
			for(j=3;j>0;j--){
				if(table[i][j-1]==0){
					table[i][j-1]=table[i][j];
					table[i][j]=0;
					sayac++;
				}
			}		
		}	
	

		for(k=1;k<4;k++){
			if(table[i][k]==table[i][k-1]){
				table[i][k-1]=(table[i][k])*2;
				table[i][k]=0;
				score+=table[i][k-1];

			}
			if (table[i][k-1]==2048){
				printf("                 YOU WIN            \n");
		        printf("				YOUR SCORE :%d         \n",score);
			}		
		}
		for(l=0;l<4;l++){
			for(j=3;j>0;j--){
				if(table[i][j-1]==0){
					table[i][j-1]=table[i][j];
					table[i][j]=0;
					sayac++;
				}
			}		
		}
	}	
		
		if(sayac==0){
		printf("                 GAME OVER             \n");
		printf("				YOUR SCORE :%d         \n",score);
		return 0;	
	}
	

}

void right(){
	int i,j,k,l,sayac=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			before[i][j]=table[i][j];
		}
	}
	for(i=0;i<4;i++){
		for(l=0;l<4;l++){
			for(j=0;j<3;j++){
				if(table[i][j+1]==0){
					table[i][j+1]=table[i][j];
					table[i][j]=0;
					sayac++;	
				}	
			}		
		}	
		
		for(k=2;k>=0;k--){
			if(table[i][k+1]==table[i][k]){
				table[i][k+1]=(table[i][k+1])*2;
				table[i][k]=0;
				sayac++;
				score+=table[i][k+1];
			}
			if (table[i][k+1]==2048){
				printf("                 YOU WIN            \n");
		        printf("				YOUR SCORE :%d         \n",score);
			}	
		}
		for(l=0;l<4;l++){
			for(j=0;j<3;j++){
				if(table[i][j+1]==0){
					table[i][j+1]=table[i][j];
					table[i][j]=0;
					sayac++;	
				}	
			}		
		}			
				
	}	
	if(sayac==0){
		printf("		         GAME OVER		\n");
		printf("				YOUR SCORE :%d         \n",score);
		return 0;	
	
	}
}


void up(){
	int i,j,k,l,sayac=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			before[i][j]=table[i][j];
		}
	}
	for(j=0;j<4;j++){
		for(l=0;l<4;l++){
			for(i=3;i>0;i--){
				if(table[i-1][j]==0){
					table[i-1][j]=table[i][j];
					table[i][j]=0;
					sayac++;
				}
			}		
		}	
		for(k=1;k<4;k++){
			if(table[k][j]==table[k-1][j]){
				table[k-1][j]=(table[k][j])*2;
				table[k][j]=0;
				sayac++;
				score+=table[k-1][j];
			}	
			if (table[k-1][j]==2048){
				printf("                 YOU WIN            \n");
		        printf("				YOUR SCORE :%d         \n",score);
			}		
		}
		for(l=0;l<4;l++){
			for(i=3;i>0;i--){
				if(table[i-1][j]==0){
					table[i-1][j]=table[i][j];
					table[i][j]=0;
					sayac++;
				}
			}		
		}	
	}
	if(sayac==0){
		printf("                 GAME OVER             \n");
		printf("				YOUR SCORE :%d         \n",score);
		return 0;	
	}

}


void down(){
	int i,j,k,l,sayac=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			before[i][j]=table[i][j];
		}
	}
	for(j=0;j<4;j++){
		for(l=0;l<4;l++){
			for(i=0;i<3;i++){
				if(table[i+1][j]==0){
					table[i+1][j]=table[i][j];
					table[i][j]=0;
					sayac++;
				}			
			}		
		}
		for(k=2;k>=0;k--){
			if(table[k+1][j]==table[k][j]){
				table[k+1][j]=(table[k+1][j])*2;
				table[k][j]=0;
				sayac++;
				score+=table[k+1][j];
			}	
			if (table[k+1][j]==2048){
				printf("                 YOU WIN            \n");
		        printf("				YOUR SCORE :%d         \n",score);
			}		
		}
		for(l=0;l<4;l++){
			for(i=0;i<3;i++){
				if(table[i+1][j]==0){
					table[i+1][j]=table[i][j];
					table[i][j]=0;
					sayac++;
				}			
			}		
		}
	}
	if(sayac==0){
		printf("		          GAME OVER		\n");
		printf("				YOUR SCORE :%d         \n",score);
		return 0;	
	
	}

}


void randomnumber(){
	int i,j,count=0;
	srand(time(NULL));
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(table[i][j]==0){
				count++;
			}
		}	
	}
	if(count!=0){
		while(1){
			i=rand()%4;
			j=rand()%4;
			if(table[i][j]==0){
				table[i][j]=(rand()%2+1)*2;
				("color 0C");
				
				break;
			}
		}	
	}
}

int main(){
	restart:
	table[0][0]=0;
	table[0][1]=0;
	table[0][2]=0;
	table[0][3]=0;
	table[1][0]=0;
	table[1][1]=0;
	table[1][2]=0;
	table[1][3]=0;
	table[2][0]=0;
	table[2][1]=0;
	table[2][2]=0;
	table[2][3]=0;
	table[3][0]=0;
	table[3][1]=0;
	table[3][2]=0;
	table[3][3]=0;
	score=0;	
	randomnumber();
	randomnumber();
	tablo();
	
	while(1){
		char giris;
		int i,j;
		giris = getchar();
		if(giris=='S' || giris=='s'){
			down();
			randomnumber();
			tablo();		
		}	
		else if(giris=='a' || giris=='A'){
			left();
			randomnumber();
			tablo();
		}
		else if(giris=='d' || giris=='D'){
			right();
			randomnumber();
			tablo();		
		}
		else if(giris=='w'  ||  giris=='W'){
			up();
			randomnumber();
			tablo();		
		}
		else if(giris=='E' || giris=='e'){
		printf("		        GAME OVER		\n");
		printf("				SKORUNUZ :%d         \n",score);	
		return 0;
		}
		else if(giris=='X' || giris=='x'){
			goto restart;
			
		}
		
		else if (giris=='R' || giris=='r'){
			
			for(i=0;i<4;i++){
		        for(j=0;j<4;j++){
			    table[i][j]=before[i][j];
			    
		        }
	       }
	       tablo();
			
			
		}
	}	
	return 0;
}
