#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS12)
namespace Mono::Security::Cryptography {
class __PKCS8__PrivateKeyInfo;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security::X509 {
class __PKCS12__DeriveBytes;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security {
class __PKCS7__ContentInfo;
}
namespace Mono::Security {
class __PKCS7__EncryptedData;
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
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::X509 {
class PKCS12;
}
namespace Mono::Security::X509 {
class __PKCS12__DeriveBytes;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::PKCS12);
MARK_REF_PTR_T(::Mono::Security::X509::__PKCS12__DeriveBytes);
// Type: ::DeriveBytes
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13699))
// CS Name: ::PKCS12::DeriveBytes*
class CORDL_TYPE __PKCS12__DeriveBytes : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hashName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashName, put = __cordl_internal_set__hashName))::StringW _hashName;

  /// @brief Field _iterations, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) int32_t _iterations;

  /// @brief Field _password, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password))::ArrayW<uint8_t, ::Array<uint8_t>*> _password;

  /// @brief Field _salt, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__salt, put = __cordl_internal_set__salt))::ArrayW<uint8_t, ::Array<uint8_t>*> _salt;

  /// @brief Field keyDiversifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keyDiversifier, put = setStaticF_keyDiversifier))::ArrayW<uint8_t, ::Array<uint8_t>*> keyDiversifier;

  /// @brief Field ivDiversifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ivDiversifier, put = setStaticF_ivDiversifier))::ArrayW<uint8_t, ::Array<uint8_t>*> ivDiversifier;

  /// @brief Field macDiversifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_macDiversifier, put = setStaticF_macDiversifier))::ArrayW<uint8_t, ::Array<uint8_t>*> macDiversifier;

  __declspec(property(put = set_HashName))::StringW HashName;

  __declspec(property(put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(put = set_Password))::ArrayW<uint8_t, ::Array<uint8_t>*> Password;

  __declspec(property(put = set_Salt))::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  constexpr ::StringW& __cordl_internal_get__hashName();

  constexpr ::StringW const& __cordl_internal_get__hashName() const;

  constexpr void __cordl_internal_set__hashName(::StringW value);

  constexpr int32_t& __cordl_internal_get__iterations();

  constexpr int32_t const& __cordl_internal_get__iterations() const;

  constexpr void __cordl_internal_set__iterations(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__password();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__password() const;

  constexpr void __cordl_internal_set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__salt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__salt() const;

  constexpr void __cordl_internal_set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_keyDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_keyDiversifier();

  static inline void setStaticF_ivDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ivDiversifier();

  static inline void setStaticF_macDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_macDiversifier();

  static inline ::Mono::Security::X509::__PKCS12__DeriveBytes* New_ctor();

  /// @brief Method .ctor, addr 0x2412a6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_HashName, addr 0x2417340, size 0x8, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

  /// @brief Method set_IterationCount, addr 0x2417348, size 0x8, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method set_Password, addr 0x2412a74, size 0xbc, virtual false, abstract: false, final false
  inline void set_Password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Salt, addr 0x2412b30, size 0xa8, virtual false, abstract: false, final false
  inline void set_Salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method Adjust, addr 0x2417350, size 0xdc, virtual false, abstract: false, final false
  inline void Adjust(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Derive, addr 0x241742c, size 0x430, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Derive(::ArrayW<uint8_t, ::Array<uint8_t>*> diversifier, int32_t n);

  /// @brief Method DeriveKey, addr 0x2412bd8, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveKey(int32_t size);

  /// @brief Method DeriveIV, addr 0x2412c48, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveIV(int32_t size);

  /// @brief Method DeriveMAC, addr 0x241449c, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveMAC(int32_t size);

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS12__DeriveBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS12__DeriveBytes(__PKCS12__DeriveBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS12__DeriveBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS12__DeriveBytes(__PKCS12__DeriveBytes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS12__DeriveBytes();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::__PKCS12__DeriveBytes, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::__PKCS12__DeriveBytes, ____hashName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::__PKCS12__DeriveBytes, ____iterations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::__PKCS12__DeriveBytes, ____password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::__PKCS12__DeriveBytes, ____salt) == 0x28, "Offset mismatch!");

} // namespace Mono::Security::X509
// Type: Mono.Security.X509::PKCS12
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13700))
// CS Name: ::Mono.Security.X509::PKCS12*
class CORDL_TYPE PKCS12 : public ::System::Object {
public:
  // Declarations
  using DeriveBytes = ::Mono::Security::X509::__PKCS12__DeriveBytes;

  /// @brief Field _password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password))::ArrayW<uint8_t, ::Array<uint8_t>*> _password;

  /// @brief Field _keyBags, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keyBags, put = __cordl_internal_set__keyBags))::System::Collections::ArrayList* _keyBags;

  /// @brief Field _secretBags, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__secretBags, put = __cordl_internal_set__secretBags))::System::Collections::ArrayList* _secretBags;

  /// @brief Field _certs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__certs, put = __cordl_internal_set__certs))::Mono::Security::X509::X509CertificateCollection* _certs;

  /// @brief Field _keyBagsChanged, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__keyBagsChanged, put = __cordl_internal_set__keyBagsChanged)) bool _keyBagsChanged;

  /// @brief Field _secretBagsChanged, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__secretBagsChanged, put = __cordl_internal_set__secretBagsChanged)) bool _secretBagsChanged;

  /// @brief Field _certsChanged, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__certsChanged, put = __cordl_internal_set__certsChanged)) bool _certsChanged;

  /// @brief Field _iterations, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) int32_t _iterations;

  /// @brief Field _safeBags, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__safeBags, put = __cordl_internal_set__safeBags))::System::Collections::ArrayList* _safeBags;

  /// @brief Field _rng, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rng, put = __cordl_internal_set__rng))::System::Security::Cryptography::RandomNumberGenerator* _rng;

  /// @brief Field password_max_length, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_password_max_length, put = setStaticF_password_max_length)) int32_t password_max_length;

  __declspec(property(put = set_Password))::StringW Password;

  __declspec(property(get = get_IterationCount, put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Keys))::System::Collections::ArrayList* Keys;

  __declspec(property(get = get_Certificates))::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_RNG))::System::Security::Cryptography::RandomNumberGenerator* RNG;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__password();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__password() const;

  constexpr void __cordl_internal_set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__keyBags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__keyBags() const;

  constexpr void __cordl_internal_set__keyBags(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__secretBags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__secretBags() const;

  constexpr void __cordl_internal_set__secretBags(::System::Collections::ArrayList* value);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get__certs();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __cordl_internal_get__certs() const;

  constexpr void __cordl_internal_set__certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr bool& __cordl_internal_get__keyBagsChanged();

  constexpr bool const& __cordl_internal_get__keyBagsChanged() const;

  constexpr void __cordl_internal_set__keyBagsChanged(bool value);

  constexpr bool& __cordl_internal_get__secretBagsChanged();

  constexpr bool const& __cordl_internal_get__secretBagsChanged() const;

  constexpr void __cordl_internal_set__secretBagsChanged(bool value);

  constexpr bool& __cordl_internal_get__certsChanged();

  constexpr bool const& __cordl_internal_get__certsChanged() const;

  constexpr void __cordl_internal_set__certsChanged(bool value);

  constexpr int32_t& __cordl_internal_get__iterations();

  constexpr int32_t const& __cordl_internal_get__iterations() const;

  constexpr void __cordl_internal_set__iterations(int32_t value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__safeBags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__safeBags() const;

  constexpr void __cordl_internal_set__safeBags(::System::Collections::ArrayList* value);

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get__rng();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& __cordl_internal_get__rng() const;

  constexpr void __cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  static inline void setStaticF_password_max_length(int32_t value);

  static inline int32_t getStaticF_password_max_length();

  static inline ::Mono::Security::X509::PKCS12* New_ctor();

  /// @brief Method .ctor, addr 0x24103ec, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x24104d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  /// @brief Method .ctor, addr 0x2410d70, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  /// @brief Method Decode, addr 0x24106c0, size 0x6b0, virtual false, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Finalize, addr 0x2411700, size 0xac, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method set_Password, addr 0x241050c, size 0x1b4, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

  /// @brief Method get_IterationCount, addr 0x24117ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method set_IterationCount, addr 0x24117b4, size 0x8, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method get_Keys, addr 0x24117bc, size 0x700, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_Keys();

  /// @brief Method get_Certificates, addr 0x2412070, size 0x450, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_RNG, addr 0x24124c0, size 0x20, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RandomNumberGenerator* get_RNG();

  /// @brief Method Compare, addr 0x2410efc, size 0x74, virtual false, abstract: false, final false
  inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> actual);

  /// @brief Method GetSymmetricAlgorithm, addr 0x24124e0, size 0x58c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method Decrypt, addr 0x2411ebc, size 0x1b4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedData);

  /// @brief Method Decrypt, addr 0x2411670, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::Mono::Security::__PKCS7__EncryptedData* ed);

  /// @brief Method Encrypt, addr 0x2412cb8, size 0x254, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetExistingParameters, addr 0x2412f0c, size 0x290, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::DSAParameters GetExistingParameters(ByRef<bool> found);

  /// @brief Method AddPrivateKey, addr 0x2413628, size 0x27c, virtual false, abstract: false, final false
  inline void AddPrivateKey(::Mono::Security::Cryptography::__PKCS8__PrivateKeyInfo* pki);

  /// @brief Method ReadSafeBag, addr 0x2410f70, size 0x700, virtual false, abstract: false, final false
  inline void ReadSafeBag(::Mono::Security::ASN1* safeBag);

  /// @brief Method CertificateSafeBag, addr 0x24138a4, size 0xbf8, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate* x509, ::System::Collections::IDictionary* attributes);

  /// @brief Method MAC, addr 0x2410da8, size 0x154, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> MAC(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations,
                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetBytes, addr 0x241450c, size 0x2240, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method EncryptedContentInfo, addr 0x241675c, size 0x310, virtual false, abstract: false, final false
  inline ::Mono::Security::__PKCS7__ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1* safeBags, ::StringW algorithmOid);

  /// @brief Method AddCertificate, addr 0x2416754, size 0x8, virtual false, abstract: false, final false
  inline void AddCertificate(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method AddCertificate, addr 0x2416a6c, size 0x250, virtual false, abstract: false, final false
  inline void AddCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes);

  /// @brief Method RemoveCertificate, addr 0x241674c, size 0x8, virtual false, abstract: false, final false
  inline void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method RemoveCertificate, addr 0x2416cbc, size 0x50c, virtual false, abstract: false, final false
  inline void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attrs);

  /// @brief Method Clone, addr 0x24171c8, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method get_MaximumPasswordLength, addr 0x241729c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MaximumPasswordLength();

  // Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS12(PKCS12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS12(PKCS12 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS12();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::PKCS12, 0x48>, "Size mismatch!");

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

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::PKCS12);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::PKCS12*, "Mono.Security.X509", "PKCS12");
NEED_NO_BOX(::Mono::Security::X509::__PKCS12__DeriveBytes);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::__PKCS12__DeriveBytes*, "Mono.Security.X509", "PKCS12/DeriveBytes");
