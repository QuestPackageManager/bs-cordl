#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ClientHelloRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeClientToServerMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::ClientHelloRequest.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloRequest*>* (*)()>(
    &::BGNet::Core::Messages::ClientHelloRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xddda3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "get_pool",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientHelloRequest.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ClientHelloRequest* (
    ::BGNet::Core::Messages::ClientHelloRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::BGNet::Core::Messages::ClientHelloRequest::Init)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xddda7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientHelloRequest.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientHelloRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BGNet::Core::Messages::ClientHelloRequest::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde2bc8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientHelloRequest.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientHelloRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BGNet::Core::Messages::ClientHelloRequest::Deserialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xde2c08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientHelloRequest.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientHelloRequest::*)()>(&::BGNet::Core::Messages::ClientHelloRequest::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xde2c50;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::ClientHelloRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::ClientHelloRequest::*)()>(&::BGNet::Core::Messages::ClientHelloRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde2ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeClientToServerMessage"
constexpr BGNet::Core::Messages::ClientHelloRequest::operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
constexpr BGNet::Core::Messages::ClientHelloRequest::operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::ClientHelloRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::ClientHelloRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::ClientHelloRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::ClientHelloRequest::__get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::ClientHelloRequest::__get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void BGNet::Core::Messages::ClientHelloRequest::__set_random(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloRequest*>* BGNet::Core::Messages::ClientHelloRequest::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "get_pool",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloRequest*>*, false>(nullptr, ___internal_method);
}
inline ::BGNet::Core::Messages::ClientHelloRequest* BGNet::Core::Messages::ClientHelloRequest::Init(::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::ClientHelloRequest*, false>(this, ___internal_method, random);
}
inline void BGNet::Core::Messages::ClientHelloRequest::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void BGNet::Core::Messages::ClientHelloRequest::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void BGNet::Core::Messages::ClientHelloRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::ClientHelloRequest* BGNet::Core::Messages::ClientHelloRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::ClientHelloRequest*>());
}
inline void BGNet::Core::Messages::ClientHelloRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::ClientHelloRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::ClientHelloRequest::ClientHelloRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
