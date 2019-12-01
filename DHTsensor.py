import Adafruit_DHT

while True:
    humidity, temperature = Adafruit_DHT.read_retry(11, 27)  # GPIO27 (BCM notation)
    print humidity, temperature

#http://invent.module143.com/daskal_tutorial/raspberry-pi-3-gpio-dht11-digital-temperature-humidity-sensor/
