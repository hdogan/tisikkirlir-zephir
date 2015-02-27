# Tisikkirlir

![cat](https://dl.dropbox.com/s/x2otko6ropilnb0/Birikindi-sizin-i%C3%A7in-sivisiyim-kilisi.jpg)

## Kurulum

    $ git clone https://github.com/hdogan/tisikkirlir.git

Kurulum için Zephir kullanmanız önerilir. Zephir kurmak için https://github.com/phalcon/zephir adresine bakınız.

Zephir ile

    $ zephir build

veya `ext` dizini içinde

    $ phpize & ./configure & make install

Eğer bunlar bir işe yaramıyorsa

    $ zephir compile

komutunu çalıştırıp `ext/modules/tisikkirlir.so` dosyasını PHP extension dizinine kopyalayın.

Son olarak eklentiyi yüklemek için `php.ini` dosyanıza `extension=tisikkirlir.so` satırını eklemelisiniz.

## Kullanımı

```php
<?php
echo Tisikkirlir\Tisikkirlir::tsk("Bi Star ATsana Canısı");
# "Bi Stir İTsini Cinisi"
```

## Katkıda Bulunmak İçin

1. Çatalla ( https://github.com/hdogan/tisikkirlir/fork )
2. Yeni özellik dalı oluştur (`git checkout -b yeni-ozellik`)
3. Değişiklikleri işle (`git commit -am 'Bazı yeni özellikler eklendi'`)
4. Dalı itele (`git push origin yeni-ozellik`)
5. Yeni bir koyma isteği oluştur

*`Bu en son kısmı Google Translate ile çevirmedim. Çok uykum vardı, birden öyle çeviriverdim.`*
