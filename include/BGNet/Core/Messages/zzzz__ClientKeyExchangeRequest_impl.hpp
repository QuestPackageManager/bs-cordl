#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ClientKeyExchangeRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeClientToServerMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::ClientKeyExchangeRequest.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>* (*)()>(
    &::BGNet::Core::Messages::ClientKeyExchangeRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdddbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientKeyExchangeRequest.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ClientKeyExchangeRequest* (
    ::BGNet::Core::Messages::ClientKeyExchangeRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::BGNet::Core::Messages::ClientKeyExchangeRequest::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdddc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientKeyExchangeRequest.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientKeyExchangeRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BGNet::Core::Messages::ClientKeyExchangeRequest::Serialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xde3b24;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientKeyExchangeRequest.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientKeyExchangeRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BGNet::Core::Messages::ClientKeyExchangeRequest::Deserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xde3b58;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientKeyExchangeRequest.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientKeyExchangeRequest::*)()>(
    &::BGNet::Core::Messages::ClientKeyExchangeRequest::Release)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde3b8c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientKeyExchangeRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientKeyExchangeRequest::*)()>(
    &::BGNet::Core::Messages::ClientKeyExchangeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde3bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeClientToServerMessage"
constexpr BGNet::Core::Messages::ClientKeyExchangeRequest::operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
constexpr BGNet::Core::Messages::ClientKeyExchangeRequest::operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::ClientKeyExchangeRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::ClientKeyExchangeRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::ClientKeyExchangeRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& BGNet::Core::Messages::ClientKeyExchangeRequest::__get_clientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& BGNet::Core::Messages::ClientKeyExchangeRequest::__get_clientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr void BGNet::Core::Messages::ClientKeyExchangeRequest::__set_clientPublicKey(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>* BGNet::Core::Messages::ClientKeyExchangeRequest::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>*, false>(nullptr, ___internal_method);
}
inline ::BGNet::Core::Messages::ClientKeyExchangeRequest* BGNet::Core::Messages::ClientKeyExchangeRequest::Init(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::ClientKeyExchangeRequest*, false>(this, ___internal_method, clientPublicKey);
}
inline void BGNet::Core::Messages::ClientKeyExchangeRequest::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void BGNet::Core::Messages::ClientKeyExchangeRequest::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void BGNet::Core::Messages::ClientKeyExchangeRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::ClientKeyExchangeRequest* BGNet::Core::Messages::ClientKeyExchangeRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::ClientKeyExchangeRequest*>());
}
inline void BGNet::Core::Messages::ClientKeyExchangeRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientKeyExchangeRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::ClientKeyExchangeRequest::ClientKeyExchangeRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
