n = $stdin.gets.chomp.to_i
s = Array.new(n);p = Array.new(n)

n.times do |i|
  s[i], p[i] = ($stdin.gets.chomp.split(' '))
end

sum = 0
n.times do |j|
  p[j] = p[j].to_i
  sum += p[j]
end
n.times do |k|
  if p[k] > sum/2.0
    puts s[k]
    exit
  end
end
puts "atcoder"
