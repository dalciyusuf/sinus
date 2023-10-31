#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main() {
	
	float a,b,alan,aci,anaaci;
	
	printf("kosegenlerin uzunlugunu sirasi ile giriniz:	");
	scanf("%f %f",&a,&b);
	
	printf("kosegenler arasi aciyi giriniz:	");
	scanf("%f",&aci);
	anaaci = aci*(pi/180);
	// acilar radyan cinsinden yazýlýyor fonksiyonun içine
	alan = a*b*sin(anaaci)*(0.5);
	printf("alan= %f",alan);
	
	
	return 0;
}
