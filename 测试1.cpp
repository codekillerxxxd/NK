#include<stdio.h>
int max(int x,int y,int z){
	int t;
	if(x>y)
	t=x;
	else
	t=y;
	if(z>t)
	t=z;
	return(t);
} 
	int main(){
		int a,b,c,m;
		printf("����������\n");
		scanf("%d%d%d",&a,&b,&c);
		m=max(a,b,c);
		printf("���ֵΪ:%d\n",m);
	}
