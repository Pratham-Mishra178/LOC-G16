​#​include​ ​<​stdio.h​> 
 ​#​include​ ​<​stdlib.h​> 
 ​int​ ​find_Num​(​int​); 
 ​int​ ​main​() 
 ​{ 
 ​    ​int​ num; 
 ​    ​printf​(​"​Enter a number to check odd or even​\n​"​); 
 ​    ​scanf​(​"​%d​"​,&num); 
 ​    ​find_Num​(num); 
 ​    ​return​ ​0​; 
 ​} 
 ​//​create function 
 ​int​ ​find_Num​(​int​ num){​//​function definition 
 ​if​(num%​2​==​0​){ 
 ​    ​printf​(​"​\n​%d​ is an even number​"​,num); 
 ​} 
 ​else​{ 
 ​    ​printf​(​"​\n​%d​ is an odd number​"​,num); 
 ​} 
 ​}