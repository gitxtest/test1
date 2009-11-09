//
//  AppMonitorAppDelegate.h
//  AppMonitor
//
//  Created by nettani on 09/10/13.
//  Copyright 2009 A10. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppMonitorAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
	
	IBOutlet	NSTextField*	msg;
	
	IBOutlet	NSPanel*		panel;
	IBOutlet	NSTableView*	tableView;
	IBOutlet	NSTextField*	textField;
	
				NSArray*		applications;			// 起動中のアプリケーション名一覧

				NSTimer					*repeatingTimer;
	IBOutlet	NSProgressIndicator		*proIndON;
	IBOutlet	NSProgressIndicator		*proIndON2;
}

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, assign) NSTimer *repeatingTimer;

- (void)updateTable;									// テーブルの状態を更新

@end
