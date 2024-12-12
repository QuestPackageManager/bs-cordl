#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionClearedEnvironmentEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionClearedEnvironmentEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionClearedEnvironmentEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(
    &::GlobalNamespace::MissionClearedEnvironmentEffect::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3b92424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionClearedEnvironmentEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(
    &::GlobalNamespace::MissionClearedEnvironmentEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3b924b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionClearedEnvironmentEffect.HandleMissionObjectiveCheckersManagerObjectiveWasCleared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(
    &::GlobalNamespace::MissionClearedEnvironmentEffect::HandleMissionObjectiveCheckersManagerObjectiveWasCleared)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3b92544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                 "HandleMissionObjectiveCheckersManagerObjectiveWasCleared", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionClearedEnvironmentEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(
    &::GlobalNamespace::MissionClearedEnvironmentEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b925bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionClearedEnvironmentEffect::__cordl_internal_get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionClearedEnvironmentEffect::__cordl_internal_get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionClearedEnvironmentEffect::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::MissionClearedEnvironmentEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::MissionClearedEnvironmentEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::MissionClearedEnvironmentEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionClearedEnvironmentEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionClearedEnvironmentEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionClearedEnvironmentEffect::HandleMissionObjectiveCheckersManagerObjectiveWasCleared() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                               "HandleMissionObjectiveCheckersManagerObjectiveWasCleared", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionClearedEnvironmentEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionClearedEnvironmentEffect*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionClearedEnvironmentEffect* GlobalNamespace::MissionClearedEnvironmentEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionClearedEnvironmentEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionClearedEnvironmentEffect::MissionClearedEnvironmentEffect() {}
