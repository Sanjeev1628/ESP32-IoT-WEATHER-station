
#include <WiFi.h>
#include <DHTesp.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

const char* ssid = "Wokwi-GUEST";
const char* password = "";

DHTesp dhtSensor;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int DHT_PIN = 15;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED allocation failed");
    for(;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  Serial.println("Temperature: " + String(data.temperature, 1) + " °C");
  Serial.println("Humidity: " + String(data.humidity, 1) + " %");
  Serial.println("---------------------");

  display.clearDisplay();

  display.setCursor(0, 0);
  display.println("IoT Weather Station");

  display.setCursor(0, 20);
  display.print("Temp: ");
  display.print(data.temperature, 1);
  display.println(" C");

  display.setCursor(0, 40);
  display.print("Humidity: ");
  display.print(data.humidity, 1);
  display.println(" %");

  display.display();

  delay(2000);
}
