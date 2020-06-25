n = $stdin.gets.chomp.to_i
arr = gets.chomp.split(' ').map(&:to_i)

flag = 0
n.times do |k|
  if arr[k] % 2 == 0
    if arr[k] % 3 == 0 || arr[k] % 5 == 0
    # フラグはそのまま
    else
      flag = 1
      break
    end
  end
end

if flag == 0
  puts "APPROVED"
else
  puts "DENIED"
end
