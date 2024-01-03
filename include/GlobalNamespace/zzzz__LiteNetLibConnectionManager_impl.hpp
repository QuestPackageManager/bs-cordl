#pragma once
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
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode::__LiteNetLibConnectionManager__NetworkMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode::__LiteNetLibConnectionManager__NetworkMode() {}
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode::Client{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode::Server{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState::__LiteNetLibConnectionManager__ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState::__LiteNetLibConnectionManager__ConnectionState() {}
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState::Unconnected{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState::Disconnecting{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe425d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
constexpr GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<
    ::GlobalNamespace::LiteNetLibConnectionManager*>*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>"
constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*
GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__LiteNetLibConnectionManager__() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager*>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IConnectionRequestHandler*& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_connectionRequestHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequestHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const&
GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_connectionRequestHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequestHandler;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionRequestHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_filterUnencryptedTraffic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterUnencryptedTraffic;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_filterUnencryptedTraffic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterUnencryptedTraffic;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_filterUnencryptedTraffic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filterUnencryptedTraffic = value;
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableUnconnectedMessages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUnconnectedMessages;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableUnconnectedMessages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUnconnectedMessages;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_enableUnconnectedMessages(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableUnconnectedMessages = value;
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableBackgroundSentry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBackgroundSentry;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableBackgroundSentry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBackgroundSentry;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_enableBackgroundSentry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableBackgroundSentry = value;
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableStatistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableStatistics;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableStatistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableStatistics;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_enableStatistics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableStatistics = value;
}
constexpr int32_t& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_disconnectTimeoutMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectTimeoutMs;
}
constexpr int32_t const& GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_disconnectTimeoutMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectTimeoutMs;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_disconnectTimeoutMs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectTimeoutMs = value;
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase* GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase*>());
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe425e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams* GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams*>());
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__StartServerParams::__LiteNetLibConnectionManager__StartServerParams() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe425f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams* GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams*>());
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__StartClientParams::__LiteNetLibConnectionManager__StartClientParams() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe42604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_endPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_endPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPoint;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__set_endPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserId;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserId;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__set_serverUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverUserName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserName;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverUserName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverUserName;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__set_serverUserName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverUserName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverIsConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverIsConnectionOwner;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverIsConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverIsConnectionOwner;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__set_serverIsConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverIsConnectionOwner = value;
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams* GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams*>());
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectToServerParams::__LiteNetLibConnectionManager__ConnectToServerParams() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4261c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                                 "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe42624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                                 "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4262c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                                 "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_endPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_endPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe42634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                                 "get_endPoint", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)(
    ::LiteNetLib::ConnectionRequest*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe42650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::Accept)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe42694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(), "Accept",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
constexpr ::LiteNetLib::ConnectionRequest*& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__request(::LiteNetLib::ConnectionRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(), "get_userId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_isConnectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                               "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_endPoint() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(),
                                               "get_endPoint", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*
GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::New_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>(request, userId, userName, isConnectionOwner));
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::_ctor(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, userId, userName, isConnectionOwner);
}
inline ::LiteNetLib::NetPeer* GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::Accept() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>::get(), "Accept",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest::__LiteNetLibConnectionManager__NetPeerConnectionRequest() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe426b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "get_userId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe426b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "get_userName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe426c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(),
                                                 "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)(
    ::LiteNetLib::NetPeer*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe426c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Send)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe4270c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "Send", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)(
    ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*)>(&::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe42794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "Equals", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)(::System::Object*)>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe427c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe428d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Disconnect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe428f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "Disconnect",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnection"
constexpr GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::operator ::GlobalNamespace::IConnection*() noexcept {
  return static_cast<::GlobalNamespace::IConnection*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnection"
constexpr ::GlobalNamespace::IConnection* GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::i___GlobalNamespace__IConnection() noexcept {
  return static_cast<::GlobalNamespace::IConnection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>"
constexpr GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::operator ::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*
GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::i___System__IEquatable_1___GlobalNamespace____LiteNetLibConnectionManager__NetPeerConnection__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr bool const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
constexpr ::LiteNetLib::NetPeer*& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get_netPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___netPeer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__get_netPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___netPeer;
}
constexpr void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__set_netPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___netPeer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "get_userId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "get_userName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::get_isConnectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(),
                                               "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*
GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::New_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>(netPeer, userId, userName, isConnectionOwner));
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::_ctor(::LiteNetLib::NetPeer* netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, netPeer, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "Send", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, deliveryMethod);
}
inline bool GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Equals(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::Disconnect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get(), "Disconnect",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection::__LiteNetLibConnectionManager__NetPeerConnection() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager____c::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe42978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager____c._get_hasConnectionOwner_b__70_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LiteNetLibConnectionManager____c::*)(
    ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*)>(&::GlobalNamespace::__LiteNetLibConnectionManager____c::_get_hasConnectionOwner_b__70_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe42980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get(), "<get_hasConnectionOwner>b__70_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LiteNetLibConnectionManager____c::setStaticF___9(::GlobalNamespace::__LiteNetLibConnectionManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LiteNetLibConnectionManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get>(
      std::forward<::GlobalNamespace::__LiteNetLibConnectionManager____c*>(value));
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager____c* GlobalNamespace::__LiteNetLibConnectionManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LiteNetLibConnectionManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get>();
}
inline void GlobalNamespace::__LiteNetLibConnectionManager____c::setStaticF___9__70_0(::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*, "<>9__70_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get>(
      std::forward<::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* GlobalNamespace::__LiteNetLibConnectionManager____c::getStaticF___9__70_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*, "<>9__70_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get>();
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager____c* GlobalNamespace::__LiteNetLibConnectionManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LiteNetLibConnectionManager____c*>());
}
inline void GlobalNamespace::__LiteNetLibConnectionManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LiteNetLibConnectionManager____c::_get_hasConnectionOwner_b__70_0(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager____c*>::get(), "<get_hasConnectionOwner>b__70_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager____c::__LiteNetLibConnectionManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::MoveNext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xe42998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe42d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LiteNetLibConnectionManager* __4__this,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126() {}
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::*)()>(
    &::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0xe42d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe430e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LiteNetLibConnectionManager* __4__this,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127() {}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3f5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onInitializedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3f694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onInitializedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3f730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3f7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3f868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3f918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3f9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fa78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::LiteNetLibConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onReceivedDataEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fe98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onReceivedDataEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onReceiveUnconnectedDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onReceiveUnconnectedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3ff48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onReceiveUnconnectedDataEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onReceiveUnconnectedDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceiveUnconnectedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3fff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onReceiveUnconnectedDataEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onStatisticsUpdatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe400a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onStatisticsUpdatedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onStatisticsUpdatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe40144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onStatisticsUpdatedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe401e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe401e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe401f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isConnected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe40200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isConnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isDisconnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe40210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isDisconnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe40220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_hasConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_hasConnectionOwner)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xe40230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_hasConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe4033c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isServer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe4034c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isClient", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe4035c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_isDisposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_connectionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe4036c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_connectionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_connectionRequestHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectionRequestHandler* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_connectionRequestHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe403b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_connectionRequestHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_port
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_port)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe403bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_port", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_unconnectedPacketHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_unconnectedPacketHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe403d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_unconnectedPacketHeader", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_encryptionLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketEncryptionLayer* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::get_encryptionLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe403e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "get_encryptionLayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe403e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe404f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*)>(&::GlobalNamespace::LiteNetLibConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xe405a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe407a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe40848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendUnconnectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe40930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "SendUnconnectedMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe40958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "PollUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ConnectToEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::StringW, ::StringW, ::System::Net::IPEndPoint*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::ConnectToEndPoint)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe40d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ConnectToEndPoint", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe41014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisposeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xe41078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "DisposeAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisposeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::DisposeInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe41038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "DisposeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe411f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "Disconnect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisconnectInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::GlobalNamespace::DisconnectedReason, ::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe411fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "DisconnectInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryStartNetManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(int32_t, bool)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::TryStartNetManager)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe412c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "TryStartNetManager", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.StartBackgroundSentry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::StartBackgroundSentry)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xe41358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "StartBackgroundSentry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.CheckSentryState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::CheckSentryState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe409f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "CheckSentryState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.UpdateStatistics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::UpdateStatistics)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xe40a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "UpdateStatistics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::LiteNetLibConnectionManager::*)(int32_t)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe415b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetConnection",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.IsConnectedToUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::IsConnectedToUser)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe41610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "IsConnectedToUser",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.HasConnectionToEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::HasConnectionToEndPoint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe416c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "HasConnectionToEndPoint",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.HasPendingConnectionToEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::HasPendingConnectionToEndPoint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe41778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "HasPendingConnectionToEndPoint",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnPeerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xe41830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe41a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe41a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnConnectionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::ConnectionRequest*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xe41a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnPeerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe41ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe41f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(
        &::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe420cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                 "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* (
    ::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*)>(&::GlobalNamespace::LiteNetLibConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe41ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetConnection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.AcceptAllPendingRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::AcceptAllPendingRequests)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe42108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "AcceptAllPendingRequests", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::ConnectionRequest*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::TryAccept)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe41bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "TryAccept", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.CreatePendingConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::StringW, ::StringW, bool)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::CreatePendingConnection)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xe40ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "CreatePendingConnection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.RemoveConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::RemoveConnection)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xe41d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "RemoveConnection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryDisconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::TryDisconnect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe41c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "TryDisconnect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToDisconnectedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::LiteNetLib::DisconnectReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::ToDisconnectedReason)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe421f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ToDisconnectedReason", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToConnectionFailedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectionFailedReason (::GlobalNamespace::LiteNetLibConnectionManager::*)(
    ::LiteNetLib::DisconnectReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::ToConnectionFailedReason)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe42228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ToConnectionFailedReason",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetConnectionMessage)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe40dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "GetConnectionMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.BackgroundDisconnectSentry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::BackgroundDisconnectSentry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe4223c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "BackgroundDisconnectSentry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.BackgroundShutdownSentry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::BackgroundShutdownSentry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe42308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "BackgroundShutdownSentry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToLiteNetDeliveryMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::DeliveryMethod (*)(::BGNet::Core::DeliveryMethod)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::ToLiteNetDeliveryMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe40830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ToLiteNetDeliveryMethod",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.FromLiteNetDeliveryMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::DeliveryMethod (*)(::LiteNetLib::DeliveryMethod)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::FromLiteNetDeliveryMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe420bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "FromLiteNetDeliveryMethod",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe423d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "Log", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe42460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LogError",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetLogFormatConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatConnection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe424ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetLogFormatConnection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetLogFormatUserInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::Net::IPEndPoint*)>(
    &::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatUserInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe4255c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetLogFormatUserInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._DisposeAsync_b__98_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(
    &::GlobalNamespace::LiteNetLibConnectionManager::_DisposeAsync_b__98_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe425b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                               "<DisposeAsync>b__98_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
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
/// @brief Convert operator to "::LiteNetLib::INetEventListener"
constexpr GlobalNamespace::LiteNetLibConnectionManager::operator ::LiteNetLib::INetEventListener*() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetEventListener"
constexpr ::LiteNetLib::INetEventListener* GlobalNamespace::LiteNetLibConnectionManager::i___LiteNetLib__INetEventListener() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::LiteNetLibConnectionManager::__get__unconnectedPacketHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unconnectedPacketHeader;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__unconnectedPacketHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unconnectedPacketHeader;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__unconnectedPacketHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unconnectedPacketHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetManager*& GlobalNamespace::LiteNetLibConnectionManager::__get__netManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netManager;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__netManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netManager;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__netManager(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PacketEncryptionLayer*& GlobalNamespace::LiteNetLibConnectionManager::__get__encryptionLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionLayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PacketEncryptionLayer*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__encryptionLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionLayer;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__encryptionLayer(::GlobalNamespace::PacketEncryptionLayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encryptionLayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::LiteNetLibConnectionManager::__get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskUtility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*& GlobalNamespace::LiteNetLibConnectionManager::__get__connections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connections;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get__connections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connections;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*& GlobalNamespace::LiteNetLibConnectionManager::__get__pendingConnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingConnections;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get__pendingConnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingConnections;
}
constexpr void
GlobalNamespace::LiteNetLibConnectionManager::__set__pendingConnections(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingConnections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>*& GlobalNamespace::LiteNetLibConnectionManager::__get__pendingRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingRequests;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get__pendingRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingRequests;
}
constexpr void
GlobalNamespace::LiteNetLibConnectionManager::__set__pendingRequests(::System::Collections::Generic::List_1<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnectionRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*& GlobalNamespace::LiteNetLibConnectionManager::__get__pendingReconnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingReconnections;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get__pendingReconnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingReconnections;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__pendingReconnections(::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingReconnections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LiteNetLibConnectionManager::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::LiteNetLibConnectionManager::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectionRequestHandler*& GlobalNamespace::LiteNetLibConnectionManager::__get__connectionRequestHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__connectionRequestHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionRequestHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode& GlobalNamespace::LiteNetLibConnectionManager::__get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode const& GlobalNamespace::LiteNetLibConnectionManager::__get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__mode(::GlobalNamespace::__LiteNetLibConnectionManager__NetworkMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mode = value;
}
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState& GlobalNamespace::LiteNetLibConnectionManager::__get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState const& GlobalNamespace::LiteNetLibConnectionManager::__get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__connectionState(::GlobalNamespace::__LiteNetLibConnectionManager__ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LiteNetLibConnectionManager::__get__backgroundSentryDisconnectCts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryDisconnectCts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__backgroundSentryDisconnectCts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryDisconnectCts;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundSentryDisconnectCts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LiteNetLibConnectionManager::__get__backgroundSentryShutdownCts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryShutdownCts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::LiteNetLibConnectionManager::__get__backgroundSentryShutdownCts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSentryShutdownCts;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__backgroundSentryShutdownCts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundSentryShutdownCts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager::__get__sentryDisconnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryDisconnected;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager::__get__sentryDisconnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryDisconnected;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__sentryDisconnected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentryDisconnected = value;
}
constexpr bool& GlobalNamespace::LiteNetLibConnectionManager::__get__sentryShutdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryShutdown;
}
constexpr bool const& GlobalNamespace::LiteNetLibConnectionManager::__get__sentryShutdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentryShutdown;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__sentryShutdown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentryShutdown = value;
}
constexpr int64_t& GlobalNamespace::LiteNetLibConnectionManager::__get__lastPollUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollUpdateTime;
}
constexpr int64_t const& GlobalNamespace::LiteNetLibConnectionManager::__get__lastPollUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollUpdateTime;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__lastPollUpdateTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPollUpdateTime = value;
}
constexpr int64_t& GlobalNamespace::LiteNetLibConnectionManager::__get__lastStatisticsUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastStatisticsUpdateTime;
}
constexpr int64_t const& GlobalNamespace::LiteNetLibConnectionManager::__get__lastStatisticsUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastStatisticsUpdateTime;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set__lastStatisticsUpdateTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastStatisticsUpdateTime = value;
}
constexpr ::System::Action*& GlobalNamespace::LiteNetLibConnectionManager::__get_onInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LiteNetLibConnectionManager::__get_onInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onInitializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onInitializedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::LiteNetLibConnectionManager::__get_onDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& GlobalNamespace::LiteNetLibConnectionManager::__get_onDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectionFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectionConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectionDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*&
GlobalNamespace::LiteNetLibConnectionManager::__get_onReceivedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get_onReceivedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onReceivedDataEvent(
    ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onReceivedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*& GlobalNamespace::LiteNetLibConnectionManager::__get_onReceiveUnconnectedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceiveUnconnectedDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get_onReceiveUnconnectedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceiveUnconnectedDataEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onReceiveUnconnectedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*& GlobalNamespace::LiteNetLibConnectionManager::__get_onStatisticsUpdatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onStatisticsUpdatedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*> const&
GlobalNamespace::LiteNetLibConnectionManager::__get_onStatisticsUpdatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onStatisticsUpdatedEvent;
}
constexpr void GlobalNamespace::LiteNetLibConnectionManager::__set_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onStatisticsUpdatedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onInitializedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onInitializedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onDisconnectedEvent", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onDisconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LiteNetLibConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onReceivedDataEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onReceivedDataEvent(
    ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onReceivedDataEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onReceiveUnconnectedDataEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onReceiveUnconnectedDataEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::add_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "add_onStatisticsUpdatedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::remove_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "remove_onStatisticsUpdatedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isConnected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isConnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isDisconnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_hasConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_hasConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isServer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isClient", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::get_isDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_isDisposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LiteNetLibConnectionManager::get_connectionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_connectionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::LiteNetLibConnectionManager::get_connectionRequestHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_connectionRequestHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionRequestHandler*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LiteNetLibConnectionManager::get_port() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "get_port",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::LiteNetLibConnectionManager::get_unconnectedPacketHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_unconnectedPacketHeader", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PacketEncryptionLayer* GlobalNamespace::LiteNetLibConnectionManager::get_encryptionLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "get_encryptionLayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketEncryptionLayer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager* GlobalNamespace::LiteNetLibConnectionManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LiteNetLibConnectionManager*>());
}
inline void GlobalNamespace::LiteNetLibConnectionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LiteNetLibConnectionManager* GlobalNamespace::LiteNetLibConnectionManager::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LiteNetLibConnectionManager*>(timeProvider, taskUtility));
}
inline void GlobalNamespace::LiteNetLibConnectionManager::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, taskUtility);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod,
                                                                    ::GlobalNamespace::IConnection* excludingConnection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, deliveryMethod, excludingConnection);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "SendUnconnectedMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, writer);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "PollUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::LiteNetLibConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "Init",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionInitParams_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, initParams);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW remoteUserId,
                                                                            ::StringW remoteUserName, bool remoteUserIsConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ConnectToEndPoint", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, userName, remoteEndPoint, remoteUserId, remoteUserName, remoteUserIsConnectionOwner);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LiteNetLibConnectionManager::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "DisposeAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::DisposeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "DisposeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
inline void GlobalNamespace::LiteNetLibConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "Disconnect", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
/// @param connectionFailedReason: ::GlobalNamespace::ConnectionFailedReason (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::LiteNetLibConnectionManager::DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason,
                                                                             ::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "DisconnectInternal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason, connectionFailedReason);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::TryStartNetManager(int32_t port, bool enableBackgroundSentry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "TryStartNetManager", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, port, enableBackgroundSentry);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::StartBackgroundSentry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "StartBackgroundSentry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::CheckSentryState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "CheckSentryState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::UpdateStatistics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "UpdateStatistics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::LiteNetLibConnectionManager::GetConnection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetConnection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*, false>(this, ___internal_method, index);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::IsConnectedToUser(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "IsConnectedToUser",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, userId);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::HasConnectionToEndPoint(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "HasConnectionToEndPoint",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endPoint);
}
inline bool GlobalNamespace::LiteNetLibConnectionManager::HasPendingConnectionToEndPoint(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "HasPendingConnectionToEndPoint",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endPoint);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketError);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latencyMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latencyMs);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                                        ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                                   ::LiteNetLib::UnconnectedMessageType messageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                               "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline ::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* GlobalNamespace::LiteNetLibConnectionManager::GetConnection(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetConnection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*, false>(this, ___internal_method, peer);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::AcceptAllPendingRequests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "AcceptAllPendingRequests", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::TryAccept(::LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "TryAccept", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::CreatePendingConnection(::LiteNetLib::NetPeer* peer, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "CreatePendingConnection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::RemoveConnection(::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::DisconnectReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "RemoveConnection", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, netPeer, reason);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::TryDisconnect(::LiteNetLib::DisconnectReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "TryDisconnect", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::LiteNetLibConnectionManager::ToDisconnectedReason(::LiteNetLib::DisconnectReason disconnectReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ToDisconnectedReason", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason, false>(this, ___internal_method, disconnectReason);
}
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::LiteNetLibConnectionManager::ToConnectionFailedReason(::LiteNetLib::DisconnectReason disconnectReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ToConnectionFailedReason",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason, false>(this, ___internal_method, disconnectReason);
}
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::LiteNetLibConnectionManager::GetConnectionMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "GetConnectionMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LiteNetLibConnectionManager::BackgroundDisconnectSentry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "BackgroundDisconnectSentry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LiteNetLibConnectionManager::BackgroundShutdownSentry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "BackgroundShutdownSentry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::LiteNetLib::DeliveryMethod GlobalNamespace::LiteNetLibConnectionManager::ToLiteNetDeliveryMethod(::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "ToLiteNetDeliveryMethod",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::DeliveryMethod, false>(nullptr, ___internal_method, deliveryMethod);
}
inline ::BGNet::Core::DeliveryMethod GlobalNamespace::LiteNetLibConnectionManager::FromLiteNetDeliveryMethod(::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "FromLiteNetDeliveryMethod",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::DeliveryMethod, false>(nullptr, ___internal_method, deliveryMethod);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::Log(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "Log", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::LogError(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "LogError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatConnection(::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection* netPeerConnection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetLogFormatConnection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LiteNetLibConnectionManager__NetPeerConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, netPeerConnection);
}
inline ::StringW GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatUserInfo(::StringW userName, ::StringW userId, ::System::Net::IPEndPoint* ipEndPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(), "GetLogFormatUserInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, userName, userId, ipEndPoint);
}
inline void GlobalNamespace::LiteNetLibConnectionManager::_DisposeAsync_b__98_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager*>::get(),
                                                                             "<DisposeAsync>b__98_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
