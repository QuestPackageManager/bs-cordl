#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadObstacleLowPassAudioEffect_def.hpp"
#include "GlobalNamespace/zzzz__MainAudioEffects_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadObstacleLowPassAudioEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(
    &::GlobalNamespace::HeadObstacleLowPassAudioEffect::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23a5620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadObstacleLowPassAudioEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(
    &::GlobalNamespace::HeadObstacleLowPassAudioEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a567c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__playerHeadAndObstacleInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> const&
GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__playerHeadAndObstacleInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeadAndObstacleInteraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MainAudioEffects*& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__mainAudioEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainAudioEffects;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainAudioEffects*> const& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__mainAudioEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainAudioEffects;
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__set__mainAudioEffects(::GlobalNamespace::MainAudioEffects* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainAudioEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__headWasInObstacle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headWasInObstacle;
}
constexpr bool const& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__headWasInObstacle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headWasInObstacle;
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__set__headWasInObstacle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headWasInObstacle = value;
}
inline void GlobalNamespace::HeadObstacleLowPassAudioEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                                                                             "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HeadObstacleLowPassAudioEffect* GlobalNamespace::HeadObstacleLowPassAudioEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>());
}
inline void GlobalNamespace::HeadObstacleLowPassAudioEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadObstacleLowPassAudioEffect::HeadObstacleLowPassAudioEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
