#include<iostream>
using namespace std;
int main()
{
	int x[3][2]={{0,1},{2,3},{3,4}};
	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<2;j++)
		{
			cout<<"ELEMENTS ARE x["<<i<<"]["<<j<<"]:";
			cout<<x[i][j]<<endl;
		}
	}
	return 0;
}
