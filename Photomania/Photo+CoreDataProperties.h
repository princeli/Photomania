//
//  Photo+CoreDataProperties.h
//  Photomania
//
//  Created by ly on 16/1/10.
//  Copyright © 2016年 princeli. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Photo.h"

NS_ASSUME_NONNULL_BEGIN

@interface Photo (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSString *subtitle;
@property (nullable, nonatomic, retain) NSString *imageURL;
@property (nullable, nonatomic, retain) NSString *unique;
@property (nullable, nonatomic, retain) Photographer *whoTook;


+ (Photo *)photoWithFlickrInfo:(NSDictionary *)photoDictionary
        inManagedObjectContext:(NSManagedObjectContext *) context;

+ (void)loadPhotosFromFlickrArray:(NSArray *)photos
    intoManagedObjectContext:(NSManagedObjectContext *) context;

@end

NS_ASSUME_NONNULL_END
