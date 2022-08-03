#include "ak.hpp"
byte node[] = {16, 5, 4, 0, 2, 14, 12, 13, 15};
byte i;
void SetPins(byte A, byte B, byte C, byte D, byte E, byte F, byte G, byte H, byte I)
{
    byte pin[] = {A, B, C, D, E, F, G, H, I};
    for (i = 0; i < 9; i++)
    {
        if (pin[i] != -1)
        {
            if (pin[i] == 0)
                pinMode(node[i], INPUT);
            else
                pinMode(node[i], OUTPUT);
        }
    }
}

void setup()
{
    Serial.begin(115200);
    SetPins(-1, 1, 1, 1, 1, 1, 1, 1, 1);
    i = 0;
}

void loop()
{
    i = SelectPin(i);
    OutOnOff(node[i], 200);
}