#pragma once
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_impl.hpp"
#include "BGNet/Core/Messages/zzzz__HandshakeMultipartMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::HandshakeMultipartMessage.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMultipartMessage*>* (*)()>(
    &::BGNet::Core::Messages::HandshakeMultipartMessage::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde016c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::HandshakeMultipartMessage.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::HandshakeMultipartMessage::*)()>(
    &::BGNet::Core::Messages::HandshakeMultipartMessage::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xde3d34;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::HandshakeMultipartMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::HandshakeMultipartMessage::*)()>(
    &::BGNet::Core::Messages::HandshakeMultipartMessage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xde3d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
constexpr BGNet::Core::Messages::HandshakeMultipartMessage::operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IHandshakeMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::HandshakeMultipartMessage::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::HandshakeMultipartMessage::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::HandshakeMultipartMessage::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMultipartMessage*>* BGNet::Core::Messages::HandshakeMultipartMessage::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMultipartMessage*>*, false>(nullptr, ___internal_method);
}
inline void BGNet::Core::Messages::HandshakeMultipartMessage::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::HandshakeMultipartMessage* BGNet::Core::Messages::HandshakeMultipartMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::HandshakeMultipartMessage*>());
}
inline void BGNet::Core::Messages::HandshakeMultipartMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::HandshakeMultipartMessage*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::HandshakeMultipartMessage::HandshakeMultipartMessage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
