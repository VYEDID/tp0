#include "client.h"

int main(void)
{
	/*---------------------------------------------------PARTE 2-------------------------------------------------------------*/

	int conexion;
	char* ip;
	char* puerto;
	char* valor;

	t_log* logger; // es un log create
	t_config* config;

	/* ---------------- LOGGING ---------------- */

	// Usando el logger creado previamente
	// Escribi: "Hola! Soy un log"


	void loggearse(char* oracion){
		logger = iniciar_logger();
		log_info(logger,oracion);
		log_destroy(logger);
	}	

	loggearse("Hola! Soy un log");
	



/*	/* ---------------- ARCHIVOS DE CONFIGURACION ---------------- */

	config = iniciar_config();

	char* key = CLAVE;
	char* keyString = config_get_string_value(config,key);

	if(config_has_property(config,keyString){

		loggearse(keyString);
		ip =
	}
	
	// Usando el config creado previamente, leemos los valores del config y los 
	// dejamos en las variables 'ip', 'puerto' y 'valor'

	// Loggeamos el valor de config


	/* ---------------- LEER DE CONSOLA ---------------- */

	// leer_consola(logger);

	/*---------------------------------------------------PARTE 3-------------------------------------------------------------*/

	// ADVERTENCIA: Antes de continuar, tenemos que asegurarnos que el servidor esté corriendo para poder conectarnos a él

	// Creamos una conexión hacia el servidor
	// conexion = crear_conexion(ip, puerto);

	// Enviamos al servidor el valor de CLAVE como mensaje

	// Armamos y enviamos el paquete
	// paquete(conexion);

	// terminar_programa(conexion, logger, config);

	/*---------------------------------------------------PARTE 5-------------------------------------------------------------*/
	// Proximamente

	return 0 ;
}

t_log* iniciar_logger(void)
{

	t_log* nuevoLogger = malloc(sizeof(t_log));
	char * archivo = "tp0.log";
	char * nombreProceso = "Proceso fachero";
	bool procesoActivo = true;
	t_log_level levelInfo = LOG_LEVEL_INFO;

	nuevoLogger = log_create(archivo , nombreProceso , procesoActivo, levelInfo);

	return nuevoLogger; //probar porque falla el log create

}

t_config* iniciar_config(void)
{
	t_config* nuevo_config;
	char * path = "tp0.config"; 
	nuevo_confg = config_create(path);

	return nuevo_config;
}

/* void leer_consola(t_log* logger)
{
	char* leido;

	// La primera te la dejo de yapa
	leido = readline("> ");

	// El resto, las vamos leyendo y logueando hasta recibir un string vacío


	// ¡No te olvides de liberar las lineas antes de regresar!

}

void paquete(int conexion)
{
	// Ahora toca lo divertido!
	char* leido;
	t_paquete* paquete;

	// Leemos y esta vez agregamos las lineas al paquete


	// ¡No te olvides de liberar las líneas y el paquete antes de regresar!
	
}

void terminar_programa(int conexion, t_log* logger, t_config* config)
{
	/* Y por ultimo, hay que liberar lo que utilizamos (conexion, log y config) 
	  con las funciones de las commons y del TP mencionadas en el enunciado */
// }
