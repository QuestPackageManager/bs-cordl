#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MeshRendererSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(
    &::GlobalNamespace::MeshRendererSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23ae598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(
    &::GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23ae6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23ae6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.ToggleObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)(bool)>(
    &::GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23ae6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(), "ToggleObjects",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(
    &::GlobalNamespace::MeshRendererSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ae7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEvent = value;
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& GlobalNamespace::MeshRendererSwitchEventEffect::__get__deactivateOnBoostRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deactivateOnBoostRenderers;
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& GlobalNamespace::MeshRendererSwitchEventEffect::__get__deactivateOnBoostRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deactivateOnBoostRenderers;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__deactivateOnBoostRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deactivateOnBoostRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& GlobalNamespace::MeshRendererSwitchEventEffect::__get__activateOnBoostRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnBoostRenderers;
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& GlobalNamespace::MeshRendererSwitchEventEffect::__get__activateOnBoostRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnBoostRenderers;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__activateOnBoostRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activateOnBoostRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects(bool isBoostOn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(), "ToggleObjects",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isBoostOn);
}
inline ::GlobalNamespace::MeshRendererSwitchEventEffect* GlobalNamespace::MeshRendererSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MeshRendererSwitchEventEffect*>());
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MeshRendererSwitchEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshRendererSwitchEventEffect::MeshRendererSwitchEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
