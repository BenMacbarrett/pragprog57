use std::io::stdin;

fn main()
{
    println!( "Hello, What is your name?" );

    let mut buffer = String::new();

    let _ret = stdin().read_line( &mut buffer );


    let res = match buffer.trim_end()
    {
        name => format!( "Hello, {name}. Nice to meet you!"),
    };


    println!("{}", res);
}