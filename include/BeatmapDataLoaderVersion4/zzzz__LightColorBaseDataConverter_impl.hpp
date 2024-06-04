#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightColorBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__LightColorBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEvent_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightColorBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightColorBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::LightColorEvent)>(
    &::BeatmapDataLoaderVersion4::LightColorBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x14fe044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::LightColorBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightColorEvent>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightColorBaseData* BeatmapDataLoaderVersion4::LightColorBaseDataConverter::Convert(float_t beat, ::BeatmapSaveDataVersion4::LightColorEvent lightColorEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::LightColorBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightColorEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightColorBaseData*, false>(nullptr, ___internal_method, beat, lightColorEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::LightColorBaseDataConverter::LightColorBaseDataConverter() {}
