#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType::ConnectedPlayerManager_InternalMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType::ConnectedPlayerManager_InternalMessageType() {}
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::SyncTime{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerConnected{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerIdentity{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerLatencyUpdate{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerDisconnected{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerSortOrderUpdate{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::Party{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::MultiplayerSession{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::KickPlayer{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerStateUpdate{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::Ping{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::Pong{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::GameSpecificMessageType{ static_cast<uint8_t>(0xcu) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType::ConnectedPlayerManager_MessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType::ConnectedPlayerManager_MessageType() {}
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType GlobalNamespace::ConnectedPlayerManager_MessageType::Party{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType GlobalNamespace::ConnectedPlayerManager_MessageType::MultiplayerSession{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType GlobalNamespace::ConnectedPlayerManager_MessageType::GameSpecificMessageType{ static_cast<uint8_t>(0xcu) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType GlobalNamespace::ConnectedPlayerManager_MessageType::PlayerIdentity{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3231e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConnectedPlayerManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::ConnectedPlayerManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager::ConnectedPlayerManager() {}
