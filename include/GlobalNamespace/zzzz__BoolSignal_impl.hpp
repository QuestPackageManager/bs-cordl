#pragma once
#include "GlobalNamespace/zzzz__GenericSignal_1_impl.hpp"
#include "GlobalNamespace/zzzz__BoolSignal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoolSignal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BoolSignal::*)()>(&::GlobalNamespace::BoolSignal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fa18a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BoolSignal*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BoolSignal* GlobalNamespace::BoolSignal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BoolSignal*>());
}
inline void GlobalNamespace::BoolSignal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BoolSignal*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoolSignal::BoolSignal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
