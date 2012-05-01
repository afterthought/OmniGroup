// Copyright 2010-2012 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniUI/OUIViewController.h>

@class OFSDocumentStore, OFSDocumentStoreFileItem, OUIDocumentConflictResolutionViewController;
@protocol OUIDocumentConflictResolutionViewControllerDelegate;

@interface OUIDocumentConflictResolutionViewController : OUIViewController

- initWithDocumentStore:(OFSDocumentStore *)documentStore fileItem:(OFSDocumentStoreFileItem *)fileItem delegate:(id <OUIDocumentConflictResolutionViewControllerDelegate>)delegate;

@property(nonatomic,readonly) OFSDocumentStoreFileItem *fileItem;
@property(nonatomic,readonly,assign) id <OUIDocumentConflictResolutionViewControllerDelegate> delegate;

@end
