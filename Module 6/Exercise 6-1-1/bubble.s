	.file	"bubble.c"
	.text
	.p2align 4
	.globl	bubble_sort
	.type	bubble_sort, @function
bubble_sort:
.LFB0:
	.cfi_startproc
	leal	-1(%rsi), %edx
	testl	%edx, %edx
	jle	.L1
	leaq	4(%rdi), %r9
	.p2align 4,,10
	.p2align 3
.L3:
	subl	$1, %edx
	movq	%rdi, %rax
	movq	%rdx, %r8
	leaq	(%r9,%rdx,4), %rsi
	.p2align 4,,10
	.p2align 3
.L5:
	movl	(%rax), %edx
	movl	4(%rax), %ecx
	cmpl	%ecx, %edx
	jle	.L4
	movl	%ecx, (%rax)
	movl	%edx, 4(%rax)
.L4:
	addq	$4, %rax
	cmpq	%rax, %rsi
	jne	.L5
	movl	%r8d, %edx
	testl	%r8d, %r8d
	jne	.L3
.L1:
	ret
	.cfi_endproc
.LFE0:
	.size	bubble_sort, .-bubble_sort
	.ident	"GCC: (GNU) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
