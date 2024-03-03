#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__IndexFilterConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::IndexFilterConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter* (*)(::BeatmapSaveDataVersion4::IndexFilter, int32_t)>(
    &::BeatmapDataLoaderVersion4::IndexFilterConverter::Convert)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1300d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::IndexFilterConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::IndexFilter>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IndexFilter* BeatmapDataLoaderVersion4::IndexFilterConverter::Convert(::BeatmapSaveDataVersion4::IndexFilter indexFilter, int32_t groupSize) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::IndexFilterConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::IndexFilter>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*, false>(nullptr, ___internal_method, indexFilter, groupSize);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::IndexFilterConverter::IndexFilterConverter() {}
