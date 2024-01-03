#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__X509Pal_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
//  Writing Method size for method: ::Mono::X509Pal.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::X509PalImpl* (*)()>(&::Mono::X509Pal::get_Instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2816e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509Pal*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Mono::X509PalImpl* Mono::X509Pal::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509Pal*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::X509Pal::X509Pal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
