![alt text](D.%20Presentación/LogoPI.png)  
### **Tecnicatura Superior en Telecomunicaciones**  
#### **Materia: Proyecto Integrador**  
#### **Profesor: Cristian Gonzalo Vera**  
#### **Alumno: Marcos Bordón Rios**  
---   
### **Resumen del repositorio actual: TP3 - Transductores Binarios.**   
  
**Objetivos**  
• Afianzar fundamentos de programación en C/C++.  
• Afianzar fundamentos de herramientas de desarrollo (simuladores, IDE).  
• Afianzar fundamentos de sensores y actuadores básicos.  
  
**Desarrollo**  
*Ejercicio 1: Manejo de entradas digitales y control de relés.*  
OBJETIVOS:  
• Configurar y leer entradas digitales en Arduino.  
• Enviar y recibir datos a través del monitor serie.  
• Controlar relés como salidas digitales basados en la entrada de datos del monitor serie.  
• Implementar un sistema de control básico en Proteus utilizando botones y relés.  
  
DESARROLLO:  
• Configura el Arduino para leer los estados de dos botones conectados a dos pines digitales.  
• Establece una comunicación serial para recibir comandos que controlen un grupo de relés.  
• Los relés deberán estar conectados a otros pines digitales y controlarán luces LED simuladas en Proteus.  
• Programa el Arduino para que, al recibir ciertos comandos a través del monitor serie, active o desactive los relés correspondientes.  
  
*Ejercicio 2: Lectura de sensores resistivos.*  
OBJETIVOS:  
• Aprender a leer valores analógicos de un potenciómetro.  
• Convertir valores analógicos en datos digitales comprensibles.  
• Visualizar y monitorear cambios en el valor del potenciómetro a través del monitor serie.  
• Simular la conexión y lectura de un sensor resistivo en Proteus.  
  
DESARROLLO:  
• Conecta un potenciómetro a un pin analógico del Arduino.  
• Utiliza la función analogRead() para leer los valores del potenciómetro.  
• Envía los valores leídos al monitor serie para visualizarlos.  
• Implementa un sistema de visualización en Proteus para representar los valores leídos del potenciómetro.  
  
*Ejercicio 3: Interacción con un Sensor Digital (DHT11).*  
OBJETIVOS:  
• Integrar y configurar el sensor de temperatura y humedad DHT11 con Arduino.  
• Leer datos digitales de un sensor ambiental.  
• Interpretar y procesar datos de temperatura y humedad.  
• Mostrar los datos procesados en el monitor serie y simular esta configuración en Proteus.  
  
DESARROLLO:  
• Conecta el sensor DHT11 a un pin digital en el Arduino.  
• Utiliza una biblioteca adecuada para leer los datos de temperatura y humedad del sensor.  
• Programa el Arduino para enviar estos datos al monitor serie, mostrando la temperatura y la humedad ambiental.  
• Configura el simulador Proteus para modelar esta interacción, utilizando representaciones visuales de los datos recibidos del DHT11.  
  
**Entrega**  
• Fecha de Entrega: La fecha de entrega será el último día de la Semana 4 (05/05), antes de las 23:59 horas.  
