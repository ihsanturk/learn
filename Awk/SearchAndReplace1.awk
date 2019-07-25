#!/usr/bin/awk -f
{
	if ($1 == "Hello") {
		sub(/Hello/, "Hi");
		print $0
	}
	exit;
}
