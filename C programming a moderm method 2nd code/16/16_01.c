#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct dialing_code {
  char *country;
  int code;
};
const struct dialing_code country_codes[] =
  {{"Argentina",            54},	{"Bangladesh",     	880},
   {"Brazi1",               55},	{"Burma (Myanmar)",	 95},
   {"China",                86},	{"Colombia",        	 57},
   {"Congo, Dem. Rep. of", 243},	{"Egypt",         	 20},
   {"Ethiopia",            251},	{"France",         	 33},
   {"Germany",              49},	{"India ",           	 91},
   {"Indonesia",            62},	{"Iran",     	 98},
   {"Italy",                39},	{"Japan",          	 81},
   {"Mexico",               52},	{"Nigeria",        	234},
   {"Pakistan",             92},	{"Philippines",    	 63},
   {"Poland",               48},	{"Russia",          	  7},
   {"South Africa",         27},	{"Korea",     	 82},
   {"Spain",                34},	{"Sudan",     	249},
   {"Thailand",             66},	{"Turkey",       	 90},
   {"Ukraine",             380},	{"United Kingdom",   	 44},
   {"United States",         1},	{"Vietnam",        	 84}};

int main(void){
  int code;
  bool searched = false;
  printf("Enter the Dialing Code:");
  scanf("%d",&code);
  for(int i = 0; i < 32; i++)  {
		if(code == country_codes[i].code){
	  		printf("It is %s.",country_codes[i].country);
	  		searched = true;
	  		break;
	  		}
		}
	if(!searched) printf("Error input.");
  return 0;
}
