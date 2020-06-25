n,k = $stdin.gets.chomp.split(' ').map(&:to_i)
arr = Array.new(n){0}
k.times do
  d = $stdin.gets.chomp.to_i
  a = $stdin.gets.chomp.split(' ').map(&:to_i)
  a.each do |k|
    arr[k-1] += 1
  end
end

puts arr.count(0)
