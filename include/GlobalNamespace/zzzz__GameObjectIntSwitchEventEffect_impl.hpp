#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectIntSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectIntSwitchEventEffect_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList.get_isActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)()>(
    &::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::get_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249b838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                                                 "get_isActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList.set_isActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)(bool)>(
    &::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::set_isActive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249b840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), "set_isActive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)(bool)>(
    &::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::SetActive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x249b644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), "SetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)()>(
    &::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249b84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>&
GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_get_gameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_get_gameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_set_gameObjects(
    ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_get__isActive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive_k__BackingField;
}
constexpr bool const& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_get__isActive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive_k__BackingField;
}
constexpr void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__cordl_internal_set__isActive_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActive_k__BackingField = value;
}
inline bool GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::get_isActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), "get_isActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::set_isActive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), "set_isActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::SetActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), "SetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList* GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>());
}
inline void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__GameObjectIntSwitchEventEffect__GameObjectValueList() {}
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x249b48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x249b6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.HandleBasicBeatmapEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect::HandleBasicBeatmapEventData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x249b6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(), "HandleBasicBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249b830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__defaultValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue = value;
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__gameObjectsValueLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectsValueLists;
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> const&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__gameObjectsValueLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectsValueLists;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__gameObjectsValueLists(
    ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectsValueLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__valueToListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToListMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> const&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__valueToListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToListMap;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__valueToListMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueToListMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__previousActiveIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousActiveIdx;
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__previousActiveIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousActiveIdx;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__previousActiveIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousActiveIdx = value;
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(), "HandleBasicBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::GameObjectIntSwitchEventEffect* GlobalNamespace::GameObjectIntSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameObjectIntSwitchEventEffect*>());
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectIntSwitchEventEffect::GameObjectIntSwitchEventEffect() {}
