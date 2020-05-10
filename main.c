#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "ua");
	int abuse;
	//zavdanya1();
	//zavdanya3();
	

	printf("Введiть номер завдання: (1-3)");
	scanf("%d", &abuse);

	if(abuse == 1) 
	{
		zavdanya1();
	}
	else if (abuse == 2) 
	{
		zavdanya2();
	} 
	else if (abuse == 3) 
	{
		zavdanya3();
	}
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}


	system("pause");
	return 0;


}

int zavdanya1() 
{
	
	float a, b, modul, sym, difference;

	printf("Введiть 1-е дiйсне число: ");
	scanf("%f", &a);
	printf("Введiть 2-е дiйсне число: ");
	scanf("%f", &b);

	modul = fmod(a,b);
	difference = b-a;
	sym = a+b;

	printf("Залишок вiд дiлення 1-го числа на 2-е: %f \nРiзниця 2-го на 1-го числа: %f \nСума чисел: %f\n\n\n",modul,difference,sym);	


	
	return 0;

	
}

int zavdanya3() 
{
	int x,y,z;
	float a;

	printf("Введiть цiле число x: ");
	scanf("%d",&x);
	printf("Ввкдiть цiле число y: ");
	scanf("%d",&y);
	printf("Ввкдiть цiле число z: ");
	scanf("%d", &z);


	a=(1+y)*((x+((y)/(pow(x,2)+4)))/(exp(-x-2)+((1)/(pow(x,2)+4))));

	printf("Обчислення значення функцiї: \n (1+y)*((x+((y)/(x^2+4)))/(e-x-2+((1)/(x^2+4))))=%f, де x=%d, y=%d, z=%d \n\n\n", a,x,y,z);


	

	return 0;

	
}

int zavdanya2() 
{
	const int a=25,b=52,c=-9;
	float y;

	y = ((5*a-b+pow((c),2))/(2+(c)))+1;

	printf("((5*a-b+(c)^2)/(2+(c)))+1= %f, де а=%d, b=%d, c=%d \n\n\n\n\n",y,a,b,c);





	return 0;

	

}
