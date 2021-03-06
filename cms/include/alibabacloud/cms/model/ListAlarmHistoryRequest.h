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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTALARMHISTORYREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_LISTALARMHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT ListAlarmHistoryRequest : public RpcServiceRequest
			{

			public:
				ListAlarmHistoryRequest();
				~ListAlarmHistoryRequest();

				std::string getCursor()const;
				void setCursor(const std::string& cursor);
				std::string getCallby_cms_owner()const;
				void setCallby_cms_owner(const std::string& callby_cms_owner);
				int getSize()const;
				void setSize(int size);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string cursor_;
				std::string callby_cms_owner_;
				int size_;
				std::string endTime_;
				std::string id_;
				std::string startTime_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_LISTALARMHISTORYREQUEST_H_