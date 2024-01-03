#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetConnectRequestPacket::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::LiteNetLib::Utils::NetDataReader*)>(&::LiteNetLib::NetConnectRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x220301c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.GetProtocolId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetConnectRequestPacket::GetProtocolId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21ffbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), "GetProtocolId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.FromData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetConnectRequestPacket* (*)(::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::NetConnectRequestPacket::FromData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x21ffcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), "FromData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.Make
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (*)(::LiteNetLib::Utils::NetDataWriter*, ::System::Net::SocketAddress*, int64_t)>(
    &::LiteNetLib::NetConnectRequestPacket::Make)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x22030a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), "Make", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& LiteNetLib::NetConnectRequestPacket::__get_ConnectionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionTime;
}
constexpr int64_t const& LiteNetLib::NetConnectRequestPacket::__get_ConnectionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionTime;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__set_ConnectionTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionTime = value;
}
constexpr uint8_t& LiteNetLib::NetConnectRequestPacket::__get_ConnectionNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr uint8_t const& LiteNetLib::NetConnectRequestPacket::__get_ConnectionNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__set_ConnectionNumber(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionNumber = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& LiteNetLib::NetConnectRequestPacket::__get_TargetAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetAddress;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& LiteNetLib::NetConnectRequestPacket::__get_TargetAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetAddress;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__set_TargetAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataReader*& LiteNetLib::NetConnectRequestPacket::__get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& LiteNetLib::NetConnectRequestPacket::__get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__set_Data(::LiteNetLib::Utils::NetDataReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::LiteNetLib::NetConnectRequestPacket* LiteNetLib::NetConnectRequestPacket::New_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> targetAddress,
                                                                                            ::LiteNetLib::Utils::NetDataReader* data) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::NetConnectRequestPacket*>(connectionTime, connectionNumber, targetAddress, data));
}
inline void LiteNetLib::NetConnectRequestPacket::_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> targetAddress, ::LiteNetLib::Utils::NetDataReader* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionTime, connectionNumber, targetAddress, data);
}
inline int32_t LiteNetLib::NetConnectRequestPacket::GetProtocolId(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), "GetProtocolId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, packet);
}
inline ::LiteNetLib::NetConnectRequestPacket* LiteNetLib::NetConnectRequestPacket::FromData(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), "FromData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetConnectRequestPacket*, false>(nullptr, ___internal_method, packet);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetConnectRequestPacket::Make(::LiteNetLib::Utils::NetDataWriter* connectData, ::System::Net::SocketAddress* addressBytes, int64_t connectId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket*>::get(), "Make", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*, false>(nullptr, ___internal_method, connectData, addressBytes, connectId);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetConnectRequestPacket::NetConnectRequestPacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
