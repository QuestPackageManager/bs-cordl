#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionAudioFadeController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneTransitionAudioFadeController_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)()>(&::GlobalNamespace::SceneTransitionAudioFadeController::Initialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58bc2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)()>(&::GlobalNamespace::SceneTransitionAudioFadeController::Dispose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58bc3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.HandleTransitionDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)(::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t)>(
    &::GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidStart)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bc524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(),
                                                { "HandleTransitionDidStart", {}, { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.HandleTransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)(::GlobalNamespace::GameScenesManager_SceneTransitionType,
                                                                                                                       ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*)>(
    &::GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidFinish)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58bc55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(),
                                                             { "HandleTransitionDidFinish",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)()>(&::GlobalNamespace::SceneTransitionAudioFadeController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bc590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::SceneTransitionAudioFadeController::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::SceneTransitionAudioFadeController::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::SceneTransitionAudioFadeController::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::SceneTransitionAudioFadeController::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::SceneTransitionAudioFadeController::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::SceneTransitionAudioFadeController::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidStart(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(),
                                              { "HandleTransitionDidStart", {}, { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType, duration);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType,
                                                                                           ::GlobalNamespace::ScenesTransitionSetupData* transitionSetupData, ::Zenject::DiContainer* diContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(),
                                                           { "HandleTransitionDidFinish",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                               ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType, transitionSetupData, diContainer);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionAudioFadeController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SceneTransitionAudioFadeController* GlobalNamespace::SceneTransitionAudioFadeController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SceneTransitionAudioFadeController*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::SceneTransitionAudioFadeController::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::SceneTransitionAudioFadeController::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SceneTransitionAudioFadeController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SceneTransitionAudioFadeController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneTransitionAudioFadeController::SceneTransitionAudioFadeController() {}
