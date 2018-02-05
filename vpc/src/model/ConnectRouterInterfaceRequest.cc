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

#include <alibabacloud/vpc/model/ConnectRouterInterfaceRequest.h>

using AlibabaCloud::Vpc::Model::ConnectRouterInterfaceRequest;

ConnectRouterInterfaceRequest::ConnectRouterInterfaceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ConnectRouterInterface")
{}

ConnectRouterInterfaceRequest::~ConnectRouterInterfaceRequest()
{}

long ConnectRouterInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ConnectRouterInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ConnectRouterInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ConnectRouterInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ConnectRouterInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void ConnectRouterInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long ConnectRouterInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void ConnectRouterInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ConnectRouterInterfaceRequest::getRouterInterfaceId()const
{
	return routerInterfaceId_;
}

void ConnectRouterInterfaceRequest::setRouterInterfaceId(const std::string& routerInterfaceId)
{
	routerInterfaceId_ = routerInterfaceId;
	setParameter("RouterInterfaceId", routerInterfaceId);
}

