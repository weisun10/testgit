#ifndef _GLOBALS_H
#define _GLOBALS_H

//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"
#include "stdarg.h"

size_t strspn( const char *s1, const char *s2 );
size_t strcspn( const char *s1, const char *s2 );
void *malloc( size_t num_bytes ); 
void free( void *pointer );
char *strstr( const char *string1, const char *string2 );
char *strchr( const char *string, int c);
char *strrchr( const char *string, int c ); 
size_t strlen( const char *string1 );
char *strncpy( char *dest, const char *source, size_t n );
char *strncat( char *to_string, const char *from_string, size_t n ); 
//--------------------------------------------------------------------
// Global Variables

int alr_count_substring(const char *source, const char *substring)
// returns an integer which is a count of the number of occurrences of substring within source
// revised 28 Jun 2013
{
        int count = 0, len = strlen(substring);
		const char * tmp = source;
		if (len) {
			while (tmp = strstr(tmp,substring) ) {
				count++;
				tmp += len;
			}
		}
        return count;
}


char *alr_replace_substring( char *source, char *target, char *replacement)
{
        char *destination;
        char *start;
        char *end;
        size_t targetlen;
        
        targetlen = strlen(target);
        // allocate enough memory for the new string after replacements (don't forget the terminating NULL character)
        destination = malloc( strlen(source) + alr_count_substring(source,target) * (strlen(replacement) - targetlen ) + 1 );
        if (destination == NULL) {
			exit(1);
		}
        
        // append terminator so we start with an empty string
        destination[0] = '\0';
        
        start = source;
        do {
        	end = strstr(start, target);  // find the substring
	        if ( end != NULL ) {
	        	strncat(destination, start, end-start); //copy to new string from the last start point up to the found string
	        	strcat(destination, replacement);  //append the replacement string
	        	start = end + targetlen;  // jump over the target string
	        }
        } while ( end != NULL );
        
        // get any remainder after the last occurrence of the target
        strcat(destination,start);
        	
        return destination;
}

#endif // _GLOBALS_H
