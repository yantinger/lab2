#include"bmi.h"

int main()
{
float H,W;

BMI a;
ifstream infile("file.in",ios::in);
ofstream file_out("file.out",ios::out);
while(infile>>H>>W)
{
a.setheight(H);
a.setweight(W);
if(H==0&&W==0) exit(0);

a.calbmi();
a.bmirange();
file_out<<a.getbmi()<<"\t"<<a.comment()<<endl;




}




infile.close();
file_out.close();
return 0;



}
