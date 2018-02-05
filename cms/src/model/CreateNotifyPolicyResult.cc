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

#include <alibabacloud/cms/model/CreateNotifyPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

CreateNotifyPolicyResult::CreateNotifyPolicyResult() :
	ServiceResult()
{}

CreateNotifyPolicyResult::CreateNotifyPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNotifyPolicyResult::~CreateNotifyPolicyResult()
{}

void CreateNotifyPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();
	if(!value["traceId"].isNull())
		traceId_ = value["traceId"].asString();
	if(!value["result"].isNull())
		result_ = std::stoi(value["result"].asString());

}

std::string CreateNotifyPolicyResult::getMessage()const
{
	return message_;
}

std::string CreateNotifyPolicyResult::getTraceId()const
{
	return traceId_;
}

std::string CreateNotifyPolicyResult::getCode()const
{
	return code_;
}

std::string CreateNotifyPolicyResult::getSuccess()const
{
	return success_;
}

int CreateNotifyPolicyResult::getResult()const
{
	return result_;
}
