#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerVerticalPlayerMovementManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerVerticalPlayerMovementManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3be3b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3be3be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x3be3cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)(
    ::GlobalNamespace::MultiplayerController_State)>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3be3bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "HandleStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerController_State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3be4490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__movementRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementRange;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__movementRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementRange;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__movementRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementRange = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__duelMovementRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duelMovementRange;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__duelMovementRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duelMovementRange;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__duelMovementRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duelMovementRange = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__maxMoveSpeedMetersPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMoveSpeedMetersPerSecond;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__maxMoveSpeedMetersPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMoveSpeedMetersPerSecond;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__maxMoveSpeedMetersPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxMoveSpeedMetersPerSecond = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__accelerationMetersPerSecondSquared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelerationMetersPerSecondSquared;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__accelerationMetersPerSecondSquared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelerationMetersPerSecondSquared;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__accelerationMetersPerSecondSquared(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accelerationMetersPerSecondSquared = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__decelerationMetersPerSecondSquared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decelerationMetersPerSecondSquared;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__decelerationMetersPerSecondSquared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decelerationMetersPerSecondSquared;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__decelerationMetersPerSecondSquared(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decelerationMetersPerSecondSquared = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__minScoreDifference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minScoreDifference;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__minScoreDifference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minScoreDifference;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__minScoreDifference(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minScoreDifference = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerPlayersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__reusablePlayersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusablePlayersList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__reusablePlayersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusablePlayersList;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__reusablePlayersList(
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusablePlayersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>*&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__currentSpeedsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSpeedsDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>* const&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__currentSpeedsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSpeedsDictionary;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__currentSpeedsDictionary(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSpeedsDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__lastFrameBaseScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameBaseScore;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_get__lastFrameBaseScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameBaseScore;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__cordl_internal_set__lastFrameBaseScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameBaseScore = value;
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "HandleStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerController_State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::MultiplayerVerticalPlayerMovementManager() {}
