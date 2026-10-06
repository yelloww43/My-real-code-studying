// int a[3][5] 表示a是一个3行5列的矩阵 
//二维数组的遍历需要两重循环
//初始化 
  /*    int a[][5]={             列数必须给 但是行数可以不用 
		    {0,1,2,3,4},         每一行{}后用逗号 
		    {2,3,4,5,6},         最后一行{}后逗号可不存在 
		};                        
		
		*/                   


#include<stdio.h>
int main(){
	const int size=3;
	int board[3][3];
	int i,j;
	int numofX;
	int numofO;
	int result=-1;       //-1 没人赢  1 X赢   0 O赢 
	
	//读入矩阵 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	//检查行
	for(i=0;i<size && result==-1;i++){
		numofO=numofX=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				numofX++;
			}else{
				numofO++;
			}
		}
		if(numofO==size){
			result=0;
		}else if(numofX==size){
			result=1;
		}
	}
	//检查列（其实只是i与j互换）所以理论上可以合并  自定义函数 
	for(j=0;j<size && result==-1;j++){
		numofO=numofX=0;
		for(i=0;i<size;i++){
			if(board[i][j]==1){
				numofX++;
			}else{
				numofO++;
			}
		}
		if(numofO==size){
			result=0;
		}else if(numofX==size){
			result=1;
		}
	}
	//检查对角线
	numofO=numofX=0;
	for(i=0;i<size;i++){
		if(board[i][i]==1){
			numofX++;
		}else{
			numofO++;
		}
	} 
	if(numofO==size){
		result=0;
	}else if(numofX==size){
		result=1;
	} 
	
	numofO=numofX=0;
	for(i=0;i<size;i++){
		if(board[i][size-i-1]==1){
			numofX++;
		}else{
			numofO++;
		}
	}
	if(numofO==size){
		result=0;
	}else if(numofX==size){
		result=1;
	}
	if(result=1) printf("X赢");
	else printf("O赢");
	return 0;
}

int check(int i,int j){
	int result;
	
	
	return result;
}







