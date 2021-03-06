/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CDN_MODEL_SETWAITINGROOMCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETWAITINGROOMCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT SetWaitingRoomConfigRequest : public RpcServiceRequest
			{

			public:
				SetWaitingRoomConfigRequest();
				~SetWaitingRoomConfigRequest();

				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getWaitUrl()const;
				void setWaitUrl(const std::string& waitUrl);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getFunctionName()const;
				void setFunctionName(const std::string& functionName);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				std::string getWaitUri()const;
				void setWaitUri(const std::string& waitUri);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getPopProduct()const;
				void setPopProduct(const std::string& popProduct);
				int getMaxTimeWait()const;
				void setMaxTimeWait(int maxTimeWait);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getAllowPct()const;
				void setAllowPct(int allowPct);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				int getGapTime()const;
				void setGapTime(int gapTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVersion()const;
				void setVersion(const std::string& version);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);

            private:
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string accessKeyId_;
				std::string waitUrl_;
				std::string securityToken_;
				std::string requestContent_;
				std::string functionName_;
				std::string callerBidEmail_;
				std::string callerUidEmail_;
				std::string waitUri_;
				long callerUid_;
				std::string app_ip_;
				std::string popProduct_;
				int maxTimeWait_;
				std::string domainName_;
				int allowPct_;
				std::string callerBid_;
				int gapTime_;
				long ownerId_;
				std::string version_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string requestId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETWAITINGROOMCONFIGREQUEST_H_