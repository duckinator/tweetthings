# tweetcode.rb

Download the contents of a tweet, given the status number.

## Usage

```
../thingsinatweet/tweetcode$ ruby tweetcode.rb 440721653438615552
#!ruby -ropen-uri -rcgi
open("https://twitter.""com/x/status/"+x=$*[0]).read=~/<a h[^>]+\/#{x}.*?t-text">(.*?)<.p/m;puts CGI.unescapeHTML$1
../thingsinatweet/tweetcode$ 
```
