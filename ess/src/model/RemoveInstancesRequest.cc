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

#include <alibabacloud/ess/model/RemoveInstancesRequest.h>

using AlibabaCloud::Ess::Model::RemoveInstancesRequest;

RemoveInstancesRequest::RemoveInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "RemoveInstances")
{}

RemoveInstancesRequest::~RemoveInstancesRequest()
{}

std::string RemoveInstancesRequest::getInstanceId10()const
{
	return instanceId10_;
}

void RemoveInstancesRequest::setInstanceId10(const std::string& instanceId10)
{
	instanceId10_ = instanceId10;
	setParameter("InstanceId10", instanceId10);
}

long RemoveInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveInstancesRequest::getInstanceId12()const
{
	return instanceId12_;
}

void RemoveInstancesRequest::setInstanceId12(const std::string& instanceId12)
{
	instanceId12_ = instanceId12;
	setParameter("InstanceId12", instanceId12);
}

std::string RemoveInstancesRequest::getInstanceId11()const
{
	return instanceId11_;
}

void RemoveInstancesRequest::setInstanceId11(const std::string& instanceId11)
{
	instanceId11_ = instanceId11;
	setParameter("InstanceId11", instanceId11);
}

std::string RemoveInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void RemoveInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string RemoveInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveInstancesRequest::getInstanceId20()const
{
	return instanceId20_;
}

void RemoveInstancesRequest::setInstanceId20(const std::string& instanceId20)
{
	instanceId20_ = instanceId20;
	setParameter("InstanceId20", instanceId20);
}

std::string RemoveInstancesRequest::getInstanceId1()const
{
	return instanceId1_;
}

void RemoveInstancesRequest::setInstanceId1(const std::string& instanceId1)
{
	instanceId1_ = instanceId1;
	setParameter("InstanceId1", instanceId1);
}

std::string RemoveInstancesRequest::getRemovePolicy()const
{
	return removePolicy_;
}

void RemoveInstancesRequest::setRemovePolicy(const std::string& removePolicy)
{
	removePolicy_ = removePolicy;
	setParameter("RemovePolicy", removePolicy);
}

std::string RemoveInstancesRequest::getInstanceId3()const
{
	return instanceId3_;
}

void RemoveInstancesRequest::setInstanceId3(const std::string& instanceId3)
{
	instanceId3_ = instanceId3;
	setParameter("InstanceId3", instanceId3);
}

std::string RemoveInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RemoveInstancesRequest::getInstanceId2()const
{
	return instanceId2_;
}

void RemoveInstancesRequest::setInstanceId2(const std::string& instanceId2)
{
	instanceId2_ = instanceId2;
	setParameter("InstanceId2", instanceId2);
}

std::string RemoveInstancesRequest::getInstanceId5()const
{
	return instanceId5_;
}

void RemoveInstancesRequest::setInstanceId5(const std::string& instanceId5)
{
	instanceId5_ = instanceId5;
	setParameter("InstanceId5", instanceId5);
}

std::string RemoveInstancesRequest::getInstanceId4()const
{
	return instanceId4_;
}

void RemoveInstancesRequest::setInstanceId4(const std::string& instanceId4)
{
	instanceId4_ = instanceId4;
	setParameter("InstanceId4", instanceId4);
}

std::string RemoveInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RemoveInstancesRequest::getInstanceId7()const
{
	return instanceId7_;
}

void RemoveInstancesRequest::setInstanceId7(const std::string& instanceId7)
{
	instanceId7_ = instanceId7;
	setParameter("InstanceId7", instanceId7);
}

std::string RemoveInstancesRequest::getInstanceId6()const
{
	return instanceId6_;
}

void RemoveInstancesRequest::setInstanceId6(const std::string& instanceId6)
{
	instanceId6_ = instanceId6;
	setParameter("InstanceId6", instanceId6);
}

std::string RemoveInstancesRequest::getInstanceId9()const
{
	return instanceId9_;
}

void RemoveInstancesRequest::setInstanceId9(const std::string& instanceId9)
{
	instanceId9_ = instanceId9;
	setParameter("InstanceId9", instanceId9);
}

std::string RemoveInstancesRequest::getInstanceId8()const
{
	return instanceId8_;
}

void RemoveInstancesRequest::setInstanceId8(const std::string& instanceId8)
{
	instanceId8_ = instanceId8;
	setParameter("InstanceId8", instanceId8);
}

long RemoveInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveInstancesRequest::getInstanceId18()const
{
	return instanceId18_;
}

void RemoveInstancesRequest::setInstanceId18(const std::string& instanceId18)
{
	instanceId18_ = instanceId18;
	setParameter("InstanceId18", instanceId18);
}

std::string RemoveInstancesRequest::getInstanceId17()const
{
	return instanceId17_;
}

void RemoveInstancesRequest::setInstanceId17(const std::string& instanceId17)
{
	instanceId17_ = instanceId17;
	setParameter("InstanceId17", instanceId17);
}

std::string RemoveInstancesRequest::getInstanceId19()const
{
	return instanceId19_;
}

void RemoveInstancesRequest::setInstanceId19(const std::string& instanceId19)
{
	instanceId19_ = instanceId19;
	setParameter("InstanceId19", instanceId19);
}

std::string RemoveInstancesRequest::getInstanceId14()const
{
	return instanceId14_;
}

void RemoveInstancesRequest::setInstanceId14(const std::string& instanceId14)
{
	instanceId14_ = instanceId14;
	setParameter("InstanceId14", instanceId14);
}

std::string RemoveInstancesRequest::getInstanceId13()const
{
	return instanceId13_;
}

void RemoveInstancesRequest::setInstanceId13(const std::string& instanceId13)
{
	instanceId13_ = instanceId13;
	setParameter("InstanceId13", instanceId13);
}

std::string RemoveInstancesRequest::getInstanceId16()const
{
	return instanceId16_;
}

void RemoveInstancesRequest::setInstanceId16(const std::string& instanceId16)
{
	instanceId16_ = instanceId16;
	setParameter("InstanceId16", instanceId16);
}

std::string RemoveInstancesRequest::getInstanceId15()const
{
	return instanceId15_;
}

void RemoveInstancesRequest::setInstanceId15(const std::string& instanceId15)
{
	instanceId15_ = instanceId15;
	setParameter("InstanceId15", instanceId15);
}

