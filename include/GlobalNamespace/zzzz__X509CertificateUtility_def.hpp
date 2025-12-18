#pragma once
// IWYU pragma private; include "GlobalNamespace/X509CertificateUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateUtility)
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
namespace GlobalNamespace {
class X509CertificateUtility_PasswordFinder;
}
namespace GlobalNamespace {
class X509CertificateUtility_RSACertificateEncryptionProvider;
}
namespace GlobalNamespace {
class X509CertificateUtility__GetCertificateList_d__5;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
namespace Org::BouncyCastle::X509 {
class X509CertificateParser;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class X509CertificateUtility;
}
namespace GlobalNamespace {
class X509CertificateUtility_PasswordFinder;
}
namespace GlobalNamespace {
class X509CertificateUtility_RSACertificateEncryptionProvider;
}
namespace GlobalNamespace {
class X509CertificateUtility__GetCertificateList_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility_PasswordFinder);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: X509CertificateUtility/PasswordFinder
class CORDL_TYPE X509CertificateUtility_PasswordFinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::ArrayW<char16_t, ::Array<char16_t>*> _password;

  /// @brief Convert operator to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
  constexpr operator ::Org::BouncyCastle::OpenSsl::IPasswordFinder*() noexcept;

  /// @brief Method GetPassword, addr 0x3246efc, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetPassword();

  static inline ::GlobalNamespace::X509CertificateUtility_PasswordFinder* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::GlobalNamespace::X509CertificateUtility_PasswordFinder* New_ctor(::StringW password);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__password();

  constexpr void __cordl_internal_set__password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method .ctor, addr 0x3246e4c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0x3246a20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW password);

  /// @brief Convert to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
  constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* i___Org__BouncyCastle__OpenSsl__IPasswordFinder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateUtility_PasswordFinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility_PasswordFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateUtility_PasswordFinder(X509CertificateUtility_PasswordFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility_PasswordFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateUtility_PasswordFinder(X509CertificateUtility_PasswordFinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18271 };

  /// @brief Field _password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::X509CertificateUtility_PasswordFinder, ____password) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility_PasswordFinder, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: X509CertificateUtility/RSACertificateEncryptionProvider
class CORDL_TYPE X509CertificateUtility_RSACertificateEncryptionProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _signer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signer, put = __cordl_internal_set__signer)) ::Org::BouncyCastle::Crypto::ISigner* _signer;

  /// @brief Convert operator to "::GlobalNamespace::ICertificateEncryptionProvider"
  constexpr operator ::GlobalNamespace::ICertificateEncryptionProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3246f04, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider* New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey);

  /// @brief Method SignData, addr 0x3246f08, size 0x198, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get__signer() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get__signer();

  constexpr void __cordl_internal_set__signer(::Org::BouncyCastle::Crypto::ISigner* value);

  /// @brief Method .ctor, addr 0x3246c3c, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey);

  /// @brief Convert to "::GlobalNamespace::ICertificateEncryptionProvider"
  constexpr ::GlobalNamespace::ICertificateEncryptionProvider* i___GlobalNamespace__ICertificateEncryptionProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateUtility_RSACertificateEncryptionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility_RSACertificateEncryptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateUtility_RSACertificateEncryptionProvider(X509CertificateUtility_RSACertificateEncryptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility_RSACertificateEncryptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateUtility_RSACertificateEncryptionProvider(X509CertificateUtility_RSACertificateEncryptionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18272 };

  /// @brief Field _signer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ____signer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider, ____signer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: X509CertificateUtility/<GetCertificateList>d__5
class CORDL_TYPE X509CertificateUtility__GetCertificateList_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*
      System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* __2__current;

  /// @brief Field <>3__certificateChainPem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__certificateChainPem, put = __cordl_internal_set___3__certificateChainPem)) ::StringW __3__certificateChainPem;

  /// @brief Field <>3__certificatePem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__certificatePem, put = __cordl_internal_set___3__certificatePem)) ::StringW __3__certificatePem;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::IEnumerator* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <x509CertificateParser>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__x509CertificateParser_5__2,
                      put = __cordl_internal_set__x509CertificateParser_5__2)) ::Org::BouncyCastle::X509::X509CertificateParser* _x509CertificateParser_5__2;

  /// @brief Field certificateChainPem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateChainPem, put = __cordl_internal_set_certificateChainPem)) ::StringW certificateChainPem;

  /// @brief Field certificatePem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certificatePem, put = __cordl_internal_set_certificatePem)) ::StringW certificatePem;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32470bc, size 0x4f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator, addr 0x32476b4, size 0xa0, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
  System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current, addr 0x324766c, size 0x8, virtual true, abstract: false, final
  /// true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3247754, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3247674, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32476ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32470a0, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get___2__current();

  constexpr ::StringW const& __cordl_internal_get___3__certificateChainPem() const;

  constexpr ::StringW& __cordl_internal_get___3__certificateChainPem();

  constexpr ::StringW const& __cordl_internal_get___3__certificatePem() const;

  constexpr ::StringW& __cordl_internal_get___3__certificatePem();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Org::BouncyCastle::X509::X509CertificateParser* const& __cordl_internal_get__x509CertificateParser_5__2() const;

  constexpr ::Org::BouncyCastle::X509::X509CertificateParser*& __cordl_internal_get__x509CertificateParser_5__2();

  constexpr ::StringW const& __cordl_internal_get_certificateChainPem() const;

  constexpr ::StringW& __cordl_internal_get_certificateChainPem();

  constexpr ::StringW const& __cordl_internal_get_certificatePem() const;

  constexpr ::StringW& __cordl_internal_get_certificatePem();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Security::Cryptography::X509Certificates::X509Certificate2* value);

  constexpr void __cordl_internal_set___3__certificateChainPem(::StringW value);

  constexpr void __cordl_internal_set___3__certificatePem(::StringW value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__x509CertificateParser_5__2(::Org::BouncyCastle::X509::X509CertificateParser* value);

  constexpr void __cordl_internal_set_certificateChainPem(::StringW value);

  constexpr void __cordl_internal_set_certificatePem(::StringW value);

  /// @brief Method <>m__Finally1, addr 0x32475ac, size 0xc0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3246dc4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
  i___System__Collections__Generic__IEnumerable_1___System__Security__Cryptography__X509Certificates__X509Certificate2__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
  i___System__Collections__Generic__IEnumerator_1___System__Security__Cryptography__X509Certificates__X509Certificate2__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateUtility__GetCertificateList_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility__GetCertificateList_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateUtility__GetCertificateList_d__5(X509CertificateUtility__GetCertificateList_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility__GetCertificateList_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateUtility__GetCertificateList_d__5(X509CertificateUtility__GetCertificateList_d__5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18273 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field certificatePem, offset: 0x28, size: 0x8, def value: None
  ::StringW ___certificatePem;

  /// @brief Field <>3__certificatePem, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__certificatePem;

  /// @brief Field certificateChainPem, offset: 0x38, size: 0x8, def value: None
  ::StringW ___certificateChainPem;

  /// @brief Field <>3__certificateChainPem, offset: 0x40, size: 0x8, def value: None
  ::StringW _____3__certificateChainPem;

  /// @brief Field <x509CertificateParser>5__2, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509CertificateParser* ____x509CertificateParser_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, ___certificatePem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, _____3__certificatePem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, ___certificateChainPem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, _____3__certificateChainPem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, ____x509CertificateParser_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, _____7__wrap2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: X509CertificateUtility
class CORDL_TYPE X509CertificateUtility : public ::System::Object {
public:
  // Declarations
  using PasswordFinder = ::GlobalNamespace::X509CertificateUtility_PasswordFinder;

  using RSACertificateEncryptionProvider = ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider;

  using _GetCertificateList_d__5 = ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5;

  /// @brief Field kAwsRootCertificates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kAwsRootCertificates, put = setStaticF_kAwsRootCertificates)) ::StringW kAwsRootCertificates;

  /// @brief Method GetCertificateEncryptionProvider, addr 0x3246970, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ICertificateEncryptionProvider* GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password);

  /// @brief Method GetCertificateList, addr 0x3246d48, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetCertificateList(::StringW certificatePem,
                                                                                                                                                         ::StringW certificateChainPem);

  /// @brief Method GetRSACertificateEncryptionProvider, addr 0x3246a48, size 0x1f4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*
  GetRSACertificateEncryptionProvider(::StringW privateKeyPem, ::GlobalNamespace::X509CertificateUtility_PasswordFinder* passwordFinder);

  static inline ::StringW getStaticF_kAwsRootCertificates();

  static inline void setStaticF_kAwsRootCertificates(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateUtility(X509CertificateUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateUtility(X509CertificateUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility*, "", "X509CertificateUtility");
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility_PasswordFinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility_PasswordFinder*, "", "X509CertificateUtility/PasswordFinder");
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*, "", "X509CertificateUtility/RSACertificateEncryptionProvider");
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__5*, "", "X509CertificateUtility/<GetCertificateList>d__5");
