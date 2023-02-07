#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *w,int *x,int *y,int *z){
    *w=rand()%4+1;
    *x=*y=*z=*w;
    while(*w==*x)
        *x=rand()%4+1;
    while(*y==*w || *y==*x)
        *y=rand()%4+1;
    while(*z==*w || (*z==*x ||*z==*y))
        *z=rand()%4+1;
    switch(*w){
        case 1: {
            *w=50;
            break;}
        case 2: {
            *w=100;
            break;}
        case 3: {
            *w=500;
            break;}
        case 4: {
            *w=1000;
            break;}
        
    }
    switch(*x){
        case 1: {
            *x=50;
            break;}
        case 2: {
            *x=100;
            break;}
        case 3: {
            *x=500;
            break;}
        case 4: {
            *x=1000;
            break;}
        
        }
    switch(*y){
        case 1: {
            *y=50;
            break;}
        case 2: {
            *y=100;
            break;}
        case 3: {
            *y=500;
            break;}
        case 4: {
            *y=1000;
            break;}
        
        }
    switch(*z){
        case 1: {
            *z=50;
            break;}
        case 2: {
            *z=100;
            break;}
        case 3: {
            *z=500;
            break;}
        case 4: {
            *z=1000;
            break;}
        
        }
}