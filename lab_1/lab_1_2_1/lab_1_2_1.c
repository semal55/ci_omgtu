 #include <stdio.h>
 #include <conio.h>
 #include <locale.h>
 void main ()
 {
 	setlocale(LC_ALL, "RUS");
 	int k,hour,min,sec;
 	printf ("Set k seconds \n");
 	scanf ("%d",&k);
 	hour=k/3600;
 	min=(k-h*3600)/60;
 	sec=k-h*3600-min*60;
 	printf("Hours: %d \n",hour);
 	printf("Minutes: %d \n",min);
 	printf("Seconds: %d \n",sec);
 	getche();
 }
