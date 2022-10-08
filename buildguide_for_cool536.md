# Build guide

## Parts list


| No. | Patrs | Quantity | remarks | Suppliers | Cost |
|--|--|--|--|--|--|
|番号|名前|数|備考|調達先|参考価格（送料込）|<br>
|1|PCB|2|40%splite keyboard|[elecrow](https://www.elecrow.com)<br>[JLCPCB](https://jlcpcb.com)<br>[ALLPCB](https://www.allpcb.com)|５枚で10〜20ドル|<br>
|2-1|Switch Plate<br>スイッチプレート|2|アクリル<br>[Plate data](https://github.com/telzo2000/cool536/tree/main/case_design)|[工房Emerge+](https://www.emergeplus.jp/laser-cutting-service/contact/)<br>[遊舎工房](https://yushakobo.jp)<br>[elecrow](https://www.elecrow.com)|種類による。|
|2-2|Cover Plate<br>カバープレート|2|↑|↑|↑|
|2-3|Bottom Plate<br>ボトムプレート|2|↑|↑|↑|
|3|M2screw<br>M2ネジ|16|4mm<br>CoverPlateで使用<br>3mmでも代用可|DIYショップなど|10本で100円程度|
|4|M2screw<br>M2ネジ|8|3mm<br>BottomPlateで使用|↑|↑|
|5A|M2screw<br>M2ネジ|8|8mm<br>MXスイッチ使用時SwitchPlateで使用|↑|↑|
|5B|M2screw<br>M2ネジ|8|6mm<br>chocスッチ使用時SwitchPlateで使用|↑|↑|
|6A|M2spacer<br>M2スペーサー|16|3mmメス-メス<br>MXスイッチ使用時|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/c/c10/)<br>[遊舎工房](https://yushakobo.jp)|20本で800円程度|
|6B|M2spacer<br>M2スペーサー|8|3mmメス-メス<br>chocスイッチ使用時|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/c/c10/)<br>[遊舎工房](https://yushakobo.jp)|20本で800円程度|
|7|M2spacer<br>M2スペーサー|8|8mmメス-メス<br>CoverPlateで使用|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/c/c10/)<br>[遊舎工房](https://yushakobo.jp)|20本で800円程度|
|8|pro micro|2|ピンヘッダも別途購入|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|価格変動中|
|9A|Swith socket<br>スイッチソケット|36|cherry MX互換|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|10個で165円程度|
|9B|Swith socket<br>スイッチソケット|36|choc互換|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|10個で165円程度|
|10|Diode<br>ダイオード|40|リードタイプでもSMDでも可|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|100個で220円程度から|
|11|タクトスイッチ|2|２本足のもの|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|１個11円程度|
|12|TRRSジャック|2|MJ-4PP-9|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|１個55円|

In addition, you will need a TRRS cable, USB cable, keycaps, etc.
<br>
この他に、TRRSケーブル、USBケーブル、キーキャップ等が必要です。
<br>
For ver.1.20 PCB, 4 M2spacer 8mm are required instead of 6A, and 4 M2spacer 5mm are required instead of 6B.
<br>
ver.1.20のPCBでは、6Aの代わりにM2spacer8mmを４本、6Bの代わりにM2spacer5mmを４本、必要となります。
<br>

## Firmware

###  QMK_FIRMWARE
[Here](https://github.com/telzo2000/cool536/tree/main/firmware)

<br>
[remap](https://remap-keys.app/)

<br>

## Build 1(PCB only)

### 1 Parts check

The cool536 is a PCB that uses both the front and back sides for left and right PCBs.
<br>
The part where the corner is cut diagonally will be the outside of the left and right.
<br>
<br>
cool536は左右のPCBに対して、表裏両面を使用するPCBです。
<br>
角が斜めにカットされている箇所が、左右の外側になります。
<br>

### 2 Diode soldering


Solder the diodes to the back of each of the left and right.
<br>
左右それぞれの裏面にダイオードのハンダ付けをします。
<br>

There are lead type and SMD diodes.
<br>
ダイオードはリードタイプか、SMDがあります。
<br>
Here, we will explain the lead type soldering.
<br>
ここでは、リードタイプのハンダ付けの説明をします。
<br>
However, those who adopt the choc switch should use SMD diodes.
<br>
ただし、chocスイッチを採用する人は、SMDのダイオードを使用してください。
<br>


Use a lead bender to bend the legs of the diode.
<br>
リードベンダーを使い、ダイオードの足を曲げます。
<br>


Insert the diode into the board.
<br>
ダイオードを基板に挿しこみます。
<br>

Please pay attention to the orientation of the diode.
<br>
ダイオードの向きに注意してください。
<br>


Secure the diode with masking tape, then face up.
<br>
マスキングテープでダイオードを固定してから、表面を上にします。
<br>
Solder the protruding legs.
<br>
はみ出ている足部分に、ハンダ付けをします。
<br>
After soldering, use nippers to cut off the protruding legs.
<br>
はんだ付けが終わったら、はみ出ている足をニッパーで切り取ってください。
<br>

[８倍速　Diodeハンダ付け動画](https://youtu.be/Yaodh2-XxV4)


<br>
<br>

### 3 Soldering switch sockets


Solder the switch sockets on the back side.
<br>
裏面にスイッチソケットのハンダ付けをします。
<br>
cool536 is compatible with both choc and cherry MX switches.
<br>
cool536はchocスイッチとcherryMXスイッチの両方に対応しています。
<br>
Both can be installed.
<br>
両方を取り付けることが可能です。
<br>
Here, solder the cherryMX switch.
<br>
ここでは、cherryMXスイッチのハンダ付けを行います。
<br>
Place the switch socket so that the letters MX are hidden.
<br>
MXという文字が隠れるように、スイッチソケットを乗せてください。
<br>
That is the correct switch socket orientation.
<br>
それが正しいスイッチソケットの向きになります。
<br>
When using a choc switch, place the switch socket so that the letters choc are hidden.
<br>
chocスイッチの時は、chocという文字が隠れるように、スイッチソケットを乗せてください。
<br>

Apply solder to both pads.
<br>
両方のパッドにハンダを盛ります。
<br>
Place the switch socket and fix it with a warm soldering iron while melting the solder.
<br>
スイッチソケットを乗せて、温めたハンダゴテで、ハンダを溶かしながら、固定します。
<br>
You can make it easier by working while holding it with tweezers.
<br>
ピンセットで押さえながら、作業をすると楽にできます。
<br>

[８倍速　Switch socketハンダ付け動画](https://youtu.be/E__mHvmIXQo)

<br><br>

### 4 Soldering reset switch & TRRS jack 

Insert the reset switch on the surface.
<br>
表面にリセットスイッチを挿しこみます。
<br>
Solder the legs of the reset switch from the back.
<br>
裏面からリセットスイッチの足をハンダ付けします。
<br>
Solder the TRRS jack in the same way near the reset switch.
<br>
TRRSジャックは、リセットスイッチの近くに同じようにハンダ付けします。
<br>
Insert the left and right TRRS jacks from the front side and solder from the back side.
<br>
TRRSジャックは左右１箇所ずつ、表面から差し込み、裏面からはんだ付けをしてください。
<br>

[８倍速　Reset switch,TRRS jackハンダ付け動画](https://youtu.be/3gEbExaOAv4)

<br><br>


### 5　Pro micro 

cool536 requires pro micro on each side.
<br>
cool536は左右それぞれにpro microが必要となります。
<br>

Use the conthrough to fix the pro micro with the side with the parts facing down.
<br>
pro microの部品のある面を下向きに、コンスルーを使い、固定してください。
<br>


Pay attention to the orientation of the conthrough.
<br>
コンスルーの向きに注意してください。
<br>




<br>

### 6　Test

Please write the firmware and check the operation.
<br>
ファームウェアを書き込んで、動作確認をしてください。
<br>

Install a switch or measure continuity with tweezers, etc.
<br>
スイッチを取り付けるか、ピンセット等で導通をはかるかを行います。
<br>

<br>

### QMK_FIRMWARE
[Here](https://github.com/telzo2000/cool536/tree/main/firmware)

<br>
[remap](https://remap-keys.app/)
<br>
<br>

### 7 Installation of key switch

Attach your favorite key switch.
<br>
好きなキースイッチを取り付けてください。
<br>

<br>
If you like, attach a rubber cushion to the back and you're done.
<br>
お好みで裏面にラバークッションを取り付けたら、完成です。
<br>
<br>
<br>

### Option 1 Installing a rotary encoder

cool536 can be equipped with 1 to 2 rotary encoders on the left and right, for a total of 4 rotary encoders.
<br>
cool536は、左右に１〜２個、合計４個のロータリーエンコーダーを取り付けることができます。
<br><br>

### Option 2 Mounting the OLED display

The left side of the cool536 can be fitted with an OLED display.
<br>
In that case, the rotary encoder cannot be attached to the left side of the cool536.
<br>
cool536の左側には、OLEDディスプレイを取り付けることができます。
<br>
その場合、cool536の左側には、ロータリーエンコーダーを取り付けることができません。
<br>
<br>

### OPtion 3 Installing PIM447 Trackball

You can install the PIM447 on either the left or right side.
<br>
In that case, you will need trackballpart.
<br><br>
左右どちらでも、PIM447を取り付けることができます。
<br>
その時は、trackballpartが必要となります。
<br>
<br>
In addition to PIM447 and trackballpart, you will need 10 M2 screws, 6 M2 spacers 3mm, and a pin header.
<br><br>
PIM447とtrackballpartの他に、M2ネジ10本、M2スペーサー3mm、ピンヘッダが必要となります。
<br><br>

![](img/img0004.jpg)
![](img/img0005.jpg)
![](img/img0006.jpg)

<br><br><br>

## Build 2(Acrylic sandwich mount case)

![](img/img00020.jpg)

After 1 ~ 6 of build1, please do the next step.
<br>
build1の1~6の後、次の工程をしてください。
<br>

### 1 Installation of cover plate

Prepare a cover plate, M2 spacer 8mm（x４）, and M2 screw 4mm（x８）.
<br>
カバープレート、M2スペーサー6mm（４個）、M2ネジ3mm（８本）を用意します。
<br>
Screw the spacer to the cover plate in the same orientation.
<br>
カバープレートに同じ向きで、スペーサーをネジで固定します。
<br>
Then use the remaining screws to attach the cover plate to the PCB.
<br>
次に、残りのネジを使い、カバープレートをPCBに取り付けます。
<br>
There is an orientation of the cover plate, so it is good to check it once before starting work.
<br>
カバープレートの向きがあり、作業前に一度、重ねて確認すると良いです。
<br>
<br>
A special cover plate is required when installing a rotary encoder or an OLED display.
<br>
ロータリーエンコーダーまたはOLEDディスプレイを取り付けているとき、専用のカバープレートが必要となります。
<br><br>


### 2-1 Installation of switch plate（choc switch）

Prepare a switch plate, M2 spacer 3 mm（x４）, and M2 screw 6 mm（x４）.
<br>
スイッチプレート、M2スペーサー３mm（４本）、M2ネジ６mm（４本）を用意します。
<br>
Fix the screws in 4 places.
<br>
ネジを４箇所、固定します。
<br>
Insert the screws in the order of the switch plate and the PCB, and fix them with spacers on the back of the PCB.
<br>
ネジはスイッチプレート、PCBの順でさしこみ、PCBの裏面でスペーサーで固定します。
<br>

<br>

### 2-2 Installation of switch plate（cherry MX switch）

Prepare a switch plate, M2 spacer 3 mm（x８）, and M2 screw 8 mm（x４）.
<br>
スイッチプレート、M2スペーサー３mm（８本）、M2ネジ８mm（４本）を用意します。
<br>
Fix the screws in 4 places.
<br>
ネジを４箇所、固定します。
<br>
Insert the switch plate into the screw and fix it with a spacer.
<br>
ネジはスイッチプレートをさしこみ、スペーサーで固定します。
<br>
Next, insert the switch plate into the PCB and secure it with a spacer on the back of the PCB.
<br>
次に、スイッチプレートをPCBにさしこみ、PCBの裏面でスペーサーで固定します。
<br>

### 3 Installation of bottom plate 

Prepare the bottom plate and M2 ３mm screws（x４）.
<br>
ボトムプレート、M２ネジ３mm（４本）を用意します。
<br>
Place the bottom plate according to the spacer on the back of the PCB and fix it with screws.
<br>
PCB裏面にあるスペーサーに合わせて、ボトムプレートをのせて、ネジで固定します。
<br>
<br>
From here, proceed with step 7 of build1.
<br>
ここからは、build１の７の工程を進めてください。
<br>

Have a fun selfmade keyboard life!
<br>
楽しい自作キーボード生活を!

![](img/img0007.jpg
)