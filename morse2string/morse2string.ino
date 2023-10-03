// C++ code
//
#include <LiquidCrystal.h>
int light = 0;
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
unsigned int start=0,stop, presstime;
int morse[200],temp=0, j = 0;

void printit(int c)
{

    switch(c)
    {
        Serial.print(c);
    case 201:
    {
        Serial.print("a");
        lcd_1.print("a");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21000:
    {
        Serial.print("b");
        lcd_1.print("b");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21010:
    {
        Serial.print("c");
        lcd_1.print("c");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2100:
    {
        Serial.print("d");
        lcd_1.print("d");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 20:
    {
        Serial.print("e");
        lcd_1.print("e");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 20010:
    {
        Serial.print("f");
        lcd_1.print("f");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2110:
    {
        Serial.print("g");
        lcd_1.print("g");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 20000:
    {
        Serial.print("h");
        lcd_1.print("h");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 200:
    {
        Serial.print("i");
        lcd_1.setCursor(8, 0);
        lcd_1.print("i");
        delay(2500);
        lcd_1.clear();
        delay(1000);
        break;
    }
    case 20111:
    {
        Serial.print("j");
        lcd_1.print("j");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2101:
    {
        Serial.print("k");
        lcd_1.print("k");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 20100:
    {
        Serial.print("l");
        lcd_1.print("l");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 211:
    {
        Serial.print("m");
        lcd_1.print("m");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 210:
    {
        Serial.print("n");
        lcd_1.print("n");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2111:
    {
        Serial.print("o");
        lcd_1.print("o");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 20110:
    {
        Serial.print("p");
        lcd_1.print("p");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21101:
    {
        Serial.print("q");
        lcd_1.print("q");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2010:
    {
        Serial.print("r");
        lcd_1.print("r");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2000:
    {
        Serial.print("s");
        lcd_1.print("s");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21:
    {
        Serial.print("t");
        lcd_1.setCursor(8, 0);
        lcd_1.print("t");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2001:
    {
        Serial.print("u");
        lcd_1.print("u");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 20001:
    {
        Serial.print("v");
        lcd_1.print("v");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 2011:
    {
        Serial.print("w");
        lcd_1.print("w");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 211111:
    {
        Serial.print("0");
        lcd_1.print("0");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 201111:
    {
        Serial.print("1");
        lcd_1.print("1");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 200111:
    {
        Serial.print("2");
        lcd_1.print("2");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 200011:
    {
        Serial.print("3");
        lcd_1.print("3");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 200001:
    {
        Serial.print("4");
        lcd_1.print("4");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 200000:
    {
        Serial.print("5");
        lcd_1.print("5");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 210000:
    {
        Serial.print("6");
        lcd_1.print("6");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 211000:
    {
        Serial.print("7");
        lcd_1.print("7");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 211100:
    {
        Serial.print("1");
        lcd_1.print("1");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 211110:
    {
        Serial.print("9");
        lcd_1.print("9");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21100:
    {
        Serial.print("z");
        lcd_1.print("z");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21011:
    {
        Serial.print("y");
        lcd_1.print("y");
        delay(2500);
        lcd_1.clear();
        break;
    }
    case 21001:
    {
        Serial.print("x");
        lcd_1.print("x");
        delay(2500);
        lcd_1.clear();
        break;
    }
    }

}
void array2string(int morse[])
{
    int i,j;
    int uni,chlen,temp1, temp2 = 0;
    uni=0;
    while(morse[uni] !=4 )
    {
        while(morse[uni]!=3)
        {
            chlen=0;
            temp1=uni;
            int c=0;
            while(morse[temp1]!=2)
            {
                temp1++;
                chlen++;
            }

            int k=0;
            while(morse[uni]!=2)
            {
                c+=morse[uni]*pow(10,chlen-k-1);
                if(morse[uni] == 1 && (chlen-k-1) != 0 && (chlen-k-1) != 1)c++;
                k++;
                uni++;
            }
            c+=2*pow(10,chlen);
            if(chlen != 0 && chlen != 1)c+=1;
            uni++;
            printit(c);
        }
        uni++;
    }
}
void setup()
{
    pinMode(A0, INPUT);
    Serial.begin(9600);
    lcd_1.begin(16, 2);
    lcd_1.setCursor(8, 0);
}

void loop()
{
    while(morse[temp]!=4)
    {
        light = analogRead(A0);
        if(light>=150)
        {
            start=millis();
            while(light>=150)light = analogRead(A0);
            stop=millis();
            presstime=stop-start;
            if(presstime<2000)
            {
                morse[temp++]=0;
                Serial.print(".");
            }
            else if(presstime<4000 && presstime >2000)
            {
                morse[temp++]=1;
                Serial.print("_");
            }
            else
            {
                morse[temp]=4;
                Serial.print("\nend\n");
            }
        }
        else
        {
            start=millis();
            while(light<150)light = analogRead(A0);
            stop=millis();
            presstime=stop-start;
            if(presstime<4000 && presstime>2000)
            {
                morse[temp++]=2;
                Serial.print("|");
            }
            else if(presstime<7000 && presstime>4000)
            {
                morse[temp++]=2;
                morse[temp++]=3;
                Serial.print(" ");
            }

        }
    }
    int i;
    if(j==0)
    {
        ++j;
        array2string(morse);
    }


    delay(1000); // Wait for 1000 millisecond(s)

}
