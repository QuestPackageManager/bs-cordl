#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderingParamsSetupApplicator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RenderingParamsSetupApplicator_def.hpp"
#include "GlobalNamespace/zzzz__IRenderingParamsApplicator_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)(::GlobalNamespace::SceneType, ::StringW)>(
    &::GlobalNamespace::RenderingParamsSetupApplicator::Apply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3acdfd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator.ApplyMainSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)()>(
    &::GlobalNamespace::RenderingParamsSetupApplicator::ApplyMainSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3ace01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(),
                                                                               "ApplyMainSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator.ApplyGraphicsSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)(::GlobalNamespace::SceneType, ::StringW)>(
    &::GlobalNamespace::RenderingParamsSetupApplicator::ApplyGraphicsSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3acdfec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(), "ApplyGraphicsSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)()>(
    &::GlobalNamespace::RenderingParamsSetupApplicator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ace13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRenderingParamsApplicator"
constexpr GlobalNamespace::RenderingParamsSetupApplicator::operator ::GlobalNamespace::IRenderingParamsApplicator*() noexcept {
  return static_cast<::GlobalNamespace::IRenderingParamsApplicator*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRenderingParamsApplicator"
constexpr ::GlobalNamespace::IRenderingParamsApplicator* GlobalNamespace::RenderingParamsSetupApplicator::i___GlobalNamespace__IRenderingParamsApplicator() noexcept {
  return static_cast<::GlobalNamespace::IRenderingParamsApplicator*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsApplicator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneType, optionalEnvironmentSerializedName);
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::ApplyMainSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(),
                                                                             "ApplyMainSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::ApplyGraphicsSettings(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(), "ApplyGraphicsSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneType, optionalEnvironmentSerializedName);
}
inline ::GlobalNamespace::RenderingParamsSetupApplicator* GlobalNamespace::RenderingParamsSetupApplicator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RenderingParamsSetupApplicator*>());
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderingParamsSetupApplicator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderingParamsSetupApplicator::RenderingParamsSetupApplicator() {}
