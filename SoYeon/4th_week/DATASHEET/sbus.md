# SBUS

###  �� ��Ŷ�� ũ��
- 25 ����Ʈ ũ��� �̷���� �ִ�.
- [���۹���Ʈ][data 1][data 2]...[data22][flags][������Ʈ]
### ��Ŷ ���� �ֱ�
- analog mode: 14ms ����
- highspeed mode: 7ms ����
### �� ����Ʈ�� ����
�� ����Ʈ = ���ۺ�Ʈ 1�� + �����ͺ�Ʈ 8�� + �и�Ƽ��Ʈ 1�� + ������Ʈ 2��
=> �� 12��Ʈ�� ���� 

### ��Ÿ
- baudrate(���� �ӵ�- ��Ʈ/���� ������ ����ϴ� ������ ���� �ӵ�)�� 100'000 bit/s
- �ϳ��� ��Ʈ�� 10��s(����ũ����)�� �ӵ��� �ɸ���.
- �ֻ�����Ʈ�� ���� ���� ��������.
- ���� ����Ʈ: 11110000b (0xF0)
- �� ����Ʈ: 00000000b
- flag
	- bit 7= ch 17= ������ ä��(0x80)
	- bit 6= ch 18= ������ ä��(0x40)
	- bit 5= ������ �ս�(0x20)
	- bit 4= ������ġ Ȱ��ȭ(0x10)
	- bit 3, 2, 1= �ش����(�Ǵ� �̿��� �� ����)
- �� ä�� ������ 11��Ʈ�� ����� ���۵ȴ�.
	- ���� ù��° ����Ʈ���� 8 ��Ʈ, �� ���� ��Ʈ���� 3 ��Ʈ�� �̿��Ѵ�. (�� ����Ʈ �� ������ ��Ʈ�� 8��Ʈ)