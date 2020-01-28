#include<stdio.h>
void main()
{
	float I1=5.04e-3, I3=4.44e-3, I4=0.59e-3, I5=1.74e-3, I6=0.59e-3, I7=1.14e-3;
	float U14=8.12, U24=-0.634, U34=6.55, U12, U13;
	float Pel1_, Pel3_, Pel4_, Pel5_, Pel6_, Pel7_, P_sum;

	U12=U14-U24;
	U13=U14-U34;

	Pel1_=I1*(-U12);
	Pel3_=I3*U12;
	Pel4_=I4*U13;
	Pel5_=I5*U34;
	Pel6_=I6*(-U24);
	Pel7_=I7*(-U34);
	float Pel[2][6]={{Pel1_,Pel3_,Pel4_,Pel5_,Pel6_,Pel7_},{1,3,4,5,6,7}};

	//P_sum=Pel1_+Pel3_+Pel4_+Pel5_+Pel6_+Pel7_;
	P_sum=0;
	for(int i=0;i<6;i++){P_sum=P_sum+Pel[0][i];}

	printf("Bilance: %.3f, W\n",P_sum);
	printf("Bilance: %e, W\n", P_sum);
	for(int i=0;i<6;i++)
		{
		if(Pel[0][i]>0)
			{
				printf("%.f. Saliktais elements nostrada ka pateretajs\n",Pel[1][i]);
			}
		else
			{
				printf("%.f. Saliktais elements nostrada ka avots\n",Pel[1][i]);
			}
		}
}
