#pragma once
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "GlobalNamespace/zzzz__HelpNavigationController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpNavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpNavigationController::*)()>(&::GlobalNamespace::HelpNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b592c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpNavigationController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HelpNavigationController* GlobalNamespace::HelpNavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HelpNavigationController*>());
}
inline void GlobalNamespace::HelpNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpNavigationController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpNavigationController::HelpNavigationController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
