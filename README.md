# InkwellPrintf

I Wrote a library that contains ft_printf(), a function that mimic the original printf()

## Usage
```
$> git clone https://github.com/Mushigarou/InkwellPrintf.git
$> cd InkwellPrintf
$> make
```
Now you have a static library `libftprintf.a` that you can link with other programs

## Handles :

- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign

## Exception : 
- Doesn't have the same buffer management as the original printf()

## Contributing
Contributions to this project are welcome! If you find any issues or have improvements to suggest, please feel free to submit a pull request.

## License

This project is licensed under the MIT license
