// THis file is for program structures used throughout the entire project

struct registers {
   struct{
      union {
         struct {
            unsigned char a;
	    unsigned char f;
         };
         unsigned short af;
      };
   };

   struct{
      union {
         struct {
            unsigned char b;
	    unsigned char c;
         };
         unsigned short bc;
      };
   };

} extern registers
