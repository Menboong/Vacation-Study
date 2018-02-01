SBUS
=============
한 패킷의 크기
- 25바이트로 이루어져있다.
- startbyte와 1~22의 data와 flags와 endbyte로 이루어져있다.

패킷의 전송 주기
- analog 모드 = 14ms 마다
- highspeed 모드 = 7ms 마다

한 바이트의 구성
- 1 byte = 1개 시작비트 + 8개 데이터 비트 + 1개 패리티 비트 + 2개 멈추는 비트
- 한 바이트는 12개의 비트로 구성 되어 있는 것이다.



- baudrate = 100'000 bit/s이다.
	* baudrate : 초당 보내는 데이터의 수
- 1 bit 10마이크로 초가 걸린다.
- 최상위 비트가 먼저 보내진다
- 수신기에서 거꾸로 된다.
- channel1에서는 data1에서 8bit  data2에서 3비트를 사용해 총 11비트를 이용한다
- startbyte = 11110000b (0xF0)
- endbyte =  00000000b