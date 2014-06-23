//
//  ssh_interface.h
//  Secret Socks
//
//  Created by Joshua Chan on 10/07/09.
//  Enhanced by HK Chai Nov 2011
//

#import <Cocoa/Cocoa.h>
#import "TaskWrapper.h"


@interface ssh_interface : NSObject {
	NSString *__weak localSocksPort;
	NSString *__weak serverSshPort;
	NSString *__weak serverHostname;
	NSString *__weak serverSshUsername;
	NSString *__weak serverSshPasswd;
	
	TaskWrapper *sshTask;
}

@property(readwrite, weak) NSString *localSocksPort;
@property(readwrite, weak) NSString *serverSshPort;
@property(readwrite, weak) NSString *serverHostname;
@property(readwrite, weak) NSString *serverSshUsername;
@property(readwrite, weak) NSString *serverSshPasswd;

- (void)connectToServer: (id) controller;
- (void)disconnectFromServer;
- (bool)hasTerminated;
- (void)dealloc;

@end
