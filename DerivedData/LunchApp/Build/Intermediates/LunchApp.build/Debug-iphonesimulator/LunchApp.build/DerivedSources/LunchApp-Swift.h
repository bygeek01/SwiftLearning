// Generated by Apple Swift version 1.2 (swiftlang-602.0.53.1 clang-602.0.53)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
#if __has_feature(nullability)
#  define SWIFT_NULLABILITY(X) X
#else
# if !defined(__nonnull)
#  define __nonnull
# endif
# if !defined(__nullable)
#  define __nullable
# endif
# if !defined(__null_unspecified)
#  define __null_unspecified
# endif
#  define SWIFT_NULLABILITY(X)
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC8LunchApp11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@class UIImageView;
@class UIView;
@class UILabel;

SWIFT_CLASS("_TtC8LunchApp21ContentCollectionCell")
@interface ContentCollectionCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UIView * __null_unspecified coverView;
@property (nonatomic, weak) IBOutlet UIView * __null_unspecified separateView;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified menuLabel;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified shopNameLabel;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;
@class NSIndexPath;

SWIFT_CLASS("_TtC8LunchApp27ContentCollectionDataSource")
@interface ContentCollectionDataSource : NSObject <UICollectionViewDataSource>
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * __nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * __nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * __nonnull)collectionView:(UICollectionView * __nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end

@class UICollectionViewLayout;

SWIFT_CLASS("_TtC8LunchApp21ContentCollectionView")
@interface ContentCollectionView : UICollectionView
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout * __nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class ShopContentTableView;
@class NSBundle;

SWIFT_CLASS("_TtC8LunchApp20DetailViewController")
@interface DetailViewController : UIViewController
@property (nonatomic, weak) IBOutlet ShopContentTableView * __null_unspecified shopContentTableView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8LunchApp13MenuImageCell")
@interface MenuImageCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified menuImageView;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8LunchApp21MenuNavCollectionCell")
@interface MenuNavCollectionCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified menuNavLabel;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8LunchApp27MenuNavCollectionDataSource")
@interface MenuNavCollectionDataSource : NSObject <UICollectionViewDataSource>
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * __nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * __nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * __nonnull)collectionView:(UICollectionView * __nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end


SWIFT_CLASS("_TtC8LunchApp21MenuNavCollectionView")
@interface MenuNavCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout * __nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)centreIfNeeded;
- (CGSize)collectionView:(UICollectionView * __nonnull)collectionView layout:(UICollectionViewLayout * __nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (void)collectionView:(UICollectionView * __nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end

@class UITableView;

SWIFT_CLASS("_TtC8LunchApp26ShopContentTableDataSource")
@interface ShopContentTableDataSource : NSObject <UITableViewDataSource>
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfSectionsInTableView:(UITableView * __nonnull)tableView;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end


SWIFT_CLASS("_TtC8LunchApp20ShopContentTableView")
@interface ShopContentTableView : UITableView <UITableViewDelegate>
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (CGFloat)tableView:(UITableView * __nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end


SWIFT_CLASS("_TtC8LunchApp12ShopInfoCell")
@interface ShopInfoCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified shopNameLabel;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified descriptionLabel;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified openIcon;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified openLabel;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified closeIcon;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified closeLabel;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified tellIcon;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified tellLabel;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified starIcon;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified starLabel;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class MKMapView;
@class UIButton;

SWIFT_CLASS("_TtC8LunchApp11ShopMapCell")
@interface ShopMapCell : UITableViewCell
@property (nonatomic, weak) IBOutlet MKMapView * __null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UIView * __null_unspecified coverView;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified addressLabel;
@property (nonatomic, weak) IBOutlet UIButton * __null_unspecified copyButton;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8LunchApp11SnsIconCell")
@interface SnsIconCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UIButton * __null_unspecified twitterButton;
@property (nonatomic, weak) IBOutlet UIButton * __null_unspecified facebookButton;
@property (nonatomic, weak) IBOutlet UIButton * __null_unspecified lineButton;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8LunchApp14ViewController")
@interface ViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (nonatomic, weak) IBOutlet MenuNavCollectionView * __null_unspecified menuNavCollectionView;
@property (nonatomic, weak) IBOutlet ContentCollectionView * __null_unspecified contentCollectionView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)collectionView:(UICollectionView * __nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (CGSize)collectionView:(UICollectionView * __nonnull)collectionView layout:(UICollectionViewLayout * __nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
