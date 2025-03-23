addi x1, x0, 10
addi x2, x0, -2
add x3, x1, x2
addi x4, x3, 200
addi x5, x3, -5
addi x6, x0, 0
addi x7, x0, 10
loop: 
addi x6, x6, 1
blt x6, x7, loop
add x8, x0, x6