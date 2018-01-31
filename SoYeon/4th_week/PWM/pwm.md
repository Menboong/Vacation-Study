# PWM
###  Prescaler
- 타이머에 공급하는 입력 클럭의 속도를 조절하는 분주기
	-> 입력된 Clock 신호의 주기를 변형시키는 하드웨어
- ' 분주 ' 라는 말 자체가 의미하듯이 클럭을 나눈다는, 즉 속도를 느리게 한다는 말이다.
### Counter Period
- 어떤 기준을 정하는 것
- 타이머 레지스터의 값이 Counter Period의 값과 같아지면 0으로 초기화
- 타이머 레지스터와 Counter Period의 값이 같아지면 새로운 PWN Pulse 출력 
### Pulse
- Duty Cycle 값을 출력시키기 위해 값을 설정하는 것
   -> 만약 Duty Cycle 50%로 PWM pulse를 출력하려면 pulse 값을 50으로 
       설정하면 된다.
### PWM의 주기와 주파수 구하기   
- PWM 주파수 = 클럭 주파수/Prescaler/ Counter Period
	ex) 32MHz, 32 Prescaler, Counter Period: 1000
	       32MHz/ 32 Prescaler = 1MHz
	       1MHz/1000 = 1KHz ( 1MHz=1000KHz )  
-  PWM 주파수= 1/주기 
	  =>  PWM 주기= 1/주파수  
	         ex) 1/1KHz = 1/ 1000 = 1ms  
	  