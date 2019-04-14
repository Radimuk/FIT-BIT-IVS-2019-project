#include <iostream>
#include "../math/GenericMathLib.cpp"

using namespace std;

int main (){
	int array[1024];
  int N = 0; //N - pocet zadanych cisel
  while (scanf("%d", &array[N]) == 1){
  	N = N + 1;
  }
  //pretypovani, nemusi byt potreba, jenom pokus zprovoznit funknce
  double pocet = N; 
  double pole[1024]; 
  for (int k = 0; k < pocet; k++){
    pole[k] = array[k];
  }
  double soucet_ctvercu = 0;
  double average = 0;
  double temp = 0;
  /*
  compiler navrhuje pouzit fadd misto add, fmul misto mul atd,
  tak se ale podle me nepouzije nase knihovna
  */
  for (int i = 0; i < pocet; i++){
      temp = pow(pole[i], 2.0);
      soucet_ctvercu = add(soucet_ctvercu, temp);
      average = add(average, pole[i]);
  }
  average = mul(average, div(1.0, pocet));
  average = pow(average, 2.0);
  average = mul(average, pocet);
  double s = sub(soucet_ctvercu, average);
  s = div(s, sub(pocet, 1.0));
  s = pow(s, 0.5);
  printf("%f\n", s);
	return 0;
}