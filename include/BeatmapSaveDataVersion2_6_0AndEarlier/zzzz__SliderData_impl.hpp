#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SliderData.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ColorType_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ColorType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(),
                                                                                          { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_headLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_headLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headControlPointLengthMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_headCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteCutDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headCutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_tailTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_tailLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_tailLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailControlPointLengthMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_tailCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteCutDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailCutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData.get_sliderMidAnchorMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::SliderMidAnchorMode (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_sliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_sliderMidAnchorMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType, float_t, int32_t, ::BeatmapSaveDataCommon::NoteLineLayer, float_t, ::BeatmapSaveDataCommon::NoteCutDirection, float_t, int32_t,
    ::BeatmapSaveDataCommon::NoteLineLayer, float_t, ::BeatmapSaveDataCommon::NoteCutDirection, ::BeatmapSaveDataCommon::SliderMidAnchorMode)>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x375b540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<::BeatmapSaveDataCommon::SliderMidAnchorMode>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__colorType(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType = value;
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTime;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTime;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__headTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTime = value;
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineIndex;
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineIndex;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__headLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headLineIndex = value;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineLayer;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineLayer;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__headLineLayer(::BeatmapSaveDataCommon::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headLineLayer = value;
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headControlPointLengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headControlPointLengthMultiplier;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headControlPointLengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headControlPointLengthMultiplier;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__headControlPointLengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headControlPointLengthMultiplier = value;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headCutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headCutDirection;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__headCutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headCutDirection;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__headCutDirection(::BeatmapSaveDataCommon::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headCutDirection = value;
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailTime;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailTime;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__tailTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailTime = value;
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineIndex;
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineIndex;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__tailLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailLineIndex = value;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineLayer;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineLayer;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__tailLineLayer(::BeatmapSaveDataCommon::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailLineLayer = value;
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailControlPointLengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailControlPointLengthMultiplier;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailControlPointLengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailControlPointLengthMultiplier;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__tailControlPointLengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailControlPointLengthMultiplier = value;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailCutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailCutDirection;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__tailCutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailCutDirection;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__tailCutDirection(::BeatmapSaveDataCommon::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailCutDirection = value;
}
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__sliderMidAnchorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMidAnchorMode;
}
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode const& BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_get__sliderMidAnchorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMidAnchorMode;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::__cordl_internal_set__sliderMidAnchorMode(::BeatmapSaveDataCommon::SliderMidAnchorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderMidAnchorMode = value;
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_time() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headLineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteLineLayer>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headControlPointLengthMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_headCutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_headCutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteCutDirection>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailLineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteLineLayer>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailControlPointLengthMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_tailCutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_tailCutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteCutDirection>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::SliderMidAnchorMode BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::get_sliderMidAnchorMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(), { "get_sliderMidAnchorMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::SliderMidAnchorMode>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType colorType, float_t headTime, int32_t headLineIndex,
                                                                     ::BeatmapSaveDataCommon::NoteLineLayer headLineLayer, float_t headControlPointLengthMultiplier,
                                                                     ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex,
                                                                     ::BeatmapSaveDataCommon::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier,
                                                                     ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection, ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<::BeatmapSaveDataCommon::SliderMidAnchorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorType, headTime, headLineIndex, headLineLayer, headControlPointLengthMultiplier, headCutDirection, tailTime,
                                                   tailLineIndex, tailLineLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData* BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::New_ctor(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType colorType, float_t headTime, int32_t headLineIndex, ::BeatmapSaveDataCommon::NoteLineLayer headLineLayer,
    float_t headControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, ::BeatmapSaveDataCommon::NoteLineLayer tailLineLayer,
    float_t tailControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection, ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>(colorType, headTime, headLineIndex, headLineLayer, headControlPointLengthMultiplier,
                                                                                                                headCutDirection, tailTime, tailLineIndex, tailLineLayer,
                                                                                                                tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData::SliderData() {}
