/*
    read_resistance.cpp by David Melanson
    IoT Homework 9 Problem 1

    Reads voltage on AIN0 P9_39 and assesses the equivalent resistance based on
    10kΩ resistor connecting P9_32 to 39, then outputs status messages to screen
    Resistor being tested should be in the range of 100Ω to 100kΩ

    Example invocation: ./read_resistance
*/

#include<stdio.h>
#include<iostream>
#include"AnalogIn.h"
using namespace std;

int main(void) {

    cout << "Using AIN0 to read analog value." << endl;
    AnalogIn A0(0); 
    cout << "Measuring resistance ..." << endl;
    float adcval = A0.readAdcSample();
    cout << "ADC value is: " << adcval << endl;
    float r = 10/(1/(adcval/(4096))-1);
    cout << "Resistance: " << r << "kΩ" << endl;
}