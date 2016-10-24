echo "Build RF24Wrapper."
cd src
g++ -pthread -shared -Wl,-soname,librf24wrapper.so -mfpu=vfp -mfloat-abi=hard -Ofast -Wall -pthread -std=c++11 -lrf24 -o librf24wrapper.so.0.1 RF24wrapper.cpp

echo "Install RF24Wrapper."
install -m 0755 librf24wrapper.so.0.1 /usr/local/lib
ln -sf /usr/local/lib/librf24wrapper.so.0.1 /usr/local/lib/librf24wrapper.so
sudo ldconfig
