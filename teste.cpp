#include <stdio.h>

int main() {
	int a=5, b=6, c=2000;
	int v[10] = {0,10,20,30,40,50,60,70,80,90};
	int *pt1, *pt2, *pt3;
	int k;
	
	pt1 = &a;		//pt1 aponta para endereco de a(*pt1=5)
	pt2 = &b;		//pt2 aponta para endereco de b(*pt2=6)
	pt3 = &c;		//pt3 aponta para endereco de c(*pt3=2000)
	
	pt2 = pt1;		//pt2 aponta para endereco de pt1(*pt2=5)
	*pt3 = *pt2 + 2000;			//valor de pt3 vira 2005(5+2000) (pt3 = &c)
	
	pt1 = &v[8];	//pt1 aponta para o v[8](*pt1=80)
	
	for (k=0; k<2; k++) {		//loop que ocorre 2 vezes
		*pt1 = *pt1 -5;			//primeiro loop: pt1 aponta para v[8](*pt1=80) e v[8]=80-5 
		pt1 = pt1 - 3;			//segundo loop: pt aponta para v[8-3](*pt1=50) e v[5] = 50-5
	}							//no final pt1 vai estar apontando para v[2](*pt1=20)
	//a=5, b=6, c=2005
	//v[10] = {0,10,20,30,40,45,60,70,75,90}
}
