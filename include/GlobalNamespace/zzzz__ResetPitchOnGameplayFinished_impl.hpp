#pragma once
// IWYU pragma private; include "GlobalNamespace\ResetPitchOnGameplayFinished.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ResetPitchOnGameplayFinished_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)(
    ::GlobalNamespace::GameplayLevelSceneTransitionEvents*, ::GlobalNamespace::AudioManager*)>(&::GlobalNamespace::ResetPitchOnGameplayFinished::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58b9fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResetPitchOnGameplayFinished*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), ::i2c::type_of<::GlobalNamespace::AudioManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(&::GlobalNamespace::ResetPitchOnGameplayFinished::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58ba060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResetPitchOnGameplayFinished*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.HandleAnyGameplayLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(
    &::GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58ba0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResetPitchOnGameplayFinished*>(), { "HandleAnyGameplayLevelDidFinish", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__gameplayLevelSceneTransitionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents* const& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__gameplayLevelSceneTransitionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayLevelSceneTransitionEvents = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents,
                                                                 ::GlobalNamespace::AudioManager* audioManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResetPitchOnGameplayFinished*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), ::i2c::type_of<::GlobalNamespace::AudioManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayLevelSceneTransitionEvents, audioManager);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResetPitchOnGameplayFinished*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResetPitchOnGameplayFinished*>(), { "HandleAnyGameplayLevelDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ResetPitchOnGameplayFinished*
GlobalNamespace::ResetPitchOnGameplayFinished::New_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManager* audioManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ResetPitchOnGameplayFinished*>(gameplayLevelSceneTransitionEvents, audioManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ResetPitchOnGameplayFinished::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ResetPitchOnGameplayFinished::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResetPitchOnGameplayFinished::ResetPitchOnGameplayFinished() {}
