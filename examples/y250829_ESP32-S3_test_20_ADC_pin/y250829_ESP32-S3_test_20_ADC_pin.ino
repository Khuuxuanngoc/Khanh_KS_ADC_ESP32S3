
int arr_adc_pin[20] = { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19 };

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 20; i++) {
    pinMode(arr_adc_pin[i], INPUT_PULLUP);
  }
  Serial.begin(115200);
}

// int table[5][4] = { { 0 } };

void loop() {
  // put your main code here, to run repeatedly:
  static uint8_t count = 0;

  for (int y = 0; y < 5; y++) {
    for (uint z = 0; z < 4; z++) {
    if (count > 19) count = 0;
      printf(" %ld ", digitalRead(arr_adc_pin[count]));
      count++;
    }
      printf("\n");
  }
  printf("\n");
  delay(100);
}
