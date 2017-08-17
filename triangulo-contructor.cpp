#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class triangulo
{
	private:
		int a, b, c;
		int perimetro;
		float area;
		
	public:
		triangulo ()
		{
			a = 0;
			b = 0;
			c = 0;
		}
		triangulo (int x, int y, int z)
		{
			a = x;
			b = y;
			c = z;
		}
		void leer ()
		{
			cout << "Entre los 3 lados del trinagulo: ";
			cin >>a >> b >>c;
			cout << endl;
						
		}
		void calc_perimetro ()
		{
			perimetro = a+b+c;
			
		}
		void calc_area ()
		{
			float s;
			s= (a+b+c)/2.0;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
						
		}
		void imprimir ()
		{
			cout << "Los lados del trinagulo son los siguintes: " << a << " " << b << " " << c << endl;
			cout << "EL perimetro del triangulo es: " << perimetro << endl;
			cout << "El area del trinagulo es: " << area << endl;
			
		}
	
};



int main ()
{
	triangulo e;
	
	cout << "Las funciones de un triangulo" << endl;
	
	e.leer();
	e.calc_perimetro();
	e.calc_area();
	e.imprimir();
	
	system("pause");
	return 0;
	
}
