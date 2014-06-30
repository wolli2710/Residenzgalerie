Residenzgalerie
===============


### Project description:
The project Residenzgalerie are multiple installations for an exhibition of the <a href="http://www.residenzgalerie.at">Residenzgalerie Salzburg</a> which is a museum, with high-quality 16th-19th - century paintings. The concept for the exhibition was made by students of the master degree courses <a href="http://www.fh-salzburg.ac.at/disziplinen/medien-design-kunst/bachelor-multimediaart/beschreibung/beschreibung/">Multimedia Art</a> and <a href="http://www.fh-salzburg.ac.at/disziplinen/medien-design-kunst/bachelor-multimediatechnology/beschreibung/beschreibung/">Multimedia Technology</a>. A detailed project description can be found <a href="https://www.facebook.com/pages/ANTON/1422894151264133">here</a>.


### Light installation:
The light installation is based on the following components:
* Arduino Mega
* 8 channel 5V relais module for Arduino
* breadboard
* wires
* neon tubes
* power cable
* luster terminal


1. Arduino Setup:
* upload the file LightInstallation.ino to your Arduino
* wire up your Arduino as shown on the image <a href="">here</a>

ATTENTION: Because of the usage of life-endangering voltage please ensure you are understanding what you are doing!!



### Sound installation:
The sound installation is based on the following components:
* Arduino Uno
* Raspberry Pi
* USB cable
* LV-MaxSonar - EZ1
* wires

1. Raspberry Pi Setup:
The Raspberry Pi runs on raspbian OS and uses some python code which you can find in this repository.
To get up and running you simply have to install raspbian as described <a href="http://www.raspberrypi.org/documentation/installation/installing-images/README.md">here</a> and follow the steps below:

* use the file server.py
* open /etc/rc.local and attach: python /var/myapp/server.py &
* connect the Arduino via USB and reboot 

2. Arduino Setup:
* upload the file SoundInstallation.ino to your Arduino
* wire up your Arduino as shown on the image <a href="">here</a>



<img width="980" src="light_installation1.jpg">
<img width="980" src="light_installation2.jpg">
