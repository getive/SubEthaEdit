//
//  RendezvousBrowserController.h
//  RendezCon
//
//  Created by Dominik Wagner on Wed Nov 19 2003.
//  Copyright (c) 2003 TheCodingMonkeys. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, 
//  are permitted provided that the following conditions are met:
//
//  - Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
//  - Redistributions in binary form must reproduce the above copyright notice, 
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
//  - Neither the name of the TheCodingMonkeys nor the names of its contributors
//    may be used to endorse or promote products derived from this software without 
//    specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
//  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
//  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//  OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
//  POSSIBILITY OF SUCH DAMAGE.

#import <AppKit/AppKit.h>


@interface RendezvousBrowserController : NSObject {
    IBOutlet NSArrayController   *O_foundServicesController;
    IBOutlet NSArrayController   *O_servicesToBrowseForController;
    IBOutlet NSArrayController   *O_addressesController;
    IBOutlet NSTableView         *O_addressTableView;
    IBOutlet NSTableView         *O_servicesTableView;
    NSMutableArray      *I_foundNetServices;
    NSMutableArray      *I_servicesToBrowseFor;
    NSMutableDictionary *I_netServiceBrowsers;
}

#pragma mark -
#pragma mark ### Accessors ###
- (NSMutableArray *)foundNetServices;
- (NSMutableArray *)servicesToBrowseFor;
- (void)setServicesToBrowseFor:(NSMutableArray *)aArray;

#pragma mark -
#pragma mark ### Actions ###
- (IBAction)restartAll:(id)aSender;
- (IBAction)didChangeStatusOfServiceToBrowse:(id)aSender;
- (IBAction)simpleURLDoubleAction:(id)aSender;
- (IBAction)showReleaseNotes:(id)aSender;

#pragma mark -
- (void)startBrowsing;
- (void) stopBrowsing;
- (void)          removeServicesOfType:(NSString *)aServiceType;
- (void)       searchForServicesOfType:(NSString *)aServiceType;
- (void)stopSearchingForServicesOfType:(NSString *)aServiceType;

@end
