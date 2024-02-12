#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoConfigForwarder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfigForwarder.CreateFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfigForwarder::CreateFromName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2496b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoConfigForwarder*>::get(), "CreateFromName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Security::Cryptography::CryptoConfigForwarder::CreateFromName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoConfigForwarder*>::get(), "CreateFromName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoConfigForwarder::CryptoConfigForwarder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
