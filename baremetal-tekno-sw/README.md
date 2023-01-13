# BAREMETAL ORTAMI

Teknofest 2023 Çip Tasarım Yarışması Sayısal İşlemci Kategorisi yarışma 
şartnamesine göre Baremetal ortamı oluşturulmuştur. 

[RISC-V Derleyici](https://safirdepo.b3lab.org/shares/public/share/zWyik4Fi8uypDCUcauuIkxjbQcHHuj1Y ), tasarlanması istenilen eklentiler ile birlikte oluşturulmuştur. Ubuntu işletim sisteminde kullanılabilmektedir. Windows üzerinde WSL üzerine kurulmuş Ubuntu ile birliktede kullanılabilir. İsme tıklayarak indirebilirsiniz.

İndirdiğiniz derleyiciyi aşağıdaki adımları izleyerek kullanılabilir hale getirebilirsiniz. 

`riscv.tar.gz` dosyasını indirdiğiniz klasörde aşağıdaki komutları çalıştırınız. 

```
sudo tar -xvzf riscv.tar.gz -C /opt

export RISCV=/opt/riscv
```

`${RISCV}` komutu ile dizinin tanımlandığını kontrol edebilirsiniz. Baremetal ortamının kullanılabilimesi için bu tanımlamanın yapılaması gerekmektedir.

Derleme işlemini indirdiğiniz `baremetal-tekno-sw` klasörünün içierisinde gerçekleştirebilirsiniz.
Örnek olarak oluşturulmuş `tekno_example` uygulamasını aşağıdaki komutlarla derleyebilirsiniz. Kendi test sistemlerinizi verilen örnekleri referans alarak oluşturabilirsiniz.

```
cd baremetal-tekno-sw

make software PROGRAM=tekno_example BOARD=tekno
```
