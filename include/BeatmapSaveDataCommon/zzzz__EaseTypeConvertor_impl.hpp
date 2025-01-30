#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/EaseTypeConvertor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseTypeConvertor_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::EaseTypeConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::EaseType (*)(::GlobalNamespace::EaseType)>(
    &::BeatmapSaveDataCommon::EaseTypeConvertor::Convert)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2709590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::EaseTypeConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseTypeConvertor::Convert(::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::EaseTypeConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType, false>(nullptr, ___internal_method, easeType);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::EaseTypeConvertor::EaseTypeConvertor() {}
