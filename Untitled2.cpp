#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
 using namespace std;
 int main(){
 	srand(time(0));
 	int v[50];
 	for (int i=0; i <50; i++) {
 		v[i]=rand()%10; 
 		
	 }
	 double d[50];
 	for (int i=0; i < 50; i++) {
 		cout <<" v["<<i<<"="<< v[i] << endl;
	 }
	  	for (int i=0; i <50; i++) {
 		d[i]=rand()%10*0.357; 
 		
	 }
	 cout <<endl;
 	for (int i=0; i < 50; i++) {
 		cout <<" d["<<i<<"="<< d[i] << endl;
	 }
	 
	 
	 char s[50];
	  	for (int i=0; i <50; i++) {
 		s[i] = (char)rand()%50+'a'; 
 		
	 }
	 cout <<endl;
 	for (int i=0; i < 50; i++) {
 		cout <<" s["<<i<<"="<< s[i] << endl;
	 }
	 
 	return 0;	
 }
