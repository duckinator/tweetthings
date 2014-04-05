$<.each_char.map{|x|x.ord.to_s(2).rjust 8,?0}.join.scan(/(.{1,6})/){$><<[*?A..?Z,*?a..?z,*?0..?9,?+,?/][($1+'00'*x=$1.size%3).to_i 2]+?=*x}
