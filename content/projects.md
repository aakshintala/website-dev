---
title: "Projects"
date: 2020-01-20T13:45:16-05:00
draft: false
toc: false
---
## Choosing a project

The project counts for the largest part of your grade (80 points).
You have 3 options for the project:

#### Option 1: Design and implement a RISC-V-compatible processor simulator
At the minimum, your processor must be able to execute simple RISC-V (RV64IM) programs (pre-compiled testcases and the RISC-V tool-chain will be provided), via a 5-stage pipeline, multiple functional units with varying latencies, and direct mapped instruction and data caches. Further details [here](../simulator/).
* 5+ stage pipeline + direct-mapped caches (50 pts)
* 5+ stage pipeline + set-associative caches (60 pts)
* Super-scalar 5-stage pipeline, set-associative cache (70 pts)
* Super-Scalar, Out-of-order, Set-Associative Caches (80 pts)
* Extra Credit (Can add up to > 80 points):
    * Multi-cycle divider and pipelined multiplier on top of any of the above (+5 pts).
    * Any of the above + TLBs (+10 points)
    * Any of the above + Branch Prediction (+10 points)
    * Any of the above + Speculative Execution (+10 pts)
    * Any of the above + SMT (+20 extra pts)


#### Option 2: Contribute to a relevant open-source systems project.
You are responsible for contacting the maintainers of these projects, working with them to arrive at the scope of the project (you must be able to finish it in three months), and figuring out the timeline and deliverables. Think of this as an exercise in being a systems software engineer. Your deliverables must include (as appropriate): specification, documentation, tests, your changeset, and any other supporting material requested by the project's processes. Please include all pertinent emails exchanged with the maintainers of the project in your project proposal, along with a summary of your project, the deliverables and the project timeline. You will be graded on a case-by-case basis, with the primary criteria being delivery of the agreed upon changes to the project (with concessions for unexpected setbacks). Please discuss the project and scope with me before you submit your proposal.
Non-exhaustive list of projects to consider:
* [LLVM](https://llvm.org/OpenProjects.html)
* [QEMU](https://wiki.qemu.org/Contribute)
* [KVM](https://www.linux-kvm.org/page/TODO)
* [Chisel](https://www.chisel-lang.org/chisel3/faqs.html#how-can-i-contribute-to-chisel)

#### Option 3. Propose your own project.
This could be a research project (I have some ideas depending on your interests) or a fun little hardware project (preferably involving some processor design (e.g., design a custom RISC-V processor, that is specialized for a particular domain and deploy it on an [FPGA](https://joelw.id.au/FPGA/CheapFPGADevelopmentBoards)).


## Project Proposal Guidelines:
If you choose to go with Options 2 or 3, please discuss your proposal with me before you write it up. Be sure to make an appointment. At least one day before your appointment, please send email with your basic idea.

Your project proposal should be no more than two pages long, and should include the following information:
* Project Title: A descriptive title of your project.
* Group Info: List the names and email addresses of each member of your group. Groups can be of any size. However, please check with me first to make sure that the scope of your project is sufficiently large.
* GitHub/Bitbucket repository (private): Include the URL of a private GitHub/Bitbucket repository which you will be maintaining for your group. This repository will initially contain your proposal (plus group information, etc.), and you will later add your code and documentation deliverables, your milestone report, your final report, etc.
* Project Description: Briefly describe the goal, scope and deliverables of your project. Include a 100% goal (if all goes as expected), a 75% goal (what you can still accomplish of things go more slowly than expected), and a 125% goal (what you might accomplish if things go faster than expected). Include any communication with project maintainers if selecting Option 2. Include as much related work and expected results if selecting Option 3.
* Logistics: Please address each of the following issues regarding how you will carry out your project:
    * Plan of Attack and Schedule: How will you go about completing your project? Please include a week-by-week schedule of exactly who in your group will be doing what. We will not strictly hold you to this schedule (other than meeting your milestone, as described below), but it is important that you have a concrete and realistic plan. Identify what you expect to be the critical path in your schedule. Indicate how the work will be divided among your group members.
    * Milestone: Indicate what your group plans to accomplish by March 19th. On that date, you will submit a brief report describing your progress up to that point. Your ability to set a reasonable milestone and to meet this goal will be factored into your final project grade.
	* Literature Search: What papers and other background materials have you collected so far to help you in your study? Are you missing anything?
	* Resources Needed: What software will you need to conduct your study? Do you have a copy of this software already? (If not, how will you get it?) What hardware or machines will you need to run this software? Do you have all of the resources that you need to conduct this study?
	* Getting Started: What work have you done so far on this project (other than writing up this proposal)? Do you have any questions or other constraints that are preventing you from gettings started immediately?

