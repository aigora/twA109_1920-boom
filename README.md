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

PC, Arduino UNO, cableado, LEDs de distintos colores, protoboard, resistencias y pulsadores.

## Software

Programación en código C, utilizando Dev C++.

## Sensores y actuadores 
En principio, la base del proyecto será una placa electrónica de hardware para establecer las conexiones entre el microcontrolador y diferentes sensores y actuadores via diferentes cables. Una placa de circuito impreso llamada Arduino UNO va a estar conectada al ordenador mediante unos cables que permitirán la transferencia de datos (en nuestro caso, preguntas con posibles respuestas) a la pantalla. A través de la placa, se recogerá la opción elegida por el usuario mediante el pulso de un botón asociado a dicha opción. El programa en C utilizará esos datos, y consecuentemente encenderá un LED que indique que la respuesta es correcta, u otro que indique que la respuesta es incorrecta. El ordenador mostrará en pantalla a su vez si la opción elegida es la correcta o no, y el bote acumulado.

- **LEDS**: Un LED es un diodo emisor de luz, es decir, un tipo particular de diodo que emite luz al ser atravesado por una corriente eléctrica. Los diodos (emisor de luz, o no) son unos de los dispositivos electrónicos fundamentales. Tienen polaridad, es decir, solo dejan pasar la corriente en un sentido. Por tanto, tenemos que conectar correctamente la tensión al dispositivo. Superado cierto nivel de tensión, es necesario asociarlo a una resistencia para asegurarnos de que no se destruye el diodo.

- **RESISTENCIAS**: Se le denomina resistencia eléctrica a la igualdad de oposición que tienen los electrones al desplazarse a través de un conductor. Es un dispositivo cuya función es la de oponerse al paso de corriente eléctrica en un circuito. Esta característica de oposición al paso de la corriente eléctrica, produce una serie de efectos de los cuales podemos aprovecharnos y por los cuales las resistencias eléctricas son utilizadas.

- **PROTOBOARD**: Es un tablero con orificios que se encuentran conectados eléctricamente entre sí de manera interna, habitualmente siguiendo patrones de líneas, en el cual se pueden insertar componentes electrónicos y cables para el armado y prototipado de circuitos electrónicos y sistemas similares.

- **PULSADORES**: Es un dispositivo utilizado para realizar una función que pueda estar asociada a los dos valores que puede tomar el pulsador (HIGH y LOW). Los botones son de diversas formas y tamaños, y se encuentran en todo tipo de dispositivos, aunque principalmente en aparatos eléctricos y electrónicos. Los botones son por lo general activados, al ser pulsados con un dedo. Permiten el flujo de corriente mientras son accionados. Cuando ya no se presiona sobre él vuelve a su posición de reposo.

## Funciones principales

Las principales funciones que vamos a utilizar son:

- Función _¨imprimir_pregunta¨_: Dentro de esta función, va a estar un comando _switch_ que señalará una de las preguntas de la base de datos randomizada con la función _srand()_. Cada pregunta recibirá una serie de respuestas leídas mediante los pulsadores físicos. Una vez obtenida la opción del usuario, el programa procederá a analizar la señal, cambiando el valor de la variable _explosión_ a 0 ó 1 consecuentemente, y aumentando el valor del bote acumulado en el caso necesario.

- Función _"explosion_bomba_funcion"_: Solo se ejecuta en el caso de que la variable _explosión_ sea la requerida. Se imprime en pantalla un texto que indica que el juego ha terminado, y contiene el código asociado a la placa Arduino para este caso.

- Función _"introduccion_del_equipo"_: Se pide a los participantes el nombre del equipo, que se guardará como una cadena de caracteres, y se imprimirá un texto que confirme cuál ha sido el nombre elegido.

- Función _"sentencia_final"_: Indica el nombre del grupo participante y el bote final acumulado. Esta función se ejecuta en último lugar.

Además, englobando toda la función _main_, existe un bucle _do-while_ que ejecutará el programa todas las veces que el usuario lo desee.
