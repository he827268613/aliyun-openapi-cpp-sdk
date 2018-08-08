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

#include <alibabacloud/linkface/model/LinkFaceRequest.h>

using AlibabaCloud::LinkFace::Model::LinkFaceRequest;

LinkFaceRequest::LinkFaceRequest() :
	RpcServiceRequest("linkface", "2018-07-20", "LinkFace")
{}

LinkFaceRequest::~LinkFaceRequest()
{}

std::string LinkFaceRequest::getGroupId()const
{
	return groupId_;
}

void LinkFaceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string LinkFaceRequest::getUserId()const
{
	return userId_;
}

void LinkFaceRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}
