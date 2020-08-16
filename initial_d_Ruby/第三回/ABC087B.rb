a = $stdin.gets.chomp.to_i
b = $stdin.gets.chomp.to_i
c = $stdin.gets.chomp.to_i
x = $stdin.gets.chomp.to_i
ans = 0;dm = []
(a+1).times do |s|
  (b+1).times do |t|
    dm = (x - (s * 500 + t * 100)).divmod(50)
    if dm[0] <= c && 0 <= dm[0] && dm[1] == 0
      ans += 1
    end
  end
end

puts ans
