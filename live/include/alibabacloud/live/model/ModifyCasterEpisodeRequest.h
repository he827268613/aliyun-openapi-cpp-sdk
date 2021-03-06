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

#ifndef ALIBABACLOUD_LIVE_MODEL_MODIFYCASTEREPISODEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_MODIFYCASTEREPISODEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT ModifyCasterEpisodeRequest : public RpcServiceRequest
			{

			public:
				ModifyCasterEpisodeRequest();
				~ModifyCasterEpisodeRequest();

				std::string getResourceId()const;
				void setResourceId(const std::string& resourceId);
				std::vector<std::string> getComponentId()const;
				void setComponentId(const std::vector<std::string>& componentId);
				std::string getSwitchType()const;
				void setSwitchType(const std::string& switchType);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				std::string getEpisodeName()const;
				void setEpisodeName(const std::string& episodeName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getEpisodeId()const;
				void setEpisodeId(const std::string& episodeId);

            private:
				std::string resourceId_;
				std::vector<std::string> componentId_;
				std::string switchType_;
				std::string casterId_;
				std::string episodeName_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				std::string episodeId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_MODIFYCASTEREPISODEREQUEST_H_