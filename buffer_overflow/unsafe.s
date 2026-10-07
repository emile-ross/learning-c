	.file	"unsafe.c"
	.text
	.section	.rodata
.LC0:
	.string	"Missing arguments in command\n"
.LC1:
	.string	"a is valued at '%u'\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	cmpl	$1, -36(%rbp)
	jg	.L2
	movq	stderr(%rip), %rax
	leaq	.LC0(%rip), %rdi
	movq	%rax, %rcx
	movl	$29, %edx
	movl	$1, %esi
	call	fwrite@PLT
	movl	$-1, %eax
	jmp	.L3
.L2:
	movw	$128, -20(%rbp)
	movswl	-20(%rbp), %eax
	leaq	.LC1(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	$0, -18(%rbp)
	movw	$0, -10(%rbp)
	movq	-48(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	leaq	-18(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movswl	-20(%rbp), %eax
	leaq	.LC1(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
.L3:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L4
	call	__stack_chk_fail@PLT
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 16.2.1 20260810 compiled on arch linux"
	.section	.note.GNU-stack,"",@progbits
