#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsProviderFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProviderFactory_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProviderFactory.GetProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)()>(
    &::Mono::Security::Interface::MonoTlsProviderFactory::GetProvider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3c47e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsProviderFactory*>::get(),
                                                                               "GetProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Mono::Security::Interface::MonoTlsProvider* Mono::Security::Interface::MonoTlsProviderFactory::GetProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsProviderFactory*>::get(),
                                                                             "GetProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsProvider*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoTlsProviderFactory::MonoTlsProviderFactory() {}
