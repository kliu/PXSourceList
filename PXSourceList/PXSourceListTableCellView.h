//
//  PXSourceListTableCellView.h
//  PXSourceList
//
//  Created by Alex Rozanski on 31/12/2013.
//  Copyright 2009-14 Alex Rozanski http://alexrozanski.com and other contributors.
//  This software is licensed under the New BSD License. Full details can be found in the README.
//

#import <Cocoa/Cocoa.h>

@class PXSourceListBadgeView;

@interface PXSourceListTableCellView : NSTableCellView

@property (weak, nonatomic) IBOutlet PXSourceListBadgeView *badgeView;

@end
