#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerFloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__TriggerFloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::*)(
    int32_t, int32_t, ::GlobalNamespace::FloatFxGroupEffectTarget*)>(&::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a71b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__set_target(::GlobalNamespace::FloatFxGroupEffectTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::New_ctor(int32_t groupId, int32_t elementId,
                                                                                                                                  ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>(groupId, elementId, target));
}
inline void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, target);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__TriggerFloatFxGroupEffect__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)(
    ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::TriggerFloatFxGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a7074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)()>(&::GlobalNamespace::TriggerFloatFxGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23a6f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(), "Cleanup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect.HandleFloatFxBeatmapEventCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(
    &::GlobalNamespace::TriggerFloatFxGroupEffect::HandleFloatFxBeatmapEventCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a7190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(), "HandleFloatFxBeatmapEventCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::TriggerFloatFxGroupEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::TriggerFloatFxGroupEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TriggerFloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::TriggerFloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxBeatmapEventCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& GlobalNamespace::TriggerFloatFxGroupEffect::__get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& GlobalNamespace::TriggerFloatFxGroupEffect::__get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__set__target(::GlobalNamespace::FloatFxGroupEffectTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::TriggerFloatFxGroupEffect* GlobalNamespace::TriggerFloatFxGroupEffect::New_ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* initData,
                                                                                                          ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TriggerFloatFxGroupEffect*>(initData, beatmapCallbacksController));
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::_ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* initData,
                                                              ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, beatmapCallbacksController);
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(), "Cleanup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(), "HandleFloatFxBeatmapEventCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEvent);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerFloatFxGroupEffect::TriggerFloatFxGroupEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
