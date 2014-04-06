def rpn(str)
  a=[]
  ops = {
    '^' => ->(x,y){x**y},
  }

  str.split.each do |x|
    if x =~ /\d+\.?\d?/
      a.push x.to_i
    else
      l, r = a.pop 2
      a.push ops[x] ? ops[x].(l,r) : l.send(x,r)
    end
  end
  a
end

puts rpn('10 2 + 14 - 4 + 2 ^')
