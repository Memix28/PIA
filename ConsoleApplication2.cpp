﻿#include<iostream>
#include<fstream>
#include<string.h> 
#include<locale.h>
#include<string>

using namespace std;

using namespace std;
int n = 1;

bool ValCodigo(string entradaC)
{
	bool Val = true;
	int TamTXT = entradaC.size();//Bool que valida el tamaño del texto y para que sea de 4 digitos
	if (TamTXT != 4) {
		Val = false;
	}
	for (int j = 0; j < TamTXT; j++)
	{
		if (entradaC[j] <= 47 || entradaC[j] >= 58)//Validacion para Codigo ASCII
		{
			Val = false;
			break;
		}
	}
	return Val;
};

int k = 0, i = 0;

int main()
{

	
	struct Lista {
		string Codigo;
		string Detalles;
		string ADL;
		string Clasif;
		string Charact;
		string Descrip;
		string Gen;
		float Precio,Total;
		int Orden, NumOrd;
		int Tam = ADL.size();
	} Tienda[100];
		Lista
		lista[5];
	int j, Opcion, Borrar;

	setlocale(LC_ALL, "SPANISH");

	while (true)
	{
		
	Menu:
		system("cls");
		cout << "Menu" << endl << endl;
		cout << "1) Agregar Articulo" << endl;
		cout << "2) Lista de Articulos Vigentes" << endl;
		cout << "3) Eliminar Articulo " << endl;
		cout << "4) Limpiar Pantalla" << endl;
		cout << "5) Salir del Programa" << endl;
		cout << "Que operacion desea realizar: ";
		cin >> Opcion;
		cout << " " << endl;
		system("pause");
		
		switch (Opcion)
		{
		case 1:
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "" << endl;
				cout << "Numero de orden:  ";
				lista[i].NumOrd = i + 1;
				cout << lista[i].NumOrd ;
				cout << "" << endl<<endl;
				cout << "Nombre del videojuego: ";
				cin.ignore();
				getline(cin, lista[i].Detalles);
				cout << "" << endl;
				cout << "Año de lanzamiento: "; 
				cin >> lista[i].ADL;
				while (!ValCodigo(lista[i].ADL)) {
					cout << "Porfavor ingrese un año correcto: ";
					cin >> lista[i].ADL;
				}
				cout << "" << endl;
				cout << "Clasificacion: ";
				cin.ignore();
				getline(cin, lista[i].Clasif);
				cout << "" << endl;
				cout << "Caracteristicas: ";
				cin.ignore();
				getline(cin, lista[i].Charact);
				cout << "" << endl;
				cout << "Descripcion: ";
				getline(cin, lista[i].Descrip);
				cout << "" << endl;
				cout << "Genero: ";
				getline(cin, lista[i].Gen);
				cout << "" << endl;
				cout << "Escriba el precio del producto: ";
				cin >> lista[i].Precio;
				cout << " "<< endl;
				while (lista[i].Precio == NULL || lista[i].Precio == 0) { //Este while pedira el codigo mientras este sea incorrecto tomando en cuenta que la lista sea igual a 0
					cout << "Error, Por favor introduzca un precio correcto. " << endl;
					cin.clear();
					cin.ignore();
					cin >> lista[i].Precio;
				}

				lista[i].Total = lista[i].Precio + (lista[i].Precio * 0.16);
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				system("pause");
				system("cls");
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "El numero de su orden es:  " << lista[i].NumOrd<< endl;
				cout << "Nombre del videojuego: " << lista[i].Detalles << endl;
				cout << "Año de lanzamiento: " << lista[i].ADL << endl;
				cout << "Clasificacion: " << lista[i].Clasif << endl;
				cout << "Descripcion: " << lista[i].Descrip << endl;
				cout << "Genero: " << lista[i].Gen << endl;
				cout << "Precio Unitario: $" << lista[i].Precio << endl;
				cout << "El precio total con impuesto incluido es de: $" << lista[i].Total << endl;
				cout << " " << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				i++;//Evita que se solapen las listas 
				k++;
				system("pause");
				system("cls");
			break;

		case 2:
			system("cls");
			if (k == 0) {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				cout << "Aun no hay ordenes registradas" << endl<< endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
				system("pause");
				system("cls");
				break;
			}
			for (int i = 0; i < k; i++) {//imprime todas las listas guardadas 
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				cout << "Numero de Orden: "<< lista[i].NumOrd << endl;
				cout << "Nombre del videojuego: " << lista[i].Detalles << endl;
				cout << "Año de lanzamiento: " << lista[i].ADL << endl;
				cout << "Clasificacion: " << lista[i].Clasif << endl;
				cout << "Descripcion: " << lista[i].Descrip << endl;
				cout << "Genero: " << lista[i].Gen << endl;
				cout << "Total: $"<< lista[i].Total << endl << endl;
				cout << " " << endl;
			}
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
			system("pause");
			system("cls");
			break;

		case 3:
			system("cls"); 
			cout << "¿Seguro que desea eliminar una Orden?\n (Si)=1  (No)=2\n"; int volver;//
			cin >> volver;
			if (volver == 2) {
				goto Menu;
			}
			cout << " " << endl << endl;

            //Se pone en caso de que no haya ordenes registradas saltara este mensaje
			if (k == 0) {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
				cout << "Aun no hay ordenes registradas" << endl<< endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
				system("pause");
				system("cls");
				break;
			}
			cout << " " << endl << endl;
			cout << "Ingrese el numero de orden a eliminar" << endl;//muestra las ordenes guardadas para eliminarlas despues
			
			for (int i = 0; i < k; i++) {
				cout << "Numero de Orden: " << lista[i].NumOrd << endl;
				cout << "Nombre del videojuego: " << lista[i].Detalles << endl;
				cout << "Año de lanzamiento: " << lista[i].ADL << endl;
				cout << "Clasificacion: " << lista[i].Clasif << endl;
				cout << "Descripcion: " << lista[i].Descrip << endl;
				cout << "Genero: " << lista[i].Gen << endl;
				cout << "Total: $" << lista[i].Total << endl << endl;
				cout << " " << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

			}
			cin >> Borrar; //se encarga de borrar la lista seleccionada
			for (int i = Borrar - 1; i < k; i++) {
				cout << "Numero de orden: " << lista[i].NumOrd << endl;
				lista[i].Detalles = lista[i + 1].Detalles;
				lista[i].ADL = lista[i + 1].ADL;
				lista[i].Clasif = lista[i + 1].Clasif;
				lista[i].Descrip = lista[i+1].Descrip;
				lista[i].Gen = lista[i + 1].Gen;
				lista[i].Total = lista[i+1].Total;

				cout << "Se ha eliminado la lista correctamente ";
				system("pause");
			}
			k = k - 1;
			system("cls");
			break;

		case 4:
			system("cls");
			break;

		case 5:

			for (i = 0; i < k; i++)
			{

				ofstream ordenes("Ordenes.txt", ios::app);
				if (!ordenes)
				{
					cout << "Error opening file" << endl;
				}
				ordenes <<endl << "Numero de Orden: " << lista[i].NumOrd << endl
					<< "Nombre del videojuego: " << lista[i].Detalles << endl
					 << "Año de lanzamiento: " << lista[i].ADL << endl
					 << "Clasificacion: " << lista[i].Clasif << endl
					 << "Descripcion: " << lista[i].Descrip << endl
					 << "Genero: " << lista[i].Gen << endl
					 << "Total: " << lista[i].Total << endl << endl;
			}
			cout << "Las listas fueron guardadas";

			exit(0);

			break;
		default:
			cout << "Opcion no valida, favor de escoger una de las opciones mencionadas." << endl;
			cin.clear();
			cin.ignore();
			cin >> Opcion;
			break;
		}
	}return 0;

}
