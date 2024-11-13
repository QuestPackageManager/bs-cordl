#pragma once
// IWYU pragma private; include "LiteNetLib/NetConnectAcceptPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetConnectAcceptPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetConnectAcceptPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetConnectAcceptPacket::*)(int64_t, uint8_t, bool)>(
    &::LiteNetLib::NetConnectAcceptPacket::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a600d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectAcceptPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectAcceptPacket.FromData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetConnectAcceptPacket* (*)(::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::NetConnectAcceptPacket::FromData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3a5d054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectAcceptPacket*>::get(), "FromData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectAcceptPacket.Make
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (*)(int64_t, uint8_t, bool)>(&::LiteNetLib::NetConnectAcceptPacket::Make)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3a60110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectAcceptPacket*>::get(), "Make", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr int64_t const& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__cordl_internal_set_ConnectionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionId = value;
}
constexpr uint8_t& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr uint8_t const& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__cordl_internal_set_ConnectionNumber(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionNumber = value;
}
constexpr bool& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_IsReusedPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsReusedPeer;
}
constexpr bool const& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_IsReusedPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsReusedPeer;
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__cordl_internal_set_IsReusedPeer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsReusedPeer = value;
}
inline ::LiteNetLib::NetConnectAcceptPacket* LiteNetLib::NetConnectAcceptPacket::New_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetConnectAcceptPacket*>(connectionId, connectionNumber, isReusedPeer));
}
inline void LiteNetLib::NetConnectAcceptPacket::_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectAcceptPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionId, connectionNumber, isReusedPeer);
}
inline ::LiteNetLib::NetConnectAcceptPacket* LiteNetLib::NetConnectAcceptPacket::FromData(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectAcceptPacket*>::get(), "FromData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetConnectAcceptPacket*, false>(nullptr, ___internal_method, packet);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetConnectAcceptPacket::Make(int64_t connectId, uint8_t connectNum, bool reusedPeer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectAcceptPacket*>::get(), "Make", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*, false>(nullptr, ___internal_method, connectId, connectNum, reusedPeer);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetConnectAcceptPacket::NetConnectAcceptPacket() {}
