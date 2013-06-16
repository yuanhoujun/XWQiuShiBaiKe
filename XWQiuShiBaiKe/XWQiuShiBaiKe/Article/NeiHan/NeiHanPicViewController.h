//
//  NeiHanPicViewController.h
//  XWQiuShiBaiKe
//
//  Created by renxinwei on 13-6-15.
//  Copyright (c) 2013年 renxinwei's MacBook Pro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSCollectionView.h"

@interface NeiHanPicViewController : CommonViewController <PSCollectionViewDelegate, PSCollectionViewDataSource, ASIHTTPRequestDelegate, XWSliderSwitchDelegate>
{
    EGORefreshTableHeaderView *_refreshHeaderView;
    LoadMoreFooterView *_loadMoreFooterView;
    XWSliderSwitch *_sliderSwitch;
    NeiHanType _neihanType;
    RequestType _requestType;
    NSInteger _currentPage;
    BOOL _reloading;
}

@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) NSMutableArray *picArray;
@property (retain, nonatomic) PSCollectionView *collectionView;
@property (retain, nonatomic) ASIHTTPRequest *picRequest;
@property (retain, nonatomic) IBOutlet UIButton *sideButton;
- (IBAction)sideButtonClicked:(id)sender;

@end
