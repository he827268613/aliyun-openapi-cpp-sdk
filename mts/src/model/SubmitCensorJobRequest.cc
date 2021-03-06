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

#include <alibabacloud/mts/model/SubmitCensorJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitCensorJobRequest;

SubmitCensorJobRequest::SubmitCensorJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitCensorJob")
{}

SubmitCensorJobRequest::~SubmitCensorJobRequest()
{}

long SubmitCensorJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitCensorJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitCensorJobRequest::getCoverImages()const
{
	return coverImages_;
}

void SubmitCensorJobRequest::setCoverImages(const std::string& coverImages)
{
	coverImages_ = coverImages;
	setParameter("CoverImages", coverImages);
}

std::string SubmitCensorJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitCensorJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitCensorJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitCensorJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitCensorJobRequest::getDescription()const
{
	return description_;
}

void SubmitCensorJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long SubmitCensorJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitCensorJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitCensorJobRequest::getTitle()const
{
	return title_;
}

void SubmitCensorJobRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string SubmitCensorJobRequest::getCensorConfig()const
{
	return censorConfig_;
}

void SubmitCensorJobRequest::setCensorConfig(const std::string& censorConfig)
{
	censorConfig_ = censorConfig;
	setParameter("CensorConfig", censorConfig);
}

std::string SubmitCensorJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitCensorJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitCensorJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitCensorJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

std::string SubmitCensorJobRequest::getInput()const
{
	return input_;
}

void SubmitCensorJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

std::string SubmitCensorJobRequest::getUserData()const
{
	return userData_;
}

void SubmitCensorJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitCensorJobRequest::getBarrages()const
{
	return barrages_;
}

void SubmitCensorJobRequest::setBarrages(const std::string& barrages)
{
	barrages_ = barrages;
	setParameter("Barrages", barrages);
}

