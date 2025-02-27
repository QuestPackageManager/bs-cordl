#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/FloatFxBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__FloatFxBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FloatFxEvent_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FloatFxBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::FloatFxEvent)>(
    &::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27135bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::FloatFxEvent>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::FloatFxBaseData* BeatmapDataLoaderVersion4::FloatFxBaseDataConverter::Convert(float_t beat, ::BeatmapSaveDataVersion4::FloatFxEvent floatFxEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::FloatFxEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBaseData*, false>(nullptr, ___internal_method, beat, floatFxEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter::FloatFxBaseDataConverter() {}
