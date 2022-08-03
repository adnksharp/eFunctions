int SelectPin(int pin)
{
    if (pin > 9)
        pin = 1;
    else
        pin++;
    return pin;
}

void OutOnOff(int pin, int time)
{
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
    delay(time);
}