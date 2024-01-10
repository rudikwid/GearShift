# Arduino GearShift Indicator for M/T car N-12345-R / H pattern

Original version by Nicuflorica
https://nicuflorica.blogspot.com/2017/05/indicator-treapta-de-viteza-gear-shift.html

http://arduinotehniq.blogspot.com/2017/05/gear-shift-indicator.html

![poza](https://1.bp.blogspot.com/-tR1GTus4Dfw/WQbUZd5g4PI/AAAAAAAAVG0/ZFot0ipz3cU7zap8MSTLWzezXKlANR3zgCLcB/s1600/gearshift_01.jpg)

![schema](https://2.bp.blogspot.com/-7xn8Do2RGVA/WQbUBS4wc5I/AAAAAAAAVGw/6TSbhs_p6JMx9eXprI-AdC89i0VnNQgPACLcB/s1600/7segment_led_gear_shift_schematic_rev1.png)

Some person include me, and you who found this fork, are need an simple arduino solution to make a gear shift indicator for manual transmission cars.

This designed for manual transmission cars with 6 speed, and mostly consumer cars is only 5 speed, so easy just let 6th position no sensor connected.

The original design by Niqro using TLE4905 hall effect sensors, but in my country A3144 Hall effect sensor is cheaper and easier to get, reed switches is also possible.

in simulation i used regular push buttons to simulate the sensing effect works, just downloaded and run it in Proteus 7.

Generally, this is universal design for manual transmission cars, and your tasks to adapt to fit the sensors in your car gear shift cover box.

Of course you will needed to place and find right position 6 pcs neodyum magnets as sensor triggers according gear shift lever movement.

I hope this simple solution is satisfy for you.

other gearshift indicator project is from MickTheMechanic, is possible to build, but thosee design is too complex for me.


ATMEGA8PU WITH INTERNAL CLOCK VERSION
Since simplicity and price is my highest consideration, i also porting this to cheaper but capable the ATMEGA8PU chip.
for this you need adapt the gear position sensors as input and seven segment LED pin as output to bare ATMEGA8PU chip.
these ATMEGA8PU version schematic is available in this repo. 
