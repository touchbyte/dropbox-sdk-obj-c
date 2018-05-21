///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileSaveCopyReferenceDetails;
@class DBTEAMLOGRelocateAssetReferencesLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileSaveCopyReferenceDetails` struct.
///
/// Saved file/folder using copy reference.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileSaveCopyReferenceDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Relocate action details.
@property (nonatomic, readonly) NSArray<DBTEAMLOGRelocateAssetReferencesLogInfo *> *relocateActionDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param relocateActionDetails Relocate action details.
///
/// @return An initialized instance.
///
- (instancetype)initWithRelocateActionDetails:
    (NSArray<DBTEAMLOGRelocateAssetReferencesLogInfo *> *)relocateActionDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileSaveCopyReferenceDetails` struct.
///
@interface DBTEAMLOGFileSaveCopyReferenceDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileSaveCopyReferenceDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileSaveCopyReferenceDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileSaveCopyReferenceDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileSaveCopyReferenceDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileSaveCopyReferenceDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileSaveCopyReferenceDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileSaveCopyReferenceDetails`
/// object.
///
+ (DBTEAMLOGFileSaveCopyReferenceDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END