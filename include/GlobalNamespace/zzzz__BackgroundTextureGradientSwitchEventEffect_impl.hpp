#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BackgroundTextureGradientSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23650cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2365174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)(
    ::GlobalNamespace::ColorBoostBeatmapEventData*)>(&::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2365190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23651e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__defaultTextureGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultTextureGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> const& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__defaultTextureGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultTextureGradient;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__defaultTextureGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultTextureGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__boostTextureGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostTextureGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> const& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__boostTextureGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostTextureGradient;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__boostTextureGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boostTextureGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>());
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::BackgroundTextureGradientSwitchEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
