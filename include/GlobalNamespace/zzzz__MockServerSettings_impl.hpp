#pragma once
#include "GlobalNamespace/zzzz__MockPlayerSettings_impl.hpp"
#include "GlobalNamespace/zzzz__MockServerSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockServerSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockServerSettings::*)()>(&::GlobalNamespace::MockServerSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2244568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockServerSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MockServerSettings* GlobalNamespace::MockServerSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockServerSettings*>());
}
inline void GlobalNamespace::MockServerSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockServerSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockServerSettings::MockServerSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
