lui x31, 0x10003 #addr hex 54
lui x30, 0x10002 #addr hex 01
lui x29, 0x10010 #addr sw
#====
la x22, value
#
la x21, find01
lui x27, 0x10000 #addr red led
addi x25, x0, -1 #full ffff
lui x3, 0x02faf
addi x3, x3, 0x080 #wait 1 second
addi x4, x0, 60 #compare 1 minute
addi x1, x0, 1 #default counter down is 1 minute
addi x2, x0, 0 #second
start:
lw x28, 0(x29)
slli x28, x28, 16 #get sw16
andi x28, x28, 0x01
beq x28, x0, coutDown
lw x28, 0(x29)
andi x1, x28, 0xf
jal x0, start
coutDown:
sw x0, 0(x27)
addi x10, x1, 0 #load to x10 to decode minute
jalr x20, x21, 0 #call decode funtion
add x28, x11, x22 #get addr value of chuc
lw x28, 0(x28)
sb x28, 1(x31) #write chuc
add x28, x10, x22 #get addr value of dv
lw x28, 0(x28)
sb x28, 0(x31) #write dv minute
addi x10, x2, 0 #load to x10 to decode second
jalr x20, x21, 0 #call decode 
add x28, x11, x22 #get addr value of chuc
lw x28, 0(x28)
sb x28, 1(x30) #write chuc
add x28, x10, x22 #get addr value of dv
lw x28, 0(x28)
sb x28, 0(x30) #write dv second
beq x2, x0, reducex1
waitSecond:
beq x5, x3, completeSec
addi x5, x5, 1
jal x0, waitSecond
completeSec:
addi x5, x0, 0 #reset counter second50M
addi x2, x2, -1
jal x0, coutDown
reducex1:
beq x1, x0, exit
addi x1, x1, -1
addi x2, x0, 59
jal x0, coutDown
exit:
sw x25, 0(x27)
jal x0, start

find01: #store input x10, result store in x11, x10
addi x13, x0, 10
addi x11, x0, 0
loop:
bge x10, x13, subb10
jalr x0, x20, 0
subb10:
addi x10, x10, -10
addi x11, x11, 1
jal x0, loop
.text
value: 
.word 0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10