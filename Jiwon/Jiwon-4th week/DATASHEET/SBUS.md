SBUS
=============
�� ��Ŷ�� ũ��
- 25����Ʈ�� �̷�����ִ�.
- startbyte�� 1~22�� data�� flags�� endbyte�� �̷�����ִ�.

��Ŷ�� ���� �ֱ�
- analog ��� = 14ms ����
- highspeed ��� = 7ms ����

�� ����Ʈ�� ����
- 1 byte = 1�� ���ۺ�Ʈ + 8�� ������ ��Ʈ + 1�� �и�Ƽ ��Ʈ + 2�� ���ߴ� ��Ʈ
- �� ����Ʈ�� 12���� ��Ʈ�� ���� �Ǿ� �ִ� ���̴�.



- baudrate = 100'000 bit/s�̴�.
	* baudrate : �ʴ� ������ �������� ��
- 1 bit 10����ũ�� �ʰ� �ɸ���.
- �ֻ��� ��Ʈ�� ���� ��������
- ���ű⿡�� �Ųٷ� �ȴ�.
- channel1������ data1���� 8bit  data2���� 3��Ʈ�� ����� �� 11��Ʈ�� �̿��Ѵ�
- startbyte = 11110000b (0xF0)
- endbyte =  00000000b