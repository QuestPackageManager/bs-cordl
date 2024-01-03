#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Entitlements_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Entitlements.IsUserEntitledToApplication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Entitlements::IsUserEntitledToApplication)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x26fcbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Entitlements*>::get(),
                                                                               "IsUserEntitledToApplication", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::Entitlements::IsUserEntitledToApplication() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Entitlements*>::get(),
                                                                             "IsUserEntitledToApplication", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Entitlements::Entitlements() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
