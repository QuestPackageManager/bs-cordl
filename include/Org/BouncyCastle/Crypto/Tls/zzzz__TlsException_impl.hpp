#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsException.hpp"
#include "System/IO/zzzz__IOException_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3389c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsException::_ctor(::StringW message, ::System::Exception* cause) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, cause);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsException* Org::BouncyCastle::Crypto::Tls::TlsException::New_ctor(::StringW message, ::System::Exception* cause) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsException*>(message, cause));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsException::TlsException() {}
