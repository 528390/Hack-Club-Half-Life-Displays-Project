const int LED_RED = 1;
const int LED_GREEN = 2;
const int LED_BLUE = 4;

const int WHITE_LED_1 = 6;
const int WHITE_LED_2 = 7;

const int BUTTON_PIN = 27;
const int POT_PIN = A0;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);

  pinMode(WHITE_LED_1, OUTPUT);
  pinMode(WHITE_LED_2, OUTPUT);

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  // TODO: add functions
}