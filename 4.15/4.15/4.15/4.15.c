#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	//FV ＝ PV×（1 ＋ R）n 次方FV 為期末本利和，PV 為期初本金，R 為每期利率，n 為期數
	int i;
	double d=10.0,fv;
	for (i = 0; i < 5; i++)
	{
		fv = 5000 * pow((1 + d), 15);
		printf("If rate is %.1f , FV=%.2f\n", d, fv);
		d = d + 0.5;
	}
	system("pause");
	return 0;
}