#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FloatFxGroupEffect__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FloatFxGroupEffect__InitData::*)(
    int32_t, int32_t, ::GlobalNamespace::FloatFxGroupEffectTarget*)>(&::GlobalNamespace::__FloatFxGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a5f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::__FloatFxGroupEffect__InitData::__set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::__FloatFxGroupEffect__InitData::__set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::__FloatFxGroupEffect__InitData::__set_target(::GlobalNamespace::FloatFxGroupEffectTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FloatFxGroupEffect__InitData* GlobalNamespace::__FloatFxGroupEffect__InitData::New_ctor(int32_t groupId, int32_t elementId,
                                                                                                                    ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FloatFxGroupEffect__InitData*>(groupId, elementId, target));
}
inline void GlobalNamespace::__FloatFxGroupEffect__InitData::_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, target);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FloatFxGroupEffect__InitData::__FloatFxGroupEffect__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(
    ::GlobalNamespace::__FloatFxGroupEffect__InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::FloatFxGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x23a62bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)()>(&::GlobalNamespace::FloatFxGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23a6118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), "Cleanup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.HandleFloatFxBeatmapEventCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(
    &::GlobalNamespace::FloatFxGroupEffect::HandleFloatFxBeatmapEventCallback)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23a6498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), "HandleFloatFxBeatmapEventCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(float_t)>(&::GlobalNamespace::FloatFxGroupEffect::SetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23a65b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), "SetValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Tweening::SongTimeTweeningManager*& GlobalNamespace::FloatFxGroupEffect::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& GlobalNamespace::FloatFxGroupEffect::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__tweeningManager(::Tweening::SongTimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::FloatFxGroupEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::FloatFxGroupEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::FloatFxGroupEffect::__get__floatTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::FloatFxGroupEffect::__get__floatTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__floatTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::FloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::FloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxBeatmapEventCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& GlobalNamespace::FloatFxGroupEffect::__get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& GlobalNamespace::FloatFxGroupEffect::__get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__target(::GlobalNamespace::FloatFxGroupEffectTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::FloatFxGroupEffect* GlobalNamespace::FloatFxGroupEffect::New_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData* initData,
                                                                                            ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                            ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatFxGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
inline void GlobalNamespace::FloatFxGroupEffect::_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                       ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::FloatFxGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), "Cleanup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxGroupEffect::HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), "HandleFloatFxBeatmapEventCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEvent);
}
inline void GlobalNamespace::FloatFxGroupEffect::SetValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(), "SetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffect::FloatFxGroupEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
