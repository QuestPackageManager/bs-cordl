#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlaceManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.get_lobbyActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLobbyController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c0f944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                               "get_lobbyActivated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.set_lobbyActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)(bool)>(
    &::GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c0f94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), "set_lobbyActivated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.ActivateMultiplayerLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3c0f958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                               "ActivateMultiplayerLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.DeactivateMultiplayerLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c0fa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                               "DeactivateMultiplayerLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(&::GlobalNamespace::MultiplayerLobbyController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c0faa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__innerCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__innerCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__innerCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerCircleRadius = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__minOuterCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__minOuterCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__minOuterCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minOuterCircleRadius = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager>& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__multiplayerLobbyAvatarManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__multiplayerLobbyAvatarManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__multiplayerLobbyAvatarManager(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyAvatarManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager>& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__multiplayerLobbyCenterStageManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyCenterStageManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager> const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__multiplayerLobbyCenterStageManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyCenterStageManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__multiplayerLobbyCenterStageManager(::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyCenterStageManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager>& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__multiplayerLobbyAvatarPlaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarPlaceManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager> const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__multiplayerLobbyAvatarPlaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarPlaceManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__multiplayerLobbyAvatarPlaceManager(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyAvatarPlaceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuEnvironmentManager>& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__menuEnvironmentManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentManager;
}
constexpr ::UnityW<::GlobalNamespace::MenuEnvironmentManager> const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__menuEnvironmentManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__menuEnvironmentManager(::UnityW<::GlobalNamespace::MenuEnvironmentManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuEnvironmentManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__optionalAvatarDataSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender* const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__optionalAvatarDataSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionalAvatarDataSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__lobbyActivated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyActivated_k__BackingField;
}
constexpr bool const& GlobalNamespace::MultiplayerLobbyController::__cordl_internal_get__lobbyActivated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyActivated_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__cordl_internal_set__lobbyActivated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyActivated_k__BackingField = value;
}
inline bool GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                             "get_lobbyActivated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), "set_lobbyActivated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                             "ActivateMultiplayerLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                                                                             "DeactivateMultiplayerLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyController* GlobalNamespace::MultiplayerLobbyController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLobbyController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyController::MultiplayerLobbyController() {}
