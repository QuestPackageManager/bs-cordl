#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\BaseSliderData.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BaseSliderData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteColorType (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::BaseSliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_headLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::BaseSliderData::get_headLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_headLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_headLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::BaseSliderData::get_headLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_headLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_headCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteCutDirection (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(
    &::BeatmapSaveDataVersion3::BaseSliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_headCutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_tailBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::BaseSliderData::get_tailBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_tailBeat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_tailLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::BaseSliderData::get_tailLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_tailLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData.get_tailLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::BaseSliderData::get_tailLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_tailLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BaseSliderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BaseSliderData::*)(
    ::BeatmapSaveDataCommon::NoteColorType, float_t, int32_t, int32_t, ::BeatmapSaveDataCommon::NoteCutDirection, float_t, int32_t, int32_t)>(&::BeatmapSaveDataVersion3::BaseSliderData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x375f73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataCommon::NoteColorType& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::BeatmapSaveDataCommon::NoteColorType const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_c(::BeatmapSaveDataCommon::NoteColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_d(::BeatmapSaveDataCommon::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
constexpr float_t& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_tb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tb;
}
constexpr float_t const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_tb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tb;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_tb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tb = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_tx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tx;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_tx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tx;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_tx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tx = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_ty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ty;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_get_ty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ty;
}
constexpr void BeatmapSaveDataVersion3::BaseSliderData::__cordl_internal_set_ty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ty = value;
}
inline ::BeatmapSaveDataCommon::NoteColorType BeatmapSaveDataVersion3::BaseSliderData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteColorType>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BaseSliderData::get_headLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_headLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BaseSliderData::get_headLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_headLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataVersion3::BaseSliderData::get_headCutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_headCutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteCutDirection>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::BaseSliderData::get_tailBeat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_tailBeat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BaseSliderData::get_tailLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_tailLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BaseSliderData::get_tailLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(), { "get_tailLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BaseSliderData::_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                           ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BaseSliderData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer);
}
inline ::BeatmapSaveDataVersion3::BaseSliderData* BeatmapSaveDataVersion3::BaseSliderData::New_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                                                    int32_t headLayer, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat,
                                                                                                    int32_t tailLine, int32_t tailLayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BaseSliderData*>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BaseSliderData::BaseSliderData() {}
