use std::io::stdin;
use std::io::Write;
use std::io;

fn main()
{
    println!( "Enter a string -->" );
    io::stdout().flush().unwrap();
    let mut line = String::new();

    let _ret = stdin().read_line( &mut line );

    println!( "There are {} character in the string", line.trim_end().len() );
}