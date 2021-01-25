#include <stdio.h>

int main(){
 long int ori;
 long int board[205][205] = {0};
 long int a,b,n;
 long int x,y,z;
 
 scanf("%ld %ld\n", &n, &ori);
 
 
 for(long int i = 1; i <= ori; i++){
 	scanf("%ld %ld", &a, &b);
 	board[a][b]++;
 }
 
 scanf("%ld\n", &z);
 for(long int i = 0; i < z; i++){
 	long int knight = 0;
 	long int bishop = 0;
 	long int rook = 0;
 	
 	scanf("%ld %ld", &x, &y);

 	 //knight = 1
 	 if(x+1 <= n && y-2 >= 1 && board[x+1][y-2] == 1) knight++; //L 1bawah 2kiri
 	 if(x+2 <= n && y-1 >= 1 && board[x+2][y-1] == 1) knight++; //L 1kiri 2bawah
 	 if(x+2 <= n && y+1 <= n && board[x+2][y+1] == 1) knight++; //L 1kanan 2bawah
 	 if(x+1 <= n && y+2 <= n && board[x+1][y+2] == 1) knight++; //L 1bawah 2kanan
 	 if(x-1 >= 1 && y+2 <= n && board[x-1][y+2] == 1) knight++; //L 1atas 2kanan
 	 if(x-2 >= 1 && y+1 <= n && board[x-2][y+1] == 1) knight++; //L 1kanan 2atas
 	 if(x-2 >= 1 && y-1 >= 1 && board[x-2][y-1] == 1) knight++; //L 1kiri 2atas
 	 if(x-1 >= 1 && y-2 >= 1 && board[x-1][y-2] == 1) knight++; //L 1atas 2kiri
	
 	//bishop = 2
 	for(long int j = 1; j <= n; j++){ //diagonal kiri atas
 		if(x-j >= 1 && y-j >= 1){
 			if(board[x-j][y-j] == 1){
 			bishop++;
 			break;
			 }
 			
		 }
	}
	for(long int j = 1; j <= n; j++){ //diagonal kanan atas
 		if(x-j >= 1 && y+j <= n){
 			if(board[x-j][y+j] == 1){
 			bishop++;
 			break;
			}
		}
	}
	for(long int j = 1; j <= n; j++){ //diagonal kanan bawah
		if(x+j <= n && y+j <= n){
			if(board[x+j][y+j] == 1){			
 			bishop++;
 			break;
			}
		}
	}
	for(long int j = 1; j <= n; j++){ //diagonal kiri bawah
		if(x+j <= n && y-j >= 1){
			if(board[x+j][y-j] == 1){
 			bishop++;
 			break;
			}
		}
	}
	
 	//rook = 3
 	for(long int j = 1; j <= n ; j++){ //vertical keatas
 		if(x-j >= 1){
 			if(board[x-j][y] == 1){
 			rook++;
 			break;
			 }
		 }
	 }
	for(long int j = 1; j <= n; j++){ //vertical kebawah
		if(x+j <= n){
			if(board[x+j][y] == 1){
 			rook++;
 			break;
			}
		 }
	}
	for(long int j = 1; j <= n; j++){ //horizontal kekanan
		if(y+j <= n){
			if(board[x][y+j] == 1){
 			rook++;
 			break;
			}
		 }
	}
	for(long int j = 1; j <= n; j++){ //horizontal kekiri
		if(y-j >= 1){
			if(board[x][y-j] == 1){
 			rook++;
 			break;
			}
		 }
	}

 	if(knight >= rook && knight >= bishop){
 		printf("1\n");
 	}
 	else if(bishop >= rook){
 		printf("2\n");
	 }
	else{
		printf("3\n");
	}	 	
 }
 return 0;
}
