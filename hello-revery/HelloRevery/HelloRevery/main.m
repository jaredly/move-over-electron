//
//  main.m
//  HelloRevery
//
//  Created by Jared Forsyth on 4/2/19.
//  Copyright © 2019 Jared Forsyth. All rights reserved.
//

#import <Foundation/Foundation.h>

void caml_main(const char * argv[]);

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        caml_main(argv);
    }
    return 0;
}
