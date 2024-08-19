* _aggregate_ sınıflar kullanıcılara tüm elemanlarına (özel bir) ilk değer verme sentaksı ile erişme olanağı sağlar.
* Bir _aggregate_, elemanların bir araya gelerek oluşturduğu basit bir veri yapısı olarak düşünülmeli.
* aggregate sınıflar elemanları ile _invariant_'lar sağlamıyorlar. (elemanlarının değerleri hakkında bir garanti vermiyorlar)
* _aggregate_'ların _user-declared ctor_'ları olamaz.
* _aggregate_'ların tüm _non static_ veri elemanları _public_ olmak zorunda.
* _aggregate_'ların _private_ ya da _protected_ üye fonksiyonları olabilir.
* _aggregate_'lar _static_ veri elemanlarına sahip olabilir.
* _aggregate_'lar _user declared/defined_ atama operatör fonksiyonlarına ve _destructor_'a sahip olabilirler.
* _aggregate_'lar sanal fonksiyonlara sahip olamaz.
* _C++17_ standardı _aggregate_'ların kalıtım yoluyla elde edilmesi olanağını verdi.
  * _aggregate_'ların taban sınıflarının _aggregate_ olması gerekmiyor.
  * aggregate'ların taban sınıflarının virtual olmaması gerekiyor. _(no virtual base class)_
* _aggregate_'ların elemanlarının _aggregate_ olması gerekmiyor.
* _aggregate_'ların elemanları referans olabilir.
* _aggregate_'lar _operator overloading_ mekanizmasından faydalanabilir.
* _aggregate_'lar _"default member initializer"_ kullanabilir. _(C++14)_
* _aggregate_'lar sınıf şablonu _(class template)_ olarak tanımlanabilir.
* bir _aggregate type_ aynı zamanda _trivial_ ve _standard-layout type_ olabilir. Ama olmak zorunda değil.
* _aggregate_ türlerden nesneler için her zaman _structured binding_ sentaksı kullanılabilir.
* _lambda_ ifadelerinden elde edilen _closure type_'lar _aggregate_ değiller.
* _closure type_'lardan kalıtım yoluyla elde edilen sınıflar _aggregate_
* Bir türün _aggregate_ olup olmadığı _std::is_aggregate_ meta fonksiyonu ile derleme zamanında sınanabilir._(C++17)_
