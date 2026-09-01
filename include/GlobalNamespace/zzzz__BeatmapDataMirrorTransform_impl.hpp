#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataMirrorTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataMirrorTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataMirrorTransform_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370575c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0._CreateTransformedData_g__ProcessData_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::*)(::GlobalNamespace::BeatmapDataItem*)>(
        &::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3705760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0*>(),
                                                             { "<CreateTransformedData>g__ProcessData|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::__cordl_internal_get_numberOfLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfLines;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::__cordl_internal_get_numberOfLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfLines;
}
constexpr void GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::__cordl_internal_set_numberOfLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numberOfLines = value;
}
inline void GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem*
GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0*>(),
                                                           { "<CreateTransformedData>g__ProcessData|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method, beatmapDataItem);
}
inline ::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0* GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0::BeatmapDataMirrorTransform___c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataMirrorTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataMirrorTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x37055d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataMirrorTransform*>(),
                                                                                           { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataMirrorTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataMirrorTransform*>(),
                                                                                         { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataMirrorTransform::BeatmapDataMirrorTransform() {}
