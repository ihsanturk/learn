---
Author: ihsan
Date: 1607180004
Language: TR, Turkish
---

# Mikroişlemciler & Mikro Denetleyiciler

## Tanıtım (`up_ders_1*.mp4`)
- ENIAC

### Transistör
- Çeşitli transistörler
- İlk entegre devre sadece birkaç adet transistörden oluşmaktaydı. Kilby'nin
  üretmiş olduğu entegreler germanyum kullanılıyordu.
- Sonrasında silikon kullanılmaya başlandı.
- Günümüzde (2020-12) entegreler 5 nanometreye geldi.
- Ilk entegre bilgisayar islemcisi, 1970 yiliinda uretilen 4004'tur.

### TTL ve CMOS Entegreler
TTL ve CMOS entegrelerin lojik 1 ve 0 için kullandığı gerilim eşikleri
farklıdır. Yani arasındaki fark "bant seviyesidir". CMOS daha az enerji kullanır.
(nanometre: metrenin milyarda biri)

### Mikroişlemci, Mikrokontrolcü, Mikrobilgisayar
Isı en mikroişlemciler için en büyük düşmandır.
Mikrodenetleyici

### Chip Üretimi
Silicon elementinde bir elektron özgürce dolaşabilir oluyor (p kondüktif).

### Geçmiş CPU'lar
Intel 8086 günümüzdekilere benzer ilk chip'ti. Günümüzde Intel ve AMD en büyük
çip üreticilerinden biri. 4-5 ayda bir yeni bir chip çıkıyor. 1 MB RAM
takılabiliyordu. 8086'dan günümüzdeki i7'ye komut sayısı, hızı, vs. arttırıldı.

### Türkiye Çip Üretiyor
- Yongatek

## Giriş (`up_ders_2a.mp4`)
### Kaynaklar
- Mikroişlemcilere Giriş: Assembler ile Yazılım ve Arayüz, _Mehmet Bodur_
- THE INTEL MICROPROCESSORS, Eight Edition, BARRY B. BREY
- MİKROİŞLEMCİ VE MİKRODENETELEYİCİLER, MEB Yayınları

### Giriş
Mikroişlemci bir işlemi kokntrol etmek için ya da cihazları açıp-kapamak için
kullanılan bir **programlanabilir** lojik cihaz olarak tanımlanabilir.
**Hesaplama**, **karar verme** ve **yönetim mekanizmasıdır**.
- Mikroişlemci <=> CPU
Başta uzay ve havacılık alanlarında kullanılıyordu zamanla gelişti ve günlük
hayatımızdaki her yere yayılmıştır.
- CPU Milyarlarca elektronik devre elemanı bulundurur.
- Binary yerine üçlük taban yapmak elektrik söz konusu olduğunda zordur.
Mikroişlemcilerde makine dili denilen sabit bir komut sistemi vardır.
Komutlara sürekli bakıp yazmak zor olduğu için mnemonics adı verilen
kısaltmalarla adlandırılırlar. Mnemonicler assembly dilini oluştururlar.
- NOTE: **Bu derste intel 8086 mikroişlemcinin assembly dili anlatılacak.**

### Neden her CPU serisi faklı şekilde üretilmiyor?
Eğer üretilseydi ondan önce üretilen tüm bilgisayarlar çöp haline gelirdi,
yenisinde çalışmazdı.

### Mikroişlemciler
- Mikroişlemci sadece ona verilen komutları çalıştırır. Kendisi herhangi bir
  karar vermez.
- Mikroişlemci, hafıza ve Giriş Çıkış olan her şey mikrobilgisayar.
- Yazılımda sınır yoktur. Her şey yapılabilir.
- Mikroişlemci uygulamaları temel olarak iki grupta toplanır;
	1. Yeniden programlanabilir sistemler (Reprogrammable systems)
		- Örnek: Kişisel Bilgisayar (PC)
	2. Gömülü sistemler (embedded systems)
		- Yüklenen program değiştirilemez. (Örnek: fotokopi makinesi, çamaşır makinesi)
		- Tüm bileşenler (işlemci, hafıza ve IO) bir mikroişlemci üstünde olur. (Örnek: ARM)

### Mikrobilgisayar Donanımı
- ALU
- Kontrol ünitesi
- Kardediciler ve Sayıcılar
- Girdi-Çıktı
- Bellek (küçük bir miktar)
Veri yolu çift yönlüdür.

### Adresleme
CPU çok hızlı çalıştığı için aynı anda yapıyormuş gibi hissediyoruz.

## Proteus (`up_ders_2b.mp4`)
- "Schematic Capture" bölümünü kullanacağız.
- __I am using [CircuitJS1](https://github.com/sharpie7/circuitjs1)__

## Mikrobilgisayara Giriş (`up_ders_3a.mp4`)

### CPU Merkezi İşlem Birimi
Programla sürülen saat modlu ardışıl bir devredir.

#### Görevleri
1. Program emırlerını almak, çözümlemek ve uygulamak
2. BUS'larla donatılmış sistemi denetlemektir. En basit bir bilgisayar, bir CPU
   ve bir bellekten oluşur. BUS, CPU ve Bellek arasındaki etkileşimi sağlar.

### BUS
CPU ve diğer birimler arasındaki adres, veri ve koontrol sinyalleriniiin
etkileşimini sağlayan hatlardır, yollardır. Adres, Veri ve Kontrol Yolu olmak
üzerek üç farklı BUS vardır.

#### Adres BUS (Adres Yolu)
Verinin okunacağı veya verinin yazılacacğı adres bölgesini temsil eden
bilgilerin taşınmasında kullanılan hatlar, adres syolu olarak isimlendirilir.
Adres yolu, yek yönüldür ve paralel iletişim sağlayacak yapıdadır. Bir tek BUS
bir CPU tarafından sürülüp birçok cihaz tarafından kullanılabilir. Tüm
elemanlara aynı hat ile bağlıdır. Yani işlem yapılacak çiği seçmek için
kullanılırlar.


Mikroişlemcinin adresleme kapasitesini belirler. Yeni kullanılabilecek _hafıza
(ram) miktarını belirler_. 2^nŞ n adres hat sayısıdır.


20 bit adres hattı varsa 2^20 = 1MB hafızayı destekler
30 bit adres hattı varsa 2^30 = 1GB hafızayı destekler

### Data BUS (Veri Yolu)
Mikroişlemciden çevre birimlerine ya da bu birimlerden işlemciye veri aktarmada
kullanılan çift yönlü hatlar, veri yolu olarak adlandırılır.


Mikroişlemciler veri yolu genişliğine göre isimlendirilirler; 8 bit, 16 bit, 32
bit, 64 bit işlemci vsb. Veri yolu genişliği, mikroişlemcinin aynı anda
işleyebileceği veri sayısını belirler.

### Kontrol BUS (Kontrol Yolu)
Mikroişlemcili sistemde bulunan birimler arasındaki iliişkiyi düzenleyen
sinyallerin (yazma, okuma, interrupt. vb.) iletilmesi amacıyla kullanılan
hatlar, kontrol yolu olarak adlandırılır.

### Giriş Çıkı Arayüz Elemanlar:
Sistem ile dış dünya arasındaki etkileşimin sisteme bazı eklemelerin yapılması
ile olabilir.

### Kaydediciler (Registers):
Bir programın çalıştırılması esnasında, gerekli bilgilerin CPU tarafından
kullanılabilmesini sağlayan geçici, dahili hafıza elemanıdır. Kısacası tüm
bilgiler kaydedicilere gelir, CPU tarafından işlenir, ilgili yerlere buradan
gönerilir.

### Sayıcılar (Counters):
Program komut (instruction) adresi ve yığın (stack) adresi gibi bilgileri
saklayan geçici, dahili haaafıza elemanlarıdır.

### DMA (Direct Memory Access)
Doğrudan hafıza erişimidir. DMA denetleyici çipi tarafından yapılır. Hızlı
veri transferi gerektiğinde kullanılır. CPU ile yaptığı bir dizi haberleşme
sonucunda CPU'yu devre dışı ırakıp BUS'ları teslim alır ve harici cihaza daha
hızlı erişilmesini sağlar.

### APU (Arithmetic Processing Unit)
Aritmetik işlemci birimi. CPU'şar sadece alınan emirlerin icrası ile
ilgilenirler. Aritmetik işlemciler iiise emirlerin icrası sırasında gerekli
olan aritmetik işlemleri yapabilen co-processor'lerdir. CPU'ya yardımcı
olduklarından hızı arttırırlar.

### CO-PROCESSOR (Yardımcı İşşlemci)
Birincil işlemcinin (CPU) işleivlerini tanımlamak için kullanılan bir
bilgisayar işlemcisidir. Kendi belleği vardır.  Yardımcı işlemci tarafından
gerçekleştirilen işlemler, kaya nokta aritmetiği, grafikler, sinyal işleme,
dizi işleme, kriptografi veya çevresel aygıtlarla I/O arabirimi olabilir.

### ALU (Arithmetic Logic Unit)
CPU içinde bulunur ve emirlerle ilgili aritmetik (toplama, çarpma, kuvvet alma,
vb) ve lojik (AND, OR, büyüktür, vb.) işlemler icra ederler. Sonuçlarını
kaydedicilere gönderir.

### Kontrol Birimi
Kontrol emir kaydedicinin içeriği ile sürülür ve emir kaydedicisinin kodu bu
birim tarafından çözülür. Yani komutların çözümlendiği birim.

Bellekten alınan emir kodları CPU'nun içinde bulunan Kontrol Birimi Ünitesinde
daha küçük ve basit mikro emir kodlarına çözülür ve ne iş için kullanılacağı
anlaşılır. Emir kodları bu şekiilde basit mikro emir kodları yardımıyle icra
edilir.

Program belleğe ilk erişimde her zaman ilk kodun emir olduğu varsayılır. Ayrıca
her bir emir icrası tamamlandıktan sonra, program bellekteki bir sonraki kod
yine CPU tarafından emir kodu olarak algılanır.

Yani CPU her emir icrasından sonra tekrar emir bekler.

## 8086 Mikroişlemci
Data yolu ile adres yolu aynıdır.
```
          ╭──────╮  ╭──────╮
   GND <──│1     ╰──╯    40│<── Vcc
AD_14 <──>│2             39│<──> AD_15
AD_13 <──>│3             38│──> A16 / S_3
AD_12 <──>│4             37│──> A17 / S_4
AD_11 <──>│5             36│──> A18 / S_5
AD_10 <──>│6             35│──> A19 / S_6
 AD_9 <──>│7             34│──> !BHE / S_7
 AD_8 <──>│8             33│<── MN / !(MX)
 AD_7 <──>│9             32│──> !(RD)
 AD_6 <──>│10    8086    31│<──> HOLD
 AD_5 <──>│11            30│<──> HLDA
 AD_4 <──>│12            29│──> !(WR)
 AD_3 <──>│13            28│──> M / !(IO)
 AD_2 <──>│14            27│──> DT / !R
 AD_1 <──>│15            26│──> !(DEN)
 AD_0 <──>│16            25│──> ALE
  NMI <──>│17            24│──> !(INTA)
  INTR ──>│18            23│<── !(TEST)
   CLK ──>│19            22│<── READY
   GND <──│20            21│<── RESET
          ╰────────────────╯
```

### Haberleşme
Verilen bir adresteki elemanın (RAM, ROM, PIO, SIO) seçimi uygun donanımla
yapılmaktaadır. Adres bilgisi bir kod çözücünün girişine uygulanmakta ve kod
çözücünün çıkışı adres bölgesinde kullanılacak olan RAM'i veya ROM'u
seçmektedir. Data Bus ve Adres Buslar tüm elemanlar ve CPU tarafından ortak
olara kullanılmaktadır. CPU'nun data Bus'ında bağlanan tüm elemanların herhangi
bir data çarpışmasına yol açmaması için Yüksek Empedans (üç konumlu/three
state) özelliğine sahip olmaları gerekmektedir.

#### EPROM
BIOS tutulur. Elektrik gitmesinden etkilenmez. Silinmeme özelliği vardır.

#### RAM Belirli Bir Adrese Bağlanması (`up_ders_3a.mp4`)
##### Örnek 1
**73000h ile 73FFFh adresleri arasına gelecek şekilde 4kB RAM bağlantısı yapınız.**


RAM'ın adress hat sayısını 4k = 2^n formülü ile bulabiliriz. Burada k = 1024 =
2^10 dur.


2^n = 4096 = 4x2^10 olur. Buradan n = 12 bulunur. Yani `A_0` ile `A_11` arası
hatlar RAM'ın iç seçme hatlarıdır. 20 bit adres hattımız olduğu için geriye
kalan 8 bit (`A_12` - `A_19`) adres hattımız ise RAM'ı aktif etmek için !(CS)
ucuna bağlanmalıdır.

```
        ╭─────────────────────────────────────────────────────────────────────────────────────────╮
HEX Addr│A19 │A18 │A17 │A16 │A15 │A14 │A13 │A12 │A11 │A10 │A9 │A8 │A7 │A6 │A5 │A4 │A3 │A2 │A1 │A0 │
        │───────────────────│───────────────────│─────────────────│───────────────│───────────────│
   73000│ 0  │ 1  │ 1  │ 1  │ 0  │ 0  │ 1  │ 1  │ 0  │ 0  │ 0 │ 0 │ 0 │ 0 │ 0 │ 0 │ 0 │ 0 │ 0 │ 0 │
        │───────────────────│───────────────────│─────────────────│───────────────│───────────────│
   73FFF│ 0  │ 1  │ 1  │ 1  │ 0  │ 0  │ 1  │ 1  │ 1  │ 1  │ 1 │ 1 │ 1 │ 1 │ 1 │ 1 │ 1 │ 1 │ 1 │ 1 │
        ╰─────────────────────────────────────────────────────────────────────────────────────────╯
```

##### Örnek 2
**73000h ile 74FFFh adresleri arasına gelecek şekilde 2 adet 4kB RAM (toplam 8kB) bağlantısını yapınız.**

##### Ödev 1
**Hafızanın 40000h adresinden başlayaarak 2 tane 8kB RAM yerleştiriniz. Adres
bağlantılarını gösteriniz. Mikroişlemcinin Giriş/Çıkış-Hafıza ucu IO/!M
şeklindedir.**

#### Hafızanın şematik gösterimi
```
╭──────────────────────╮
|______________________| 00000h
|______________________| 00001h
|______________________| 00002h
|     -----        __-_|
|__-/       \_____/
```
```
     -----        __---|
__-/       \_____/     |
|______________________| FFFFDh
|______________________| FFFFEh
|______________________| FFFFFh
|                      |
╰──────────────────────╯
```
```
     -----        __---|
__-/       \_____/     |
|______________________| 73000h
|______________________| 73001h
|______________________| 73002h
|     -----        __-_|
|__-/       \_____/
```
```
|                |
|────────────────| 73000h
|                |
|                |
|                |
|      4kB       |
|   4096 Byte    |
|                |
|                |
|                |
|────────────────| 73FFFh
|                |
```
#### Pinler
##### `ALE`
Address Latch Enable (Adres Tutma Aktif): Lojik 1 seviyesi ile işlemcinin Adres
/ Veri yolunda adres bilgisinin olduğunu gösterir.
##### `!(BHE) / S_7`
Bus High Enable (Yol Yüksek Aktif): 8086 işlemcisinde, bir okuma veya yazma
çevriminde, veri yolunun üst 8-bitinin (`D_15` - `D_8`) aktif olduğunu dış
lojiğe bildirir.
##### `M/!(IO)`
Memory or Input / Output: Lojik 0 olduğunda mikroişlemcinin bir I/O cihazı ve
lojik 1 olduğunda hafıza modülü üzerinde işlem yaptığını dış lojiğe bildirir.
##### `!(RD)`
Okuma: Lojik 0 olduğunda mikroişlemcinin hafızadan bir hafıza veya I/O cihazına
bir veri yazdığını belirtir.
##### `!(WR)`
Yazma: Lojik 0 olduğunda mikroişlemcinin hafızadan bir hafıza veya I/O cihazına
bir veri yazdığını belirtir.
##### `!(DEN)`
##### `READY`
Hazır
##### `INTR`
Interrupt Request. Donanım kesmesi için kullanılır. Kesme bayrağı 1 olduğunda
INTR giriş lojik 1 yapılırsa x86 işlemcisi bir dış donanım kesmesi almış olur
ve bunun neticesi, o an 
##### `!(INTA)`
Interrupt Acknowledge
##### `NMI`
Nonmaskable Interrupt: Kesme bayrağı bitinin 1 olmasını gerektirmez.
##### `RESET`
##### `MN /MX`
Minimum / Maximum mode
##### `HOLD`
##### `HLDA`
Hold Acknowledge (tutma tasdik).
##### `CLK`
##### `VCC`
##### `GND`
Toprak

### İç Mimari
#### Yürütme Birimi (EU)
BIU tarafından komut kuyruğuna sırasıyla yerleştirilen makine dilindeki
komutların yorumlanmasını, kodun çözülmesi ve yürütülmesi için gereken
işlemleri kontrol eder.
#### YOL Arabirimi (BIU)
BIU hafıza ve Giriş/Çıkış işlemleri dahil bütün dış yol işlemlerinden
sorumludur.

#### Kaydediciler (Registers) (`up_ders_4a.mp4`)
```
╭──────╮
│──────│
│ ⎣⎦⎡⎤ │
╰──────╯
```
[Scheme was here]

##### Genel Amaçlı Kaydediciler
- AX: Akümülatör (accumulator)
- BX: Taban (base)
- CX: Sayaç (counter) while loop/döngüsü
- DX: Veri (data)

iki veya üç harfli gösterimlerle belirtilir.

##### İşaretci (Pointer) ve İndis Kaydedicileri
- BP: Taban işaretçisi (base pointer)
- SP: Yığın işaretçisi (stack pointer)
- DI: Hedef indis (destination index)
- SI: Kaynak indis (source index)

##### Segment Kaydedicileri
Görevi adres tutmaktır.
- CS: Kod Segment (code segment): Hafızanın programları ve alt programları tutan
  bir bölümdür. Program kodunun başlangıç taban adresini saklar.
- DS: Veri Segment (data segment): Verilerin bulunduğu hafıza alanıdır.
- SS: Yığın Segment (stack pointer): yığın için kullanılan hafıza alanının
  başlangıç taban adresini saklar.
- ES: Ek Segment (extra segment): Bazı string komutlarında kullanılan ek veri
  alanının başlangıç taban adresini saklar.
- BX: Taban işaretçisi (base pointer):

##### IP (Instruction Pointer - Komut İşaretleyicisi)
Mikroişlemci tarafından yürütülecek bir sonraki komutu adreslemede kullanılır
ve kod segmentin offset adresini tutar.

##### Flags (Bayrak Kaydedici)
Uyarı bitleridir.
```
|15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0|
|  |  |  |  |O |D |I|T|S|Z| |A| |P| |C|
```
- C (Carry): Bir işaretsiz sayının aritmetik işleminde, toplamadan sonraki
  eldeyi (carry) veya çıkarmadan sonraki ödüncü (borrow) belirtir.
- P (Parity): Tek eşlik (odd parity) işlemi, lojik 0; çift eşlik (even parity)
  işlemi, lojik 1 ile gösterilir. Eşlik, tek veya çift olarak belirtilen, bir
  byte veya word'deki 1'lerin sayısıdır. Örneğin ikili olarak belirtilen bir
  sayı (00110100) 3 tane 1'e sahipse o sayı tek eşlik'tir. Eğer bir sayı 1'lere
  sahip değilse (bütün bitler "0"), o sayı çift eşlik olarak kabul edilir.
- A (Auxiliary carry): Yapılan bir aritmetik işlem sonucunda, 4. bitten 5.bite,
  toplamadan sonraki eldeyi ve çıkarmadan sonraki ödüncü belirtir.
- Z (Zero): Bir aritmetik ve lojik işlem sonucunun sıfır olduğunu belirtir.
- S (Sign): Bir toplama veya çıkarma işlemdinden sonra, sonucun aritmetik
  işaretini belirtir. Eğer sonuç negatif ise S=1, sonuç pozitif ise sonuç S=0
  olur.
- T (Trap): Eğer trap bayrağı 1 ise, tüm devre hata takip (debugging) işlemi
  devreye girer
- I (Interrupt/Kesme): Mikroişlemci tüm devresinin kesme isteği giriş bacağı
  INTR, harici kesme isteği (interrupt request) işlemini kontrol eder. Bu
  bayrak 1 ise INTR bacağı aktif yapılır. Aktif oluğunda kesmelere cevap verir
  diğer durumda ise kesmeler ihmal edilir.
- D (Direction/Yön): 1 ise kaydediciler otomatik olarak azaltılır, 0 ise
  otomatik olarak arttırılır.
- O (Overflow): Taşmayı belirtir.

##### Fiziksel ve Offset Adres
[TODO: Tanım see (`up_ders_4a.mp4 00:37:35`)]


20 bitlik gerçek adres ise
Segment kaydedicideki adres 10h ile çarpılır (yani sağına bir "0" eklenir) ve
ofset kaydedicideki adres ile toplanır. Bu işlemi BIU içerisindeki "Adres
Toplayıcı" bölümü yapmaktadır.

**Örnek**:
`CS = 1000h` ve `IP = 3A07h` olsun. Gerçek adres;

`1000h x 10h = 10000h`
`10000h + 3A07h = 13A07h` olarak bulunur.

CS:IP şeklinde gösterilir: `1000:3A07` ve `13A07h` anlamına gelir.


Segment kaydedicileri ofset kaydediciler ile birlikte yazmak gerekirse;
- CS:IP
- DS:BC veya DS:DI veya DS:SI
- SS:SP veya SS:BP
- ES:DI veya ES:SI


64kB'tan küçük programların, kod, veri ve yığın hafızaları tek bir segmente
(X0000) konur. Yani CS, DS, SS ve ES,de aynı adres vardır. Kod (program) o
segmentin ilk adresinden itibaren yerleştirilir. Yığın (stack) hafıza o
segmentin son adresinden itibaren geriye doğru kullanılarak gelir. Veri
hafızası ise program kodların bittiği adresten hemen sonra başlatılır.

##### Yığın (Stack) Hafıza
Sıralı erişim sağlayan, LIFO sisteminde çalışan hafıza türüdür. Buradaki
bilgiler 16 bittir. Çünkü burada kaydedicilerin değerleri saklanır. Alt
programlı veya interrupt ile çalışıldığı zaman CPU'nun ana programa dönüşünü
sağlamak ve işlemi kaldığı durumdan tekrar devam ettirebilmesi için bazı veri
veya kayıtçıların tutlması gerekir.a Alt program veya interrupt'tan önce
gerekli bilgiler (AX, BX, CS, DS...) yığın belleğe atılır, alt program veya
interrupt'lı çalışma bitince daha sonra da tekrar bu bilgiler yığından alınarak
(konulan sıranın tersi sırada alınmalıdır, LIFO'nun özelliği) ana programın
çalışmasına kalınan yerden devam etmesi sağlanır. POP ve PUSH komutları ile
veri konup alınabilir.

Örnek: (`up_ders_5a_up_soru_2.mp4`): Hafıza dizaynı / hafıza organizasyonu
Hafızanın 5A000h adresinden başlayarak 2 tane 2kB'lık RAM yerleştiriniz
(toplamda 4kB RAM oluşuyor.) Mikroişlemcinin Giriş/Çıkış kontrol ucu !(IO)/M
şeklindedir.

Cevap:
RAM'in kaç bit (dahili) adres hattı olduğunu bulalım.
```
2k = 2^n
k = 2^10
2^1*2^10 = 2^n => n = 11 bulunur
```

## Bilgisayar Mimarileri (`up_ders_5b_ciscrisc.mp4`)
1. Mikroişlemci Yapısal Tasarım Mimarisi
2. Mikroişlemci Komut Seti Mimarisi

### Mikroişlemci Yapısal Tasarım Mimarisi
1. Von Neuman Mimarisi
2. Harvard Mimarisi

#### Von Neuman Mimarisi
İlk bilgisayarlar kullanmıştır.
- G/Ç Birimi
- ALU
- Kontrol Birimi
- Tek Bellek (üzerinden çalışır)
- Clock
- Veri ve Komut aynı bellekte bulunur. Bu yüzden dolayı aynı iletişim yolunu
  kullanır.


Bu adımları gerçekleştirir:
1. Program sayacının gösterdiği adresten (bellekten) komutu al-getir.
2. Program sayıcısını bir arttırır.
3. Getirilen komutun kodunu kontrol birimini kullanarak çöz. Kontrol brimi
   herekli sinyelleri göndererek bazı operasyonlar yapmasını sağlar.
4. 1. adıma geri dönülür.


Günümüzdeki çoğu bilgisayar bunu kullanır.

2. Harvard Mimarisi
Von Neuman'dan farkı: Veri ve Komut belleği farklıdır.


Mikrodenetleyicilerde daha çok kullanılır.


##### Avantajları
Von neuman'dan daha hızlıdır. 
##### Dezavantajları

### Mikroişlemci Komut Tasarım Mimarileri
1. CISC (Complex Instruction Set Computer) Mimarisi
2. RISC (Reduced Instruction Set Computer) Mimarisi


#### CISC (Karmaşık Komut Seti Bilgisayarı)
İşlemci üzerinde performans düşüklüğü ve işlemcinin karmaşık bir hale gelmesine
neden olsa da yazılımı kolaylaştırmaktadır. Değişken ve karmaşık uzunlukta
komutlar kullanır, bu da bellek tasarrufu sağlar. Normalde birden fazla komutla
yazılabilen bir program CISC'te tek komut haline getirilmiştir. Mimarideki
karışıklık işlemcinin performansını da doğrudan etkilemektedir. Yeni bir CISC
mikroişlemci eskilerin assembly dilini desteklemektedir.

##### Avantajları
- Mikroprogramlama assembly dilinin yürütülmesi kadar kolaydır ve sistemdeki
  kontrol biriminden daha ucuzdur.
- Yeni geliştirilen mikrobilgisayar öncekinin assembly'sini destekler.
- Verilen görevi yürütmek için daha az komut kullanır (Bellek tasarrufu).
- Mikroprogram komut kümeleri, yüksek seviyeli dillerin yapılarına benzer
  biçimde yazıldığından derleyici karmaşık olmak zorunda değildir.
##### Dezavantajları
- Gelişen her mikroişlemci ile birlikte komut kodu ve yonga donanımı daha
  karmaşık bir hale gelmiştir.
- Her komutun çevrim süresi aynı değildir. Farklı komutlar farklı çevrim
  sürelerinde çalıştıkları için makinenin performansını düşürecektir.
- Bir program içerisinde mevcut komutların hepsi kullanılamaz.
- Komurlar işlenirken bayrak bitlerine dikkat edilmesi gerekir. Bu da ek
  süre demektir.

#### RISC (Azaltılmış Komut Seti Bilgisayarı)
Bellek hızı arttığından ve yüksek seviyeli diller assembly dilinin yerini
aldığından CISC'in başlıca üstünlükleri geçersiz olmaya başladı.


RISC'in felsefesi üç temel prensibe dayanır:
- Tüm komutlar tek bir çevrimde çalıştırılmalıdır. Her bir komutun farklı
  çevrimde çalışması işlemci performansını etkileyen en önemli nedenlerden
  biridir. Komutların tek bir çevrime performans eşitliğini sağlar.
- Belleğe sadece "load" ve "store" komutlarıyla erişilmelidir. Eğer bir komut
  direkt olarak belleği kendi amacı doğrultusunda yönlendirirse onu çalıştırmak
  için birçok cycle geçer. Komut alınıp getirilir ve bellek gözden geçirilir.
  RISC işlemcisiyle, belleğe yerleştirilmiş veri bir kaydediciye yüklenir,
  kaydedici gözden geçrilir ve son olarak kaydedicinin içeriği ana belleğe
  yazılır.
- Bütün icra birimleri mikro-kod kullanmadan donanımdan çalıştırılmalıdır.
  Mikro-kod kullanımı, dizi ve benzeri verileri yüklemek için çok sayıda çevrim
  demektir. Bu yüzden tek çevrimli icra birimlerinin yürütülmesinde kolay
  kullanılmaz.

##### Özellikleri
- Bir çevrimlik zamanda komut işleyebilme.
- Aynı uzunluk ve sabit formatta komut kümesine sahip olma.
- Ana belleğe sadece "load" ve "store" komutlarıyla erişim; operasyonların
  sadece kaydedici üzerinde yapılması.
- Bütün icra birimlerinin mikro-kod kullanmadan donanımsal çalışması (hızı
  arttıran özellik budur).
- Yüksek seviyeli dilleri destekleme.
- Çok sayıda kaydediciye sahip olması.

##### Avantajları
- Mikroprogramlama assembly dilinin yürütülmesi kadar kolaydır ve sistemdeki
  kontrol biriminden daha ucuzdur.
- Yeni geliştirilen mikrobilgisayar öncekinin assembly'sini destekler.
- Verilen görevi yürütmek için daha az komut kullanır (Bellek tasarrufu).
- Mikroprogram komut kümeleri, yüksek seviyeli dillerin yapılarına benzer
  biçimde yazıldığından derleyici karmaşık olmak zorunda değildir.
##### Dezavantajları
- Gelişen her mikroişlemci ile birlikte komut kodu ve yonga donanımı daha

##### Üstünlükleri
- **Hız**: Azaltılmış komut kümesi, kanal ve süperskaler tasarıma izin
  verildiğinden RISC, CISC işlemcilerden performans olarak 2-4 kat üstündür.
- **Basit donanım**: RISC işlemcinin komut kümesi çok basit olduğundan çok az
  yonga uzayı kullanır. Ekstra fonksiyonlar, bellek kontrol birimleri veya
  kayan noktalı aritmetik birimleri de aynı yonga üzerine yerleştirilir.
- Kısa tasarım süresi: RISC işlemciler CISC işlemcilere göre daha basit
  olduğundan daha çabuk tasarlanabilir.

##### Eksikleri
CISC'ten RISC'e aktarım yapmak problemli olabilir.

#### CISC vs RISC
##### Hız
Kanal tekniği ile eşit uzunlukta segmentlere bölünmüş komutları çalıştırmak
RISC'in bilgi işlemini CISC'ten daha hızlı yapmasını sağlar.

##### Transistör Sayısı
CISC'te transistör RISC'ten çok daha fazladır. Bu daha fazla ısı üretimi
demektir. Bu da daha fazla enerjiye sebep olur. Fan kullanmayı gerektirir.
RISC'te CISC'ten daha fazla komut kullanılması gerekebilir. Yazılım RISC'te
daha uzun olabilir.

| RISC  | CISC |
|-------|------|
| Hızlı | Nispeten yavaş |
| Ucuz  | Pahalı |
| Yeniden dizayn zor | Esnek |
| Daha az komut (instruction) | Daha fazla komut (instruction) |
| Daha fazla saklayıcı (register) | Daha az saklayıcı bellek (register) |

#### EPIC (Explicitly Parallel Instruction Computing) Mimarisi
RISC ve CISC'in üstün yönlerini bir arada toplamıştır.

##### Özellikleri
- Paralel çalıştırma ve denetleme.
- Tahmin kullanımı.
- Derleme anında paralelizmi tanıyan derleyiciler.
- Büyük bir kaydedici kümesi.
- Dallanma tahmini ve bellek gecikmesi problemlerine karşı üstün başarı.
- Gelişme ile birlikte eskiye karşı uyumluluk.

##### CISC'ten aldıkları
- Çok uzun komut kelimesi kullanır.

## Emir İcrası
CPU bir saate (clock pulse) ihtiyaç duyar. Her CPU'nun bir veya birden fazla
saat giriş olmalıdır. Tüm işlemler saatle eşzamanlı olarak yapılması
gerektiğinden CPU emirlerinin icrasında da saatle yapılan bir zamanlama söz
konusudur. Bir CPU emri birden çok makine periyodundan oluşur. Her makine
periyodu ise birden çok saat periyodundan oluşmaktadır.

```
  Fetch  Decode  Execute  Fetch  Decode   Execute

| Getir|Kod|Çöz |Yürüt   | Getir|Kod|Çöz |Yürüt   |
|------------------------|------------------------|
| K  o  m  u  t     N    |    K o m u t  N + 1    |

\_______________________/ \______________________/
      Komut Cycle'ı            Komut Cycle'ı
```

### Makine Periyodu
Bütünlük arz eden en küçük işlem dilimine denir.


Emir kodu alma ile data alma arasında bir fark yoktur. Genelde bir emir için
iki periyot gerekir.

### Komut Çevrimi (Instruction Cycle)
### Makine Çevrimi

## Veri Yapıları
### ASCII
### BCD (Binary Coded Decimal) (Arasınav sorusu olabilir)
her rakamı 4 bitle göstermeye BCD denir.
İki tür BCD vardır:
#### Paketlenmiş
Her rakam 4 bit şekilde yazılır.
#### Paketlenmemiş
Her 8 bite bir rakam koyulur.

## Assmebly Dili (`up_ders_6a_asm1.mp4`)
- Köşeli parantez hafızanın adresi anlamına gelir. Örnek: `[CX]`

### Veri Komutları
#### `MOV <alici>, <verici>`
#### `XCHG <opr1>, <opr2>`
Icerikleri yer degistirir.
#### `XLAT`
DS:BX adresindeki dizi içerisinden n. elemanı bulur. AL=n konularak komut işletilir.
#### `PUSH <gonderici>`
Stackteki 16 bit gönderici, değeri stack içine aktarılr. SP değeri 2 azalır.
DS:BX adresindeki dizi içerisinden n. elemanı bulur. AL=n konularak komut işletilir.
#### `POP <alici>`
Stackteki 16 bit değer, alıcı içine aktarılr. SP değeri 2 artar.
```as
POP AX
```
Stackteki 16 bit değer
#### `IN AL, IPORT`
IPORT"tan 8 bit veri AL'ye okunur.
#### `IN AX, IPORT`
IPORT'tan 16-bit veri AX'e okunur.
#### `OUT OPORT, AL`
AL'nin içeriği OPORT'a gönderilir.
#### `OUT OPORT, AX`
AX'nin içeriği OPORT'a gönderilir.
#### `LEA AX, <SUBADR>`
AX SUBADR'nin Ofset adresiyle yüklenir.
#### `LDS DI, LIST`
DI, LIST'in  Ofset adresiyle yüklenir ve DS, LIST'in Segment adres ile
yüklenir.
#### `LES BX, VEC1`
BX, VEC1'in Ofset adresiyle yüklenir ve ES, VEC1'in Segment adres ile yüklenir.
#### `LAHF`
Flag saklayıcısının düşük 8-bitini AH saklayıcısına yükler.
#### `SAHF`
AH saklayıcısını, Flag saklayıcısının düşük 8-bitine yükler.
#### `PUSHF`
Flag saklayıcısının değerini stack'e saklar. SP değeri 2 azalır.
#### `POPF`
Stack"teki 16 bir değer, flag saklayıcısına alınır. SP değeri 2 artar.

### Dört İşlem Komutları
#### `ADD <alici>, <verici>`
Eldesiz toplamadır.
#### `ADC <alici>, <verici>`
Eldeli toplamadır.
#### `SUB <alici>, <verici>`
Eldesiz çıkarmadır.
