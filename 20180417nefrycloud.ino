#include <Nefry.h>
#include <NefryCloud.h>

NefryCloud nefryCloud;

void onpush(String message);

void setup() {
  nefryCloud.begin("user","apikey");//サイトで登録したuser,メールで受け取ったapikeyを入力してください
  nefryCloud.on(onpush);
}

void loop() {
  nefryCloud.loop();
}

void onpush(String message) {//Nefryクラウド(仮)から通知が来ます
  Nefry.print("onpush : ");
  Nefry.println(message);
  if(message.equals("Nefry")){
    Nefry.println("Hello");
  }
}
