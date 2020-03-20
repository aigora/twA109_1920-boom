# BOOM!

Boom! es un programa de televisión en el cual se plantean preguntas con forma de bomba, y varias posibles respuestas conectadas a la bomba por unos cables (siendo solo una la correcta). Los jugadores tienen que adivinar las respuestas correctas eliminando las falsas cortando sus cables. La bomba explota en el caso de cortar el cable de la respuesta correcta, o al sobrepasar el límite de tiempo, y consiguen ganar dicha ronda si cortan todos los cables menos el correcto, desactivando la bomba (no explota).

## Integrantes del equipo

- Lucía Meca Díaz ; @lmeca
- Ningxin Ye ; @ningxinye
- Nikita Zhukov ; @nikitazhukov2911

## Objetivos del trabajo

Nuestro objetivo con este proyecto es crear un programa capaz de simular el funcionamiento real del concurso de televisión. Esto supone crear una base de datos que guarde las preguntas y sus respectivas respuestas y asociarlas a un componente físico, la "bomba", de manera que se consiga la comunicación entre el hecho físico de "cortar" (desconectar) los cables y el funcionamiento del programa, pudiendo obtener también el efecto de "explosión" si se cumplen las condiciones necesarias para que esto ocurra. 

El usuario se encontrará en pantalla con una pregunta elegida al azar, y una serie de respuestas asociadas a los cables que se indiquen. Este programa será capaz de identificar qué decisiones toma el jugador, y procesar la respuesta deseada (bien explotando la bomba y finalizando, o continuando el programa), durante una serie de rondas o hasta que el concursante desee.

## Hardware

PC, Arduino UNO, cableado, soporte físico de la "bomba"

## Software

Programación a través del software de Arduino.

## Sensores y actuadores 
En principio, la base del proyecto será una placa electrónica de hardware para establecer las conexiones entre el microcontrolador y diferentes sensores y actuadores via diferentes cables. Una placa de circuito impreso llamada Arduino uno va a estar conectada al ordenador mediante unos cables que permitirán la transferencia de datos (en nuestro caso preguntas con posibles respuestas) a la pantalla. La placa deberá ser capaz de detectar la conexión a diferentes cables y recibir señales cuando uno se conecta o se desconecta de la última. El sistema se comunicará con el ordenador para poder cambiar preguntas una tras otra sucesivamente. 
El ordenador servirá para ver si el usuario ha desconectado el cable correcto de la placa, analizaría la señal y dependiendo de la señal recibida actuaría una "bomba" o no.
