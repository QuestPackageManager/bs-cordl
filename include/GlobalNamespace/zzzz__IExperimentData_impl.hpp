#pragma once
// IWYU pragma private; include "GlobalNamespace/IExperimentData.hpp"
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IExperimentData.get_experimentPlatformKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IExperimentData::*)()>(
    &::GlobalNamespace::IExperimentData::get_experimentPlatformKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IExperimentData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IExperimentData*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IExperimentData::get_experimentPlatformKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IExperimentData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
