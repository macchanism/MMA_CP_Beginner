a,b,k = $stdin.gets.chomp.split(' ').map(&:to_i)
# a = a.to_i,b = b.to_i,k = k.to_i #(.map(&:to_i)でいいんだけど…)

num = a.to_i

k.times do
  puts num
  num = num + 1
  if num > b
    exit
  end
end

if num > b-k
  	(b - num + 1).times do
   	puts num
  	num = num + 1
	end
else
  num = b - k + 1
	k.times do
  	puts num
  	num = num + 1
	end
end


#配列使って重複除いた方が早いとは思いますが
