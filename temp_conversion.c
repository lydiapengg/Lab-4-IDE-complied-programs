#include <stdio.h>

int main()
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
}

int categorize(temperature, conversion_scale)
{
    if (conversion_scale == 2)
    {
        if (temperature < 0)
        {
            printf("Converted temperature: %d",temperature);
            printf("Temperature Category: Freezing");
            printf("Weather Advisory: Stay indoors");
        }
        if (temperature <= 10 && temperature > 0)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Cold");
            printf("Weather Advisory: Wear a jacket");
        }
        if (temperature <= 25 && temperature > 10)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Stay cool");
        }
        if (temperature >= 35)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature catgegory: Extreme heat");
            printf("Weather Advisory: Stay inside");
        }
    }
    if (conversion_scale == 1)
    {
        if (temperature < 32)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Freezing");
            printf("Weather Advisory: Stay indoors");
        }
        if (temperature <= 50 && temperature > 32)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Cold");
            printf("Weather Advisory: Wear a jacket");
        }
        if (temperature <= 77 && temperature > 50)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Stay cool");
        }
        if (temperature >= 95)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature catgegory: Extreme heat");
            printf("Weather Advisory: Stay inside");
        }
    }
    if (conversion_scale == 3)
    {
        if (temperature < 273.15)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Freezing");
            printf("Weather Advisory: Stay indoors");
        }
        if (temperature <= 283.15 && temperature > 273.15)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Cold");
            printf("Weather Advisory: Wear a jacket");
        }
        if (temperature <= 298.15 && temperature > 283.15)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Stay cool");
        }
        if (temperature >= 308.15)
        {
            printf("Converted temperature: %d", temperature);
            printf("Temperature catgegory: Extreme heat");
            printf("Weather Advisory: Stay inside");
        }
    }
    return 0;
}
int conversion(temperature, input_scale, conversion_scale)
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
            converted_temp = ((temperature - 5) * 5) / 9 + 275.15;
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
        if (conversion_scale = 1)
        {
            int converted_temp;
            converted_temp = (temperature - 273.15) * 1.8 + 32;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale = 2)
        {
            int converted_temp;
            converted_temp = (temperature - 273.15);
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale = 3)
        {
            categorize(temperature, conversion_scale);
        }
    }
    return 0;
}

