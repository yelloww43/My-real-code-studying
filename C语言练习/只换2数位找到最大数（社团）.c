#include<stdio.h>
void ret(int d[],int i,int cnt);

int main(){
	int a;
	scanf("%d",&a);
	int i,j;
	int t=a;
	int cnt=0;
	int digit=1;
	if(a==0){
	printf("%d",a);
	return 0; 
    }
	while(t>0){
		t/=10;
		cnt++; 
	}
	int d[10];
	//printf("%d\n",cnt);
	for(i=0;i<cnt-1;i++){
		digit*=10;
	}
	//printf("%d\n",digit);
	 
    for(i=0;i<cnt;i++){
		t=a;
		a%=digit;
    	t/=digit;
    	digit/=10; 
    	d[i]=t;
    	//printf("%d %d %d\n",t,a,d[i]);
	}
	int exc1=-1,exc2=-1;
	for(i=0;i<cnt;i++){
		int big=d[i];
		int end=-1;
		for(j=i+1;j<cnt;j++){
			if(d[j]>big){
				big=d[j];
				end=j;
				//printf("here");
			}
		}
		if(end!=-1){
			exc1=i;
			exc2=end;
			break;
		}
		}
		//printf("%d %d\n",exc1,exc2);
	int temp=d[exc1];
	d[exc1]=d[exc2];
	d[exc2]=temp;
	//printf("here");
	digit=1;
	int sum=0;
	for(i=0;i<cnt;i++){
		ret(d,i,cnt);
	}
	for(j=0;j<cnt;j++){	
		sum+=d[j];
		//printf("%d\n",sum);
    }
	
	printf("%d",sum);
	
	return 0;
}
void ret(int d[],int i,int cnt){
	int j;
	int digit=1;
	for(j=0;j<cnt-i-1;j++){
		digit*=10;
	}
	d[i]*=digit;
}





