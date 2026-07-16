#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightTranslationEventBox.hpp"
#include "BeatmapSaveDataCommon/zzzz__Axis_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__Axis_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_gapDistributionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375add4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_gapDistributionParamType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::DistributionParamType (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375addc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionParamType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_axis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::Axis (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationEventBox::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ade4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_axis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_flipTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::LightTranslationEventBox::get_flipTranslation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375adec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_flipTranslation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_gapDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375adfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionShouldAffectFirstBaseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_gapDistributionEaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ae0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionEaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox.get_lightTranslationBaseDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* (
    ::BeatmapSaveDataVersion3::LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::LightTranslationEventBox::get_lightTranslationBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ae14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_lightTranslationBaseDataList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightTranslationEventBox::*)(
    ::BeatmapSaveDataVersion3::IndexFilter*, float_t, ::BeatmapSaveDataCommon::DistributionParamType, float_t, ::BeatmapSaveDataCommon::DistributionParamType, bool, ::BeatmapSaveDataCommon::EaseType,
    ::BeatmapSaveDataCommon::Axis, bool, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*)>(&::BeatmapSaveDataVersion3::LightTranslationEventBox::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x375ae1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<::BeatmapSaveDataCommon::Axis>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::BeatmapSaveDataCommon::Axis& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::BeatmapSaveDataCommon::Axis const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_a(::BeatmapSaveDataCommon::Axis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* const& BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationEventBox::__cordl_internal_set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l = value;
}
inline float_t BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionParamType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::DistributionParamType>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::Axis BeatmapSaveDataVersion3::LightTranslationEventBox::get_axis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_axis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::Axis>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightTranslationEventBox::get_flipTranslation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_flipTranslation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionShouldAffectFirstBaseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::LightTranslationEventBox::get_gapDistributionEaseType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_gapDistributionEaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* BeatmapSaveDataVersion3::LightTranslationEventBox::get_lightTranslationBaseDataList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(), { "get_lightTranslationBaseDataList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::LightTranslationEventBox::_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                     ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
                                                                     ::BeatmapSaveDataCommon::DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent,
                                                                     ::BeatmapSaveDataCommon::EaseType gapDistributionEaseType, ::BeatmapSaveDataCommon::Axis axis, bool flipTranslation,
                                                                     ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* lightTranslationBaseDataList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<::BeatmapSaveDataCommon::Axis>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, gapDistributionParam, gapDistributionParamType,
                                                   gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, axis, flipTranslation, lightTranslationBaseDataList);
}
inline ::BeatmapSaveDataVersion3::LightTranslationEventBox* BeatmapSaveDataVersion3::LightTranslationEventBox::New_ctor(
    ::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
    ::BeatmapSaveDataCommon::DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::EaseType gapDistributionEaseType,
    ::BeatmapSaveDataCommon::Axis axis, bool flipTranslation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* lightTranslationBaseDataList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightTranslationEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, gapDistributionParam,
                                                                                                                gapDistributionParamType, gapDistributionShouldAffectFirstBaseEvent,
                                                                                                                gapDistributionEaseType, axis, flipTranslation, lightTranslationBaseDataList));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightTranslationEventBox::LightTranslationEventBox() {}
