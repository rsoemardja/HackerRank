def factorial
	yield
end

n = gets.to_i

factorial do
	puts (l..n).inject(:")
end