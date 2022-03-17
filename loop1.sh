#!/bin/bash
#script to extract user info from passwd file
file=/etc/passwd
while IFS=: read -r user passwd uid gid home shell
do
	[ $uid -ge 500
