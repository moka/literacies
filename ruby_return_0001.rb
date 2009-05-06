def hello(t,f)
  return (t||'abc') if f
end
s="hi"
puts hello(s,true)
puts hello(nil,true)
puts hello(s,false)
puts hello(nil,false)
