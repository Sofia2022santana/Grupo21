#pragma once

#include <iostream> //cin cout
#include <stdlib.h> //memoria dinamica
#include <string>
#include <string.h>
#include <time.h>

//declaración de enum
enum COBERTURA { GALENO = 1, OSDE, OMINT, PAMI };
enum SEXO { masculino = 1, femenino, otro };
enum ESTADOPACIENTE { vivo = 1, internado, fallecido, archivado };
enum ESPECIALIDAD { odontologia = 1, cardiologia, pediatria, clinico, kinesiologia };

//declaracion de structs
struct FECHA
{
	int Dia = 0, Mes = 0, Año = 0, Hora = 0, Minuto = 0, Segundo = 0;
};

struct PACIENTE
{
	string Nombre, Apellido, Telefono, Direccion, FechaNacimiento;
	char DNI  = 0;
	COBERTURA Cobertura;
	SEXO Sexo;
	
};

struct MEDICO
{
	ESPECIALIDAD Especialidad;
	string Nombre, Apellido, DNI, Telefono;
	PACIENTE paciente;
};

struct ULTIMACONSULTA
{
	COBERTURA cobertura;
	PACIENTE paciente;
	ESPECIALIDAD especialidad;
	FECHA *UltimaConsulta;
};

struct CONTACTO //revisar
{
	PACIENTE paciente;
	MEDICO medico;
};


//declaracion de funciones
//Los que fueron citados para hace más de diez años y no concurrieron a la consulta.
//a.Son irrecuperables.
//b.Sus historias clínicas deben trasladarse a archivo y en el sistema debe constar,
//junto con el documento el rótulo “archivado”.

// que quiero saber? el paciente que fue citado hace mas de diez años y no concurrio a la consulta
// datos que necesito: el struct paciente, el struct fecha, el struct de consulta

int encontrarPaciente();
//Controlo que el paciente este en la lista de pacientes
//controlo la fecha de su ultima consulta
//controlo si la consulta fue hace mas de 10 años
//controlo si concurrio a la ultima consulta
//si concurrio lo guardo en pacientes archivados, ademas abro un archivo
//si no concurrio lo guardo en pacientes irrecuperables


