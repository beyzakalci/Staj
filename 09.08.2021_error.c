
void ksarac(){  //ara�lara k�rm�z� ve sar� yayalara k�rm�z�
 PORTA=0B10101;
 PORTB=0B00011011;

 }

 void yarac(){  //ara�lara ye�il yayalara k�rm�z�
 PORTA=0B10101;
 PORTB=0B00100100;

 }

 void sarac(){   //ara�lara sar� yayalara k�rm�z�
 PORTA=0B10101;
 PORTB=0B00010010;

 }

 void kksuresi(){  //k�rm�z� koruma s�resi (herkes k�rm�z�)
 PORTA=0B10101;
 PORTB=0B00001001;

 }

 void yyaya(){  //ara�lar k�rm�z� yayalar ye�il
 PORTA=0B11010;
 PORTB=0B00001001;


 }

 void kirmizi(){ //ara�lara ve yayalara k�rm�z�
 PORTA=0B10101;
 PORTB=0B00001001;

 }

 void main(){



 TRISA=0B00000;
 PORTA=0;
 TRISB=0B00000000;
 PORTB=0;
 



while(1){
 void main;
 {
  if(PORTB.RB7)
  {
           yyaya();
          delay_ms(7000);

}  
else
{  ksarac();
          delay_ms(2000);
         yarac();
          delay_ms(10000);
         sarac();
          delay_ms(2000);
         kksuresi();
         delay_ms(500);
         yyaya();
          delay_ms(7000);
         kirmizi();
          delay_ms(2000);

}}
            }

}
 
 
 
 a=PORTA.RA4;
 PORTA.RA4 = a;          

if(BUTON==1)    {
 while(1){
           yyaya();
          delay_ms(7000);
          kirmizi();
          delay_ms(2000);
          ksarac();
          delay_ms(2000);
         yarac();
          delay_ms(10000);
         sarac();
          delay_ms(2000);
         kksuresi();
         delay_ms(500);
            }         }

      else {

               }
        while(1){
         ksarac();
          delay_ms(2000);
         yarac();
          delay_ms(10000);
         sarac();
          delay_ms(2000);
         kksuresi();
         delay_ms(500);
         yyaya();
          delay_ms(7000);
         kirmizi();
          delay_ms(2000);
}         }   }             
