#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyDataModelsManager_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelsManager.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyDataModelsManager::*)()>(&::GlobalNamespace::LobbyDataModelsManager::Activate)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2355f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager*>::get(), "Activate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelsManager.Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyDataModelsManager::*)()>(&::GlobalNamespace::LobbyDataModelsManager::Deactivate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x235623c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager*>::get(), "Deactivate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyDataModelsManager::*)()>(&::GlobalNamespace::LobbyDataModelsManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23564cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::LobbyDataModelsManager::__get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& GlobalNamespace::LobbyDataModelsManager::__get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::LobbyDataModelsManager::__set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyStateDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::LobbyDataModelsManager::__get__lobbyPlayersDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& GlobalNamespace::LobbyDataModelsManager::__get__lobbyPlayersDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::LobbyDataModelsManager::__set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayersDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::LobbyDataModelsManager::__get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& GlobalNamespace::LobbyDataModelsManager::__get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::LobbyDataModelsManager::__set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyGameStateController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& GlobalNamespace::LobbyDataModelsManager::__get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& GlobalNamespace::LobbyDataModelsManager::__get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::LobbyDataModelsManager::__set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::LobbyDataModelsManager::__get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& GlobalNamespace::LobbyDataModelsManager::__get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::LobbyDataModelsManager::__set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayerPermissionsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LobbyDataModelsManager::Activate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager*>::get(), "Activate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDataModelsManager::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager*>::get(), "Deactivate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyDataModelsManager* GlobalNamespace::LobbyDataModelsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LobbyDataModelsManager*>());
}
inline void GlobalNamespace::LobbyDataModelsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyDataModelsManager::LobbyDataModelsManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
