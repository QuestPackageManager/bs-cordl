#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS12.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS12)
namespace Mono::Security::Cryptography {
class PKCS8_PrivateKeyInfo;
}
namespace Mono::Security::X509 {
class PKCS12_DeriveBytes;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security {
class PKCS7_ContentInfo;
}
namespace Mono::Security {
class PKCS7_EncryptedData;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::X509 {
class PKCS12;
}
namespace Mono::Security::X509 {
class PKCS12_DeriveBytes;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::PKCS12);
MARK_REF_PTR_T(::Mono::Security::X509::PKCS12_DeriveBytes);
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.PKCS12/DeriveBytes
class CORDL_TYPE PKCS12_DeriveBytes : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_HashName)) ::StringW HashName;

  __declspec(property(put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(put = set_Password)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Password;

  __declspec(property(put = set_Salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  /// @brief Field _hashName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashName, put = __cordl_internal_set__hashName)) ::StringW _hashName;

  /// @brief Field _iterations, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) int32_t _iterations;

  /// @brief Field _password, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _password;

  /// @brief Field _salt, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__salt, put = __cordl_internal_set__salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _salt;

  /// @brief Field ivDiversifier, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ivDiversifier, put = setStaticF_ivDiversifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ivDiversifier;

  /// @brief Field keyDiversifier, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_keyDiversifier, put = setStaticF_keyDiversifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> keyDiversifier;

  /// @brief Field macDiversifier, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_macDiversifier, put = setStaticF_macDiversifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> macDiversifier;

  /// @brief Method Adjust, addr 0x3c3a99c, size 0xc0, virtual false, abstract: false, final false
  inline void Adjust(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Derive, addr 0x3c3aa5c, size 0x430, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Derive(::ArrayW<uint8_t, ::Array<uint8_t>*> diversifier, int32_t n);

  /// @brief Method DeriveIV, addr 0x3c3633c, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveIV(int32_t size);

  /// @brief Method DeriveKey, addr 0x3c362cc, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveKey(int32_t size);

  /// @brief Method DeriveMAC, addr 0x3c37b38, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveMAC(int32_t size);

  static inline ::Mono::Security::X509::PKCS12_DeriveBytes* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__hashName() const;

  constexpr ::StringW& __cordl_internal_get__hashName();

  constexpr int32_t const& __cordl_internal_get__iterations() const;

  constexpr int32_t& __cordl_internal_get__iterations();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__password();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__salt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__salt();

  constexpr void __cordl_internal_set__hashName(::StringW value);

  constexpr void __cordl_internal_set__iterations(int32_t value);

  constexpr void __cordl_internal_set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3c36160, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ivDiversifier();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_keyDiversifier();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_macDiversifier();

  static inline void setStaticF_ivDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_keyDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_macDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_HashName, addr 0x3c3a98c, size 0x8, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

  /// @brief Method set_IterationCount, addr 0x3c3a994, size 0x8, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method set_Password, addr 0x3c36168, size 0xbc, virtual false, abstract: false, final false
  inline void set_Password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Salt, addr 0x3c36224, size 0xa8, virtual false, abstract: false, final false
  inline void set_Salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS12_DeriveBytes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS12_DeriveBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS12_DeriveBytes(PKCS12_DeriveBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS12_DeriveBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS12_DeriveBytes(PKCS12_DeriveBytes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15926 };

  /// @brief Field _hashName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____hashName;

  /// @brief Field _iterations, offset: 0x18, size: 0x4, def value: None
  int32_t ____iterations;

  /// @brief Field _password, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____password;

  /// @brief Field _salt, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____salt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____hashName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____iterations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____salt) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::PKCS12_DeriveBytes, 0x30>, "Size mismatch!");

} // namespace Mono::Security::X509
// Dependencies System.ICloneable, System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.PKCS12
class CORDL_TYPE PKCS12 : public ::System::Object {
public:
  // Declarations
  using DeriveBytes = ::Mono::Security::X509::PKCS12_DeriveBytes;

  __declspec(property(get = get_Certificates)) ::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_IterationCount, put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Keys)) ::System::Collections::ArrayList* Keys;

  __declspec(property(put = set_Password)) ::StringW Password;

  __declspec(property(get = get_RNG)) ::System::Security::Cryptography::RandomNumberGenerator* RNG;

  /// @brief Field _certs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__certs, put = __cordl_internal_set__certs)) ::Mono::Security::X509::X509CertificateCollection* _certs;

  /// @brief Field _certsChanged, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__certsChanged, put = __cordl_internal_set__certsChanged)) bool _certsChanged;

  /// @brief Field _iterations, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) int32_t _iterations;

  /// @brief Field _keyBags, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keyBags, put = __cordl_internal_set__keyBags)) ::System::Collections::ArrayList* _keyBags;

  /// @brief Field _keyBagsChanged, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__keyBagsChanged, put = __cordl_internal_set__keyBagsChanged)) bool _keyBagsChanged;

  /// @brief Field _password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _password;

  /// @brief Field _rng, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rng, put = __cordl_internal_set__rng)) ::System::Security::Cryptography::RandomNumberGenerator* _rng;

  /// @brief Field _safeBags, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__safeBags, put = __cordl_internal_set__safeBags)) ::System::Collections::ArrayList* _safeBags;

  /// @brief Field _secretBags, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__secretBags, put = __cordl_internal_set__secretBags)) ::System::Collections::ArrayList* _secretBags;

  /// @brief Field _secretBagsChanged, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__secretBagsChanged, put = __cordl_internal_set__secretBagsChanged)) bool _secretBagsChanged;

  /// @brief Field password_max_length, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_password_max_length, put = setStaticF_password_max_length)) int32_t password_max_length;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method AddCertificate, addr 0x3c39dd0, size 0x8, virtual false, abstract: false, final false
  inline void AddCertificate(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method AddCertificate, addr 0x3c3a0c8, size 0x24c, virtual false, abstract: false, final false
  inline void AddCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes);

  /// @brief Method AddPrivateKey, addr 0x3c36d04, size 0x25c, virtual false, abstract: false, final false
  inline void AddPrivateKey(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* pki);

  /// @brief Method CertificateSafeBag, addr 0x3c36f60, size 0xbd8, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate* x509, ::System::Collections::IDictionary* attributes);

  /// @brief Method Clone, addr 0x3c3a820, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method Compare, addr 0x3c34610, size 0x88, virtual false, abstract: false, final false
  inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> actual);

  /// @brief Method Decode, addr 0x3c33e00, size 0x684, virtual false, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Decrypt, addr 0x3c355bc, size 0x1b0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedData);

  /// @brief Method Decrypt, addr 0x3c34d6c, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::Mono::Security::PKCS7_EncryptedData* ed);

  /// @brief Method Encrypt, addr 0x3c363ac, size 0x250, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method EncryptedContentInfo, addr 0x3c39dd8, size 0x2f0, virtual false, abstract: false, final false
  inline ::Mono::Security::PKCS7_ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1* safeBags, ::StringW algorithmOid);

  /// @brief Method Finalize, addr 0x3c34dfc, size 0xac, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetBytes, addr 0x3c37ba8, size 0x2220, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method GetExistingParameters, addr 0x3c365fc, size 0x288, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::DSAParameters GetExistingParameters(::ByRef<bool> found);

  /// @brief Method GetSymmetricAlgorithm, addr 0x3c35bcc, size 0x594, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method MAC, addr 0x3c344bc, size 0x154, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> MAC(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations,
                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::X509::PKCS12* New_ctor();

  static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  /// @brief Method ReadSafeBag, addr 0x3c34698, size 0x6d4, virtual false, abstract: false, final false
  inline void ReadSafeBag(::Mono::Security::ASN1* safeBag);

  /// @brief Method RemoveCertificate, addr 0x3c39dc8, size 0x8, virtual false, abstract: false, final false
  inline void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method RemoveCertificate, addr 0x3c3a314, size 0x50c, virtual false, abstract: false, final false
  inline void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attrs);

  constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get__certs() const;

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get__certs();

  constexpr bool const& __cordl_internal_get__certsChanged() const;

  constexpr bool& __cordl_internal_get__certsChanged();

  constexpr int32_t const& __cordl_internal_get__iterations() const;

  constexpr int32_t& __cordl_internal_get__iterations();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__keyBags() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__keyBags();

  constexpr bool const& __cordl_internal_get__keyBagsChanged() const;

  constexpr bool& __cordl_internal_get__keyBagsChanged();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__password();

  constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get__rng() const;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get__rng();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__safeBags() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__safeBags();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__secretBags() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__secretBags();

  constexpr bool const& __cordl_internal_get__secretBagsChanged() const;

  constexpr bool& __cordl_internal_get__secretBagsChanged();

  constexpr void __cordl_internal_set__certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__certsChanged(bool value);

  constexpr void __cordl_internal_set__iterations(int32_t value);

  constexpr void __cordl_internal_set__keyBags(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__keyBagsChanged(bool value);

  constexpr void __cordl_internal_set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  constexpr void __cordl_internal_set__safeBags(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__secretBags(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__secretBagsChanged(bool value);

  /// @brief Method .ctor, addr 0x3c33b38, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c33c10, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x3c34484, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  static inline int32_t getStaticF_password_max_length();

  /// @brief Method get_Certificates, addr 0x3c3576c, size 0x440, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_IterationCount, addr 0x3c34ea8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method get_Keys, addr 0x3c34eb8, size 0x704, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_Keys();

  /// @brief Method get_MaximumPasswordLength, addr 0x3c3a8e8, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MaximumPasswordLength();

  /// @brief Method get_RNG, addr 0x3c35bac, size 0x20, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RandomNumberGenerator* get_RNG();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  static inline void setStaticF_password_max_length(int32_t value);

  /// @brief Method set_IterationCount, addr 0x3c34eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method set_Password, addr 0x3c33c44, size 0x1bc, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS12(PKCS12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS12(PKCS12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15927 };

  /// @brief Field _password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____password;

  /// @brief Field _keyBags, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____keyBags;

  /// @brief Field _secretBags, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____secretBags;

  /// @brief Field _certs, offset: 0x28, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ____certs;

  /// @brief Field _keyBagsChanged, offset: 0x30, size: 0x1, def value: None
  bool ____keyBagsChanged;

  /// @brief Field _secretBagsChanged, offset: 0x31, size: 0x1, def value: None
  bool ____secretBagsChanged;

  /// @brief Field _certsChanged, offset: 0x32, size: 0x1, def value: None
  bool ____certsChanged;

  /// @brief Field _iterations, offset: 0x34, size: 0x4, def value: None
  int32_t ____iterations;

  /// @brief Field _safeBags, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____safeBags;

  /// @brief Field _rng, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ____rng;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::PKCS12, ____password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____keyBags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____secretBags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____certs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____keyBagsChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____secretBagsChanged) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____certsChanged) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____iterations) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____safeBags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____rng) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::PKCS12, 0x48>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::PKCS12);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::PKCS12*, "Mono.Security.X509", "PKCS12");
NEED_NO_BOX(::Mono::Security::X509::PKCS12_DeriveBytes);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::PKCS12_DeriveBytes*, "Mono.Security.X509", "PKCS12/DeriveBytes");
