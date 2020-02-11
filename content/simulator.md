---
title: "RISCV Processor Simulator"
date: 2020-01-31T09:45:16-05:00
draft: false
toc: false
---

## Overview

Design and implement a RISC-V-compatible processor simulator
At the minimum, your processor must be able to execute simple RISC-V (RV64IM) programs
(pre-compiled testcases and the RISC-V tool-chain will be provided),
via a 5-stage pipeline, multiple functional units with varying latencies,
and direct mapped instruction and data caches.


<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;border-color:#ccc;}
.tg td{font-family:Arial, sans-serif;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#ccc;color:#333;background-color:#fff;}
.tg th{font-family:Arial, sans-serif;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#ccc;color:#333;background-color:#f0f0f0;}
.tg .tg-8ot9{border-color:inherit;text-align:center;vertical-align:top}
.tg .tg-8jvv{border-color:inherit;text-align:left;vertical-align:top}
.tg .tg-iml5{background-color:#f9f9f9;text-align:left;vertical-align:top}
.tg .tg-gmdn{background-color:#f9f9f9;text-align:center;vertical-align:top}
.tg .tg-cbs6{text-align:left;vertical-align:top}
.tg .tg-e9v8{text-align:center;vertical-align:top}
</style>
<center>
<table class="tg" style="undefined;table-layout: fixed; width: 600px">
<colgroup>
<col style="width: 492.005682px">
<col style="width: 93.005682px">
</colgroup>
  <tr>
    <th class="tg-8jvv">Processor + cache</th>
    <th class="tg-8ot9">Points</th>
  </tr>
  <tr>
    <td class="tg-iml5">5+ stage pipeline + direct-mapped caches</td>
    <td class="tg-gmdn">50 pts</td>
  </tr>
  <tr>
    <td class="tg-cbs6">5+ stage pipeline + set-associative caches</td>
    <td class="tg-e9v8">60 pts</td>
  </tr>
  <tr>
    <td class="tg-iml5">Super-scalar 5-stage pipeline, set-associative cache</td>
    <td class="tg-gmdn">70 pts</td>
  </tr>
  <tr>
    <td class="tg-cbs6">Super-Scalar, Out-of-order, Set-Associative Caches</td>
    <td class="tg-e9v8">80 pts</td>
  </tr>
</table>
</center>

<br>
You may also add any of the following features to any of the above designs for extra credit.

<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;border-color:#ccc;}
.tg td{font-family:Arial, sans-serif;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#ccc;color:#333;background-color:#fff;}
.tg th{font-family:Arial, sans-serif;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#ccc;color:#333;background-color:#f0f0f0;}
.tg .tg-sg5v{border-color:inherit;text-align:left;vertical-align:top}
.tg .tg-0w8i{text-align:left;vertical-align:top}
.tg .tg-87db{background-color:#f9f9f9;text-align:left;vertical-align:top}
</style>
<center>
<table class="tg" style="undefined;table-layout: fixed; width: 700px">
<colgroup>
<col style="width: 565.005682px">
<col style="width: 110.005682px">
</colgroup>
  <tr>
    <th class="tg-sg5v">Extra Credit (Can add up to &gt; 80 points)</th>
    <th class="tg-sg5v">Points</th>
  </tr>
  <tr>
    <td class="tg-87db">Any of the above + Multi-cycle divider and pipelined multiplier</td>
    <td class="tg-87db">+5 pts</td>
  </tr>
  <tr>
    <td class="tg-0w8i">Any of the above + TLBs</td>
    <td class="tg-0w8i">+10 pts</td>
  </tr>
  <tr>
    <td class="tg-87db">Any of the above + Branch Prediction</td>
    <td class="tg-87db">+10 pts</td>
  </tr>
  <tr>
    <td class="tg-0w8i">Any of the above + Speculative Execution</td>
    <td class="tg-0w8i">+10 pts</td>
  </tr>
  <tr>
    <td class="tg-87db">Any of the above + SMT</td>
    <td class="tg-87db">+20 pts</td>
  </tr>
</table>
</center>

<br>

I will provide the code for the multi-cycle divider and pipelined multiplier as part of the project sekelton code. Please read the code and comments carefully to make sure you know how to use them.
A pipelined multiplier accepts a new multiplication operation every cycle but generates the result after multiple cycles (just like a normal pipeline)
A multi-cycle divider accepts a new operation when the "start" signal is given and takes "n" cycles to finish it. After that, it can accept another operation.

----

## Getting the Skeleton Code
You can clone the code from [GitHub](https://github.com/aakshintala/comp590-154Project). You should implement your processor by modifying the existing SystemVerilog files and adding new ones. _top.sv_ is the top-level SystemVerilog file and _Core.sv_ is your processor core. The README file contains more detailed instructions.

__Project Report__
In addition to submitting your code (via a private GitHub/BitBucket repository), you should also submit a short report (ideally, no more than 3 pages). It should provide a high-level overview of your processor pipeline, the implemented features and details of each pipeline stage. In particular:
* General flavor of your processor: scalar or super-scalar, out-of-order or in-order, etc.
* Instruction and data cache details
* How your caches connect to the main memory (e.g., how you arbitrate between them)
* Functional units implementations
* Memory unit implementation
* How you handle data and control flow dependencies
* How you implement register window overflow and underflow situations

A well-organized and comprehensive report can substantially improve your project grade. It can help me identify important aspects of your design that we might overlook otherwise. You should email me your reports by the project deadline.

__Target Instruction Set__
Your processor should implement the user-mode (non-privileged) subset of RISCV with only Integer and Multiplication/Division instructions -- RV64IM. The latest ISA specification can be found [here](https://github.com/riscv/riscv-isa-manual/releases/download/draft-20200125-8557cb3/riscv-spec.pdf) You can ignore all other parts of the ISA in the manual. Specifically, your processor needs to implement all the instructions (and the requisite architectural state) described in the following sections of the manual:
* RV64I Base Integer Instruction Set (Chapter 5)
* “M” Standard Extension for Integer Multiplication and Division (Chapter 7)

__Traps and Interrupts__
Your processor need not deal with external interrupts. It should treat all "exceptions" (i.e., traps caused by instructions) as precise—no deferred interrupts. Your implementation should correctly check for and generate all the exceptions described in the semantics of your implemented instructions.

__Virtual Memory and MMU__
Your processor need not include any virtual memory support. Hence, you don't need to implement an MMU and can ignore the issues related to the Address Space Identifiers (ASI). Implementing a TLB is extra credit.

------

## SystemVerilog
Hardware designers typically use a Hardware Description Language (HDL) to describe their designs in manners that are amenable to automatic translation to specific hardware technologies using "Synthesis Tools". HDLs are used for many tasks in a hardware design flow, including hardware description, testing and verification. In this course you will use an HDL to describe your design, and perhaps write some test cases.

You will implement your designs in a subset of the SystemVerilog HDL. Although it is a hardware description language, SystemVerilog has many features that make it resemble high-level programming languages such as C or C++. Many of these features, however, are primarily intended for testing and verification, and not hardware description. In this course, we will use a "synthesizable" subset of the language to describe your processors. A synthesizable subset is what a synthesis tool can automatically translate to hardware.

Do not panic if you have not used an HDL before! We will teach and discuss SystemVerilog and its synthesizable subset (which is frankly quite simple) in enough detail in the class. We will also provide a SystemVerilog-to-C++ translator (called Verilator) to translate your SystemVerilog code to C++ code that can be compiled and run to simulate your design. We will provide the necessary testing infrastructure that you will compile together with Verilator's output to create a fully functional simulator for your design.

__Resources__
* [Verilog tutorials from asic-world.com](http://www.asic-world.com/verilog/veritut.html). SystemVerilog is a superset of Verilog. Although we will use some enhanced features of SystemVerilog (such as "logic" data type instead of "wire" or "reg", "always_ff" and "always_comb" instead of "always", etc.), almost all of the RTL design principles and coding styles we use in this class have their origins in Verilog. I suggest that you begin with the following sections: ["Verilog In One Day"]("http://www.asic-world.com/verilog/verilog_one_day.html"), ["My first program in Verilog"](http://www.asic-world.com/verilog/first.html), and ["Verilog Behavioral Modeling"](http://www.asic-world.com/verilog/vbehave.html). The rest of the tutorials can serve as more advanced reference material when you need them.
* The above tutorial in a single [PDF](http://www.ece.umd.edu/class/enee359a.S2008/verilog_tutorial.pdf)
* [Synthesizable Finite State Machine Design Techniques Using SystemVerilog](http://www.sunburst-design.com/papers/CummingsSNUG2003SJ_SystemVerilogFSM.pdf)
* [SystemVerilog Cheat Sheet](http://www.cl.cam.ac.uk/teaching/1011/ECAD+Arch/files/SystemVerilogCheatSheet.pdf)
* [SystemVerilog for VHDL Users](https://compas.cs.stonybrook.edu/~nhonarmand/courses/sp18/cse502/res/date04_systemverilog.pdf)
* [SystemVerilog 3.1a Language Reference Manual (LRM)](http://www.eda.org/sv/SystemVerilog_3.1a.pdf)
* [Verilog mode for Emacs](http://www.veripool.org/wiki/verilog-mode)
* [Introduction to Verilator](http://www.veripool.org/wiki/verilator) (already installed in your VMs)
* [GTKWave](http://gtkwave.sourceforge.net/): Open-source, multi-platform waveform viewer (already installed in your VMs)

-----

## Infrastructure
Each student enrolled in the class will be given a Linux virtual machine on a departmental teaching cluster with the basic required software installed. You will have root access to this virtual machine, and be able to install additional tools (editors, debuggers, etc) as you see fit.

__Accessing Your VMs__

Student VMs will contain all the software needed for the lab assignments, including Verilator, DRAMSim2, gtkwave and the RISCV cross-compiler toolchain. You will receive further instructions on how to access the VM in a private email, after you have submitted your group information to me.

__Installing on your own machines__

You are also welcome to install the needed software on your own machine. The course staff will provide you with the necessary instructions, but is not available to help you debug your personal laptop configuration.

You will need to install Verilator, gtkwave and the RISCV cross-compiler toolchain. The instructions provided here are for Ubuntu; adapt them as necessary for your distro of choice.
* Verilator & GTKWave | On Ubuntu, install from apt: *apt-get install verilator gtkwave*. For further instructions, see [Verilator's wikipage on installation](https://www.veripool.org/projects/verilator/wiki/Installing).
* DRAMSim2: Grab the source from [GitHub](https://github.com/umd-memsys/DRAMSim2/). Build it as a library (*make libdramsim.so*). For further instructions, see [DRAMSim2's README.pdf](https://github.com/umd-memsys/DRAMSim2/blob/master/README.pdf)
* RISC-V toolchain: I've had to modify the toolchain somewhat so contact me if you really want to build it. You don't need this as such, as I've provided compiled testcases with the handout.

__Git__

The files you will need for the labs are distributed using the Git version control system. You will be handing in your work via Git, as well. Git is a powerful, but tricky, version control system. We highly recommend taking time to understand git so that you will be comfortable using it during the labs. Here are some resources to learn more about Git:
* [Understanding git conceptually](http://www.sbf5.com/~cduan/technical/git/) This is a MUST READ if you want to work on git smoothly. (You may skip the last part: Rebasing, for now)
* [Quick (15-20 min) online exercise](http://try.github.com/levels/1/challenges/1) from GitHub.
* [Git user manual](http://www.kernel.org/pub/software/scm/git/docs/user-manual.html)
If you are already familiar with other version control systems, you may find [this CS-oriented overview of Git](http://eagain.net/articles/git-for-computer-scientists/) useful.