#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightTranslationBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__LightTranslationBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEvent_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightTranslationBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::LightTranslationEvent)>(
    &::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x270efc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightTranslationEvent>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTranslationBaseData* BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter::Convert(float_t beat,
                                                                                                                          ::BeatmapSaveDataVersion4::LightTranslationEvent lightTranslationEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightTranslationEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBaseData*, false>(nullptr, ___internal_method, beat, lightTranslationEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter::LightTranslationBaseDataConverter() {}
