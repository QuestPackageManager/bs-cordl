#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BGNet/Core/Messages/BaseAcknowledgeMessage.hpp"
#include "BGNet/Core/Messages/BaseClientUnconnectedMessageHandler.hpp"
#include "BGNet/Core/Messages/BaseMultipartMessage.hpp"
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
#include "BGNet/Core/Messages/BaseResponse.hpp"
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
#include "BGNet/Core/Messages/ChangeCipherSpecRequest.hpp"
#include "BGNet/Core/Messages/ClientHelloRequest.hpp"
#include "BGNet/Core/Messages/ClientHelloWithCookieRequest.hpp"
#include "BGNet/Core/Messages/ClientKeyExchangeRequest.hpp"
#include "BGNet/Core/Messages/HandshakeMessageReceivedAcknowledge.hpp"
#include "BGNet/Core/Messages/HandshakeMessageType.hpp"
#include "BGNet/Core/Messages/HandshakeMultipartMessage.hpp"
#include "BGNet/Core/Messages/HelloVerifyRequest.hpp"
#include "BGNet/Core/Messages/IHandshakeClientToServerMessage.hpp"
#include "BGNet/Core/Messages/IHandshakeMessage.hpp"
#include "BGNet/Core/Messages/IHandshakeServerToClientMessage.hpp"
#include "BGNet/Core/Messages/IUnconnectedAcknowledgeMessage.hpp"
#include "BGNet/Core/Messages/IUnconnectedAuthenticateRequest.hpp"
#include "BGNet/Core/Messages/IUnconnectedAuthenticateResponse.hpp"
#include "BGNet/Core/Messages/IUnconnectedMessage.hpp"
#include "BGNet/Core/Messages/IUnconnectedMultipartMessage.hpp"
#include "BGNet/Core/Messages/IUnconnectedReliableRequest.hpp"
#include "BGNet/Core/Messages/IUnconnectedReliableResponse.hpp"
#include "BGNet/Core/Messages/IUnconnectedResponse.hpp"
#include "BGNet/Core/Messages/IUnconnectedUnreliableMessage.hpp"
#include "BGNet/Core/Messages/ServerCertificateRequest.hpp"
#include "BGNet/Core/Messages/ServerHelloRequest.hpp"
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
#ifdef __cpp_modules
export module Messages;
#endif
