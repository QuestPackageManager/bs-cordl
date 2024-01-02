#pragma once
#include "GlobalNamespace/zzzz__GenericSignal_1_impl.hpp"
#include "Zenject/zzzz__DiContainer_impl.hpp"
#include "GlobalNamespace/zzzz__DIContainerSignal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DIContainerSignal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DIContainerSignal::*)()>(&::GlobalNamespace::DIContainerSignal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20f55b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DIContainerSignal*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DIContainerSignal* GlobalNamespace::DIContainerSignal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DIContainerSignal*>());
}
inline void GlobalNamespace::DIContainerSignal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DIContainerSignal*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DIContainerSignal::DIContainerSignal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
