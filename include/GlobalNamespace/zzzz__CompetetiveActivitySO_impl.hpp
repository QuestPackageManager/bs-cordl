#pragma once
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__CompetetiveActivitySO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompetetiveActivitySO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CompetetiveActivitySO::*)()>(&::GlobalNamespace::CompetetiveActivitySO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompetetiveActivitySO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CompetetiveActivitySO* GlobalNamespace::CompetetiveActivitySO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CompetetiveActivitySO*>());
}
inline void GlobalNamespace::CompetetiveActivitySO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompetetiveActivitySO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompetetiveActivitySO::CompetetiveActivitySO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
