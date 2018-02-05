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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPNCONNECTIONATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPNCONNECTIONATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ModifyVpnConnectionAttributeResult : public ServiceResult
			{
			public:
				struct IkeConfig
				{
					std::string ikeAuthAlg;
					std::string localId;
					std::string ikeEncAlg;
					std::string ikeVersion;
					std::string ikeMode;
					long ikeLifetime;
					std::string psk;
					std::string remoteId;
					std::string ikePfs;
				};
				struct IpsecConfig
				{
					std::string ipsecPfs;
					std::string ipsecEncAlg;
					std::string ipsecAuthAlg;
					long ipsecLifetime;
				};


				ModifyVpnConnectionAttributeResult();
				explicit ModifyVpnConnectionAttributeResult(const std::string &payload);
				~ModifyVpnConnectionAttributeResult();
				std::string getLocalSubnet()const;
				bool getEffectImmediately()const;
				std::string getRemoteSubnet()const;
				std::string getDescription()const;
				std::string getCustomerGatewayId()const;
				std::string getVpnGatewayId()const;
				std::vector<IpsecConfig> getIpsecConfig()const;
				long getCreateTime()const;
				std::string getVpnConnectionId()const;
				std::vector<IkeConfig> getIkeConfig()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string localSubnet_;
				bool effectImmediately_;
				std::string remoteSubnet_;
				std::string description_;
				std::string customerGatewayId_;
				std::string vpnGatewayId_;
				std::vector<IpsecConfig> ipsecConfig_;
				long createTime_;
				std::string vpnConnectionId_;
				std::vector<IkeConfig> ikeConfig_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPNCONNECTIONATTRIBUTERESULT_H_