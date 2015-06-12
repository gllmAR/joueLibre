#joueLibre

##Description:
Ensemble de composante permettant la lecture de fichiers sonores asservie à des capteurs.


##Schéma de fonctionnement:


| capteurs analogues | -> | Arduino | -> | USB | -> | comport | ->  | Pure DATA |  
ou

| capteurs digitaux | -> | Arduino | -> | USB | -> | comport | ->  | Pure DATA |  
ou

| capteurs digitaux | -> | GPIO raspberry| -> | python | -> | OSC | -> | Pure DATA |  

## Capteurs à investiguer:

### Détecteurs de mouvements

#### PIR (Passive infrared sensor)

##### documentation

avec le raspy :

[http://www.millamilla.com/?p=18](http://www.millamilla.com/?p=18)

avec Arduino

[https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/](https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/)

[http://playground.arduino.cc/Code/PIRsense](http://playground.arduino.cc/Code/PIRsense)

##### produits

[http://www.robotshop.com/ca/en/sfe-pir-motion-sensor.html](http://www.robotshop.com/ca/en/sfe-pir-motion-sensor.html)


[http://www.robotshop.com/ca/en/adjustable-pir-motion-sensor.html](http://www.robotshop.com/ca/en/adjustable-pir-motion-sensor.html)

[http://www.robotshop.com/ca/en/pir-motion-sensor-arduino-compatible.html](http://www.robotshop.com/ca/en/pir-motion-sensor-arduino-compatible.html)

[http://www.robotshop.com/ca/en/mini-pir-motion-sensor.html](http://www.robotshop.com/ca/en/mini-pir-motion-sensor.html)

[http://www.robotshop.com/ca/en/digital-infrared-motion-sensor.html](http://www.robotshop.com/ca/en/digital-infrared-motion-sensor.html)


### Détecteurs de présence

#### infrarouge analogue (range finder)

[http://www.robotshop.com/ca/en/sharp-gp2y0a02yk0f-ir-range-sensor.html](http://www.robotshop.com/ca/en/sharp-gp2y0a02yk0f-ir-range-sensor.html)

#### infrarouge Digital

[http://www.robotshop.com/ca/en/dfrobot-adjustable-infrared-sensor-switch.html](http://www.robotshop.com/ca/en/dfrobot-adjustable-infrared-sensor-switch.html)

#### Sonar

##### produits : 
[http://www.robotshop.com/ca/en/hc-sr04-ultrasonic-range-finder.html](http://www.robotshop.com/ca/en/hc-sr04-ultrasonic-range-finder.html)

[http://www.robotshop.com/ca/en/ultrasonic-distance-sensor.html](http://www.robotshop.com/ca/en/ultrasonic-distance-sensor.html)

[http://www.robotshop.com/ca/en/hc-sr04-ultra01-ultrasonic-range-finder.html](http://www.robotshop.com/ca/en/hc-sr04-ultra01-ultrasonic-range-finder.html)

[http://www.robotshop.com/ca/en/seeedstudio-ultrasonic-range-finder.html](http://www.robotshop.com/ca/en/seeedstudio-ultrasonic-range-finder.html)


### Module de lecture sonore pour Arduino

[http://www.dx.com/p/uart-control-serial-mp3-music-player-module-for-arduino-avr-arm-pic-blue-silver-342439#.VXsFbmDvbQc](http://www.dx.com/p/uart-control-serial-mp3-music-player-module-for-arduino-avr-arm-pic-blue-silver-342439#.VXsFbmDvbQc)


### Référence et liens

[pureData-Vanille](http://msp.ucsd.edu/software.html)

[pureData-IEM](http://puredata.info/downloads/pd-iem)

[library cool pour gérer les strings sériels](https://github.com/alexandros301/Arduino_println_parseInt_to_from_Pd)

[http://wiki.t-o-f.info/Arduino/Arduino#toc14](http://wiki.t-o-f.info/Arduino/Arduino#toc14)
