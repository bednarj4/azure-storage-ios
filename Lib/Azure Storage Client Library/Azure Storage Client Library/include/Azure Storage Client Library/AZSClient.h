// -----------------------------------------------------------------------------------------
// <copyright file="AZSClient.h" company="Microsoft">
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
#import "Azure Storage Client Library/AZSErrors.h"
#import "Azure Storage Client Library/AZSEnums.h"
#import "Azure Storage Client Library/AZSMacros.h"
#import "Azure Storage Client Library/AZSOperationContext.h"
#import "Azure Storage Client Library/AZSRequestResult.h"
#import "Azure Storage Client Library/AZSBlobRequestOptions.h"
#import "Azure Storage Client Library/AZSCloudBlobClient.h"
#import "Azure Storage Client Library/AZSStorageCredentials.h"
#import "Azure Storage Client Library/AZSStorageUri.h"
#import "Azure Storage Client Library/AZSCloudStorageAccount.h"
#import "Azure Storage Client Library/AZSResultSegment.h"
#import "Azure Storage Client Library/AZSContinuationToken.h"
#import "Azure Storage Client Library/AZSAccessCondition.h"
#import "Azure Storage Client Library/AZSRetryInfo.h"
#import "Azure Storage Client Library/AZSRetryContext.h"
#import "Azure Storage Client Library/AZSRetryPolicy.h"
#import "Azure Storage Client Library/AZSCloudBlockBlob.h"
#import "Azure Storage Client Library/AZSCloudPageBlob.h"
#import "Azure Storage Client Library/AZSCloudAppendBlob.h"
#import "Azure Storage Client Library/AZSCloudBlobContainer.h"
#import "Azure Storage Client Library/AZSBlockListItem.h"
#import "Azure Storage Client Library/AZSBlobContainerProperties.h"
#import "Azure Storage Client Library/AZSBlobProperties.h"
#import "Azure Storage Client Library/AZSCopyState.h"
#import "Azure Storage Client Library/AZSBlobOutputStream.h"
#import "Azure Storage Client Library/AZSCloudBlobDirectory.h"
#import "Azure Storage Client Library/AZSServiceProperties.h"
#import "Azure Storage Client Library/AZSLoggingProperties.h"
#import "Azure Storage Client Library/AZSMetricsProperties.h"
#import "Azure Storage Client Library/AZSCorsRule.h"

// TODO: Import all the user-accessible headers, so that users only need to import this one header file.
@interface AZSClient : NSObject

@end
