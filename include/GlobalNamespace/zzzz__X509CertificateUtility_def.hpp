#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateUtility)
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
namespace GlobalNamespace {
class __X509CertificateUtility__PasswordFinder;
}
namespace GlobalNamespace {
class __X509CertificateUtility__RSACertificateEncryptionProvider;
}
namespace GlobalNamespace {
class __X509CertificateUtility___GetCertificateList_d__9;
}
namespace GlobalNamespace {
class __X509CertificateUtility____c;
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
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
class __X509CertificateUtility__PasswordFinder;
}
namespace GlobalNamespace {
class __X509CertificateUtility__RSACertificateEncryptionProvider;
}
namespace GlobalNamespace {
class __X509CertificateUtility___GetCertificateList_d__9;
}
namespace GlobalNamespace {
class __X509CertificateUtility____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::X509CertificateUtility);
MARK_REF_PTR_T(::GlobalNamespace::__X509CertificateUtility__PasswordFinder);
MARK_REF_PTR_T(::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider);
MARK_REF_PTR_T(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9);
MARK_REF_PTR_T(::GlobalNamespace::__X509CertificateUtility____c);
// Type: ::PasswordFinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::X509CertificateUtility::PasswordFinder*
class CORDL_TYPE __X509CertificateUtility__PasswordFinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password))::ArrayW<char16_t, ::Array<char16_t>*> _password;

  /// @brief Convert operator to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
  constexpr operator ::Org::BouncyCastle::OpenSsl::IPasswordFinder*() noexcept;

  /// @brief Method GetPassword, addr 0xfc848c, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetPassword();

  static inline ::GlobalNamespace::__X509CertificateUtility__PasswordFinder* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::GlobalNamespace::__X509CertificateUtility__PasswordFinder* New_ctor(::StringW password);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__password();

  constexpr void __cordl_internal_set__password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method .ctor, addr 0xfc8398, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0xfc8450, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW password);

  /// @brief Convert to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
  constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* i___Org__BouncyCastle__OpenSsl__IPasswordFinder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X509CertificateUtility__PasswordFinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility__PasswordFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X509CertificateUtility__PasswordFinder(__X509CertificateUtility__PasswordFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility__PasswordFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X509CertificateUtility__PasswordFinder(__X509CertificateUtility__PasswordFinder const&) = delete;

  /// @brief Field _password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X509CertificateUtility__PasswordFinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility__PasswordFinder, ____password) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RSACertificateEncryptionProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::X509CertificateUtility::RSACertificateEncryptionProvider*
class CORDL_TYPE __X509CertificateUtility__RSACertificateEncryptionProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _signer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signer, put = __cordl_internal_set__signer))::Org::BouncyCastle::Crypto::ISigner* _signer;

  /// @brief Convert operator to "::GlobalNamespace::ICertificateEncryptionProvider"
  constexpr operator ::GlobalNamespace::ICertificateEncryptionProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0xfc85a0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider* New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey);

  /// @brief Method SignData, addr 0xfc85a4, size 0x194, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get__signer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __cordl_internal_get__signer() const;

  constexpr void __cordl_internal_set__signer(::Org::BouncyCastle::Crypto::ISigner* value);

  /// @brief Method .ctor, addr 0xfc8494, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey);

  /// @brief Convert to "::GlobalNamespace::ICertificateEncryptionProvider"
  constexpr ::GlobalNamespace::ICertificateEncryptionProvider* i___GlobalNamespace__ICertificateEncryptionProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X509CertificateUtility__RSACertificateEncryptionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility__RSACertificateEncryptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X509CertificateUtility__RSACertificateEncryptionProvider(__X509CertificateUtility__RSACertificateEncryptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility__RSACertificateEncryptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X509CertificateUtility__RSACertificateEncryptionProvider(__X509CertificateUtility__RSACertificateEncryptionProvider const&) = delete;

  /// @brief Field _signer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ____signer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider, ____signer) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetCertificateList>d__9
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::X509CertificateUtility::<GetCertificateList>d__9*
class CORDL_TYPE __X509CertificateUtility___GetCertificateList_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current))::System::Security::Cryptography::X509Certificates::
      X509Certificate2* System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Security::Cryptography::X509Certificates::X509Certificate2* __2__current;

  /// @brief Field <>3__certificateChainPem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__certificateChainPem, put = __cordl_internal_set___3__certificateChainPem))::StringW __3__certificateChainPem;

  /// @brief Field <>3__certificatePem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__certificatePem, put = __cordl_internal_set___3__certificatePem))::StringW __3__certificatePem;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Collections::IEnumerator* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <x509CertificateParser>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__x509CertificateParser_5__2,
                      put = __cordl_internal_set__x509CertificateParser_5__2))::Org::BouncyCastle::X509::X509CertificateParser* _x509CertificateParser_5__2;

  /// @brief Field certificateChainPem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateChainPem, put = __cordl_internal_set_certificateChainPem))::StringW certificateChainPem;

  /// @brief Field certificatePem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certificatePem, put = __cordl_internal_set_certificatePem))::StringW certificatePem;

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

  /// @brief Method MoveNext, addr 0xfc8788, size 0x540, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator, addr 0xfc8dd4, size 0xac, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
  System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current, addr 0xfc8d84, size 0x8, virtual true, abstract: false, final
  /// true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xfc8e80, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xfc8d8c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xfc8dcc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xfc876c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> const& __cordl_internal_get___2__current() const;

  constexpr ::StringW const& __cordl_internal_get___3__certificateChainPem() const;

  constexpr ::StringW& __cordl_internal_get___3__certificateChainPem();

  constexpr ::StringW const& __cordl_internal_get___3__certificatePem() const;

  constexpr ::StringW& __cordl_internal_get___3__certificatePem();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Org::BouncyCastle::X509::X509CertificateParser*& __cordl_internal_get__x509CertificateParser_5__2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509CertificateParser*> const& __cordl_internal_get__x509CertificateParser_5__2() const;

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

  /// @brief Method <>m__Finally1, addr 0xfc8cc8, size 0xbc, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0xfc8738, size 0x34, virtual false, abstract: false, final false
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
  constexpr __X509CertificateUtility___GetCertificateList_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility___GetCertificateList_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X509CertificateUtility___GetCertificateList_d__9(__X509CertificateUtility___GetCertificateList_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility___GetCertificateList_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X509CertificateUtility___GetCertificateList_d__9(__X509CertificateUtility___GetCertificateList_d__9 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, ___certificatePem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, _____3__certificatePem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, ___certificateChainPem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, _____3__certificateChainPem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, ____x509CertificateParser_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9, _____7__wrap2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::X509CertificateUtility::<>c*
class CORDL_TYPE __X509CertificateUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__X509CertificateUtility____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* __9__11_0;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* __9__12_0;

  static inline ::GlobalNamespace::__X509CertificateUtility____c* New_ctor();

  /// @brief Method <ValidateCertificateChainDotNet>b__12_0, addr 0xfc8f54, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ValidateCertificateChainDotNet_b__12_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s);

  /// @brief Method <ValidateCertificateChainUnity>b__11_0, addr 0xfc8ef0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ValidateCertificateChainUnity_b__11_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s);

  /// @brief Method .ctor, addr 0xfc8ee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__X509CertificateUtility____c* getStaticF___9();

  static inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* getStaticF___9__11_0();

  static inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::__X509CertificateUtility____c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X509CertificateUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X509CertificateUtility____c(__X509CertificateUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X509CertificateUtility____c(__X509CertificateUtility____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X509CertificateUtility____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::X509CertificateUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::X509CertificateUtility*
class CORDL_TYPE X509CertificateUtility : public ::System::Object {
public:
  // Declarations
  using PasswordFinder = ::GlobalNamespace::__X509CertificateUtility__PasswordFinder;

  using RSACertificateEncryptionProvider = ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider;

  using _GetCertificateList_d__9 = ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9;

  using __c = ::GlobalNamespace::__X509CertificateUtility____c;

  /// @brief Field _rootCertificates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__rootCertificates,
                             put = setStaticF__rootCertificates))::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*,
                                                                          ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> _rootCertificates;

  /// @brief Field kAwsRootCertificates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kAwsRootCertificates, put = setStaticF_kAwsRootCertificates))::StringW kAwsRootCertificates;

  /// @brief Field kBeatSaberDotComRootCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kBeatSaberDotComRootCertificate, put = setStaticF_kBeatSaberDotComRootCertificate))::StringW kBeatSaberDotComRootCertificate;

  /// @brief Method GetCertificateEncryptionProvider, addr 0xfc60ac, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ICertificateEncryptionProvider* GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password);

  /// @brief Method GetCertificateList, addr 0xfc5fbc, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetCertificateList(::StringW certificatePem,
                                                                                                                                                         ::StringW certificateChainPem);

  /// @brief Method GetRSACertificateEncryptionProvider, addr 0xfc6150, size 0x208, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*
  GetRSACertificateEncryptionProvider(::StringW privateKeyPem, ::GlobalNamespace::__X509CertificateUtility__PasswordFinder* passwordFinder);

  /// @brief Method GetRootCertificates, addr 0xfc5ef8, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> GetRootCertificates();

  /// @brief Method GetRootCertificatesRaw, addr 0xfc6034, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetRootCertificatesRaw();

  /// @brief Method ValidateCertificateChain, addr 0xfc6358, size 0x64, virtual false, abstract: false, final false
  static inline void ValidateCertificateChain(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                              ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method ValidateCertificateChainDotNet, addr 0xfc6e00, size 0x50c, virtual false, abstract: false, final false
  static inline void ValidateCertificateChainDotNet(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                    ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method ValidateCertificateChainUnity, addr 0xfc63bc, size 0xa44, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::X509CertificateUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility*, "", "X509CertificateUtility");
NEED_NO_BOX(::GlobalNamespace::__X509CertificateUtility__PasswordFinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X509CertificateUtility__PasswordFinder*, "", "X509CertificateUtility/PasswordFinder");
NEED_NO_BOX(::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*, "", "X509CertificateUtility/RSACertificateEncryptionProvider");
NEED_NO_BOX(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*, "", "X509CertificateUtility/<GetCertificateList>d__9");
NEED_NO_BOX(::GlobalNamespace::__X509CertificateUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X509CertificateUtility____c*, "", "X509CertificateUtility/<>c");
