// Wemos D1 Mini ESP32 Pin Testing Code
const int testPins[] = {4, 5, 18, 23, 25, 32, 33}; // 35 သည် Input-only ဖြစ်၍ ချန်လှပ်ထားပါသည်
const int pinCount = 7;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting GPIO Signal Test...");

  // Pin အားလုံးကို Output အဖြစ် သတ်မှတ်ခြင်း
  for (int i = 0; i < pinCount; i++) {
    pinMode(testPins[i], OUTPUT);
    Serial.printf("Configuring GPIO %d as OUTPUT\n", testPins[i]);
  }
}

void loop() {
  Serial.println("Signals HIGH");
  // Pin အားလုံးကို အချက်ပေးမီး လွှတ်ခြင်း
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(testPins[i], HIGH);
  }
  delay(1000); // ၁ စက္ကန့် စောင့်ပါ

  Serial.println("Signals LOW");
  // Pin အားလုံးကို ပိတ်ခြင်း
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(testPins[i], LOW);
  }
  delay(1000); // ၁ စက္ကန့် စောင့်ပါ
}
