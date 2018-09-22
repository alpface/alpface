//
//  AlpVideoCameraViewController.h
//  AlpVideoCamera
//
//  Created by swae on 2018/9/12.
//  Copyright © 2018 xiaoyuan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AlpVideoCameraViewController;

@protocol AlpVideoCameraViewControllerDelegate <NSObject>

@optional
- (void)videoCameraViewController:(AlpVideoCameraViewController *)viewController
              publishWithVideoURL:(NSURL *)url
                            title:(NSString *)title
                          content:(NSString *)content
                        longitude:(double)longitude
                         latitude:(double)latitude
                         poi_name:(NSString *)poi_name
                      poi_address:(NSString *)poi_address;

@end

@interface AlpVideoCameraViewController : UIViewController

@property (nonatomic, weak) id<AlpVideoCameraViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
