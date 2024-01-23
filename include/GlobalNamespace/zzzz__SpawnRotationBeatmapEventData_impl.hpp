#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType::__SpawnRotationBeatmapEventData__SpawnRotationEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType::__SpawnRotationBeatmapEventData__SpawnRotationEventType() {}
constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType::Early{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType::Late{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdff254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdff25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                                               "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.set_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationBeatmapEventData::*)(float_t)>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdff264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), "set_rotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationBeatmapEventData::*)(
    float_t, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, float_t)>(&::GlobalNamespace::SpawnRotationBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdff26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.Mirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::Mirror)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdff2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                                               "Mirror", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xdff2e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.RecalculateRotationFromPreviousEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationBeatmapEventData::*)(::GlobalNamespace::SpawnRotationBeatmapEventData*)>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::RecalculateRotationFromPreviousEvent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdff380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), "RecalculateRotationFromPreviousEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.SetFirstRotationEventRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::SetFirstRotationEventRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdff3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                                               "SetFirstRotationEventRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::SpawnRotationBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdff3b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), 7));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_set__rotation_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType& GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_get_spawnRotationEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnRotationEventType;
}
constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const& GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_get_spawnRotationEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnRotationEventType;
}
constexpr void GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_set_spawnRotationEventType(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnRotationEventType = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_get__deltaRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaRotation;
}
constexpr float_t const& GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_get__deltaRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaRotation;
}
constexpr void GlobalNamespace::SpawnRotationBeatmapEventData::__cordl_internal_set__deltaRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deltaRotation = value;
}
inline void GlobalNamespace::SpawnRotationBeatmapEventData::setStaticF__defaultCopy(::GlobalNamespace::BeatmapEventData* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapEventData*, "_defaultCopy",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get>(
      std::forward<::GlobalNamespace::BeatmapEventData*>(value));
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::SpawnRotationBeatmapEventData::getStaticF__defaultCopy() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapEventData*, "_defaultCopy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get>();
}
inline int32_t GlobalNamespace::SpawnRotationBeatmapEventData::get_subtypeGroupIdentifier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SpawnRotationBeatmapEventData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                                             "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationBeatmapEventData::set_rotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), "set_rotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SpawnRotationBeatmapEventData*
GlobalNamespace::SpawnRotationBeatmapEventData::New_ctor(float_t time, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType, float_t deltaRotation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpawnRotationBeatmapEventData*>(time, spawnRotationEventType, deltaRotation));
}
inline void GlobalNamespace::SpawnRotationBeatmapEventData::_ctor(float_t time, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType,
                                                                  float_t deltaRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, spawnRotationEventType, deltaRotation);
}
inline void GlobalNamespace::SpawnRotationBeatmapEventData::Mirror() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), "Mirror",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::SpawnRotationBeatmapEventData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationBeatmapEventData::RecalculateRotationFromPreviousEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* previousSpawnRotationBeatmapEventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), "RecalculateRotationFromPreviousEvent",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousSpawnRotationBeatmapEventData);
}
inline void GlobalNamespace::SpawnRotationBeatmapEventData::SetFirstRotationEventRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(),
                                                                             "SetFirstRotationEventRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::SpawnRotationBeatmapEventData::GetDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationBeatmapEventData::SpawnRotationBeatmapEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
