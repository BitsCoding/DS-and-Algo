t = gets.chomp.to_i
for _ in 1..t do
    n = gets
    color_cubes = gets.split
    res = ''
    for color in color_cubes do
        c1 = color[0..1].hex.chr
        c2 = color[2..3].hex.chr
        c3 = color[4..5].hex.chr
        res += c1 + c2 + c3
    end
    puts res
end