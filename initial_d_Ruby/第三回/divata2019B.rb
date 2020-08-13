r,g,b,n=gets.chomp.split(" ").map(&:to_i);
ans = 0
(n+1).times do |u|
  (n+1).times do |v|
      if (n - (r*u + g*v)) % b == 0 && n >= (r*u + g*v)
        ans = ans + 1
      end
  end
end
p ans
