/*

  HelloWorld.pde
  
  "Hello World!" example code.
  
  >>> Before compiling: Please remove comment from the constructor of the 
  >>> connected graphics display (see below).
  
  Universal 8bit Graphics Library, https://github.com/olikraus/u8glib/
  
  Copyright (c) 2012, olikraus@gmail.com
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification, 
  are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright notice, this list 
    of conditions and the following disclaimer.
    
  * Redistributions in binary form must reproduce the above copyright notice, this 
    list of conditions and the following disclaimer in the documentation and/or other 
    materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
  CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  
  
*/


#include "U8glib.h"


U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NO_ACK);	// Velleman VMA38 - Display which does not send ACK



void setup(void) {

  Serial.begin(115200);
  
  u8g.setFont(u8g_font_unifont);
  u8g.setColorIndex(1); // Instructs the display to draw with a pixel on. 
}

void loop(void) {


  u8g.firstPage();
  do {  
    draw();    
  } while( u8g.nextPage() );
  delay(1000); 
  u8g.firstPage();
  do {  
    draw2();    
  } while( u8g.nextPage() ); 
 delay(1000);
 u8g.firstPage();
  do {  
    draw3();    
  } while( u8g.nextPage() ); 
 delay(1000);
}
  
// --------------------- FUNCTIES -------------------------
void draw(){
  u8g.drawStr( 0, 15, "CHAT");    
}

void draw2(){
  u8g.drawStr( 0, 35, "JE");
}

void draw3(){
  u8g.drawStr( 0, 55, "T AIME");
}

