#pragma once
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_impl.hpp"
#include "GameLift/zzzz__GameLiftMessageReceivedAcknowledge_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
//  Writing Method size for method: ::GameLift::GameLiftMessageReceivedAcknowledge.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMessageReceivedAcknowledge*>* (*)()>(
    &::GameLift::GameLiftMessageReceivedAcknowledge::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd8120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::GameLiftMessageReceivedAcknowledge.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::GameLiftMessageReceivedAcknowledge::*)()>(
    &::GameLift::GameLiftMessageReceivedAcknowledge::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd8160;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::GameLiftMessageReceivedAcknowledge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::GameLiftMessageReceivedAcknowledge::*)()>(&::GameLift::GameLiftMessageReceivedAcknowledge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd81b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GameLift::IGameLiftMessage"
constexpr GameLift::GameLiftMessageReceivedAcknowledge::operator ::GameLift::IGameLiftMessage*() noexcept {
  return static_cast<::GameLift::IGameLiftMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr GameLift::GameLiftMessageReceivedAcknowledge::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GameLift::GameLiftMessageReceivedAcknowledge::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GameLift::GameLiftMessageReceivedAcknowledge::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
inline ::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMessageReceivedAcknowledge*>* GameLift::GameLiftMessageReceivedAcknowledge::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(), "get_pool",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMessageReceivedAcknowledge*>*, false>(nullptr, ___internal_method);
}
inline void GameLift::GameLiftMessageReceivedAcknowledge::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GameLift::GameLiftMessageReceivedAcknowledge* GameLift::GameLiftMessageReceivedAcknowledge::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GameLift::GameLiftMessageReceivedAcknowledge*>());
}
inline void GameLift::GameLiftMessageReceivedAcknowledge::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::GameLiftMessageReceivedAcknowledge*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameLift::GameLiftMessageReceivedAcknowledge::GameLiftMessageReceivedAcknowledge() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
