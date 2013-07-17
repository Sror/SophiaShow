//
//  UIScreen+SSToolkitAdditions.h
//  SSToolkit
//
//  Created by Sam Soffes on 2/4/11.
//  Copyright 2011 Sam Soffes. All rights reserved.
//

/**
 Provides extensions to `UIScreen` for various common tasks.
 */
@interface UIScreen (SSToolkitAdditions)

///---------------------------
/// @name Accessing the Bounds
///---------------------------

/**
 Returns the bounds of the screen for the current device orientation.
 
 @return A rect indicating the bounds of the screen.
 
 @see boundsForOrientation:
 */
- (CGRect)currentBounds;

/**
 Returns the bounds of the screen for a given device orientation. `UIScreen`'s `bounds` method always returns the bounds
 of the screen of it in the portrait orientation.
 
 @param orientation The orientation to get the screen's bounds.
 
 @return A rect indicating the bounds of the screen.
 
 @see currentBounds
 */
- (CGRect)boundsForOrientation:(UIInterfaceOrientation)orientation;


///------------------------
/// @name Screen Attributes
///------------------------

/**
 Returns a Boolean indicating if the screen is a Retina display.
 
 @return A Boolean indicating if the screen is a Retina display.
 */
- (BOOL)isRetinaDisplay;


/*
 usage:
 if([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad){
    //IPAD
    if ([[UIScreen mainScreen] isRetina]) {
        // IPAD 3 - Retina display
        bannersGetPromoServerRequest.size = kXML_API_IMAGESIZE_IPAD_HIGHRES;
    }else{
        //iPAD 1/2
        bannersGetPromoServerRequest.size = kXML_API_IMAGESIZE_IPAD_LOWRES;        
    }
 }else{
    //IPHONE
    if ([[UIScreen mainScreen] isRetina]) {
        // IPHONE 4/4s/5 - Retina display
        bannersGetPromoServerRequest.size = kXML_API_IMAGESIZE_IPHONE_HIGHRES;
    }else{
        //IPHONE (3.x)
        bannersGetPromoServerRequest.size = kXML_API_IMAGESIZE_IPHONE_LOWRES;
    }
 }
 
 */
@end
