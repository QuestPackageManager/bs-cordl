#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\ColorNoteData.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorNoteData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorNoteData.get_line
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::ColorNoteData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_line", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorNoteData.get_layer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::ColorNoteData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_layer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorNoteData.get_angleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::ColorNoteData::get_angleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_angleOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorNoteData.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteColorType (::BeatmapSaveDataVersion3::ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::ColorNoteData::get_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorNoteData.get_cutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteCutDirection (::BeatmapSaveDataVersion3::ColorNoteData::*)()>(
    &::BeatmapSaveDataVersion3::ColorNoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_cutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorNoteData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::ColorNoteData::*)(
    float_t, int32_t, int32_t, ::BeatmapSaveDataCommon::NoteColorType, ::BeatmapSaveDataCommon::NoteCutDirection, int32_t)>(&::BeatmapSaveDataVersion3::ColorNoteData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x375f6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>(),
                                                    ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr int32_t const& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_set_a(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr ::BeatmapSaveDataCommon::NoteColorType& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::BeatmapSaveDataCommon::NoteColorType const& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_set_c(::BeatmapSaveDataCommon::NoteColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::ColorNoteData::__cordl_internal_set_d(::BeatmapSaveDataCommon::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline int32_t BeatmapSaveDataVersion3::ColorNoteData::get_line() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_line", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::ColorNoteData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_layer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::ColorNoteData::get_angleOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_angleOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteColorType BeatmapSaveDataVersion3::ColorNoteData::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteColorType>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataVersion3::ColorNoteData::get_cutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(), { "get_cutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteCutDirection>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::ColorNoteData::_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::NoteColorType color,
                                                          ::BeatmapSaveDataCommon::NoteCutDirection cutDirection, int32_t angleOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorNoteData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>(),
                                                  ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, line, layer, color, cutDirection, angleOffset);
}
inline ::BeatmapSaveDataVersion3::ColorNoteData* BeatmapSaveDataVersion3::ColorNoteData::New_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::NoteColorType color,
                                                                                                  ::BeatmapSaveDataCommon::NoteCutDirection cutDirection, int32_t angleOffset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::ColorNoteData*>(beat, line, layer, color, cutDirection, angleOffset));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::ColorNoteData::ColorNoteData() {}
