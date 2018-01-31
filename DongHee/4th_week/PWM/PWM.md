# PWM
#### PWM(Pulse Width Modulation) 제어란 전력의 크기를 조절하는 것이다.

> #### prescaler
- 입력 클럭의 속도를 조절하는 분주기
- 시스템 클럭을 prescaler값으로 나눈 값을 타이머 클럭으로 사용함 ex) 시스템 클럭:32mhz, prescaler:16이면 타이머클럭:2mhz
> #### counter period
- 타이머 레지스터에서는 클럭 펄스가 실행될 때 레지스터값이 1증가
- 레지스터의 값이 counter period의 값과 같아지면 0으로 초기화
- 0으로 초기화 되는 순간 pwm 출력되어 라이징 에지가 실행됨
> #### pulse 
- 극히 짧은 시간만 흐르는 전류
> #### PWM의 주기와 주파수 구하기
- 주파수 = 기존 클럭 / prescaler / counter period이다
- 예를 들어 기존 클럭이 32이고 prescaler가 32이면 1mhz의 클럭을 사용한다.
- counter period만큼의 펄스가 있어야 하나의 pwm이 생기므로 1mhz/counter period이 주파수이다
- 주기는 주파수의 역수를 취해주면 알 수 있다.