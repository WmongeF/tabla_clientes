#pragma once
#include <mysql.h>
#include <iostream>

using namespace  std;
class ConectarBD {
private: MYSQL* conectar;
public:
	void abrir_conexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "root", "wm123#", "db_empresa", 3306, NULL, 0);
	}
	MYSQL* getConectar() {
		return conectar;
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}
};

