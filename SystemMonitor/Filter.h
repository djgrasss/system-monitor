//
//  Filter.h
//  SystemMonitor
//
//  Created by Ren, Alice on 7/28/14.
//
//

#import <Foundation/Foundation.h>

@interface Filter : NSObject

@property NSString *filterName;
@property NSString *infoType;
@property NSString *filterType;
@property NSString *field;
@property NSArray *termList;

- (id)initWithOptions:(NSString *)name
                   info:(NSString *)info
                   type:(NSString *)type
                  field:(NSString *)field
                   list:(NSArray *)list;
- (void) filterWhitelist:(Filter *)filter;
- (void) filterBlacklist:(Filter *)filter;

- (void) filter:(NSString *)infoType
          field:(NSString *)field
      blacklist:(NSArray *)blacklist
      whitelist:(NSArray *)whitelist;

- (void) blacklist:(NSArray *)list inArray:(NSArray *)array forInfoType:(NSString *)infoType fieldToSearch:(NSString *)field;
- (void) whitelist:(NSArray *)list inArray:(NSArray *)array forInfoType:(NSString *)infoType fieldToSearch:(NSString *)field;

@end