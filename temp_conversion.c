#include <stdio.h>

int categorize(int temperature, int conversion_scale)/*Categorizes the temperatures and prints out the information*/
{
    if (conversion_scale == 2)
    {
        if (temperature < 0)
        {
            printf("Converted temperature: %d\n",temperature);
            printf("Temperature Category: Freezing\n");
            printf("Weather Advisory: Stay indoors\n");
        }
        if (temperature <= 10 && temperature > 0)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Cold\n");
            printf("Weather Advisory: Wear a jacket\n");
        }
        if (temperature <= 25 && temperature > 10)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Hot\n");
            printf("Weather Advisory: Stay cool\n");
        }
        if (temperature >= 35)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature catgegory: Extreme heat\n");
            printf("Weather Advisory: Stay inside\n");
        }
    }
    if (conversion_scale == 1)
    {
        if (temperature < 32)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Freezing\n");
            printf("Weather Advisory: Stay indoors\n");
        }
        if (temperature <= 50 && temperature > 32)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Cold\n");
            printf("Weather Advisory: Wear a jacket\n");
        }
        if (temperature <= 77 && temperature > 50)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Hot\n");
            printf("Weather Advisory: Stay cool\n");
        }
        if (temperature >= 95)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature catgegory: Extreme heat\n");
            printf("Weather Advisory: Stay inside\n");
        }
    }
    if (conversion_scale == 3)
    {
        if (temperature < 273.15)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Freezing\n");
            printf("Weather Advisory: Stay indoors\n");
        }
        if (temperature <= 283.15 && temperature > 273.15)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Cold\n");
            printf("Weather Advisory: Wear a jacket\n");
        }
        if (temperature <= 298.15 && temperature > 283.15)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature Category: Hot\n");
            printf("Weather Advisory: Stay cool\n");
        }
        if (temperature >= 308.15)
        {
            printf("Converted temperature: %d\n", temperature);
            printf("Temperature catgegory: Extreme heat\n");
            printf("Weather Advisory: Stay inside\n");
        }
    }
    return 0;
}
int conversion(int temperature, int input_scale, int conversion_scale)/*Converts the input temperature based on what the scale is and the targetted scale*/
{
    if (input_scale == 1)
    {
        if (conversion_scale == 1)
        {
            categorize(temperature, conversion_scale);
        }
        else if (conversion_scale == 2)
        {
            int converted_temp;
            converted_temp = (temperature - 32) * 5 / 9;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale == 3)
        {
            int converted_temp;
            converted_temp = ((temperature - 32) * 5) / 9 + 273.15;
            categorize(converted_temp, conversion_scale);
        }
    }
    else if (input_scale == 2)
    {
        if (conversion_scale == 1)
        {
            int converted_temp;
            converted_temp = temperature * (9 / 5) + 32;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale == 2)
        {
            categorize(temperature, conversion_scale);
        }
        else if (conversion_scale == 3)
        {
            int converted_temp;
            converted_temp = temperature + 273.15;
            categorize(converted_temp, conversion_scale);
        }
    }
    else if (input_scale == 3)
    {
        if (conversion_scale == 1)
        {
            int converted_temp;
            converted_temp = (temperature - 273.15) * 1.8 + 32;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale == 2)
        {
            int converted_temp;
            converted_temp = (temperature - 273.15);
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale == 3)
        {
            categorize(temperature, conversion_scale);
        }
    }
    return 0;
}

int main() /*Gets the target information from the user*/
{
    int temperature = 0;
    int input_scale = 0;
    int conversion_scale = 0;

    printf("Enter the temperature value: ");
    scanf("%d", &temperature);

    printf("Was your input Farenheit(1), Celsius(2), or Kelvin(3)?: ");
    scanf("%d", &input_scale);

    printf("Convert to Farenheit(1), Celsius(2), or Kelvin(3)?: ");
    scanf("%d", &conversion_scale);
    conversion(temperature, input_scale, conversion_scale);
}


