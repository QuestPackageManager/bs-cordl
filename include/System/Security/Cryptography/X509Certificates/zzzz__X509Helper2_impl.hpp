#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509Helper2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Helper2_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.GetMonoCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper2::GetMonoCertificate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63b1210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(),
                                                             { "GetMonoCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.CreateChainImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainImpl* (*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63b12e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(), { "CreateChainImpl", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper2::IsValid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63b1348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(),
                                                             { "IsValid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.ThrowIfContextInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x63b135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(),
                                                             { "ThrowIfContextInvalid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.GetInvalidChainContextException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63b139c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(), { "GetInvalidChainContextException", {}, {} })));
    return ___internal_method;
  }
};
inline ::Mono::Security::X509::X509Certificate*
System::Security::Cryptography::X509Certificates::X509Helper2::GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(),
                                                           { "GetMonoCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(nullptr, ___internal_method, certificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl(bool useMachineContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(), { "CreateChainImpl", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>(nullptr, ___internal_method, useMachineContext);
}
inline bool System::Security::Cryptography::X509Certificates::X509Helper2::IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(),
                                                                                         { "IsValid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, impl);
}
inline void System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(),
                                                           { "ThrowIfContextInvalid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, impl);
}
inline ::System::Exception* System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper2*>(), { "GetInvalidChainContextException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Helper2::X509Helper2() {}
