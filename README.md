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

## Contributing

1. Fork it ( https://github.com/askn/tisikkirlir/fork )
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create a new Pull Request
