#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BurstSliderData.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BaseSliderData_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BurstSliderData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BurstSliderData.get_sliceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BurstSliderData::*)()>(&::BeatmapSaveDataVersion3::BurstSliderData::get_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(), { "get_sliceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BurstSliderData.get_cuttableSlicesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BurstSliderData::*)()>(&::BeatmapSaveDataVersion3::BurstSliderData::get_cuttableSlicesCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375b014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(), { "get_cuttableSlicesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BurstSliderData.get_squishAmount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::BurstSliderData::*)()>(&::BeatmapSaveDataVersion3::BurstSliderData::get_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(), { "get_squishAmount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BurstSliderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BurstSliderData::*)(::BeatmapSaveDataCommon::NoteColorType, float_t, int32_t, int32_t,
                                                                                                            ::BeatmapSaveDataCommon::NoteCutDirection, float_t, int32_t, int32_t, int32_t, float_t)>(
    &::BeatmapSaveDataVersion3::BurstSliderData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x375b028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::BurstSliderData::__cordl_internal_get_sc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sc;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BurstSliderData::__cordl_internal_get_sc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sc;
}
constexpr void BeatmapSaveDataVersion3::BurstSliderData::__cordl_internal_set_sc(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sc = value;
}
constexpr float_t& BeatmapSaveDataVersion3::BurstSliderData::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::BurstSliderData::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::BurstSliderData::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline int32_t BeatmapSaveDataVersion3::BurstSliderData::get_sliceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(), { "get_sliceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BurstSliderData::get_cuttableSlicesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(), { "get_cuttableSlicesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::BurstSliderData::get_squishAmount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(), { "get_squishAmount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BurstSliderData::_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                            ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, int32_t sliceCount,
                                                            float_t squishAmount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BurstSliderData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer, sliceCount, squishAmount);
}
inline ::BeatmapSaveDataVersion3::BurstSliderData* BeatmapSaveDataVersion3::BurstSliderData::New_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine,
                                                                                                      int32_t headLayer, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat,
                                                                                                      int32_t tailLine, int32_t tailLayer, int32_t sliceCount, float_t squishAmount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BurstSliderData*>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer,
                                                                                                       sliceCount, squishAmount));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BurstSliderData::BurstSliderData() {}
