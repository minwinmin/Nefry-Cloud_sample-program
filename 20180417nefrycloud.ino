#include <Nefry.h>
#include <NefryCloud.h>

NefryCloud nefryCloud;

void onpush(String message);

void setup() {
  nefryCloud.begin("takudooon","77c58ea49b3d798f727e5af156fdc9fcb36f4f63cc0e801c2310e07d4fe59344");//サイトで登録したuser,メールで受け取ったapikeyを入力してください
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
