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

#include <alibabacloud/vpc/model/ModifyVpcAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpcAttributeRequest;

ModifyVpcAttributeRequest::ModifyVpcAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyVpcAttribute")
{}

ModifyVpcAttributeRequest::~ModifyVpcAttributeRequest()
{}

std::string ModifyVpcAttributeRequest::getVpcName()const
{
	return vpcName_;
}

void ModifyVpcAttributeRequest::setVpcName(const std::string& vpcName)
{
	vpcName_ = vpcName;
	setParameter("VpcName", vpcName);
}

long ModifyVpcAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVpcAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyVpcAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVpcAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVpcAttributeRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyVpcAttributeRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ModifyVpcAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVpcAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyVpcAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyVpcAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyVpcAttributeRequest::getUserCidr()const
{
	return userCidr_;
}

void ModifyVpcAttributeRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setParameter("UserCidr", userCidr);
}

long ModifyVpcAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVpcAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

