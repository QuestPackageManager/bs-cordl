#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FxEventBox.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBox.get_vfxDistributionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::FxEventBox::*)()>(&::BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBox.get_vfxDistributionParamType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::DistributionParamType (::BeatmapSaveDataVersion3::FxEventBox::*)()>(
    &::BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionParamType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBox.get_vfxDistributionEaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::FxEventBox::*)()>(
    &::BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionEaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBox.get_vfxDistributionShouldAffectFirstBaseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::FxEventBox::*)()>(&::BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375a9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionShouldAffectFirstBaseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBox.get_vfxBaseDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<int32_t>* (::BeatmapSaveDataVersion3::FxEventBox::*)()>(
    &::BeatmapSaveDataVersion3::FxEventBox::get_vfxBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxBaseDataList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::FxEventBox::*)(
    ::BeatmapSaveDataVersion3::IndexFilter*, float_t, ::BeatmapSaveDataCommon::DistributionParamType, float_t, ::BeatmapSaveDataCommon::DistributionParamType, ::BeatmapSaveDataCommon::EaseType, bool,
    ::System::Collections::Generic::List_1<int32_t>*)>(&::BeatmapSaveDataVersion3::FxEventBox::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x375a9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_set_l(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l = value;
}
constexpr float_t& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType const& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr int32_t const& BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::FxEventBox::__cordl_internal_set_b(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline float_t BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionParam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionParamType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionParamType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::DistributionParamType>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionEaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionEaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::FxEventBox::get_vfxDistributionShouldAffectFirstBaseEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxDistributionShouldAffectFirstBaseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* BeatmapSaveDataVersion3::FxEventBox::get_vfxBaseDataList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(), { "get_vfxBaseDataList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::FxEventBox::_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                       ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t vfxDistributionParam,
                                                       ::BeatmapSaveDataCommon::DistributionParamType vfxDistributionParamType, ::BeatmapSaveDataCommon::EaseType vfxDistributionEaseType,
                                                       bool vfxDistributionShouldAffectFirstBaseEvent, ::System::Collections::Generic::List_1<int32_t>* effectsBaseDataList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBox*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, vfxDistributionParam, vfxDistributionParamType,
                                                   vfxDistributionEaseType, vfxDistributionShouldAffectFirstBaseEvent, effectsBaseDataList);
}
inline ::BeatmapSaveDataVersion3::FxEventBox* BeatmapSaveDataVersion3::FxEventBox::New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                                            ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t vfxDistributionParam,
                                                                                            ::BeatmapSaveDataCommon::DistributionParamType vfxDistributionParamType,
                                                                                            ::BeatmapSaveDataCommon::EaseType vfxDistributionEaseType, bool vfxDistributionShouldAffectFirstBaseEvent,
                                                                                            ::System::Collections::Generic::List_1<int32_t>* effectsBaseDataList) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::BeatmapSaveDataVersion3::FxEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, vfxDistributionParam, vfxDistributionParamType,
                                                                              vfxDistributionEaseType, vfxDistributionShouldAffectFirstBaseEvent, effectsBaseDataList));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::FxEventBox::FxEventBox() {}
