#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSetExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions.GetBeatmapCharacteristics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> (*)(
    ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>)>(
    &::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x232d1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*>::get(), "GetBeatmapCharacteristics", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions.GetPreviewDifficultyBeatmapSetWithout360Movement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<
    ::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*)>(
    &::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x232d28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*>::get(), "GetPreviewDifficultyBeatmapSetWithout360Movement",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics(
    ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> previewDifficultyBeatmapSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*>::get(), "GetBeatmapCharacteristics", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>, false>(nullptr, ___internal_method,
                                                                                                                                                                  previewDifficultyBeatmapSet);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*
GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*>::get(), "GetPreviewDifficultyBeatmapSetWithout360Movement",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(nullptr, ___internal_method,
                                                                                                                                                       previewDifficultyBeatmapSet);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::PreviewDifficultyBeatmapSetExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
