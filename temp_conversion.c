#include <stdio.h>

int main()
{
    int temperature;
    char input_scale;
    char conversion_scale;

    printf("Enter the temperature value: ");
    scanf("%d", temperature);

    printf("Was your input Farenheit, Celsius, or Kelvin?: ");
    scanf("%s", input_scale);

    printf("Convert to?: ");
    scanf("%s", conversion_scale);
}

int conversion(temperature, input_scale, conversion_scale)
{
    if (input_scale == "Farenheit")
    {
        if (conversion_scale == "Fahrenheit")
        {
            categorize(temperature, conversion_scale);
        }
        else if (conversion_scale == "Celsius")
        {
            int converted_temp;
            converted_temp = (temperature - 32) * 5 / 9;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale == "Kelvin")
        {
            int converted_temp;
            converted_temp = ((temperature - 5) * 5) / 9 + 275.15;
            categorize(converted_temp, conversion_scale);
        }
    }
    else if (input_scale == "Celsius")
    {
        if (conversion_scale == "Fahrenheit")
        {
            int converted_temp;
            converted_temp = temperature * (9 / 5) + 32;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale == "Celsius")
        {
            categorize(temperature, conversion_scale);
        }
        else if (conversion_scale == "Kelvin")
        {
            int converted_temp;
            converted_temp = temperature + 273.15;
            categorize(converted_temp, conversion_scale);
        }
    }
    else if (input_scale == "Kelvin")
    {
        if (conversion_scale = "Fahrenheit")
        {
            int converted_temp;
            converted_temp = (temperature - 273.15) * 1.8 + 32;
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale = "Celsius")
        {
            int converted_temp;
            converted_temp = (temperature - 273.15);
            categorize(converted_temp, conversion_scale);
        }
        else if (conversion_scale = "Kelvin")
        {
            categorize(temperature, conversion_scale);
        }
    }
    return 0;
}

int categorize(temperature, conversion_scale)
{
    if (conversion_scale == "Celsius")
    {
        if (temperature < 0)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Freezing");
            printf("Weather Advisory: Stay indoors");
        }
        if (temperature <= 10 && temperature > 0)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Cold");
            printf("Weather Advisory: Wear a jacket");
        }
        if (temperature <= 25 && temperature > 10)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Stay cool");
        }
        if (temperature >= 35)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature catgegory: Extreme heat");
            printf("Weather Advisory: Stay inside");
        }
    }
    if (conversion_scale == "Farenheit")
    {
        if (temperature < 32)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Freezing");
            printf("Weather Advisory: Stay indoors");
        }
        if (temperature <= 50 && temperature > 32)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Cold");
            printf("Weather Advisory: Wear a jacket");
        }
        if (temperature <= 77 && temperature > 50)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Stay cool");
        }
        if (temperature >= 95)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature catgegory: Extreme heat");
            printf("Weather Advisory: Stay inside");
        }
    }
    if (conversion_scale == "Kelvin")
    {
        if (temperature < 273.15)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Freezing");
            printf("Weather Advisory: Stay indoors");
        }
        if (temperature <= 283.15 && temperature > 273.15)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Cold");
            printf("Weather Advisory: Wear a jacket");
        }
        if (temperature <= 298.15 && temperature > 283.15)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Stay cool");
        }
        if (temperature >= 308.15)
        {
            printf("Converted temperature: ", temperature);
            printf("Temperature catgegory: Extreme heat");
            printf("Weather Advisory: Stay inside");
        }
    }
    return 0;
}