# Functions in Arduino with nodeMCU ESP8266

[![node-Functions-bb.png](https://i.postimg.cc/FKc571LS/node-Functions-bb.png)](https://postimg.cc/mcb6nLVZ)

Control de pines de salida de la placa nodeMCU ESP8266 usando funciones.


## Hardware y software necesarios
- Placa de desarrollo nodeMCU ESP8266.
- 8 resistencias entre $\displaystyle 220\Omega$ y $\displaystyle 470\Omega$.
- 8 LEDs.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).

## Funcionamiento
### Variables
- `node`: pines a usar.
- `i`: variable para el funcionamiento de bucles.

### Funciones
#### `SetPins()`
Se definen los pines como:
- `0`: Entradas.
- `1`: Salidas.
- `-1`: Pines no usados.

#### `SelectPin()`
Contador entre 1 y 9.

#### `OutOnOff()`
Combinación de las funciones `digitalWirte` y `delay` para poner salidas en alto, pausar, ponerlas en bajo y pausar nuevamente.

### Funcionamiento
Usando la función `SetPins` se definen los pines como salidas. 
Usando la variable `i` y la función `SelectPin` se define el pin a encender y apagar durante 200 milisegundos con la función `OutOnOff`.
