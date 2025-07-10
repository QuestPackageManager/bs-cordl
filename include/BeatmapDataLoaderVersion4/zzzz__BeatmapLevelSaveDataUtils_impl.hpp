#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BeatmapLevelSaveDataUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BeatmapLevelSaveDataUtils_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils.MigrateBeatmapLevelSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*)>(
    &::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils::MigrateBeatmapLevelSaveData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x270f508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils*>::get(), "MigrateBeatmapLevelSaveData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils::MigrateBeatmapLevelSaveData(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData* beatmapLevelSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils*>::get(), "MigrateBeatmapLevelSaveData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapLevelSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils::BeatmapLevelSaveDataUtils() {}
