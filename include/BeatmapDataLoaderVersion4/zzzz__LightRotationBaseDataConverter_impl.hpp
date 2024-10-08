#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightRotationBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__LightRotationBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEvent_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::LightRotationEvent)>(
    &::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26cd6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightRotationEvent>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightRotationBaseData* BeatmapDataLoaderVersion4::LightRotationBaseDataConverter::Convert(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightRotationEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*, false>(nullptr, ___internal_method, beat, lightRotationEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter::LightRotationBaseDataConverter() {}
