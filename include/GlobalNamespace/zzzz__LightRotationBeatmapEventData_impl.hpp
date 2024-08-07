#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10460b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(),
                                                                               "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(float_t)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10460bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), "set_rotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(
    float_t, int32_t, int32_t, bool, ::GlobalNamespace::EaseType, ::GlobalNamespace::LightAxis, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x10460c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightAxis>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.ChangeRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(float_t)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::ChangeRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10461c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), "ChangeRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x10461c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::LightAxis)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x10461a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), "SubtypeIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightAxis>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x104628c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), 7));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_usePreviousEventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr bool const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_usePreviousEventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_usePreviousEventValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventValue = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_axis(::GlobalNamespace::LightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___axis = value;
}
constexpr int32_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_loopCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopCount;
}
constexpr int32_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_loopCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopCount;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_loopCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loopCount = value;
}
constexpr ::GlobalNamespace::LightRotationDirection& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_rotationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDirection;
}
constexpr ::GlobalNamespace::LightRotationDirection const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get_rotationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDirection;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set_rotationDirection(::GlobalNamespace::LightRotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationDirection = value;
}
constexpr float_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr float_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__rotation_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
inline void GlobalNamespace::LightRotationBeatmapEventData::setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>*, "_defaults",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* GlobalNamespace::LightRotationBeatmapEventData::getStaticF__defaults() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>*, "_defaults",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get>();
}
inline float_t GlobalNamespace::LightRotationBeatmapEventData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(),
                                                                             "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_rotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), "set_rotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LightRotationBeatmapEventData* GlobalNamespace::LightRotationBeatmapEventData::New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue,
                                                                                                                  ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis,
                                                                                                                  float_t rotation, int32_t loopCount,
                                                                                                                  ::GlobalNamespace::LightRotationDirection rotationDirection) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::LightRotationBeatmapEventData*>(time, groupId, elementId, usePreviousEventValue, easeType, axis, rotation, loopCount, rotationDirection));
}
inline void GlobalNamespace::LightRotationBeatmapEventData::_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                  ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightAxis>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, groupId, elementId, usePreviousEventValue, easeType, axis, rotation, loopCount, rotationDirection);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::ChangeRotation(float_t rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), "ChangeRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::LightRotationBeatmapEventData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightRotationBeatmapEventData::SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), "SubtypeIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightAxis>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, groupId, elementId, axis);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::LightRotationBeatmapEventData::GetDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationBeatmapEventData::LightRotationBeatmapEventData() {}
