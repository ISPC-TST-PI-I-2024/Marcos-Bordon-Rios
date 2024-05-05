d:\Users\LENOVO\Desktop\ISPC\TST\Proyecto Integrador\3. Monorepositorio\Marcos-Bordon-Rios\z. Recursos\Imágenes\LogoPI.png

##Tecnicatura Superior en Telecomunicaciones

##Materia: Proyecto Integrador

##Profesor: Cristian Gonzalo Vera

##Alumno: Marcos Bordón Rios

##Trabajo Práctico 2: Fundamentos de Programación IoT y Módulos de Desarrollo

**Objetivos**
    1. Afianzar fundamentos de programación en C/C++.
    2. Afianzar fundamentos de herramientas de desarrollo (simuladores, IDE).
    3. Afianzar fundamentos de sensores y actuadores básicos. 

**Desarrollo**
    Ejercicio 1: Manejo de entradas digitales y control de relés.
        OBJETIVOS:
        1. Configurar y leer entradas digitales en Arduino.
        2. Enviar y recibir datos a través del monitor serie.
        3. Controlar relés como salidas digitales basados en la entrada de datos del monitor serie.
        4. Implementar un sistema de control básico en Proteus utilizando botones y relés.
        DESARROLLO:
        1. Configura el Arduino para leer los estados de dos botones conectados a dos pines digitales.
        2. Establece una comunicación serial para recibir comandos que controlen un grupo de relés.
        3. Los relés deberán estar conectados a otros pines digitales y controlarán luces LED simuladas en Proteus.
        4. Programa el Arduino para que, al recibir ciertos comandos a través del monitor serie,
           active o desactive los relés correspondientes.

    Ejercicio 2: Lectura de sensores resistivos.
        OBJETIVOS:
        1. Aprender a leer valores analógicos de un potenciómetro.
        2. Convertir valores analógicos en datos digitales comprensibles.
        3. Visualizar y monitorear cambios en el valor del potenciómetro a través del monitor serie.
        4. Simular la conexión y lectura de un sensor resistivo en Proteus.
        DESARROLLO:
        1. Conecta un potenciómetro a un pin analógico del Arduino.
        2. Utiliza la función analogRead() para leer los valores del potenciómetro.
        3. Envía los valores leídos al monitor serie para visualizarlos.
        4. Implementa un sistema de visualización en Proteus para representar los valores leídos del potenciómetro.
        
    Ejercicio 3: Interacción con un Sensor Digital (DHT11)
        OBJETIVOS:
        1. Integrar y configurar el sensor de temperatura y humedad DHT11 con Arduino.
        2. Leer datos digitales de un sensor ambiental.
        3. Interpretar y procesar datos de temperatura y humedad.
        4. Mostrar los datos procesados en el monitor serie y simular esta configuración en Proteus.
        DESARROLLO:
        1. Conecta el sensor DHT11 a un pin digital en el Arduino.
        2. Utiliza una biblioteca adecuada para leer los datos de temperatura y humedad del sensor.
        3. Programa el Arduino para enviar estos datos al monitor serie, mostrando la temperatura y la humedad ambiental.
        4. Configura el simulador Proteus para modelar esta interacción, utilizando representaciones visuales 
           de los datos recibidos del DHT11.

**Entrega**
    • Fecha de Entrega: La fecha de entrega será el último día de la Semana 4 (05/05),
        antes de las 23:59 horas.