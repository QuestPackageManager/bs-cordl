#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DifficultyBeatmapSerializedMethods_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSerializedMethods.SerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::IDifficultyBeatmap*)>(
    &::GlobalNamespace::DifficultyBeatmapSerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x23492e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSerializedMethods*>::get(), "SerializedName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::DifficultyBeatmapSerializedMethods::SerializedName(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSerializedMethods*>::get(), "SerializedName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, difficultyBeatmap);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DifficultyBeatmapSerializedMethods::DifficultyBeatmapSerializedMethods() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
