# 说明
这个仓库可以帮助你将测试程序编译成二进制文件，以便运行在RISC-V Rocket
Chip模拟器上。此外，你还可以将程序运行时的CPU信息打印到一个指定的output文件中。

# 使用方法
前提是你已经``git clone``了[RISC-V RocketChip
Generator](https://github.com/ucb-bar/rocket-chip)项目仓库。  

进入到``rocket-chip/emulator``目录，然后将本仓库``git clone``下来。

完成之后，进入到``riscv-for-emulator``目录中。你可以看到一些带有数字前缀的目录，这些目录都对应这一个测试程序。其中有一个``common``目录，内部包含对于这些测试程序通用的编译文件。你也可以自己创建一个目录，最好带有前缀（以便区分测试程序）。从其他测试程序目录下拷贝一个``makefile``文件。然后针对你的测试程序修改一下``makefile``后，执行``make``命令，就能生成可以运行在Rocket
Chip模拟器上的基于RISC-V的二进制程序啦。
