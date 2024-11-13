#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataZenModeTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataZenModeTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataZenModeTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataZenModeTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2677770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataZenModeTransform*>::get(), "CreateTransformedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataZenModeTransform._CreateTransformedData_g__ProcessData_0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapDataZenModeTransform::_CreateTransformedData_g__ProcessData_0_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2677b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataZenModeTransform*>::get(), "<CreateTransformedData>g__ProcessData|0_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataZenModeTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataZenModeTransform*>::get(), "CreateTransformedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataZenModeTransform::_CreateTransformedData_g__ProcessData_0_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataZenModeTransform*>::get(), "<CreateTransformedData>g__ProcessData|0_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(nullptr, ___internal_method, beatmapDataItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataZenModeTransform::BeatmapDataZenModeTransform() {}
