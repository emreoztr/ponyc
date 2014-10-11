class Dice
  var r: Random

  new create(with: Random) => r = with

  fun ref apply(count: U64, sides: U64): U64 =>
    var f = sides.f64()
    var sum = count

    for i in Range[U64](0, count) do
      sum = sum + (r.real() * f).u64()
    end
    sum
