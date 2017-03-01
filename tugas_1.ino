void setup()// fungsi yang akan berjalan sekali saja, digunakan untuk menginialisasi variable atau mode pin.
{
Serial.begin(9600);// untuk menentukan kecepatan transimisi data
}
 
void loop()// fungsi untuk mengeksekusi program secara berulang yang telah dibuat
{
Serial.println("Apa Kabar");// data yang dikirim berupa kalimat "Apa Kabar"
}
