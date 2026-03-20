use std::io::stdin;

fn main()
{
    let mut quote = String::new();
    let mut name = String::new();

    println!( "What is the quote? :" );
    let mut _ret = stdin().read_line( &mut quote );

    println!( "Who said that? :" );
    _ret = stdin().read_line( &mut name );

    println!("{} said: \"{}\".", name.trim_end(), quote.trim_end() );
}