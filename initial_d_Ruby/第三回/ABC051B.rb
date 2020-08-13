k,s = $stdin.gets.chomp.split(' ').map(&:to_i)
ans = 0
(k+1).times do |x|
  (k+1).times do |y|
 	if s >= x+y && k >= (s - (x+y))
      ans += 1
    end
  end
end
puts ans
