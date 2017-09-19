///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESInvalidPropertyGroupError;
@class DBFILEPROPERTIESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `InvalidPropertyGroupError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESInvalidPropertyGroupError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESInvalidPropertyGroupErrorTag` enum type represents the
/// possible tag states with which the
/// `DBFILEPROPERTIESInvalidPropertyGroupError` union can exist.
typedef NS_ENUM(NSInteger, DBFILEPROPERTIESInvalidPropertyGroupErrorTag) {
  /// Template does not exist for the given identifier.
  DBFILEPROPERTIESInvalidPropertyGroupErrorTemplateNotFound,

  /// You do not have permission to modify this template.
  DBFILEPROPERTIESInvalidPropertyGroupErrorRestrictedContent,

  /// (no description).
  DBFILEPROPERTIESInvalidPropertyGroupErrorOther,

  /// (no description).
  DBFILEPROPERTIESInvalidPropertyGroupErrorPath,

  /// This folder cannot be tagged. Shared folders and team folders are not
  /// supported for team-owned tags.
  DBFILEPROPERTIESInvalidPropertyGroupErrorUnsupportedFolder,

  /// One or more of the supplied property field values is too large.
  DBFILEPROPERTIESInvalidPropertyGroupErrorPropertyFieldTooLarge,

  /// One or more of the supplied property fields does not conform to the
  /// template specifications.
  DBFILEPROPERTIESInvalidPropertyGroupErrorDoesNotFitTemplate,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESInvalidPropertyGroupErrorTag tag;

/// Template does not exist for the given identifier. @note Ensure the
/// `isTemplateNotFound` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *templateNotFound;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "template_not_found".
///
/// Description of the "template_not_found" tag state: Template does not exist
/// for the given identifier.
///
/// @param templateNotFound Template does not exist for the given identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateNotFound:(NSString *)templateNotFound;

///
/// Initializes union class with tag state of "restricted_content".
///
/// Description of the "restricted_content" tag state: You do not have
/// permission to modify this template.
///
/// @return An initialized instance.
///
- (instancetype)initWithRestrictedContent;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILEPROPERTIESLookupError *)path;

///
/// Initializes union class with tag state of "unsupported_folder".
///
/// Description of the "unsupported_folder" tag state: This folder cannot be
/// tagged. Shared folders and team folders are not supported for team-owned
/// tags.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnsupportedFolder;

///
/// Initializes union class with tag state of "property_field_too_large".
///
/// Description of the "property_field_too_large" tag state: One or more of the
/// supplied property field values is too large.
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertyFieldTooLarge;

///
/// Initializes union class with tag state of "does_not_fit_template".
///
/// Description of the "does_not_fit_template" tag state: One or more of the
/// supplied property fields does not conform to the template specifications.
///
/// @return An initialized instance.
///
- (instancetype)initWithDoesNotFitTemplate;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "template_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `templateNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "template_not_found".
///
- (BOOL)isTemplateNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_content".
///
/// @return Whether the union's current tag state has value
/// "restricted_content".
///
- (BOOL)isRestrictedContent;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_folder".
///
/// @return Whether the union's current tag state has value
/// "unsupported_folder".
///
- (BOOL)isUnsupportedFolder;

///
/// Retrieves whether the union's current tag state has value
/// "property_field_too_large".
///
/// @return Whether the union's current tag state has value
/// "property_field_too_large".
///
- (BOOL)isPropertyFieldTooLarge;

///
/// Retrieves whether the union's current tag state has value
/// "does_not_fit_template".
///
/// @return Whether the union's current tag state has value
/// "does_not_fit_template".
///
- (BOOL)isDoesNotFitTemplate;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESInvalidPropertyGroupError`
/// union.
///
@interface DBFILEPROPERTIESInvalidPropertyGroupErrorSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESInvalidPropertyGroupError` instances.
///
/// @param instance An instance of the
/// `DBFILEPROPERTIESInvalidPropertyGroupError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESInvalidPropertyGroupError` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILEPROPERTIESInvalidPropertyGroupError *)instance;

///
/// Deserializes `DBFILEPROPERTIESInvalidPropertyGroupError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESInvalidPropertyGroupError` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESInvalidPropertyGroupError`
/// object.
///
+ (DBFILEPROPERTIESInvalidPropertyGroupError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END