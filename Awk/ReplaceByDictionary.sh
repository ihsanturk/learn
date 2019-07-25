BEGIN {
 lvl[0] = "warning"
 lvl[1] = "error"
 lvl[2] = "critical"
}
NR == FNR {
  evt[$1] = $2; next
}
{
  print $2, evt[$2], lvl[$3];
} dictionary infile
