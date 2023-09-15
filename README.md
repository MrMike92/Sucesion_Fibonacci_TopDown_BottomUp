# Sucesión de Fibonacci - Implementación Top-Down y Bottom-Up

Este repositorio contiene dos programas en C que generan la sucesión de Fibonacci utilizando técnicas y enfoques:
* fibonacci_bottom-up_and_top-down.c: Este programa implementa la técnica "bottom-up" y "top-down" para calcular la sucesión de Fibonacci, el valor de N está codificado en el programa.
* fibonacci_bottom-up_and_top-down_2.c: Este programa implementa la técnica "bottom-up" y "top-down" para calcular la sucesión de Fibonacci, el usuario puede ingresar el valor de N a través del teclado.

Instrucciones de uso:
* Clona este repositorio en tu máquina local.
* Abre el programa que deseas ejecutar en tu entorno de desarrollo de Python.

fibonacci_bottom-up_and_top-down.c:
* Abre el archivo fibonacci_top_down.py en tu entorno de desarrollo.
* Revisa y, si es necesario, modifica el valor de N que está codificado en el programa.
* Ejecuta el programa para generar la sucesión de Fibonacci para el valor de N especificado en el código.

fibonacci_bottom-up_and_top-down_2.c:
* Abre el archivo fibonacci_bottom_up.py en tu entorno de desarrollo.
* Ejecuta el programa.
* Sigue las instrucciones en la consola para ingresar un valor de N y generar la sucesión de Fibonacci.

La implementación en fibonacci_bottom-up_and_top-down.c y fibonacci_bottom-up_and_top-down_2.c utilizan las técnicas de "top-down" (recursión con memorización) y la técnica "bottom-up" (programación dinámica) para calcular la sucesión de Fibonacci.

Problemas:

En C, los tipos de datos enteros, como int o long, tienen un rango finito de valores que pueden representar, y si el resultado de calcular el número de Fibonacci excede ese rango, se producirá un desbordamiento, lo que significa que el valor resultante no se puede representar en el tipo de datos dado y se produce un error.

Para entender por qué ocurre esto al calcular el número de Fibonacci, es importante recordar que los números de Fibonacci crecen exponencialmente a medida que aumenta el índice, el número de Fibonacci N se calcula como la suma de los números de Fibonacci N-1 y N-2. Esto significa que los números crecen muy rápidamente, y después de un cierto punto, superarán el rango de representación de un tipo de datos entero y el tipo int suele ser de 32 bits en muchas implementaciones, lo que significa que puede representar valores en el rango de aproximadamente -2,147,483,648 a 2,147,483,647. El número apartir donde se desborda los progrmas es el Fibonacci 47 que es 2,971,215,073, lo que está más allá del rango positivo que un int puede representar.

Tabla de los números Fibonacci:
<table>
  <tr>
    <th>n</th>
    <th>f(n)</th>
  </tr>
  <tr>
    <td>0</td>
    <td>0</td>
  </tr>
  <tr>
    <td>1</td>
    <td>1</td>
  </tr>
  <tr>
    <td>2</td>
    <td>1</td>
  </tr>
  <tr>
    <td>3</td>
    <td>2</td>
  </tr>
  <tr>
    <td>4</td>
    <td>3</td>
  </tr>
  <tr>
    <td>5</td>
    <td>5</td>
  </tr>
  <tr>
    <td>6</td>
    <td>8</td>
  </tr>
  <tr>
    <td>7</td>
    <td>13</td>
  </tr>
  <tr>
    <td>8</td>
    <td>21</td>
  </tr>
  <tr>
    <td>9</td>
    <td>34</td>
  </tr>
  <tr>
    <td>10</td>
    <td>55</td>
  </tr>
  <tr>
    <td>11</td>
    <td>89</td>
  </tr>
  <tr>
    <td>12</td>
    <td>144</td>
  </tr>
  <tr>
    <td>13</td>
    <td>233</td>
  </tr>
  <tr>
    <td>14</td>
    <td>377</td>
  </tr>
  <tr>
    <td>15</td>
    <td>610</td>
  </tr>
  <tr>
    <td>16</td>
    <td>987</td>
  </tr>
  <tr>
    <td>17</td>
    <td>1597</td>
  </tr>
  <tr>
    <td>18</td>
    <td>2584</td>
  </tr>
  <tr>
    <td>19</td>
    <td>4181</td>
  </tr>
  <tr>
    <td>20</td>
    <td>6765</td>
  </tr>
  <tr>
    <td>21</td>
    <td>10946</td>
  </tr>
  <tr>
    <td>22</td>
    <td>17711</td>
  </tr>
  <tr>
    <td>23</td>
    <td>28657</td>
  </tr>
  <tr>
    <td>24</td>
    <td>46368</td>
  </tr>
  <tr>
    <td>25</td>
    <td>75025</td>
  </tr>
  <tr>
    <td>26</td>
    <td>121393</td>
  </tr>
  <tr>
    <td>27</td>
    <td>196418</td>
  </tr>
  <tr>
    <td>28</td>
    <td>317811</td>
  </tr>
  <tr>
    <td>29</td>
    <td>514229</td>
  </tr>
  <tr>
    <td>30</td>
    <td>832040</td>
  </tr>
  <tr>
    <td>31</td>
    <td>1346269</td>
  </tr>
  <tr>
    <td>32</td>
    <td>2178309</td>
  </tr>
  <tr>
    <td>33</td>
    <td>3524578</td>
  </tr>
  <tr>
    <td>34</td>
    <td>5702887</td>
  </tr>
  <tr>
    <td>35</td>
    <td>9227465</td>
  </tr>
  <tr>
    <td>36</td>
    <td>14930352</td>
  </tr>
  <tr>
    <td>37</td>
    <td>24157817</td>
  </tr>
  <tr>
    <td>38</td>
    <td>39088169</td>
  </tr>
  <tr>
    <td>39</td>
    <td>63245986</td>
  </tr>
  <tr>
    <td>40</td>
    <td>102334155</td>
  </tr>
  <tr>
    <td>41</td>
    <td>165580141</td>
  </tr>
  <tr>
    <td>42</td>
    <td>267914296</td>
  </tr>
  <tr>
    <td>43</td>
    <td>433494437</td>
  </tr>
  <tr>
    <td>44</td>
    <td>701408733</td>
  </tr>
  <tr>
    <td>45</td>
    <td>1134903170</td>
  </tr>
  <tr>
    <td>46</td>
    <td>1836311903</td>
  </tr>
  <tr>
    <td>47</td>
    <td>2971215073</td>
  </tr>
  <tr>
    <td>48</td>
    <td>4807526976</td>
  </tr>
  <tr>
    <td>49</td>
    <td>7778742049</td>
  </tr>
  <tr>
    <td>50</td>
    <td>12586269025</td>
  </tr>
</table>
  
Este proyecto se distribuye bajo la Licencia MIT. Consulta el archivo LICENSE para obtener más detalles.

Si deseas contribuir a este proyecto, puedes enviar solicitudes de extracción (pull requests) con mejoras o características adicionales.

Si tienes alguna pregunta o problema, puedes contactarme a través de mi perfil de GitHub MrMike92.
