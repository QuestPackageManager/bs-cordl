#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistentAudioNoiseController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentAudioNoiseController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupData_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PersistentAudioNoiseController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentAudioNoiseController::*)()>(&::GlobalNamespace::PersistentAudioNoiseController::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58bbb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistentAudioNoiseController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentAudioNoiseController::*)()>(&::GlobalNamespace::PersistentAudioNoiseController::OnDestroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58bbc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistentAudioNoiseController.HandleTransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentAudioNoiseController::*)(::GlobalNamespace::GameScenesManager_SceneTransitionType,
                                                                                                                   ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*)>(
    &::GlobalNamespace::PersistentAudioNoiseController::HandleTransitionDidFinish)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58bbd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(),
                                                             { "HandleTransitionDidFinish",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistentAudioNoiseController.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentAudioNoiseController::*)()>(&::GlobalNamespace::PersistentAudioNoiseController::OnValidate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58bbd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistentAudioNoiseController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentAudioNoiseController::*)()>(&::GlobalNamespace::PersistentAudioNoiseController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bbe70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*& GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_get__shaderWarmupScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* const& GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_get__shaderWarmupScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupScenesTransitionSetupData;
}
constexpr void GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_set__shaderWarmupScenesTransitionSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderWarmupScenesTransitionSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::PersistentAudioNoiseController::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
inline void GlobalNamespace::PersistentAudioNoiseController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PersistentAudioNoiseController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PersistentAudioNoiseController::HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType,
                                                                                       ::GlobalNamespace::ScenesTransitionSetupData* transitionSetupData, ::Zenject::DiContainer* diContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(),
                                                           { "HandleTransitionDidFinish",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                               ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType, transitionSetupData, diContainer);
}
inline void GlobalNamespace::PersistentAudioNoiseController::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PersistentAudioNoiseController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PersistentAudioNoiseController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PersistentAudioNoiseController* GlobalNamespace::PersistentAudioNoiseController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PersistentAudioNoiseController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PersistentAudioNoiseController::PersistentAudioNoiseController() {}
