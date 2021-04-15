#include "Cliente.h"
#include <iostream>
using namespace  std;
void ins_c();
void mos_c();
void mod_c();
void eli_c();

int main() {
	int x;
	do {
		system("cls");
		cout << "MENU PRINCIPAL\n";
		cout << "1-Insertar Cliente\n";
		cout << "2-Mostrar Cliente\n";
		cout << "3-Modificar Cliente\n";
		cout << "4-Eliminar Cliente\n";
		cout << "5-Salir\n";
		cin >> x;
		switch (x)
		{
		case 1:
			ins_c();
			break;
		case 2:
			mos_c();
			break;
		case 3:
			mod_c();
			break;
		case 4:
			eli_c();
			break;
		}
	} while (x != 5);
	system("pause");
	return 0;
}

void ins_c()
{
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	cin.ignore();
	cout << "Ingrese Nit:";
	getline(cin, nit);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";
	cin >> fecha_nacimiento;

	Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);

	c.crear();

	system("pause");
}

void mos_c()
{
	Cliente c = Cliente();
	c.leer();
	system("pause");
}

void mod_c()
{
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono, id_cliente;
	system("cls");
	cout << "Ingrese el id a modificar: ";
	cin >> id_cliente;
	cin.ignore();
	cout << "Ingrese el nit: ";
	getline(cin, nit);
	cout << "Ingrese el nombre: ";
	getline(cin, nombres);
	cout << "Ingrese el apellido: ";
	getline(cin, apellidos);
	cout << "Ingrese la direccion: ";
	getline(cin, direccion);
	cout << "Ingrese el telefono: ";
	cin >> telefono;
	cin.ignore();
	cout << "Ingrese la fecha de nacimiento: ";
	getline(cin, fecha_nacimiento);
	Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
	c.modificar(id_cliente);
	system("pause");
}

void eli_c()
{
	int id_cliente;
	system("cls");
	cout << "Ingrese el id a eliminar: ";
	cin >> id_cliente;
	cin.ignore();
	Cliente c = Cliente();
	c.eliminar(id_cliente);
	system("pause");
}
