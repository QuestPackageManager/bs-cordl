#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionAudioFadeController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneTransitionAudioFadeController_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)()>(
    &::GlobalNamespace::SceneTransitionAudioFadeController::Initialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x570eefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)()>(
    &::GlobalNamespace::SceneTransitionAudioFadeController::Dispose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x570f028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.HandleTransitionDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)(
    ::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t)>(&::GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidStart)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x570f154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(), "HandleTransitionDidStart", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController.HandleTransitionDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)(
    ::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(
    &::GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidFinish)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x570f188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(), "HandleTransitionDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionAudioFadeController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneTransitionAudioFadeController::*)()>(
    &::GlobalNamespace::SceneTransitionAudioFadeController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570f1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidStart(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(), "HandleTransitionDidStart", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType, duration);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType,
                                                                                           ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo, ::Zenject::DiContainer* diContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(), "HandleTransitionDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType, transitionSetupDataSo, diContainer);
}
inline void GlobalNamespace::SceneTransitionAudioFadeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionAudioFadeController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SceneTransitionAudioFadeController* GlobalNamespace::SceneTransitionAudioFadeController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SceneTransitionAudioFadeController*>());
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
