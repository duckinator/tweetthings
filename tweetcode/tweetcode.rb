#!ruby -ropen-uri -rcgi
open("https://twitter.""com/x/status/"+x=$*[0]).read=~/<a h[^>]+\/#{x}.*?t-text">(.*?)<.p/m;puts CGI.unescapeHTML$1
