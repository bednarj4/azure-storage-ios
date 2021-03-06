// -----------------------------------------------------------------------------------------
// <copyright file="AZSMetricsProperties.m" company="Microsoft">
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

#import "Azure Storage Client Library/AZSMetricsProperties.h"
#import "Azure Storage Client Library/AZSEnums.h"

@implementation AZSMetricsProperties

-(instancetype) init
{
    self = [super init];
    if (self)
    {
        _version = @"1.0";
        _metricsLevel = AZSMetricsLevelDisabled;
    }

    return self;
}

@end

