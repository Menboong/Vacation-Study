# PWM
###  Prescaler
- Ÿ�̸ӿ� �����ϴ� �Է� Ŭ���� �ӵ��� �����ϴ� ���ֱ�
	-> �Էµ� Clock ��ȣ�� �ֱ⸦ ������Ű�� �ϵ����
- ' ���� ' ��� �� ��ü�� �ǹ��ϵ��� Ŭ���� �����ٴ�, �� �ӵ��� ������ �Ѵٴ� ���̴�.
### Counter Period
- � ������ ���ϴ� ��
- Ÿ�̸� ���������� ���� Counter Period�� ���� �������� 0���� �ʱ�ȭ
- Ÿ�̸� �������Ϳ� Counter Period�� ���� �������� ���ο� PWN Pulse ��� 
### Pulse
- Duty Cycle ���� ��½�Ű�� ���� ���� �����ϴ� ��
   -> ���� Duty Cycle 50%�� PWM pulse�� ����Ϸ��� pulse ���� 50���� 
       �����ϸ� �ȴ�.
### PWM�� �ֱ�� ���ļ� ���ϱ�   
- PWM ���ļ� = Ŭ�� ���ļ�/Prescaler/ Counter Period
	ex) 32MHz, 32 Prescaler, Counter Period: 1000
	       32MHz/ 32 Prescaler = 1MHz
	       1MHz/1000 = 1KHz ( 1MHz=1000KHz )  
-  PWM ���ļ�= 1/�ֱ� 
	  =>  PWM �ֱ�= 1/���ļ�  
	         ex) 1/1KHz = 1/ 1000 = 1ms  
	  