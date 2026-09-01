#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\LightRotationEventBox.hpp"
#include "BeatmapSaveDataCommon/zzzz__Axis_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__Axis_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_rotationDistributionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_rotationDistributionParamType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::DistributionParamType (::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionParamType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_axis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::Axis (::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationEventBox::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_axis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_flipRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::LightRotationEventBox::get_flipRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375f4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_flipRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_rotationDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375f4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionShouldAffectFirstBaseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_rotationDistributionEaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionEaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox.get_lightRotationBaseDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>* (
    ::BeatmapSaveDataVersion3::LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::LightRotationEventBox::get_lightRotationBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_lightRotationBaseDataList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightRotationEventBox::*)(
    ::BeatmapSaveDataVersion3::IndexFilter*, float_t, ::BeatmapSaveDataCommon::DistributionParamType, float_t, ::BeatmapSaveDataCommon::DistributionParamType, bool, ::BeatmapSaveDataCommon::EaseType,
    ::BeatmapSaveDataCommon::Axis, bool, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>*)>(&::BeatmapSaveDataVersion3::LightRotationEventBox::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x375f4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<::BeatmapSaveDataCommon::Axis>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::BeatmapSaveDataCommon::Axis& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::BeatmapSaveDataCommon::Axis const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_a(::BeatmapSaveDataCommon::Axis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>*& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>* const& BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::LightRotationEventBox::__cordl_internal_set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l = value;
}
inline float_t BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionParamType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::DistributionParamType>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::Axis BeatmapSaveDataVersion3::LightRotationEventBox::get_axis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_axis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::Axis>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightRotationEventBox::get_flipRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_flipRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionShouldAffectFirstBaseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::LightRotationEventBox::get_rotationDistributionEaseType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_rotationDistributionEaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>* BeatmapSaveDataVersion3::LightRotationEventBox::get_lightRotationBaseDataList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(), { "get_lightRotationBaseDataList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::LightRotationEventBox::_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                  ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t rotationDistributionParam,
                                                                  ::BeatmapSaveDataCommon::DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent,
                                                                  ::BeatmapSaveDataCommon::EaseType rotationDistributionEaseType, ::BeatmapSaveDataCommon::Axis axis, bool flipRotation,
                                                                  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>* lightRotationBaseDataList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationEventBox*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<::BeatmapSaveDataCommon::Axis>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam, rotationDistributionParamType,
                                                   rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, axis, flipRotation, lightRotationBaseDataList);
}
inline ::BeatmapSaveDataVersion3::LightRotationEventBox* BeatmapSaveDataVersion3::LightRotationEventBox::New_ctor(
    ::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t rotationDistributionParam,
    ::BeatmapSaveDataCommon::DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::EaseType rotationDistributionEaseType,
    ::BeatmapSaveDataCommon::Axis axis, bool flipRotation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationBaseData*>* lightRotationBaseDataList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightRotationEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam,
                                                                                                             rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent,
                                                                                                             rotationDistributionEaseType, axis, flipRotation, lightRotationBaseDataList));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightRotationEventBox::LightRotationEventBox() {}
