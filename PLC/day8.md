## day8

### 서보모터

서보모터는 x70, y70부터 시작한다.

위치결정제어 : 현재 위치에서 목표 위치까지 목표속도로 이동하는 것



### 통신
데이터를 주고 받는 체계 : socket - protocol - modbus

소켓이 연결되면 client는 server의 데이터를 읽거나 쓰기가 가능한 상태

모드버스-tcp를 이용해서 사용할 수 있다.

모드버스는 프로토콜
coil / register(bit, word), address ,length

어떻게 데이터를 주고 받나
read/write
function code
+data(value)

bit(coil) : 스위치처럼 on/off만 데이터(start, stop, pause)
word : 16bit 숫자를 담는 데이터(속도, 전압 좌표, 축별각도)

데이터프레임
mbap header - fucntion code - data

function code
wr sigle coil : 한 접점을 제어
hff00 = on h0000 = off
program play, stop, alram, reset 등 동작 트리거로 사용

wr signle register : 값 1개 쓰기
워드에 값 하나만 기록하는 명령

wr multi registers : 

gp.ecprtcl(p 242)
통신 설정 법 (p 77, 81)

request 
client가 server에 읽기, 쓰기 요청
normal response
server가 요청을 정상적으로 처리한값을 응답
read : 데이터 반환
write : 정상처리 반환
error response
요청한 주소, 길이, 상태가 유효하지 않음
통신오류, timeout, server 미응답시 에러코드 반환

커넥션 확립 (p106, 111)