#include <Sparki.h> // include the sparki library
 
void setup()
{
}
 
void loop()
{
    int cm = sparki.ping(); // measures the distance with Sparki's eyes
 
    if (cm < 10) // if sparki measures a distance less than 10, show red
    {
      sparki.RGB(RED);
    }
 
    if (cm == 10) // if sparki measures equal to 10, show green
    {
      sparki.RGB(GREEN);
    }
 
    if (cm > 10) // if sparki measures a distance greater than 10, show show
    {
      sparki.RGB(BLUE);
    }
}
