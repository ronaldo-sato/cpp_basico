#include <iostream>;
#include <cmath>;

// using namespace std;

int main(){

  double x = 4.99;
  double y = 3.99;

  // z = max(x, y);
  // z = min(x, y);

  // Máximo entre dois números (ou duas variáveis):
  std::cout << "Valor maximo entre x e y: " << std::max(x, y) << std::endl;
  // Mínimo entre dois números:
  std::cout << "Valor minimo entre x e y: " << std::min(x, y) << std::endl;

  /* As funções max e min pertecem as funções padrão, por isso o uso de 
  std:: antes dessas funções. Então para não ter que escrever std:: sempre 
  podemos informar que iremos usar as funções padrão incluindo no início do 
  programa: 
  
  using namespace std;
  */

  /* Biblioteca cmath:
  
  cplusplus.com/reference/cmath
  */

  // Valor Absoluto:
  std::cout << "Valor Absoluto (30 - 45): " << abs(30 - 45) << std::endl;
  // Raiz Quadrada:
  std::cout << "Raiz Quadrada de 144: " << sqrt(144) << std::endl;
  // Potência
  std::cout << "Potência de 2^10: " << pow(2, 10) << std::endl;
  // Raiz Quadrada usando pow:
  std::cout << "Raiz Quadrada: pow(144, 0.5) = " << pow(144, 0.5) << std::endl;
  // Distância entre dois pontos:
  float ponto1[] = {10, 25};
  float ponto1[] = {13, 32};
  // Distância: d = sqrt((x1 - x2)^2 + (y1 - y2)^2)
  float distancia = sqrt(pow((ponto1[0] - ponto2[0]), 2) + pow((ponto1[1] - ponto2[1]), 2));
  // Arredondamento:
  std::cout << "Floor (12.34 + 16.47): " << floor(12.34, 16.47) << std::endl;
  std::cout << "Ceil (12.34 + 16.47): " << ceil(12.34, 16.47) << std::endl;
  std::cout << "Round (12.34 + 16.47): " << round(12.34, 16.47) << std::endl;

  // Na cmath também contém: log, sin, cos, tan, etc...

  return 0;
}