#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEnvironmentHelper_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEnvironmentHelper.GetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (*)(::GlobalNamespace::IDifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapEnvironmentHelper::GetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x2338350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEnvironmentHelper*>::get(), "GetEnvironmentInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::BeatmapEnvironmentHelper::GetEnvironmentInfo(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEnvironmentHelper*>::get(), "GetEnvironmentInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(nullptr, ___internal_method, difficultyBeatmap);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEnvironmentHelper::BeatmapEnvironmentHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
