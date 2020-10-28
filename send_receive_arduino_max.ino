void setup() {
  Serial.begin(9600);
}

void loop() {
// DESCOMENTAR RECIBE SI SE QUIERE RECIBIR Y VICEVERSA

  // RECIBE SERIAL de "send_receive_max_arduino"

 /* if (Serial.available()) {
    int a = Serial.read();
    Serial.print("a: ");
    Serial.println(a);
  }
*/

  // ENVÍA SERIAL a MAX a través de "send_receive_max_arduino"

  Serial.write(random(10));
  delay(1000);
}
