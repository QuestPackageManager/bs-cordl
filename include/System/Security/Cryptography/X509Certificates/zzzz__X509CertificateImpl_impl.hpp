#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509CertificateImpl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.ThrowIfContextInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::ThrowIfContextInvalid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b12b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "ThrowIfContextInvalid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(&::System::Security::Cryptography::X509Certificates::X509CertificateImpl::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_Issuer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_Subject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_RawData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_NotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_NotAfter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_NotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_NotBefore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_Thumbprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_Thumbprint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b12c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "GetHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_KeyAlgorithmParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_KeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_PublicKeyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_PublicKeyValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_SerialNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.get_HasPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.GetRSAPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetRSAPrivateKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.GetDSAPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetDSAPrivateKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.CopyWithPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(::System::Security::Cryptography::RSA*)>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::CopyWithPrivateKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(::System::Object*)>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::Equals)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b12cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b116f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b12e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::Finalize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b12e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509CertificateImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509CertificateImpl::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509CertificateImpl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b12e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_IsValid() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509CertificateImpl::ThrowIfContextInvalid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "ThrowIfContextInvalid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509CertificateImpl::Clone() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_Issuer() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_Subject() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_RawData() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_NotAfter() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_NotBefore() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_Thumbprint() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetHashCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "GetHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_KeyAlgorithm() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_KeyAlgorithmParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_PublicKeyValue() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_SerialNumber() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509CertificateImpl::get_HasPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetRSAPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::X509Certificates::X509CertificateImpl::GetDSAPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
System::Security::Cryptography::X509Certificates::X509CertificateImpl::CopyWithPrivateKey(::System::Security::Cryptography::RSA* privateKey) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, privateKey);
}
inline bool System::Security::Cryptography::X509Certificates::X509CertificateImpl::Equals(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509CertificateImpl::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::X509Certificates::X509CertificateImpl::Finalize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509CertificateImpl::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509CertificateImpl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::X509Certificates::X509CertificateImpl::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::X509Certificates::X509CertificateImpl::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl::X509CertificateImpl() {}
