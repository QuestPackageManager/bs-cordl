#pragma once
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__FxBeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataProcessor.UpdateByOther
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventDataProcessor::*)(
    ::GlobalNamespace::FloatFxBeatmapEventData*, ::GlobalNamespace::FloatFxBeatmapEventData*)>(&::GlobalNamespace::FloatFxBeatmapEventDataProcessor::UpdateByOther)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xdff934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventDataProcessor::*)()>(
    &::GlobalNamespace::FloatFxBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdff954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FloatFxBeatmapEventDataProcessor::UpdateByOther(::GlobalNamespace::FloatFxBeatmapEventData* current, ::GlobalNamespace::FloatFxBeatmapEventData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>::get(), "UpdateByOther", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, current, other);
}
inline ::GlobalNamespace::FloatFxBeatmapEventDataProcessor* GlobalNamespace::FloatFxBeatmapEventDataProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>());
}
inline void GlobalNamespace::FloatFxBeatmapEventDataProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxBeatmapEventDataProcessor::FloatFxBeatmapEventDataProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
