//below is a code with slightly more complexity to only send midi on and off commands once for every button push
// this is quoting the code from the video https://youtu.be/wY1SRehZ9hM

#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();

int button1 = 2; //button1 on digital pin 2
int button2 = 3; //button2 on digital pin 3
int button3 = 4; //button3 on digital pin 4
int button4 = 5; //button4 on digital pin 5
int button5 = 6; //button5 on digital pin 6
int button6 = 7; //button6 on digital pin 7
int button7 = 8; //button7 on digital pin 8
int button8 = 9; //button8 on digital pin 9
int button9 = 10; //button9 on digital pin 10
int button10 = 11; //button10 on digital pin 11
int button11 = 12; //button11 on digital pin 12

// use the analog pins as digital inputs by their reference like: A0...A5
int button12 = A0;
int button13 = A1; 
int button14 = A2; 
int button15 = A3; 
int button16 = A4; 


int button1beans = 0;
int button2beans = 0;
int button3beans = 0;
int button4beans = 0;
int button5beans = 0;
int button6beans = 0;
int button7beans = 0;
int button8beans = 0;
int button9beans = 0;
int button10beans = 0;
int button11beans = 0;
int button12beans = 0;
int button13beans = 0;
int button14beans = 0;
int button15beans = 0;
int button16beans = 0;

int button1state = 0; //these state values help us only sendmidi commands once for every button put
int button2state = 0; //bear in mind this will only be a problem if you plan on having lots of midi things going on at once
int button3state = 0; //it just stops clogging up the midi feed with constant midi off commands.
int button4state = 0; //as themore keys you send the more midi off commands are constantly being sent
int button5state = 0; //so this just neatens the midi stream a bit to prevent mistakes. 
int button6state = 0;
int button7state = 0;
int button8state = 0;
int button9state = 0;
int button10state = 0;
int button11state = 0;
int button12state = 0;
int button13state = 0;
int button14state = 0;
int button15state = 0;
int button16state = 0;

void setup()
{
  MIDI.begin(); //BEINNINFG IDIU TGHUBGS

pinMode(button1, INPUT_PULLUP); //pinMode means the pin is in input mode with an internal pull up resistor, so it is waiting to receive ground to do something
pinMode(button2, INPUT_PULLUP); 
pinMode(button3, INPUT_PULLUP); 
pinMode(button4, INPUT_PULLUP); 
pinMode(button5, INPUT_PULLUP); 
pinMode(button6, INPUT_PULLUP); 
pinMode(button7, INPUT_PULLUP); 
pinMode(button8, INPUT_PULLUP); 
pinMode(button9, INPUT_PULLUP);
pinMode(button10, INPUT_PULLUP);
pinMode(button11, INPUT_PULLUP);
pinMode(button12, INPUT_PULLUP);
pinMode(button13, INPUT_PULLUP);
pinMode(button14, INPUT_PULLUP);
pinMode(button15, INPUT_PULLUP);
pinMode(button16, INPUT_PULLUP);
  
}



void loop()
{

  button1beans = digitalRead(button1); //read status of button
  button2beans = digitalRead(button2); //read status of button
  button3beans = digitalRead(button3); //read status of button
  button4beans = digitalRead(button4); //read status of button
  button5beans = digitalRead(button5); //read status of button
  button6beans = digitalRead(button6); //read status of button
  button7beans = digitalRead(button7); //read status of button
  button8beans = digitalRead(button8); //read status of button
  button9beans = digitalRead(button9); //read status of button
  button10beans = digitalRead(button10); //read status of button
  button11beans = digitalRead(button11); //read status of button
  button12beans = digitalRead(button12); //read status of button
  button13beans = digitalRead(button13); //read status of button
  button14beans = digitalRead(button14); //read status of button
  button15beans = digitalRead(button15); //read status of button
  button16beans = digitalRead(button16); //read status of button


  if ((button1beans == LOW) && (button1state == 0))
  { MIDI.sendNoteOn(60,127,1); //turn midi note on 60 velocity 127, midi channel 1. 
    button1state = 1;}  
  if ((button1beans == HIGH) && (button1state == 1))
  { MIDI.sendNoteOff(60,0,1);  //turn midi note off 60 velocity 127, midi channel 1. 
    button1state = 0;
  }  


  if ((button2beans == LOW) && (button2state == 0))
  { MIDI.sendNoteOn(61,127,1); //turn midi note on 61 velocity 127, midi channel 1. 
    button2state = 1;}  
  if ((button2beans == HIGH) && (button2state == 1))
  { MIDI.sendNoteOff(61,0,1);  //turn midi note off 61 velocity 127, midi channel 1. 
    button2state = 0;
  }  
  
  if ((button3beans == LOW) && (button3state == 0))
  { MIDI.sendNoteOn(62,127,1); //turn midi note on 62 velocity 127, midi channel 1. 
    button3state = 1;}  
  if ((button3beans == HIGH) && (button3state == 1))
  { MIDI.sendNoteOff(62,0,1);  //turn midi note off 62 velocity 127, midi channel 1. 
    button3state = 0;
  }  
  
  if ((button4beans == LOW) && (button4state == 0))
  { MIDI.sendNoteOn(63,127,1); //turn midi note on 63 velocity 127, midi channel 1. 
    button4state = 1;}  
  if ((button4beans == HIGH) && (button4state == 1))
  { MIDI.sendNoteOff(63,0,1);  //turn midi note off 63 velocity 127, midi channel 1. 
    button4state = 0;
  }  
  
  if ((button5beans == LOW) && (button5state == 0))
  { MIDI.sendNoteOn(64,127,1); //turn midi note on 64 velocity 127, midi channel 1. 
    button5state = 1;}  
  if ((button5beans == HIGH) && (button5state == 1))
  { MIDI.sendNoteOff(64,0,1);  //turn midi note off 64 velocity 127, midi channel 1. 
    button5state = 0;
  }  
  
  if ((button6beans == LOW) && (button6state == 0))
  { MIDI.sendNoteOn(65,127,1); //turn midi note on 65 velocity 127, midi channel 1. 
    button6state = 1;}  
  if ((button6beans == HIGH) && (button6state == 1))
  { MIDI.sendNoteOff(65,0,1);  //turn midi note off 65 velocity 127, midi channel 1. 
    button6state = 0;
  }  
  
  if ((button7beans == LOW) && (button7state == 0))
  { MIDI.sendNoteOn(66,127,1); //turn midi note on 66 velocity 127, midi channel 1. 
    button7state = 1;}  
  if ((button7beans == HIGH) && (button7state == 1))
  { MIDI.sendNoteOff(66,0,1);  //turn midi note off 66 velocity 127, midi channel 1. 
    button7state = 0;
  }  
  
  if ((button8beans == LOW) && (button8state == 0))
  { MIDI.sendNoteOn(67,127,1); //turn midi note on 67 velocity 127, midi channel 1. 
    button8state = 1;}  
  if ((button8beans == HIGH) && (button8state == 1))
  { MIDI.sendNoteOff(67,0,1);  //turn midi note off 67 velocity 127, midi channel 1. 
    button8state = 0;
  }  
  
  if ((button9beans == LOW) && (button9state == 0))
  { MIDI.sendNoteOn(68,127,1); //turn midi note on 68 velocity 127, midi channel 1. 
    button9state = 1;}  
  if ((button9beans == HIGH) && (button9state == 1))
  { MIDI.sendNoteOff(68,0,1);  //turn midi note off 68 velocity 127, midi channel 1. 
    button9state = 0;
  }  

 
  if ((button10beans == LOW) && (button10state == 0))
  { MIDI.sendNoteOn(69,127,1); //turn midi note on 69 velocity 127, midi channel 1. 
    button10state = 1;}  
  if ((button10beans == HIGH) && (button10state == 1))
  { MIDI.sendNoteOff(69,0,1);  //turn midi note off 69 velocity 127, midi channel 1. 
    button10state = 0;
  } 
  
  if ((button11beans == LOW) && (button11state == 0))
  { MIDI.sendNoteOn(70,127,1); //turn midi note on 70 velocity 127, midi channel 1. 
    button11state = 1;}  
  if ((button11beans == HIGH) && (button11state == 1))
  { MIDI.sendNoteOff(70,0,1);  //turn midi note off 70 velocity 127, midi channel 1. 
    button11state = 0;
  }   

if ((button12beans == LOW) && (button12state == 0))
  { MIDI.sendNoteOn(71,127,1); //turn midi note on 71 velocity 127, midi channel 1. 
    button12state = 1;}  
  if ((button12beans == HIGH) && (button12state == 1))
  { MIDI.sendNoteOff(71,0,1);  //turn midi note off 71 velocity 127, midi channel 1. 
    button12state = 0;
  }   
  
if ((button13beans == LOW) && (button13state == 0))
  { MIDI.sendNoteOn(72,127,1); //turn midi note on 72 velocity 127, midi channel 1. 
    button13state = 1;}  
  if ((button13beans == HIGH) && (button13state == 1))
  { MIDI.sendNoteOff(72,0,1);  //turn midi note off 72 velocity 127, midi channel 1. 
    button13state = 0;
  }   

if ((button14beans == LOW) && (button14state == 0))
  { MIDI.sendNoteOn(73,127,1); //turn midi note on 73 velocity 127, midi channel 1. 
    button14state = 1;}  
  if ((button14beans == HIGH) && (button14state == 1))
  { MIDI.sendNoteOff(73,0,1);  //turn midi note off 73 velocity 127, midi channel 1. 
    button14state = 0;
  }  

if ((button15beans == LOW) && (button15state == 0))
  { MIDI.sendNoteOn(74,127,1); //turn midi note on 74 velocity 127, midi channel 1. 
    button15state = 1;}  
  if ((button15beans == HIGH) && (button15state == 1))
  { MIDI.sendNoteOff(74,0,1);  //turn midi note off 74 velocity 127, midi channel 1. 
    button15state = 0;
  }  

if ((button16beans == LOW) && (button16state == 0))
  { MIDI.sendNoteOn(75,127,1); //turn midi note on 75 velocity 127, midi channel 1. 
    button16state = 1;}  
  if ((button16beans == HIGH) && (button16state == 1))
  { MIDI.sendNoteOff(75,0,1);  //turn midi note off 75 velocity 127, midi channel 1. 
    button16state = 0;
  }  


  }
