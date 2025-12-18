#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileRangeExpansionJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InclusiveRange_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileRangeExpansionJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TileRangeExpansionJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TileRangeExpansionJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::TileRangeExpansionJob::Execute)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6709c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TileRangeExpansionJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TileRangeExpansionJob::Execute(int32_t jobIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TileRangeExpansionJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jobIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::TileRangeExpansionJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::TileRangeExpansionJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "tileRanges", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "tileMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rangesPerItem", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "itemsPerTile", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordsPerTile", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "tileResolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TileRangeExpansionJob::TileRangeExpansionJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange> tileRanges,
                                                                                            ::Unity::Collections::NativeArray_1<uint32_t> tileMasks, int32_t rangesPerItem, int32_t itemsPerTile,
                                                                                            int32_t wordsPerTile, ::Unity::Mathematics::int2 tileResolution) noexcept {
  this->tileRanges = tileRanges;
  this->tileMasks = tileMasks;
  this->rangesPerItem = rangesPerItem;
  this->itemsPerTile = itemsPerTile;
  this->wordsPerTile = wordsPerTile;
  this->tileResolution = tileResolution;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TileRangeExpansionJob::TileRangeExpansionJob() {}
