#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightColorEventBox.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBox.get_brightnessDistributionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBox.get_brightnessDistributionParamType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::DistributionParamType (::BeatmapSaveDataVersion3::LightColorEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ac5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionParamType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBox.get_brightnessDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightColorEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375ac64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionShouldAffectFirstBaseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBox.get_brightnessDistributionEaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::LightColorEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ac74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionEaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBox.get_lightColorBaseDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* (::BeatmapSaveDataVersion3::LightColorEventBox::*)()>(
    &::BeatmapSaveDataVersion3::LightColorEventBox::get_lightColorBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ac7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_lightColorBaseDataList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightColorEventBox::*)(
    ::BeatmapSaveDataVersion3::IndexFilter*, float_t, ::BeatmapSaveDataCommon::DistributionParamType, float_t, bool, ::BeatmapSaveDataCommon::DistributionParamType, ::BeatmapSaveDataCommon::EaseType,
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>*)>(&::BeatmapSaveDataVersion3::LightColorEventBox::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x375ac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType const& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>*& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* const& BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::LightColorEventBox::__cordl_internal_set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
inline float_t BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionParamType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::DistributionParamType>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionShouldAffectFirstBaseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::LightColorEventBox::get_brightnessDistributionEaseType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_brightnessDistributionEaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* BeatmapSaveDataVersion3::LightColorEventBox::get_lightColorBaseDataList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(), { "get_lightColorBaseDataList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::LightColorEventBox::_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                               ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam,
                                                               bool brightnessDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::DistributionParamType brightnessDistributionParamType,
                                                               ::BeatmapSaveDataCommon::EaseType brightnessDistributionEaseType,
                                                               ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* lightColorBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBox*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam,
                                                   brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType, brightnessDistributionEaseType, lightColorBaseDataList);
}
inline ::BeatmapSaveDataVersion3::LightColorEventBox* BeatmapSaveDataVersion3::LightColorEventBox::New_ctor(
    ::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam,
    bool brightnessDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::DistributionParamType brightnessDistributionParamType,
    ::BeatmapSaveDataCommon::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* lightColorBaseDataList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightColorEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam,
                                                                                                          brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType,
                                                                                                          brightnessDistributionEaseType, lightColorBaseDataList));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightColorEventBox::LightColorEventBox() {}
