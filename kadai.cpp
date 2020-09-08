#include <iostream>

double vel=50;
double rad=500;
double tang=-645;
double width=147;
double cang=0;
double ave=0;
double vr=0;
double vl=0;
double dr=0;
double dl=0;
double pi=3.14;
int main(){
	ave = vel/rad;
	cang = 2*tang*pi/180;
	if(cang<0){
		vr = vel+(width/2)*ave;
		vl = vel-(width/2)*ave;
		cang = -cang;
	}
	else if(cang>0){
		vr = vel-(width/2)*ave;
		vl = vel+(width/2)*ave;
	}
	else{
		vr = vel;
		vl = vel;
	}
	dr = vr*cang/ave;
	dl = vl*cang/ave;
	std::cout<<vr<<std::endl;
	std::cout<<vl<<std::endl;
	std::cout<<dr<<std::endl;
	std::cout<<dl<<std::endl;
	std::cout<<cang/ave<<std::endl;
}

