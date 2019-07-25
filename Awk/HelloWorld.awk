#!/usr/bin/awk -f
BEGIN {
	printf "Type your name: ";
}
{
	print "Hello " $1.
	exit;
}
