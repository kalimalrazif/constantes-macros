/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 3; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2014 Nomar Oscar Mora Tovar <nomarmora@gmail.com>
 * 
 * constantes-macros is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * constantes-macros is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

#define DEBUG

#define VALOR_IMPORTANTE "muy importante" /* Esto es una constante */

#define PI 3.14  /* Esto es otra constante */
#define NUM_ELEM 5  /* Siguen las constantes */ 
#define AREA(rad) PI*rad*rad  /* Esto es un macro tipo función */
#define MAX(a,b) (a>b ? a : b) /* Otro macro tipo función */

int main()
{
   printf("Hola mundo este es un valor %s\n", VALOR_IMPORTANTE);

   const int otra_constante = 4;   /* Tambien podemos declarar las constantes asi */
   int i;
   float vec[NUM_ELEM];
   for(i=0;i<NUM_ELEM;i++) {
	  vec[i]=MAX((float)i*5.2,AREA(i));   }
   #ifdef DEBUG
   for(i=0;i<NUM_ELEM;i++) {
	  printf("%f\n",vec[i]);   }
   #endif

   /* Intentemos cambiar otra_constante */
   /* otra_constante++; */
   return (0);
}

