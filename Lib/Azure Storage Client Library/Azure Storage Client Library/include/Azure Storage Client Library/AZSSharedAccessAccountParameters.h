// -----------------------------------------------------------------------------------------
// <copyright file="AZSSharedAccessAccountPolicy.h" company="Microsoft">
//    Copyright 2015 Microsoft Corporation
//
//    Licensed under the MIT License;
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//      http://spdx.org/licenses/MIT
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
// </copyright>
// -----------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import "Azure Storage Client Library/AZSEnums.h"
#import "Azure Storage Client Library/AZSIPRange.h"
#import "Azure Storage Client Library/AZSMacros.h"
#import "Azure Storage Client Library/AZSSharedAccessHeaders.h"
#import "Azure Storage Client Library/AZSSharedAccessPolicy.h"

AZS_ASSUME_NONNULL_BEGIN

/** Shared access parameters for a storage account. Specifies the permissions and other restrictions bestowed on the SAS. */
@interface AZSSharedAccessAccountParameters : NSObject

/** The permissions to be included in the SAS token. */
@property AZSSharedAccessPermissions permissions;

/** The services to be included in the SAS token. */
@property AZSSharedAccessServices services;

/** The resource types to be included in the SAS token. */
@property AZSSharedAccessResourceTypes resourceTypes;

/** A single IP address or range of IP addresses from which the object may be accessed. */
@property (strong, AZSNullable) AZSIPRange *ipAddressOrRange;

/** The protocols with which the object may be accessed. */
@property AZSSharedAccessProtocols protocols;

/** The expiry time to be included in the SAS token. */
@property (strong, AZSNullable) NSDate *sharedAccessExpiryTime;

/** The start time to be included in the SAS token. */
@property (strong, AZSNullable) NSDate *sharedAccessStartTime;

/** Initializes a newly allocated AZSSharedAccessAccountParameters.
 
 @returns The newly initialized parameters.
 */
-(instancetype) init AZS_DESIGNATED_INITIALIZER;

@end

AZS_ASSUME_NONNULL_END
