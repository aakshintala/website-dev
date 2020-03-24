---
title: "COMP 590-154 Spring '20"
date: 2018-06-23T17:26:45-07:00
draft: false
toc: true
---

## General Course Info

* Time:                    Tuesday and Thursday  2:00 PM — 3:15 PM
* Location:            Sitterson 011
* Instructor:          Amogh Akshintala
	- Office:                       Sitterson 305
	- Email:                        [aakshintala@cs.unc.edu](mailto:aakshintala@cs.unc.edu)
	- Web:                           [https://aakshintala.com](https://aakshintala.com)
	- Office Hours:          Tue 12:30 pm to 2:00 pm & Thur 3:30 PM – 5:00 PM, or by appointment.

## Textbooks and Resources

<!-- <div> -->
<img style="float: left; width: 200px; margin-right: 30px;" src="../images/image1.jpg">

<i>J. L. Hennessy and D. A. Patterson </i>, <b>Computer Architecture: A Quantitative Approach, 6th Edition,</b> Morgan Kaufmann Publishing Co.\\
ISBN13: 978-0128119051 \\
ISBN10: 0128119055

We will also use material from the <a href= "http://booksite.mkp.com/9780123838728">companion web site.</a>

<br>

## Course Description

The goal for this course is to provide the general CS major a broad understanding of modern computer systems. At the end of the course, students should be able to reason about the differences between different computing approaches and reason about how to pick the right compute abstraction for a given task. While the main focus of the class is on Computer Architecture, we will also cover material from OS, compilers and networks as needed, albeit not to the extent a separate class on each would.

Topics covered: Performance measurement, Pipelining, Out-of-Order Execution, Speculative execution, Instruction-level parallelism, Memory hierarchies, Storage technologies, I/O, Floating-point arithmetic, Data parallelism, SIMD, SIMT, GPUs, specialized accelerators, Interconnects, Virtualization, Coherence, Synchronization, System-on-a-Chip (SoC), Network-on-a-Chip (NoC), Warehouse-scale computers, Networking infrastructure.

## Target Audience

This is an advanced undergraduate course geared towards the general CS major who has at the very least already taken introductory classes on Computer Organization and Operating Systems.

## Prerequisites

COMP 411 (or equivalent) is a hard prerequisite (no exceptions). COMP 530 (or equivalent) is a soft prerequisite. If you haven’t taken COMP530, you must have taken at least one other systems class (networks, compilers, etc). A basic course in digital logic (such as COMP541) is recommended, but not required. Prior coursework in compilers, digital logic, and/or hardware design will also likely be of help. If you are unsure whether you have the necessary background or if you are unable to sign up via the web, please contact the instructor.

## Goals and Key Learning Objectives

At the end of this course, a successful student should be able to:

*   Reason about modern computer design and select the appropriate model for any task;
*   Appreciate similarities and differences among modern computer systems: from SoCs to warehouse-scale computers.
*   Understand the software and hardware approaches used to improve performance;
*   Identify the implications of different types of memory hierarchies, as well as their semantic guarantees;
*   Determine how to best improve performance when given a particular computer architecture and software application.
*   Understand the various types of parallelism that can be exploited, and the types of hardware suited to exploit them

## Course Requirements

The course will be taught in an interactive lecture style. Although there are slides and planned topics to discuss, students are expected to ask and answer questions during the lecture. Attendance is expected, but will not be recorded.

Students are expected to complete several programming assignments.


## Key Dates

*   Assignment 1 due: __6th Feb 2020 (before class)__
*   [Project Proposal](../projects/) due: __13th Feb 2020 (before class)__
*   Assignment 2 due: __23rd April 2020 (before class)__
*   Project due: __4th May 2020 (before the exam)__
*   Final exam: __4th May 2020 12:00 P.M.__

## Grading Criteria

Grading will be on a point system. Obtaining a total of 100 points guarantees that you will receive an ‘A’ grade in the course. All scores below 100 points will be graded on a curve.

*   Assignment 1 – 15 (Determining cache size and timing)
*   Assignment 2 – 30 (Profiling and tuning using perf and hardware counters)
*   Final Exam - 50
*   Project – 80
*   Participation – 10

## Attendance and Participation

Participation scores will be determined by the instructor based on interactions in the class and during office hours, and on the mailing list. (Merely attending class or office hours doesn’t satisfy participation). Class attendance will not be recorded.

All course announcements and discussion will be on Piazza:
[https://piazza.com/unc/spring2020/comp590154](https://piazza.com/unc/spring2020/comp590154)

## Course Schedule
These lectures have been developed in parts by Professors Asanovic, Arvind, Austin, Brehob, Emer, Falsafi, Ferdman, Hill, Hoe, Honarmand, Kim, Kubiatowicz, Loh, Lipasti, Martin, Milder, Patterson, Roth, Sanchez, Shen, Smith, Sohi, Torrellas, Tyson, Vijaykumar, and Wenisch of Carnegie Mellon University, Georgia Institute of Technology, Massachusetts Institute of Technology, Purdue University, Stony Brook University, University of California at Berkeley, University of Michigan, University of Illinois, University of Pennsylvania, and University of Wisconsin.

<style type="text/css">
.tg  {border-spacing:0;border-color:#ccc; width: 100%}
.tg td{padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#ccc;color:#333;background-color:#fff;}
.tg th{padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#ccc;color:#333;background-color:#f0f0f0;}
.tg .tg-1wig{font-weight:bold;text-align:left;vertical-align:top}
.tg .tg-buh4{background-color:#f9f9f9;text-align:left;vertical-align:top}
.tg .tg-0lax{text-align:left;vertical-align:top}
</style>
<table class="tg">
  <tr>
    <th class="tg-1wig">Date</th>
    <th class="tg-1wig">Topic</th>
    <th class="tg-1wig">Comments</th>
  </tr>
  <tr>
    <td class="tg-buh4">Jan 9</td>
    <td class="tg-buh4">Intro &amp; Administrativia <a href="../slides/L01-Intro.pptx">PPT</a> <a href="../slides/L01-Intro.pdf">PDF</a> </td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Jan 14</td>
    <td class="tg-0lax">Review <a href="../slides/L2-Review.pptx">PPT</a> <a href="../slides/L2-Review.pdf">PDF</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Jan 16</td>
    <td class="tg-buh4">Simple Machine Implementations & Microcoding <a href="../slides/L03-Microcoding.pptx">PPT</a> </td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Jan 21</td>
    <td class="tg-0lax">Caches<a href="../slides/L4-memory-hierarchy-and-caches.ppsx">PPT</a> <a href="../slides/L4-memory-hierarchy-and-caches.pdf">PDF</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Jan 23</td>
    <td class="tg-buh4">Caches</td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Jan 28</td>
    <td class="tg-0lax">Caches</td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Jan 30</td>
    <td class="tg-buh4">DRAM <a href="../slides/L5-memory-dram.ppsx">PPT</a> <a href="../slides/L5-memory-dram.pdf">PDF</a></td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Feb 4</td>
    <td class="tg-0lax">Pipelining<a href="../slides/L6-Pipelining.ppsx">PPT</a> <a href="../slides/L6-Pipelining.pdf">PDF</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Feb 6</td>
    <td class="tg-buh4">Pipelining</td>
    <td class="tg-buh4">Project Groups due </td>
  </tr>
  <tr>
    <td class="tg-0lax">Feb 11</td>
    <td class="tg-0lax">SystemVerilog tutorial <a href="../slides/L7-systemverilog.pptx">PPT</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Feb 13</td>
    <td class="tg-buh4">Pipelined Execution - White board</td>
    <td class="tg-buh4"><a href="../assignment1/">Assignment 1</a> Due</td>
  </tr>
  <tr>
    <td class="tg-0lax">Feb 18</td>
    <td class="tg-0lax">OoO Execution - White board</td>
    <td class="tg-0lax"><a href="../projects/">Project Proposals</a> Due</td>
  </tr>
  <tr>
    <td class="tg-buh4">Feb 20</td>
    <td class="tg-buh4">OoO & Register Rename <a href="../slides/L8-ooo-and-rename.pptx">PPT</a> <a href="../slides/L8-ooo-and-rename.pdf">PDF</a></td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Feb 25</td>
    <td class="tg-0lax">Speculation and traps in OoO <a href="../slides/L9-ooo-speculation.pptx">PPT</a> <a href="../slides/L9-ooo-speculation.pdf">PDF</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Feb 27</td>
    <td class="tg-buh4">Speculation and traps in OoO <a href="../slides/L9-ooo-speculation.pptx">PPT</a> <a href="../slides/L9-ooo-speculation.pdf">PDF</a></td>
    <td class="tg-buh4">Assignment 2 Due</td>
  </tr>
  <tr>
    <td class="tg-0lax">Mar 3</td>
    <td class="tg-0lax">Out of Order Memory Access <a href="../slides/L10-ooo-memory.pptx">PPT</a> <a href="../slides/L10-ooo-memory.pdf">PDF</a> </td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Mar 5</td>
    <td class="tg-buh4">Out of Order Memory Access --- continued</td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Mar 10</td>
    <td class="tg-0lax">SPRING BREAK<!-- Multithreading --></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Mar 12</td>
    <td class="tg-buh4">SPRING BREAK<!-- Vectors --></td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Mar 17</td>
    <td class="tg-0lax">Extended Break</td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Mar 19</td>
    <td class="tg-buh4">Extended Break</td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Mar 24</td>
    <td class="tg-0lax">Branch Prediction <a href="../slides/L11-bpred.pptx">PPT</a> <a href="../slides/L11-bpred.pdf">PDF</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Mar 26</td>
    <td class="tg-buh4"><!-- Synchronization and Memory Consistency Models --></td>
    <td class="tg-buh4"><s>Project Milestone Report Due</s></td>
  </tr>
  <tr>
    <td class="tg-0lax">Mar 31</td>
    <td class="tg-0lax"><!-- Synchronization Primitives --></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Apr 2</td>
    <td class="tg-buh4"><!-- I/O and Warehouse-Scale Computing --></td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Apr 7</td>
    <td class="tg-0lax"><!-- Virtual Machines --></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Apr 9</td>
    <td class="tg-buh4"><!-- Virtual Machines --></td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Apr 14</td>
    <td class="tg-0lax"><!-- Domain-Specific Architectures --></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Apr 16</td>
    <td class="tg-buh4"><!-- Domain-Specific Architectures --></td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">Apr 21</td>
    <td class="tg-0lax"><!-- Domain-Specific Architectures --></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-buh4">Apr 23</td>
    <td class="tg-buh4">Last Day of classes (Course Review + Wrap)</td>
    <td class="tg-buh4"></td>
  </tr>
  <tr>
    <td class="tg-0lax">May 4</td>
    <td class="tg-0lax">Final Exam 12:00 pm SN011</td>
    <td class="tg-0lax">Projects Due (before exam)</td>
  </tr>
  <tr>
    <td class="tg-buh4">May 10</td>
    <td class="tg-buh4">Commencement</td>
    <td class="tg-buh4"></td>
  </tr>
</table>

## Course Policies

### Late Policy 

All deadlines are before class (2 PM) on the day the assignment is due. Each student is entitled to 5 late days (in total), to be used at your own discretion, where no penalty will be assessed. Assignments submitted after the deadline (and once your late days are used up) will incur a penalty of 10% of the points of the assignment multiplied by the number of students in the team per 24hr period, until there are no points left to earn from that assignment. Exemptions to this will be allowed in three cases:

1.  Illness, which has to be documented by a doctor and approved by the university.
2.  Death in the immediate family.
3.  Accommodations for students with disabilities, as prescribed by the university.

__No extensions will be given for any other reason.__

### Forming Groups

There is no limit on the size of group you choose to form for assignments and the final project. Larger group sizes allow you to take on more challenging projects.  To balance out the advantages of a larger group compared to individuals working alone, grading strictness depends on the size of the group. In the past, large groups have succeeded in submitting amazing projects. However, beware of accepting deadbeats into your group: they are likely to hurt your grade beyond repair.

You must declare your group via email to the instructor and TA at most 5 days after the assignment handout.  You may change group composition for each assignment, as long as each change is announced within 5 days of that assignment’s handout.

## Honor Code 

For the homework, warm-up projects, and course project, you may work in groups of any size.

If you work alone, you submit your own work. If you work with partners, you submit your assignments jointly. Whether you work in a group or not, you may (and are encouraged to) discuss the assignment details, designs, debugging techniques, or anything else with anyone you like in general terms, but you may not provide, receive, or take code to or from anyone outside of your group.

The code you and your partner submit must be your own work, and only your own work. Failure to document/attribute which students in the class contributed to the assignment is grounds for all students losing points on the lab. Using outside sources (the internet, previous courses, help from anyone not enrolled in the course or course staff), constitutes academic dishonesty and will be referred to the student attorney general. Any evidence that source code has been copied, shared, or transmitted in any way between non-teammates (this includes using source code written by others in previous semesters, or at other universities!) will be regarded as evidence of academic dishonesty.

Note that the course staff will use tools such as MOSS to detect cheating. These tools are very good at comparing large sets of programming assignments and correlating those that have a shared code basis, even if the code has been changed significantly!

You are welcome to use existing public libraries in your programming assignments (such as public classes for queues, trees, etc.), unless otherwise noted. You may look at code that is in the public domain, such as open source implementations of RISC-V processors. Note that you must respect the licenses they are released under, as well as, cite and acknowledge these sources properly. Not doing so constitutes academic plagiarism, and will not be tolerated.

Some more-specific guidelines for the assignments:

*   Handing in someone else's work is expressly forbidden.
*   You should not discuss actual code, in any form, with people who are not on your team. You may not discuss code at a white board. You may not help each other debug your code.
*   You must write down the names of people with whom you discussed the assignment and what you discussed with them. If student A gets an idea from student B, both students must write down that fact and also what the idea was.
*   You must further acknowledge any other contributions (for example, ideas from Web sites or other sources).
*   You may not look at code from previous years of this course.
*   You may not look at code from similar courses at other universities.
*   Take suitable precautions to protect your written work. For instance, do not leave printouts lying around, lest you be suspected as an accessory to cheating.
*   Do not show another person (other than the instructor or TA) your work until after the semester ends. Because we have a very liberal lateness policy, you should not assume that another student has completed an assignment after the deadline.

Unacceptable collaboration, copying or unapproved use of any code, or failure to attribute sources used to formulate a homework solution will be considered a violation of the UNC Honor Code and will be reported to the Student Attorney General.

Intellectual dishonesty can end your career, and it is your responsibility to stay on the right side of the line. If you are not sure about something, ask.

## Disclaimer

I reserve the right to make changes to the syllabus, including project due dates and test dates. These changes will be announced as early as possible.

## Acknowledgements

Portions of this course design, organization, policies, syllabus, web design, etc. came from Donald Porter, Montek Singh, and Michael Ferdman and Krste Asanovich.