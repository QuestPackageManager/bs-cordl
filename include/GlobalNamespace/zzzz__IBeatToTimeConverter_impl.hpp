#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatToTimeConverter.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatToTimeConverter.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::IBeatToTimeConverter::*)(float_t)>(
    &::GlobalNamespace::IBeatToTimeConverter::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatToTimeConverter*>::get(), 0));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IBeatToTimeConverter::ConvertBeatToTime(float_t beat) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatToTimeConverter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
