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

#ifndef ALIBABACLOUD_MTS_MODEL_REGISTERMEDIADETAILSCENARIOREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_REGISTERMEDIADETAILSCENARIOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT RegisterMediaDetailScenarioRequest : public RpcServiceRequest
			{

			public:
				RegisterMediaDetailScenarioRequest();
				~RegisterMediaDetailScenarioRequest();

				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScenario()const;
				void setScenario(const std::string& scenario);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string jobId_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string scenario_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_REGISTERMEDIADETAILSCENARIOREQUEST_H_