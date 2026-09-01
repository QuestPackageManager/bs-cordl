#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\BombNoteData.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BombNoteData_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BombNoteData.get_line
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BombNoteData::*)()>(&::BeatmapSaveDataVersion3::BombNoteData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BombNoteData*>(), { "get_line", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BombNoteData.get_layer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BombNoteData::*)()>(&::BeatmapSaveDataVersion3::BombNoteData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BombNoteData*>(), { "get_layer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BombNoteData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BombNoteData::*)(float_t, int32_t, int32_t)>(&::BeatmapSaveDataVersion3::BombNoteData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375f6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BombNoteData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::BombNoteData::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BombNoteData::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void BeatmapSaveDataVersion3::BombNoteData::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::BombNoteData::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BombNoteData::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void BeatmapSaveDataVersion3::BombNoteData::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline int32_t BeatmapSaveDataVersion3::BombNoteData::get_line() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BombNoteData*>(), { "get_line", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BombNoteData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BombNoteData*>(), { "get_layer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BombNoteData::_ctor(float_t beat, int32_t line, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BombNoteData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, line, layer);
}
inline ::BeatmapSaveDataVersion3::BombNoteData* BeatmapSaveDataVersion3::BombNoteData::New_ctor(float_t beat, int32_t line, int32_t layer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BombNoteData*>(beat, line, layer));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BombNoteData::BombNoteData() {}
