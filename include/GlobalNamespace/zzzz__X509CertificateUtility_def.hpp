#pragma once
// IWYU pragma private; include "GlobalNamespace/X509CertificateUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
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
class X509CertificateUtility__GetCertificateList_d__9;
}
namespace GlobalNamespace {
class X509CertificateUtility___c;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
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
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
class X509CertificateUtility__GetCertificateList_d__9;
}
namespace GlobalNamespace {
class X509CertificateUtility___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility_PasswordFinder);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9);
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility___c);
// Dependencies Org.BouncyCastle.OpenSsl.IPasswordFinder, System.Object
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

  /// @brief Method GetPassword, addr 0x22ec784, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetPassword();

  static inline ::GlobalNamespace::X509CertificateUtility_PasswordFinder* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::GlobalNamespace::X509CertificateUtility_PasswordFinder* New_ctor(::StringW password);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__password();

  constexpr void __cordl_internal_set__password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method .ctor, addr 0x22ec690, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0x22ec748, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15002 };

  /// @brief Field _password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::X509CertificateUtility_PasswordFinder, ____password) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility_PasswordFinder, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ICertificateEncryptionProvider, System.IDisposable, System.Object
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

  /// @brief Method Dispose, addr 0x22ec898, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider* New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey);

  /// @brief Method SignData, addr 0x22ec89c, size 0x194, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get__signer() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get__signer();

  constexpr void __cordl_internal_set__signer(::Org::BouncyCastle::Crypto::ISigner* value);

  /// @brief Method .ctor, addr 0x22ec78c, size 0x10c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15003 };

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
// CS Name: X509CertificateUtility/<>c
class CORDL_TYPE X509CertificateUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::X509CertificateUtility___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* __9__11_0;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* __9__12_0;

  static inline ::GlobalNamespace::X509CertificateUtility___c* New_ctor();

  /// @brief Method <ValidateCertificateChainDotNet>b__12_0, addr 0x22ecaf8, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ValidateCertificateChainDotNet_b__12_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s);

  /// @brief Method <ValidateCertificateChainUnity>b__11_0, addr 0x22eca94, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ValidateCertificateChainUnity_b__11_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s);

  /// @brief Method .ctor, addr 0x22eca8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::X509CertificateUtility___c* getStaticF___9();

  static inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* getStaticF___9__11_0();

  static inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::X509CertificateUtility___c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateUtility___c(X509CertificateUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateUtility___c(X509CertificateUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15004 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: X509CertificateUtility/<GetCertificateList>d__9
class CORDL_TYPE X509CertificateUtility__GetCertificateList_d__9 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x22ecbac, size 0x510, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator, addr 0x22ed1c0, size 0xa4, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
  System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current, addr 0x22ed178, size 0x8, virtual true, abstract: false, final
  /// true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x22ed264, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22ed180, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22ed1b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22ecb90, size 0x1c, virtual true, abstract: false, final true
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

  /// @brief Method <>m__Finally1, addr 0x22ed0bc, size 0xbc, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x22ecb5c, size 0x34, virtual false, abstract: false, final false
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
  constexpr X509CertificateUtility__GetCertificateList_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility__GetCertificateList_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateUtility__GetCertificateList_d__9(X509CertificateUtility__GetCertificateList_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility__GetCertificateList_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateUtility__GetCertificateList_d__9(X509CertificateUtility__GetCertificateList_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15005 };

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
static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, ___certificatePem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, _____3__certificatePem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, ___certificateChainPem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, _____3__certificateChainPem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, ____x509CertificateParser_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, _____7__wrap2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9, 0x58>, "Size mismatch!");

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

  using _GetCertificateList_d__9 = ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9;

  using __c = ::GlobalNamespace::X509CertificateUtility___c;

  /// @brief Field _rootCertificates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__rootCertificates, put = setStaticF__rootCertificates)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*,
                                                                                                        ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
      _rootCertificates;

  /// @brief Field kAwsRootCertificates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kAwsRootCertificates, put = setStaticF_kAwsRootCertificates)) ::StringW kAwsRootCertificates;

  /// @brief Field kBeatSaberDotComRootCertificate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kBeatSaberDotComRootCertificate, put = setStaticF_kBeatSaberDotComRootCertificate)) ::StringW kBeatSaberDotComRootCertificate;

  /// @brief Method GetCertificateEncryptionProvider, addr 0x22eb3f8, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ICertificateEncryptionProvider* GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password);

  /// @brief Method GetCertificateList, addr 0x22eb308, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetCertificateList(::StringW certificatePem,
                                                                                                                                                         ::StringW certificateChainPem);

  /// @brief Method GetRSACertificateEncryptionProvider, addr 0x22eb49c, size 0x1e8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*
  GetRSACertificateEncryptionProvider(::StringW privateKeyPem, ::GlobalNamespace::X509CertificateUtility_PasswordFinder* passwordFinder);

  /// @brief Method GetRootCertificates, addr 0x22eb244, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> GetRootCertificates();

  /// @brief Method GetRootCertificatesRaw, addr 0x22eb380, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetRootCertificatesRaw();

  /// @brief Method ValidateCertificateChain, addr 0x22eb684, size 0x64, virtual false, abstract: false, final false
  static inline void ValidateCertificateChain(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                              ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method ValidateCertificateChainDotNet, addr 0x22ec128, size 0x4dc, virtual false, abstract: false, final false
  static inline void ValidateCertificateChainDotNet(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                    ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method ValidateCertificateChainUnity, addr 0x22eb6e8, size 0xa40, virtual false, abstract: false, final false
  static inline void ValidateCertificateChainUnity(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                   ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  static inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
  getStaticF__rootCertificates();

  static inline ::StringW getStaticF_kAwsRootCertificates();

  static inline ::StringW getStaticF_kBeatSaberDotComRootCertificate();

  static inline void
  setStaticF__rootCertificates(::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> value);

  static inline void setStaticF_kAwsRootCertificates(::StringW value);

  static inline void setStaticF_kBeatSaberDotComRootCertificate(::StringW value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15006 };

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
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*, "", "X509CertificateUtility/<GetCertificateList>d__9");
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility___c*, "", "X509CertificateUtility/<>c");
