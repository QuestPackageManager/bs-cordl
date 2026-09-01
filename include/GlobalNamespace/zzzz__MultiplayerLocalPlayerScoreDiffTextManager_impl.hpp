#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLocalPlayerScoreDiffTextManager.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerScoreDiffTextManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59def48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59df03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Update)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x59df14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59df554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(),
                                                                                           { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59df5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText>& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__scoreDiffText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreDiffText;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__scoreDiffText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreDiffText;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__scoreDiffText(::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreDiffText = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreProvider = value;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData*& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__hudInitData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hudInitData;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData* const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__hudInitData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hudInitData;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__hudInitData(::GlobalNamespace::CoreGameHUDController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hudInitData = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__timeToNextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextUpdate;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__timeToNextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextUpdate;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__timeToNextUpdate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToNextUpdate = value;
}
constexpr ::System::Nullable_1<bool>& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__wasLocalPlayerLeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasLocalPlayerLeader;
}
constexpr ::System::Nullable_1<bool> const& GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_get__wasLocalPlayerLeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasLocalPlayerLeader;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__cordl_internal_set__wasLocalPlayerLeader(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasLocalPlayerLeader = value;
}
inline void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::HandleStateChanged(::GlobalNamespace::MultiplayerController_State newState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(),
                                                                                         { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager* GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::MultiplayerLocalPlayerScoreDiffTextManager() {}
