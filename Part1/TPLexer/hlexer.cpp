#include "hlexer.h"

//implement this file and submit
bool HLexer::remove_whitespaces()
{
    if ( isspace( c_ ) ) {
        for ( ; !c_eoi() && isspace( c_ ); c_next() );
        return true;
    }
    else { return false; }
}


bool HLexer::remove_comment( Token& token )
{
    // NOTE: Add your code here.
    //    Remember that there are two types of comments.
    //    You should throw an exception if there are unterminated comments.
    //bool commentClosed = false;
    while(!c_eoi()){
        if(c_ == '*'){
            if(c_peek() == ')'){
                c_next();
                c_next();
                return true;
                //commentClosed;
                //break;
            }
        }
        else if(c_ == '}'){
            c_next();
            return true;
            //commentClosed = true;
            //break;
        }
        c_next();
    }
    return false;
}


void HLexer::process_string( Token& token )
{
    assert( c_ == '\'' );

    bool has_ended = false;

    while (!c_eoi()) {
        token.text.push_back(c_);
        c_next();
        if (c_ == '\'') {
            has_ended = true;
            break;
        }
    }

    if (!has_ended) {
        throw LexerException( token.loc, "Unexpected end of string" );
    }
    token.text.push_back(c_);
    token.name = LNG::TN::t_string_l;
    c_next();
}


// Process identifier names.
void HLexer::process_identifier( Token& token )
{
    // NOTE: Add your code here (instead of the provided c_next()).
    token.name = LNG::TN::t_unknown;
    while(!c_eoi()){
        if(!isspace(c_)){
            token.text.push_back(c_);
        }
        else{
            if(letter(c_peek()) || digit(c_peek())){    //this is needed for identifiers that have a space after them
                token.name = LNG::TN::t_identifier;
                break;
            }
        }
        //string s;
        //s.push_back(c_peek());
       //const Language::TokenName test = Language::SpecialSymbolToTokenName.at(c_peek())
       //change this so you check if the c_peek() is inside the Language::SpecialSymbolToTokenName map and
       // it is check if our token.name is not inside Language::ReservedWordToTokenName if its not then
       // we got a identifier
        if(c_peek() == ':'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() ==','){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '+'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '*'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '-') {
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '<'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '('){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == ')'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == ';'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '>'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '='){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '/'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        if(c_peek() == '{'){
            token.name = LNG::TN::t_identifier;
            c_next();
            remove_comment(token);
            break;
        }
        if(c_peek() == '.'){
            token.name = LNG::TN::t_identifier;
            break;
        }
        c_next();
    }
    c_next();
}




// A sequence of numbers/digits e.g. 12345
void HLexer::process_digits( Token& token )
{
    // NOTE: Add your code here (instead of the provided c_next()).
    while(!c_eoi()){
        token.text.push_back(c_);
        if(!isdigit(c_peek())){
            token.name = LNG::TN::t_integer;
            c_next();
            break;
        }
        c_next();
    }
}


// Process integers and real numbers.
void HLexer::process_number( Token& token )
{
    // NOTE: Add your code here (instead of the provided c_next()).
    //c_next();
    //   Provided file test/test4.pas could help with the testing.
    process_digits(token);
    if(c_ == '.') {
        if (isdigit(c_peek())) {
            token.text.push_back(c_);
            token.name = LNG::TN::t_real;
            c_next();
            while (!c_eoi()) {
                token.text.push_back(c_);
                bool EAllowed = true;
                if (isdigit(c_peek())) {
                    c_next();
                }
                else if ((c_peek() == 'E' || c_peek() == 'e') && EAllowed) {
                    c_next();
                    //token.text.push_back(c_);
                    EAllowed = false;

                    if((c_peek() == '+' || c_peek() == '-')){
                        c_next();
                        token.text.push_back(c_);
                        c_next();
                    }
                } else {
                    c_next();
                    break;
                }
            }
        }
    }
    // need to fix this, 10E is now a real but it should be and 10 then just an E, need to check if there is at least one digit behind E
    else if( c_ == 'E' || c_ == 'e'){
        if(isdigit(c_peek()))
        {
            token.text.push_back(c_);
            c_next();
            token.text.push_back(c_);
            token.name = LNG::TN::t_real;
            while(!c_eoi()) {
                if(isdigit(c_peek())){
                    c_next();
                    token.text.push_back(c_);
                }
                else{
                    //1E only returns int , it ignores the E, should return int, identifier
                    c_next();
                    break;
                }
            }
        }
        else if(c_peek() == '+' || c_peek() == '-') {
            //ask who to solve 1E+ as an int, identifier, + without going 1 back after checking if there is an digit after the +
            token.text.push_back(c_);
            c_next();
            token.text.push_back(c_);
            token.name = LNG::TN::t_real;
            while (!c_eoi()) {
                if (isdigit(c_peek())) {
                    c_next();
                    token.text.push_back(c_);
                } else {
                    c_next();
                    break;
                }
            }
        }
    }
}


void HLexer::get( Token& token )
{
    token.text.clear();
    token.loc = loc_;

    // NOTE: Add code to remove comments and white-spaces.
    if(isspace(c_)){
        //ask if you need to have another type for white-spaces and/or not print them out at all
        token.name = LNG::TN::t_ws;
        c_next();
        return;
    }
    // Return EOI if at end of input
    if ( c_eoi() ) {
        token.name = LNG::TN::t_eoi;
        return;
    }

    // Process a token.
    switch ( c_ ) {
        case ';': set( token, LNG::TN::t_semicolon );
            break;
        case ':':
            if (is_.peek() == '=') {
                token.text = ":=";
                token.name = LNG::TN::t_assign;
                c_next();
                c_next();
            } else {
                set( token, LNG::TN::t_colon );
            }
            break;
        case '>':
            if(is_.peek() == '='){
                token.text = ">=";
                token.name = LNG::TN::t_gteq;
                c_next();
                c_next();
            }
            else{
                set(token, LNG::TN::t_gt);
            }
            break;
        case '<':
            if(is_.peek() == '='){
                token.text = "<=";
                token.name = LNG::TN::t_lteq;
                c_next();
                c_next();
            }
            else if(is_.peek() == '>')
            {
                token.text = "<>";
                token.name = LNG::TN::t_neq;
                c_next();
            }
            else{
                set(token, LNG::TN::t_lt);
            }
            break;
        case '/':
            set(token, LNG::TN::t_divide);
            break;
        case '=':
            set(token, LNG::TN::t_eq);
            break;
        case '+':
            set(token, LNG::TN::t_plus);
            break;
        case '-':
            set(token, LNG::TN::t_minus);
            break;
        case '*':
            set(token, LNG::TN::t_multiply);
            break;
        case '.':
            if(is_.peek() == '.'){
                token.text = "..";
                token.name = LNG::TN::t_subrange;
                c_next();
                c_next();
            }
            else{
                set(token, LNG::TN::t_dot);
            }
            break;
        case ',':
            set(token, LNG::TN::t_comma);
            break;
        case '^':
            set(token, LNG::TN::t_caret);
            break;
        case '(':
            if(c_peek() == '*'){
                c_next();
                c_next();
                remove_comment(token);
            }
            else{
                set(token, LNG::TN::t_lparenthesis);
            }
            break;
        case ')':
            set(token, LNG::TN::t_rparenthesis);
            break;
        case '[':
            set(token, LNG::TN::t_lbracket);
            break;
        case ']':
            set(token, LNG::TN::t_rbracket);
            break;
        case '{':
            remove_comment(token);
            break;



         // NOTE: Add code here for all the remaining cases.

        default:
            if ( c_ == '\'' )        { process_string( token ); }
            else if ( digit(  c_ ) )  { process_number( token ); }
            else if ( letter( c_ ) ) {
                process_identifier( token );
                auto it = LNG::ReservedWordToTokenName.find( Common::to_lower( token.text ) );
                if ( it != LNG::ReservedWordToTokenName.end() ) {
                    token.name = it->second;
                }
            }
            else { set( token, LNG::TN::t_unknown ); }
    }
}
