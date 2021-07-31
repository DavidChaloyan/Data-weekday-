#include "hider.hpp"
int afterYear(int day,int month,int year){
        //function that calculate days since your input year until your input month,day 
	int res=0;
	res+=day;
	month-=1;
	if(year%4==0 && (year%100!=0 || year%400==0)){
			if(month==1) res+=31;
                        else if(month==2) res+=60;
			else if(month==3) res+=91;
			else if(month==4) res+=121;				
			else if(month==5) res+=152;
			else if(month==6) res+=182;
			else if(month==7) res+=213;
			else if(month==8) res+=244;
			else if(month==9) res+=274;
			else if(month==10) res+=305;
			else if(month==11) res+=335;
			else if(month==12) res+=366;
        } else {
			
			if(month==1) res+=31;
                        else if(month==2) res+=59;
			else if(month==3) res+=90;
			else if(month==4) res+=120;				
			else if(month==5) res+=151;
			else if(month==6) res+=181;
			else if(month==7) res+=212;
			else if(month==8) res+=243;
			else if(month==9) res+=273;
			else if(month==10) res+=304;
			else if(month==11) res+=334;
			else if(month==12) res+=365;
	}
	return res;
}
