// Copyright 2015-present 650 Industries. All rights reserved.

// forward declaration for consumer interface
@protocol ABI36_0_0UMTaskConsumerInterface;

@protocol ABI36_0_0UMTaskInterface

/**
 *  Name of the task.
 */
@property (nonatomic, strong, readonly) NSString *__nonnull name;

/**
 *  Identifier of the application for which the task was created.
 */
@property (nonatomic, strong, readonly) NSString *__nonnull appId;

/**
 *  The URL to the application for which the task was created.
 */
@property (nonatomic, strong, readonly) NSString *__nonnull appUrl;

/**
 *  Task consumer instance that is responsible for handling (consuming) this task.
 */
@property (nonatomic, strong, readonly) id<ABI36_0_0UMTaskConsumerInterface> __nonnull consumer;

/**
 *  Options passed to the task.
 */
@property (nonatomic, strong) NSDictionary *__nullable options;

/**
 *  Executes the task with given dictionary data and given error.
 */
- (void)executeWithData:(nullable NSDictionary *)data withError:(nullable NSError *)error;

@end
