# OpenLane eğitim dosyaları

21.01 ve 22.01.2023 tarihlerinde yapılan Teknofest eğitiminde kullanılan tasarımlar bu klasördedir.

Akışların koşturulması için OpenLane/designs klasörüne taşınmalıdır.

Demoda koşulan akışlar aşağıdaki OpenLane ve PDK sürümlerinde koşulmuştur:
OpenLane sürümü: c60657c6637349cc7b0b64b36dcd3c0fb7962a10
PDK sürümü: 327e268bdb7191fe07a28bd40eeac055bba9dffd

## Klasör düzeni
* fpga_3x3: CLB'nin tasarım akışının bulunduğu klasör. fpga_top'dan önce koşturulmalıdır.
* fpga_top: FPGA top modülünün tasarım akışının klasörü. fpga_3x3'ten sonra koşturulmalıdır.
* fedar_e1: OpenRAM'den alınmış SRAM ile koşulan tasarımın bulunduğu klasör.

## Kaynaklar
* [Fedar E1 işlemcisinin asıl reposu](https://github.com/eminfedar/fedar-e1-rv32i)
* [OpenFPGA](https://github.com/lnis-uofu/OpenFPGA)
