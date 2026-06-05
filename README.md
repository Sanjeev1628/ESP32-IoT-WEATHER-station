
{
  "version": 1,
  "author": "sanjeev",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-esp32-devkit-v1",
      "id": "esp",
      "top": -10,
      "left": -20,
      "attrs": {}
    },
    {
      "type": "wokwi-dht22",
      "id": "dht1",
      "top": -120,
      "left": 170,
      "attrs": {}
    },
    {
      "type": "wokwi-ssd1306",
      "id": "oled1",
      "top": 120,
      "left": 180,
      "attrs": { "i2cAddress": "0x3c" }
    }
  ],
  "connections": [
    [ "esp:3V3", "dht1:VCC", "red", [ "v0" ] ],
    [ "esp:GND.1", "dht1:GND", "black", [ "v0" ] ],
    [ "esp:D15", "dht1:SDA", "green", [ "v0" ] ],

    [ "esp:3V3", "oled1:VCC", "red", [ "v0" ] ],
    [ "esp:GND.2", "oled1:GND", "black", [ "v0" ] ],
    [ "esp:D21", "oled1:SDA", "blue", [ "v0" ] ],
    [ "esp:D22", "oled1:SCL", "yellow", [ "v0" ] ]
  ]
}
