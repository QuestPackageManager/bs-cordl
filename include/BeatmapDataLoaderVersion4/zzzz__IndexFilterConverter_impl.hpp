#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\IndexFilterConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__IndexFilterConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::IndexFilterConverter.IsIndexFilterValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BeatmapSaveDataVersion4::IndexFilter, int32_t)>(&::BeatmapDataLoaderVersion4::IndexFilterConverter::IsIndexFilterValid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x376541c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::IndexFilterConverter*>(),
                                                             { "IsIndexFilterValid", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::IndexFilter>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::IndexFilterConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IndexFilter* (*)(::BeatmapSaveDataVersion4::IndexFilter, int32_t)>(
    &::BeatmapDataLoaderVersion4::IndexFilterConverter::Convert)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x376455c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::IndexFilterConverter*>(),
                                                             { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::IndexFilter>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool BeatmapDataLoaderVersion4::IndexFilterConverter::IsIndexFilterValid(::BeatmapSaveDataVersion4::IndexFilter indexFilter, int32_t groupSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::IndexFilterConverter*>(),
                                                           { "IsIndexFilterValid", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::IndexFilter>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, indexFilter, groupSize);
}
inline ::GlobalNamespace::IndexFilter* BeatmapDataLoaderVersion4::IndexFilterConverter::Convert(::BeatmapSaveDataVersion4::IndexFilter indexFilter, int32_t groupSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::IndexFilterConverter*>(),
                                                                                         { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::IndexFilter>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*>(nullptr, ___internal_method, indexFilter, groupSize);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::IndexFilterConverter::IndexFilterConverter() {}
