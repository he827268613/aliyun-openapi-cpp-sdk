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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEJOBGROUPREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEJOBGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT CreateJobGroupRequest : public RpcServiceRequest
			{

			public:
				CreateJobGroupRequest();
				~CreateJobGroupRequest();

				std::vector<std::string> getCallingNumber()const;
				void setCallingNumber(const std::vector<std::string>& callingNumber);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getStrategyJson()const;
				void setStrategyJson(const std::string& strategyJson);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getScenarioId()const;
				void setScenarioId(const std::string& scenarioId);

            private:
				std::vector<std::string> callingNumber_;
				std::string instanceId_;
				std::string strategyJson_;
				std::string name_;
				std::string description_;
				std::string scenarioId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEJOBGROUPREQUEST_H_