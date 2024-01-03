#pragma once
#include "LiteNetLib/zzzz__DeliveryMethod_impl.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_impl.hpp"
#include "LiteNetLib/zzzz__NetEvent_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketError_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::__NetEvent__EType::__NetEvent__EType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NetEvent__EType::__NetEvent__EType() {}
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::Connect{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::Disconnect{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::Receive{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::ReceiveUnconnected{ static_cast<int32_t>(0x3) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::Error{ static_cast<int32_t>(0x4) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::ConnectionLatencyUpdated{ static_cast<int32_t>(0x5) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::Broadcast{ static_cast<int32_t>(0x6) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::ConnectionRequest{ static_cast<int32_t>(0x7) };
constexpr ::LiteNetLib::__NetEvent__EType LiteNetLib::__NetEvent__EType::MessageDelivered{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::LiteNetLib::NetEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetEvent::*)(::LiteNetLib::NetManager*)>(&::LiteNetLib::NetEvent::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21fc760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetEvent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get() })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::__NetEvent__EType& LiteNetLib::NetEvent::__get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::LiteNetLib::__NetEvent__EType const& LiteNetLib::NetEvent::__get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void LiteNetLib::NetEvent::__set_Type(::LiteNetLib::__NetEvent__EType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::NetEvent::__get_Peer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Peer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& LiteNetLib::NetEvent::__get_Peer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Peer;
}
constexpr void LiteNetLib::NetEvent::__set_Peer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Peer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::NetEvent::__get_RemoteEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoteEndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::NetEvent::__get_RemoteEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoteEndPoint;
}
constexpr void LiteNetLib::NetEvent::__set_RemoteEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RemoteEndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& LiteNetLib::NetEvent::__get_UserData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& LiteNetLib::NetEvent::__get_UserData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserData;
}
constexpr void LiteNetLib::NetEvent::__set_UserData(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetEvent::__get_Latency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Latency;
}
constexpr int32_t const& LiteNetLib::NetEvent::__get_Latency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Latency;
}
constexpr void LiteNetLib::NetEvent::__set_Latency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Latency = value;
}
constexpr ::System::Net::Sockets::SocketError& LiteNetLib::NetEvent::__get_ErrorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorCode;
}
constexpr ::System::Net::Sockets::SocketError const& LiteNetLib::NetEvent::__get_ErrorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorCode;
}
constexpr void LiteNetLib::NetEvent::__set_ErrorCode(::System::Net::Sockets::SocketError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ErrorCode = value;
}
constexpr ::LiteNetLib::DisconnectReason& LiteNetLib::NetEvent::__get_DisconnectReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectReason;
}
constexpr ::LiteNetLib::DisconnectReason const& LiteNetLib::NetEvent::__get_DisconnectReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectReason;
}
constexpr void LiteNetLib::NetEvent::__set_DisconnectReason(::LiteNetLib::DisconnectReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisconnectReason = value;
}
constexpr ::LiteNetLib::ConnectionRequest*& LiteNetLib::NetEvent::__get_ConnectionRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionRequest;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> const& LiteNetLib::NetEvent::__get_ConnectionRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionRequest;
}
constexpr void LiteNetLib::NetEvent::__set_ConnectionRequest(::LiteNetLib::ConnectionRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::DeliveryMethod& LiteNetLib::NetEvent::__get_DeliveryMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeliveryMethod;
}
constexpr ::LiteNetLib::DeliveryMethod const& LiteNetLib::NetEvent::__get_DeliveryMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeliveryMethod;
}
constexpr void LiteNetLib::NetEvent::__set_DeliveryMethod(::LiteNetLib::DeliveryMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DeliveryMethod = value;
}
constexpr ::LiteNetLib::NetPacketReader*& LiteNetLib::NetEvent::__get_DataReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataReader;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketReader*> const& LiteNetLib::NetEvent::__get_DataReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataReader;
}
constexpr void LiteNetLib::NetEvent::__set_DataReader(::LiteNetLib::NetPacketReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DataReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::LiteNetLib::NetEvent* LiteNetLib::NetEvent::New_ctor(::LiteNetLib::NetManager* manager) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::NetEvent*>(manager));
}
inline void LiteNetLib::NetEvent::_ctor(::LiteNetLib::NetManager* manager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetEvent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetEvent::NetEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
