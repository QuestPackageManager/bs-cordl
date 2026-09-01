#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\BeatmapLevelSaveDataUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BeatmapLevelSaveDataUtils_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils.MigrateBeatmapLevelSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*)>(
    &::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils::MigrateBeatmapLevelSaveData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x37654bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils*>(),
                                                             { "MigrateBeatmapLevelSaveData", {}, { ::i2c::type_of<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>() } })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils::MigrateBeatmapLevelSaveData(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData* beatmapLevelSaveData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils*>(),
                                                           { "MigrateBeatmapLevelSaveData", {}, { ::i2c::type_of<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapLevelSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils::BeatmapLevelSaveDataUtils() {}
