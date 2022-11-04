#include "funciones.h"


//implementacion de funciones
int encontrarPaciente(PACIENTE paciente, ULTIMACONSULTA UltimaConsulta)
{
		char DNIAUX = 0;
		cout << "Ingrese el DNI del paciente";
		cin >> DNIAUX;
  
		//comparo el DNIAUX con el de los structs para controlar si el paciente esta cargado en la lista

			while (DNIAUX > 0) //puedo hacerlo con un do while
			{
				if (DNIAUX == paciente.DNI) //comparo el dni de la lista con el dni que me dieron por consola
				{
					cout << "Se encontró el paciente";
					//controlo la fecha de su ultima consulta

					time_t fechaHoy = time(NULL);
					srand(time(NULL));
					UltimaConsulta= 1+ rand%
					// Quiero que la UltimaConsulta me de una fecha random para comparar cuanto tiempo paso
					time_t diferencia = fechaHoy - ;

					if (diferencia> 10 años)



				}

			}

}

//controlo la fecha de su ultima consulta
//controlo si la consulta fue hace mas de 10 años
//controlo si concurrio a la ultima consulta
//si concurrio lo guardo en pacientes archivados, ademas abro un archivo
//si no concurrio lo guardo en pacientes irrecuperables
