h,w=gets.chomp.split(" ").map(&:to_i)
puts "#" * (w+2)
h.times do
  str = $stdin.gets.chomp
  str = "#" + str + "#"
  puts str
end
puts "#" * (w+2)
