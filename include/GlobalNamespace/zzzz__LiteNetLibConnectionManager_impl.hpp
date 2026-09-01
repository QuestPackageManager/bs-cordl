#pragma once
// IWYU pragma private; include "GlobalNamespace\LiteNetLibConnectionManager.hpp"
#include "GlobalNamespace/zzzz__LiteNetLibConnectionManager_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LiteNetLibConnectionManager_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__LiteNetLibConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode::LiteNetLibConnectionManager_NetworkMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode::LiteNetLibConnectionManager_NetworkMode() {}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode GlobalNamespace::LiteNetLibConnectionManager_NetworkMode::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode GlobalNamespace::LiteNetLibConnectionManager_NetworkMode::Client{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode GlobalNamespace::LiteNetLibConnectionManager_NetworkMode::Server{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState::LiteNetLibConnectionManager_ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState::LiteNetLibConnectionManager_ConnectionState() {}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState GlobalNamespace::LiteNetLibConnectionManager_ConnectionState::Unconnected{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState GlobalNamespace::LiteNetLibConnectionManager_ConnectionState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState GlobalNamespace::LiteNetLibConnectionManager_ConnectionState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState GlobalNamespace::LiteNetLibConnectionManager_ConnectionState::Disconnecting{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3339e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectionRequestHandler*& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_connectionRequestHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequestHandler;
}
constexpr ::GlobalNamespace::IConnectionRequestHandler* const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_connectionRequestHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequestHandler;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionRequestHandler = value;
}
constexpr int32_t& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_filterUnencryptedTraffic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterUnencryptedTraffic;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_filterUnencryptedTraffic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterUnencryptedTraffic;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_filterUnencryptedTraffic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filterUnencryptedTraffic = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_enableUnconnectedMessages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUnconnectedMessages;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_enableUnconnectedMessages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUnconnectedMessages;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_enableUnconnectedMessages(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableUnconnectedMessages = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_enableBackgroundSentry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBackgroundSentry;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_enableBackgroundSentry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBackgroundSentry;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_enableBackgroundSentry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableBackgroundSentry = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_enableStatistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableStatistics;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_enableStatistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableStatistics;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_enableStatistics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableStatistics = value;
}
constexpr int32_t& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_disconnectTimeoutMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectTimeoutMs;
}
constexpr int32_t const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_disconnectTimeoutMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectTimeoutMs;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_disconnectTimeoutMs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectTimeoutMs = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_compatibilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compatibilityVersion;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_get_compatibilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compatibilityVersion;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::__cordl_internal_set_compatibilityVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compatibilityVersion = value;
}
inline void GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase* GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
constexpr GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<
    ::GlobalNamespace::LiteNetLibConnectionManager*>*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*
GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__LiteNetLibConnectionManager__() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase::LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3339e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userId = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::__cordl_internal_get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::__cordl_internal_get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::__cordl_internal_set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userName = value;
}
inline void GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams* GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_StartServerParams::LiteNetLibConnectionManager_StartServerParams() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3339e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LiteNetLibConnectionManager_StartClientParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams* GlobalNamespace::LiteNetLibConnectionManager_StartClientParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_StartClientParams::LiteNetLibConnectionManager_StartClientParams() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3339ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userId = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userName = value;
}
constexpr ::System::Net::IPEndPoint*& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_endPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPoint;
}
constexpr ::System::Net::IPEndPoint* const& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_endPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPoint;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_set_endPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endPoint = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_serverUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_serverUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_set_serverUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverUserId = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_serverUserName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_serverUserName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_set_serverUserName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverUserName = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_serverIsConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverIsConnectionOwner;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_get_serverIsConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverIsConnectionOwner;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::__cordl_internal_set_serverIsConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverIsConnectionOwner = value;
}
inline void GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams* GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectToServerParams::LiteNetLibConnectionManager_ConnectToServerParams() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_isConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest.get_endPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_endPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3339ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_endPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest.get_compatibilityVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_compatibilityVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_compatibilityVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)(
    ::LiteNetLib::ConnectionRequest*, ::StringW, ::StringW, bool, ::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3339ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(),
            { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::ConnectionRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPeer* (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::Accept)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3339a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "Accept", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
constexpr ::LiteNetLib::ConnectionRequest*& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::LiteNetLib::ConnectionRequest* const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_set__request(::LiteNetLib::ConnectionRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____request = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__compatibilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_get__compatibilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::__cordl_internal_set__compatibilityVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compatibilityVersion = value;
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_isConnectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_endPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_endPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::get_compatibilityVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "get_compatibilityVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                         ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(),
          { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::ConnectionRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline ::LiteNetLib::NetPeer* GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::Accept() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(), { "Accept", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*
GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::New_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                ::StringW compatibilityVersion) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>(request, userId, userName, isConnectionOwner, compatibilityVersion));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest::LiteNetLibConnectionManager_NetPeerConnectionRequest() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_isConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.get_compatibilityVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_compatibilityVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3339f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_compatibilityVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)(::LiteNetLib::NetPeer*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3339a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
            { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Send)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3339f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                                                             { "Send", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3339fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)(::System::Object*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3339ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333a10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Disconnect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3338f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "Disconnect", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
constexpr ::LiteNetLib::NetPeer*& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get_netPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___netPeer;
}
constexpr ::LiteNetLib::NetPeer* const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get_netPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___netPeer;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_set_netPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___netPeer = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__compatibilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_get__compatibilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::__cordl_internal_set__compatibilityVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compatibilityVersion = value;
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_isConnectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::get_compatibilityVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "get_compatibilityVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                  ::StringW compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                       { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPeer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                                                           { "Send", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, deliveryMethod);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Equals(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::Disconnect() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(), { "Disconnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*
GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::New_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner, ::StringW compatibilityVersion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(netPeer, userId, userName, isConnectionOwner, compatibilityVersion));
}
/// @brief Convert operator to "::GlobalNamespace::IConnection"
constexpr GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::operator ::GlobalNamespace::IConnection*() noexcept {
  return static_cast<::GlobalNamespace::IConnection*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnection"
constexpr ::GlobalNamespace::IConnection* GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::i___GlobalNamespace__IConnection() noexcept {
  return static_cast<::GlobalNamespace::IConnection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>"
constexpr GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::operator ::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*
GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::i___System__IEquatable_1___GlobalNamespace__LiteNetLibConnectionManager_NetPeerConnection__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection::LiteNetLibConnectionManager_NetPeerConnection() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager___c::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager___c._get_hasConnectionOwner_b__71_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager___c::*)(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager___c::_get_hasConnectionOwner_b__71_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x333a180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager___c*>(),
                                                             { "<get_hasConnectionOwner>b__71_0", {}, { ::i2c::type_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LiteNetLibConnectionManager___c::setStaticF___9(::GlobalNamespace::LiteNetLibConnectionManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LiteNetLibConnectionManager___c*, "<>9", ::GlobalNamespace::LiteNetLibConnectionManager___c*>(
      std::forward<::GlobalNamespace::LiteNetLibConnectionManager___c*>(value));
}
inline ::GlobalNamespace::LiteNetLibConnectionManager___c* GlobalNamespace::LiteNetLibConnectionManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LiteNetLibConnectionManager___c*, "<>9", ::GlobalNamespace::LiteNetLibConnectionManager___c*>();
}
inline void GlobalNamespace::LiteNetLibConnectionManager___c::setStaticF___9__71_0(::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*, "<>9__71_0", ::GlobalNamespace::LiteNetLibConnectionManager___c*>(
      std::forward<::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* GlobalNamespace::LiteNetLibConnectionManager___c::getStaticF___9__71_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*, "<>9__71_0",
                                           ::GlobalNamespace::LiteNetLibConnectionManager___c*>();
}
inline void GlobalNamespace::LiteNetLibConnectionManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager___c::_get_hasConnectionOwner_b__71_0(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager___c*>(),
                                                           { "<get_hasConnectionOwner>b__71_0", {}, { ::i2c::type_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager___c* GlobalNamespace::LiteNetLibConnectionManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager___c::LiteNetLibConnectionManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x333a194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x333a5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LiteNetLibConnectionManager* __4__this,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129::LiteNetLibConnectionManager__BackgroundDisconnectSentry_d__129() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::MoveNext)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x333a658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x333aaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LiteNetLibConnectionManager* __4__this,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130::LiteNetLibConnectionManager__BackgroundShutdownSentry_d__130() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onInitializedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x33363d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "add_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onInitializedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3336480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "remove_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x333652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "add_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x33365d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "remove_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "add_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "remove_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "add_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x33368c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "remove_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "add_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "remove_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                            { "add_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                            { "remove_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::LiteNetLibConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
            { "add_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
            { "remove_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onReceiveUnconnectedDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onReceiveUnconnectedDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                         { "add_onReceiveUnconnectedDataEvent", {}, { ::i2c::type_of<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onReceiveUnconnectedDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceiveUnconnectedDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3336ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                         { "remove_onReceiveUnconnectedDataEvent", {}, { ::i2c::type_of<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onStatisticsUpdatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3336f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                { "add_onStatisticsUpdatedEvent", {}, { ::i2c::type_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onStatisticsUpdatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3337030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                { "remove_onStatisticsUpdatedEvent", {}, { ::i2c::type_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33370dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33370e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33370ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnecting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33370fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isConnecting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isDisconnecting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x333710c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isDisconnecting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x333711c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_hasConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_hasConnectionOwner)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x333712c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_hasConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3337244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3337254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3337264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_connectionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3337274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_connectionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_connectionRequestHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectionRequestHandler* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_connectionRequestHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33372c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_connectionRequestHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_port)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x33372cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_port", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_unconnectedPacketHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_unconnectedPacketHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33372f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_unconnectedPacketHeader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_encryptionLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PacketEncryptionLayer* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_encryptionLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33372f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_encryptionLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_compatibilityVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_compatibilityVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3337300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_compatibilityVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3337308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3337414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x33374b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x33377c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3337870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
            { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>(), ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendUnconnectedMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3337960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                { "SendUnconnectedMessage", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.PollUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3337984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "PollUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ConnectToEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW, ::StringW, ::System::Net::IPEndPoint*, ::StringW, ::StringW, bool)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::ConnectToEndPoint)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3337d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                           { "ConnectToEndPoint",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3338040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x33380b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "DisposeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisposeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::DisposeInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3338064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "DisposeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3338294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "Disconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisconnectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::DisconnectedReason, ::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3338444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                         { "DisconnectInternal", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>(), ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryStartNetManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(int32_t, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::TryStartNetManager)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3338510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "TryStartNetManager", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.StartBackgroundSentry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::StartBackgroundSentry)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x33385b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "StartBackgroundSentry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.CheckSentryState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::CheckSentryState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3337a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "CheckSentryState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.UpdateStatistics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::UpdateStatistics)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x3337a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "UpdateStatistics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::LiteNetLibConnectionManager::*)(int32_t)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3338a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "GetConnection", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.IsConnectedToUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager::IsConnectedToUser)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3338ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "IsConnectedToUser", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.HasConnectionToEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::HasConnectionToEndPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3338b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "HasConnectionToEndPoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.HasPendingConnectionToEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::HasPendingConnectionToEndPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3338c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                           { "HasPendingConnectionToEndPoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnPeerConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3338d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                           { "LiteNetLib.INetEventListener.OnPeerConnected", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3338f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                            { "LiteNetLib.INetEventListener.OnNetworkError", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3338f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnConnectionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::ConnectionRequest*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3338f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "LiteNetLib.INetEventListener.OnConnectionRequest", {}, { ::i2c::type_of<::LiteNetLib::ConnectionRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnPeerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x333922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                         { "LiteNetLib.INetEventListener.OnPeerDisconnected", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::LiteNetLib::DisconnectInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x333977c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                { "LiteNetLib.INetEventListener.OnNetworkReceive",
                                                  {},
                                                  { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::LiteNetLib::NetPacketReader*>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(
        &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x333992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                            { "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                              {},
                              { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::NetPacketReader*>(), ::i2c::type_of<::LiteNetLib::UnconnectedMessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3339850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "GetConnection", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.AcceptAllPendingRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::AcceptAllPendingRequests)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3339968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "AcceptAllPendingRequests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::ConnectionRequest*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::TryAccept)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33390fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                           { "TryAccept",
                                                                                             {},
                                                                                             { ::i2c::type_of<::LiteNetLib::ConnectionRequest*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.CreatePendingConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::CreatePendingConnection)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3337f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                            { "CreatePendingConnection",
                              {},
                              { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.RemoveConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::RemoveConnection)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3339578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "RemoveConnection", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::TryDisconnect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3339158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "TryDisconnect", {}, { ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToDisconnectedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::ToDisconnectedReason)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3339a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "ToDisconnectedReason", {}, { ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToConnectionFailedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConnectionFailedReason (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::ToConnectionFailedReason)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3339ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                           { "ToConnectionFailedReason", {}, { ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NetDataWriter* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3337dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "GetConnectionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.BackgroundDisconnectSentry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::BackgroundDisconnectSentry)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3339ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "BackgroundDisconnectSentry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.BackgroundShutdownSentry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::BackgroundShutdownSentry)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3339b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "BackgroundShutdownSentry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToLiteNetDeliveryMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::DeliveryMethod (*)(::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::ToLiteNetDeliveryMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3337858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "ToLiteNetDeliveryMethod", {}, { ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.FromLiteNetDeliveryMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGNet::Core::DeliveryMethod (*)(::LiteNetLib::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::FromLiteNetDeliveryMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x333991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "FromLiteNetDeliveryMethod", {}, { ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3339c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3339cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetLogFormatConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatConnection)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3339d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                             { "GetLogFormatConnection", {}, { ::i2c::type_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetLogFormatUserInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::Net::IPEndPoint*)>(&::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatUserInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3339dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                { "GetLogFormatUserInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._DisposeAsync_b__101_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::_DisposeAsync_b__101_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3339e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "<DisposeAsync>b__101_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__unconnectedPacketHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unconnectedPacketHeader;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__unconnectedPacketHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unconnectedPacketHeader;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__unconnectedPacketHeader(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unconnectedPacketHeader = value;
}
constexpr ::LiteNetLib::NetManager*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__netManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netManager;
}
constexpr ::LiteNetLib::NetManager* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__netManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netManager;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__netManager(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____netManager = value;
}
constexpr ::GlobalNamespace::PacketEncryptionLayer*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__encryptionLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionLayer;
}
constexpr ::GlobalNamespace::PacketEncryptionLayer* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__encryptionLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionLayer;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__encryptionLayer(::GlobalNamespace::PacketEncryptionLayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionLayer = value;
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::BGNet::Core::ITaskUtility* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskUtility = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__connections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connections;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* const&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__connections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connections;
}
constexpr void
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connections = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>*&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__pendingConnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingConnections;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* const&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__pendingConnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingConnections;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__pendingConnections(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingConnections = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>*&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__pendingRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingRequests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>* const&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__pendingRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingRequests;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__pendingRequests(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnectionRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingRequests = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__pendingReconnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingReconnections;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__pendingReconnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingReconnections;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__pendingReconnections(::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingReconnections = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr ::GlobalNamespace::IConnectionRequestHandler*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__connectionRequestHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr ::GlobalNamespace::IConnectionRequestHandler* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__connectionRequestHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionRequestHandler = value;
}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__mode(::GlobalNamespace::LiteNetLibConnectionManager_NetworkMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mode = value;
}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__connectionState(::GlobalNamespace::LiteNetLibConnectionManager_ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__backgroundSentryDisconnectCts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryDisconnectCts;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__backgroundSentryDisconnectCts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryDisconnectCts;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundSentryDisconnectCts = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__backgroundSentryShutdownCts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryShutdownCts;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__backgroundSentryShutdownCts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryShutdownCts;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__backgroundSentryShutdownCts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundSentryShutdownCts = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__sentryDisconnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryDisconnected;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__sentryDisconnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryDisconnected;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__sentryDisconnected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentryDisconnected = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__sentryShutdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryShutdown;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__sentryShutdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryShutdown;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__sentryShutdown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentryShutdown = value;
}
constexpr int64_t& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__lastPollUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollUpdateTime;
}
constexpr int64_t const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__lastPollUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollUpdateTime;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__lastPollUpdateTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPollUpdateTime = value;
}
constexpr int64_t& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__lastStatisticsUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastStatisticsUpdateTime;
}
constexpr int64_t const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__lastStatisticsUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastStatisticsUpdateTime;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__lastStatisticsUpdateTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastStatisticsUpdateTime = value;
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__compatibilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get__compatibilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set__compatibilityVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compatibilityVersion = value;
}
constexpr ::System::Action*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onInitializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onInitializedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onConnectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onDisconnectedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectionFailedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectionConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectionConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectionConnectedEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectionDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* const&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onConnectionDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr void
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectionDisconnectedEvent = value;
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onReceivedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* const&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onReceivedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onReceivedDataEvent(
    ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onReceivedDataEvent = value;
}
constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onReceiveUnconnectedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceiveUnconnectedDataEvent;
}
constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* const&
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onReceiveUnconnectedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceiveUnconnectedDataEvent;
}
constexpr void
GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onReceiveUnconnectedDataEvent = value;
}
constexpr ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onStatisticsUpdatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onStatisticsUpdatedEvent;
}
constexpr ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* const& GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_get_onStatisticsUpdatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onStatisticsUpdatedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__cordl_internal_set_onStatisticsUpdatedEvent(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onStatisticsUpdatedEvent = value;
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "add_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "remove_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "add_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "remove_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "add_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "remove_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "add_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "remove_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "add_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "remove_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                          { "add_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                          { "remove_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LiteNetLibConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
          { "add_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onReceivedDataEvent(
    ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
          { "remove_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                       { "add_onReceiveUnconnectedDataEvent", {}, { ::i2c::type_of<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                       { "remove_onReceiveUnconnectedDataEvent", {}, { ::i2c::type_of<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onStatisticsUpdatedEvent(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "add_onStatisticsUpdatedEvent", {}, { ::i2c::type_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onStatisticsUpdatedEvent(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                              { "remove_onStatisticsUpdatedEvent", {}, { ::i2c::type_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isConnecting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isDisconnecting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_hasConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_hasConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_isDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LiteNetLibConnectionManager::get_connectionCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_connectionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::LiteNetLibConnectionManager::get_connectionRequestHandler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_connectionRequestHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionRequestHandler*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LiteNetLibConnectionManager::get_port() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_port", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::LiteNetLibConnectionManager::get_unconnectedPacketHeader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_unconnectedPacketHeader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::GlobalNamespace::PacketEncryptionLayer* GlobalNamespace::LiteNetLibConnectionManager::get_encryptionLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_encryptionLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketEncryptionLayer*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::get_compatibilityVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "get_compatibilityVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider, taskUtility);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod,
                                                                    ::GlobalNamespace::IConnection* excludingConnection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
          { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>(), ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, deliveryMethod, excludingConnection);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "SendUnconnectedMessage", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, writer);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "PollUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::LiteNetLibConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "Init", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::IConnectionInitParams_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, initParams);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW remoteUserId,
                                                                            ::StringW remoteUserName, bool remoteUserIsConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                         { "ConnectToEndPoint",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, userName, remoteEndPoint, remoteUserId, remoteUserName, remoteUserIsConnectionOwner);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask GlobalNamespace::LiteNetLibConnectionManager::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "DisposeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::DisposeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "DisposeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "Disconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason,
                                                                             ::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                              { "DisconnectInternal", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>(), ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason, connectionFailedReason);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::TryStartNetManager(int32_t port, bool enableBackgroundSentry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "TryStartNetManager", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port, enableBackgroundSentry);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::StartBackgroundSentry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "StartBackgroundSentry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::CheckSentryState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "CheckSentryState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::UpdateStatistics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "UpdateStatistics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::LiteNetLibConnectionManager::GetConnection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "GetConnection", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*>(this, ___internal_method, index);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::IsConnectedToUser(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "IsConnectedToUser", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::HasConnectionToEndPoint(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "HasConnectionToEndPoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPoint);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::HasPendingConnectionToEndPoint(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                         { "HasPendingConnectionToEndPoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPoint);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                                                         { "LiteNetLib.INetEventListener.OnPeerConnected", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                          { "LiteNetLib.INetEventListener.OnNetworkError", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint, socketError);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latencyMs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, latencyMs);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "LiteNetLib.INetEventListener.OnConnectionRequest", {}, { ::i2c::type_of<::LiteNetLib::ConnectionRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                       { "LiteNetLib.INetEventListener.OnPeerDisconnected", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::LiteNetLib::DisconnectInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, disconnectInfo);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                                        ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                              { "LiteNetLib.INetEventListener.OnNetworkReceive",
                                                {},
                                                { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::LiteNetLib::NetPacketReader*>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                                   ::LiteNetLib::UnconnectedMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                          { "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            {},
                            { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::NetPacketReader*>(), ::i2c::type_of<::LiteNetLib::UnconnectedMessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* GlobalNamespace::LiteNetLibConnectionManager::GetConnection(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "GetConnection", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>(this, ___internal_method, peer);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::AcceptAllPendingRequests() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "AcceptAllPendingRequests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::TryAccept(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                    ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
          { "TryAccept", {}, { ::i2c::type_of<::LiteNetLib::ConnectionRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::CreatePendingConnection(::LiteNetLib::NetPeer* peer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                  ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                          { "CreatePendingConnection",
                            {},
                            { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::RemoveConnection(::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::DisconnectReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "RemoveConnection", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPeer, reason);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::TryDisconnect(::LiteNetLib::DisconnectReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "TryDisconnect", {}, { ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::LiteNetLibConnectionManager::ToDisconnectedReason(::LiteNetLib::DisconnectReason disconnectReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "ToDisconnectedReason", {}, { ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason>(this, ___internal_method, disconnectReason);
}
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::LiteNetLibConnectionManager::ToConnectionFailedReason(::LiteNetLib::DisconnectReason disconnectReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "ToConnectionFailedReason", {}, { ::i2c::type_of<::LiteNetLib::DisconnectReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason>(this, ___internal_method, disconnectReason);
}
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::LiteNetLibConnectionManager::GetConnectionMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "GetConnectionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LiteNetLibConnectionManager::BackgroundDisconnectSentry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "BackgroundDisconnectSentry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LiteNetLibConnectionManager::BackgroundShutdownSentry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "BackgroundShutdownSentry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::LiteNetLib::DeliveryMethod GlobalNamespace::LiteNetLibConnectionManager::ToLiteNetDeliveryMethod(::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "ToLiteNetDeliveryMethod", {}, { ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::DeliveryMethod>(nullptr, ___internal_method, deliveryMethod);
}
inline ::BGNet::Core::DeliveryMethod GlobalNamespace::LiteNetLibConnectionManager::FromLiteNetDeliveryMethod(::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "FromLiteNetDeliveryMethod", {}, { ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::DeliveryMethod>(nullptr, ___internal_method, deliveryMethod);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::Log(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LogError(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatConnection(::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection* netPeerConnection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                                           { "GetLogFormatConnection", {}, { ::i2c::type_of<::GlobalNamespace::LiteNetLibConnectionManager_NetPeerConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, netPeerConnection);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatUserInfo(::StringW userName, ::StringW userId, ::System::Net::IPEndPoint* ipEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(),
                                              { "GetLogFormatUserInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, userName, userId, ipEndPoint);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::_DisposeAsync_b__101_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LiteNetLibConnectionManager*>(), { "<DisposeAsync>b__101_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager* GlobalNamespace::LiteNetLibConnectionManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager*>());
}
inline ::GlobalNamespace::LiteNetLibConnectionManager* GlobalNamespace::LiteNetLibConnectionManager::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiteNetLibConnectionManager*>(timeProvider, taskUtility));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
constexpr GlobalNamespace::LiteNetLibConnectionManager::operator ::GlobalNamespace::IConnectionManager*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionManager"
constexpr ::GlobalNamespace::IConnectionManager* GlobalNamespace::LiteNetLibConnectionManager::i___GlobalNamespace__IConnectionManager() noexcept {
  return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::LiteNetLibConnectionManager::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::LiteNetLibConnectionManager::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LiteNetLibConnectionManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LiteNetLibConnectionManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr GlobalNamespace::LiteNetLibConnectionManager::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* GlobalNamespace::LiteNetLibConnectionManager::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::INetEventListener"
constexpr GlobalNamespace::LiteNetLibConnectionManager::operator ::LiteNetLib::INetEventListener*() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetEventListener"
constexpr ::LiteNetLib::INetEventListener* GlobalNamespace::LiteNetLibConnectionManager::i___LiteNetLib__INetEventListener() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionManager() {}
