# INI parser
def tini(x)s={};c=:global;x.split("\n").map{|l|l=~/^\[(.*)\]$/?c=$1:(l=~/^\s*(.*)\s*=(.*)/&&(s[c]||={})[$1]=$2.strip)};s;end