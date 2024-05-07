#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsCipherFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory.CreateCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher* (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11b7b1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b7b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::i___Org__BouncyCastle__Crypto__Tls__TlsCipherFactory() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(static_cast<void*>(this));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                           int32_t encryptionAlgorithm, int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, false>(this, ___internal_method, context, encryptionAlgorithm, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory* Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>());
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::AbstractTlsCipherFactory() {}
