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

#include <alibabacloud/ecs/model/DescribeInstanceAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceAutoRenewAttributeResult::DescribeInstanceAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAutoRenewAttributeResult::DescribeInstanceAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAutoRenewAttributeResult::~DescribeInstanceAutoRenewAttributeResult()
{}

void DescribeInstanceAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allInstanceRenewAttributes = value["InstanceRenewAttributes"]["InstanceRenewAttribute"];
	for (auto value : allInstanceRenewAttributes)
	{
		InstanceRenewAttribute instanceRenewAttributesObject;
		if(!value["InstanceId"].isNull())
			instanceRenewAttributesObject.instanceId = value["InstanceId"].asString();
		if(!value["AutoRenewEnabled"].isNull())
			instanceRenewAttributesObject.autoRenewEnabled = value["AutoRenewEnabled"].asString() == "true";
		if(!value["Duration"].isNull())
			instanceRenewAttributesObject.duration = std::stoi(value["Duration"].asString());
		if(!value["PeriodUnit"].isNull())
			instanceRenewAttributesObject.periodUnit = value["PeriodUnit"].asString();
		if(!value["RenewalStatus"].isNull())
			instanceRenewAttributesObject.renewalStatus = value["RenewalStatus"].asString();
		instanceRenewAttributes_.push_back(instanceRenewAttributesObject);
	}

}

std::vector<DescribeInstanceAutoRenewAttributeResult::InstanceRenewAttribute> DescribeInstanceAutoRenewAttributeResult::getInstanceRenewAttributes()const
{
	return instanceRenewAttributes_;
}
