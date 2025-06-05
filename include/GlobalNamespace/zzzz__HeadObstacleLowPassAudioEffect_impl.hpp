#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadObstacleLowPassAudioEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadObstacleLowPassAudioEffect_def.hpp"
#include "GlobalNamespace/zzzz__MainAudioEffects_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadObstacleLowPassAudioEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(
    &::GlobalNamespace::HeadObstacleLowPassAudioEffect::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3b8d22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadObstacleLowPassAudioEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(
    &::GlobalNamespace::HeadObstacleLowPassAudioEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b8d288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_get__playerHeadAndObstacleInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_get__playerHeadAndObstacleInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeadAndObstacleInteraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainAudioEffects>& GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_get__mainAudioEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainAudioEffects;
}
constexpr ::UnityW<::GlobalNamespace::MainAudioEffects> const& GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_get__mainAudioEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainAudioEffects;
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_set__mainAudioEffects(::UnityW<::GlobalNamespace::MainAudioEffects> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainAudioEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_get__headWasInObstacle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headWasInObstacle;
}
constexpr bool const& GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_get__headWasInObstacle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headWasInObstacle;
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__cordl_internal_set__headWasInObstacle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headWasInObstacle = value;
}
inline void GlobalNamespace::HeadObstacleLowPassAudioEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadObstacleLowPassAudioEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HeadObstacleLowPassAudioEffect* GlobalNamespace::HeadObstacleLowPassAudioEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadObstacleLowPassAudioEffect::HeadObstacleLowPassAudioEffect() {}
