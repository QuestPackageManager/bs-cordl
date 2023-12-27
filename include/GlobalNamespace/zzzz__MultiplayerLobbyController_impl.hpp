#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlaceManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.get_lobbyActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLobbyController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a736c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                               "get_lobbyActivated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.set_lobbyActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)(bool)>(
    &::GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22a7374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), "set_lobbyActivated",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.ActivateMultiplayerLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22a7380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                               "ActivateMultiplayerLobby", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.DeactivateMultiplayerLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a744c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                               "DeactivateMultiplayerLobby", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(&::GlobalNamespace::MultiplayerLobbyController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22a74d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerLobbyController::__get__innerCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____innerCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyController::__get__innerCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____innerCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__innerCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____innerCircleRadius = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyController::__get__minOuterCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minOuterCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyController::__get__minOuterCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minOuterCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__minOuterCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minOuterCircleRadius = value;
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarManager*& GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyAvatarManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarManager*> const& GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyAvatarManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyAvatarManager(::GlobalNamespace::MultiplayerLobbyAvatarManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyAvatarManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLobbyCenterStageManager*& GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyCenterStageManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyCenterStageManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyCenterStageManager*> const&
GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyCenterStageManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyCenterStageManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyCenterStageManager(::GlobalNamespace::MultiplayerLobbyCenterStageManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyCenterStageManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*& GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarPlaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyAvatarPlaceManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*> const&
GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarPlaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyAvatarPlaceManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyAvatarPlaceManager(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyAvatarPlaceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuEnvironmentManager*& GlobalNamespace::MultiplayerLobbyController::__get__menuEnvironmentManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____menuEnvironmentManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuEnvironmentManager*> const& GlobalNamespace::MultiplayerLobbyController::__get__menuEnvironmentManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____menuEnvironmentManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__menuEnvironmentManager(::GlobalNamespace::MenuEnvironmentManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuEnvironmentManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::MultiplayerLobbyController::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::MultiplayerLobbyController::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& GlobalNamespace::MultiplayerLobbyController::__get__optionalAvatarDataSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> const& GlobalNamespace::MultiplayerLobbyController::__get__optionalAvatarDataSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionalAvatarDataSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerLobbyController::__get__lobbyActivated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyActivated_k__BackingField;
}
constexpr bool const& GlobalNamespace::MultiplayerLobbyController::__get__lobbyActivated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyActivated_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__lobbyActivated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lobbyActivated_k__BackingField = value;
}
inline bool GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                             "get_lobbyActivated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), "set_lobbyActivated",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                             "ActivateMultiplayerLobby", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                             "DeactivateMultiplayerLobby", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyController* GlobalNamespace::MultiplayerLobbyController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyController*>());
}
inline void GlobalNamespace::MultiplayerLobbyController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyController::MultiplayerLobbyController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
