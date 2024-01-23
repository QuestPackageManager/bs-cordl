#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DifficultyBeatmapSetExtensions_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
template <typename T>
inline ::System::Collections::Generic::IReadOnlyList_1<T>*
GlobalNamespace::DifficultyBeatmapSetExtensions::GetDifficultyBeatmapSetsWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<T>* difficultyBeatmapSets) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSetExtensions*>::get(), "GetDifficultyBeatmapSetsWithout360Movement",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(nullptr, ___internal_method, difficultyBeatmapSets);
}
template <typename T>
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*
GlobalNamespace::DifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<T>* difficultyBeatmapSets) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSetExtensions*>::get(), "GetPreviewDifficultyBeatmapSets",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(nullptr, ___internal_method,
                                                                                                                                                       difficultyBeatmapSets);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DifficultyBeatmapSetExtensions::DifficultyBeatmapSetExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
