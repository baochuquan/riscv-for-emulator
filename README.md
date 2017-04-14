### What's the role of this repo?
To help you compile your own test program into binary. And you can run this binary on top of ```emulator```. Also, you can printf the CPU pipeline information into an output file. 

### How to use?
You may have ```git clone``` the [RISC-V RocketChip Generator](https://github.com/ucb-bar/rocket-chip).  

Enter ```rocket-chip/emulator```, then ```git clone``` this repo.

Then enter ```riscv-for-emulator``` directory. You can see some folders with a numeric prefix, which are the user test programs, and an ```common``` folder which has some common files for these test programs.
You can creat a your own folder, better with a numeric prefix. And Copy a makefile from any other test programs' folder. Before you type ```make```, you need to see what's in the makefile, the most important is that you need to modify some places to make it fit your own environment.

There are three places you need to modify: ```line2```, ```line19```, ```line33```
