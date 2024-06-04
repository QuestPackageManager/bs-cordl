#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs12Store.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs12Store)
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Pkcs {
class AsymmetricKeyEntry;
}
namespace Org::BouncyCastle::Pkcs {
class X509CertificateEntry;
}
namespace Org::BouncyCastle::Pkcs {
class __Pkcs12Store__CertId;
}
namespace Org::BouncyCastle::Pkcs {
class __Pkcs12Store__IgnoresCaseHashtable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Store;
}
namespace Org::BouncyCastle::Pkcs {
class __Pkcs12Store__CertId;
}
namespace Org::BouncyCastle::Pkcs {
class __Pkcs12Store__IgnoresCaseHashtable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12Store);
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId);
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable);
// Type: ::CertId
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Pkcs12Store::CertId*
class CORDL_TYPE __Pkcs12Store__CertId : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Id))::ArrayW<uint8_t, ::Array<uint8_t>*> Id;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::ArrayW<uint8_t, ::Array<uint8_t>*> id;

  /// @brief Method Equals, addr 0x134f6e0, size 0xd8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x134f684, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  static inline ::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_id() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_id(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x134f654, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  /// @brief Method .ctor, addr 0x134f610, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  /// @brief Method get_Id, addr 0x134f67c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Pkcs12Store__CertId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Pkcs12Store__CertId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Pkcs12Store__CertId(__Pkcs12Store__CertId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Pkcs12Store__CertId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Pkcs12Store__CertId(__Pkcs12Store__CertId const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId, ___id) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkcs
// Type: ::IgnoresCaseHashtable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Pkcs12Store::IgnoresCaseHashtable*
class CORDL_TYPE __Pkcs12Store__IgnoresCaseHashtable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IDictionary* keys;

  /// @brief Field orig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_orig, put = __cordl_internal_set_orig))::System::Collections::IDictionary* orig;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Clear, addr 0x134f7b8, size 0x108, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetEnumerator, addr 0x134f8c0, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* New_ctor();

  /// @brief Method Remove, addr 0x134fa08, size 0x260, virtual false, abstract: false, final false
  inline ::System::Object* Remove(::StringW alias);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_keys() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_orig();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_orig() const;

  constexpr void __cordl_internal_set_keys(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_orig(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x13501a0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x13500fc, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x134fc68, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::StringW alias);

  /// @brief Method get_Keys, addr 0x134f964, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values, addr 0x1350058, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x134fdf4, size 0x264, virtual false, abstract: false, final false
  inline void set_Item(::StringW alias, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Pkcs12Store__IgnoresCaseHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Pkcs12Store__IgnoresCaseHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Pkcs12Store__IgnoresCaseHashtable(__Pkcs12Store__IgnoresCaseHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Pkcs12Store__IgnoresCaseHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Pkcs12Store__IgnoresCaseHashtable(__Pkcs12Store__IgnoresCaseHashtable const&) = delete;

  /// @brief Field orig, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___orig;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable, ___orig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable, ___keys) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkcs
// Type: Org.BouncyCastle.Pkcs::Pkcs12Store
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs12Store*
class CORDL_TYPE Pkcs12Store : public ::System::Object {
public:
  // Declarations
  using CertId = ::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId;

  using IgnoresCaseHashtable = ::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable;

  __declspec(property(get = get_Aliases))::System::Collections::IEnumerable* Aliases;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field certAlgorithm, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_certAlgorithm, put = __cordl_internal_set_certAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm;

  /// @brief Field certPrfAlgorithm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_certPrfAlgorithm, put = __cordl_internal_set_certPrfAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm;

  /// @brief Field certs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs))::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* certs;

  /// @brief Field chainCerts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_chainCerts, put = __cordl_internal_set_chainCerts))::System::Collections::IDictionary* chainCerts;

  /// @brief Field keyAlgorithm, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_keyAlgorithm, put = __cordl_internal_set_keyAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm;

  /// @brief Field keyCerts, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyCerts, put = __cordl_internal_set_keyCerts))::System::Collections::IDictionary* keyCerts;

  /// @brief Field keyPrfAlgorithm, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_keyPrfAlgorithm, put = __cordl_internal_set_keyPrfAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* keys;

  /// @brief Field localIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localIds, put = __cordl_internal_set_localIds))::System::Collections::IDictionary* localIds;

  /// @brief Field unmarkedKeyEntry, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_unmarkedKeyEntry, put = __cordl_internal_set_unmarkedKeyEntry))::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* unmarkedKeyEntry;

  /// @brief Field useDerEncoding, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_useDerEncoding, put = __cordl_internal_set_useDerEncoding)) bool useDerEncoding;

  /// @brief Method CalculatePbeMac, addr 0x1347d0c, size 0x184, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculatePbeMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t itCount,
                                                                     ::ArrayW<char16_t, ::Array<char16_t>*> password, bool wrongPkcs12Zero, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ContainsAlias, addr 0x1348b54, size 0x58, virtual false, abstract: false, final false
  inline bool ContainsAlias(::StringW alias);

  /// @brief Method CreateSubjectKeyID, addr 0x1345644, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateSubjectKeyID(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  /// @brief Method CryptPbeData, addr 0x1347e90, size 0x254, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CryptPbeData(bool forEncryption, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                  bool wrongPkcs12Zero, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method DeleteEntry, addr 0x134a4d8, size 0x574, virtual false, abstract: false, final false
  inline void DeleteEntry(::StringW alias);

  /// @brief Method GetAliasesTable, addr 0x13482dc, size 0x78c, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* GetAliasesTable();

  /// @brief Method GetCertificate, addr 0x1348bac, size 0x250, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* GetCertificate(::StringW alias);

  /// @brief Method GetCertificateAlias, addr 0x1348dfc, size 0x76c, virtual false, abstract: false, final false
  inline ::StringW GetCertificateAlias(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetCertificateChain, addr 0x1349568, size 0xabc, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*, ::Array<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>*> GetCertificateChain(::StringW alias);

  /// @brief Method GetKey, addr 0x13480e4, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* GetKey(::StringW alias);

  /// @brief Method IsCertificateEntry, addr 0x13481c4, size 0xa0, virtual false, abstract: false, final false
  inline bool IsCertificateEntry(::StringW alias);

  /// @brief Method IsEntryOfType, addr 0x134aa4c, size 0x118, virtual false, abstract: false, final false
  inline bool IsEntryOfType(::StringW alias, ::System::Type* entryType);

  /// @brief Method IsKeyEntry, addr 0x1348264, size 0x78, virtual false, abstract: false, final false
  inline bool IsKeyEntry(::StringW alias);

  /// @brief Method Load, addr 0x1345964, size 0x1a6c, virtual false, abstract: false, final false
  inline void Load(::System::IO::Stream* input, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method LoadKeyBag, addr 0x13473d0, size 0x8f0, virtual true, abstract: false, final false
  inline void LoadKeyBag(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes);

  /// @brief Method LoadPkcs8ShroudedKeyBag, addr 0x1347cc0, size 0x4c, virtual true, abstract: false, final false
  inline void LoadPkcs8ShroudedKeyBag(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encPrivKeyInfo, ::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes,
                                      ::ArrayW<char16_t, ::Array<char16_t>*> password, bool wrongPkcs12Zero);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* New_ctor();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* New_ctor(::System::IO::Stream* input, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm,
                                                                 bool useDerEncoding);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm,
                                                                 ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm,
                                                                 bool useDerEncoding);

  /// @brief Method Save, addr 0x134ac14, size 0x49fc, virtual false, abstract: false, final false
  inline void Save(::System::IO::Stream* stream, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method SetCertificateEntry, addr 0x134a024, size 0x228, virtual false, abstract: false, final false
  inline void SetCertificateEntry(::StringW alias, ::Org::BouncyCastle::Pkcs::X509CertificateEntry* certEntry);

  /// @brief Method SetKeyEntry, addr 0x134a24c, size 0x28c, virtual false, abstract: false, final false
  inline void SetKeyEntry(::StringW alias, ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* keyEntry,
                          ::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*, ::Array<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>*> chain);

  /// @brief Method Size, addr 0x134ab64, size 0x4, virtual false, abstract: false, final false
  inline int32_t Size();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_certAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_certAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_certPrfAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_certPrfAlgorithm() const;

  constexpr ::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable*& __cordl_internal_get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable*> const& __cordl_internal_get_certs() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_chainCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_chainCerts() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_keyAlgorithm() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_keyCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_keyCerts() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyPrfAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_keyPrfAlgorithm() const;

  constexpr ::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable*> const& __cordl_internal_get_keys() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_localIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_localIds() const;

  constexpr ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*& __cordl_internal_get_unmarkedKeyEntry();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*> const& __cordl_internal_get_unmarkedKeyEntry() const;

  constexpr bool const& __cordl_internal_get_useDerEncoding() const;

  constexpr bool& __cordl_internal_get_useDerEncoding();

  constexpr void __cordl_internal_set_certAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_certPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* value);

  constexpr void __cordl_internal_set_chainCerts(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_keyCerts(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_keyPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_keys(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* value);

  constexpr void __cordl_internal_set_localIds(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_unmarkedKeyEntry(::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* value);

  constexpr void __cordl_internal_set_useDerEncoding(bool value);

  /// @brief Method .ctor, addr 0x13458cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1345934, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method .ctor, addr 0x13456bc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm, bool useDerEncoding);

  /// @brief Method .ctor, addr 0x13457bc, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm, bool useDerEncoding);

  /// @brief Method get_Aliases, addr 0x1348a68, size 0xec, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_Aliases();

  /// @brief Method get_Count, addr 0x134ab68, size 0xac, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12Store();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Store", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12Store(Pkcs12Store&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Store", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12Store(Pkcs12Store const&) = delete;

  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* ___keys;

  /// @brief Field localIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___localIds;

  /// @brief Field certs, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable* ___certs;

  /// @brief Field chainCerts, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___chainCerts;

  /// @brief Field keyCerts, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___keyCerts;

  /// @brief Field keyAlgorithm, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyAlgorithm;

  /// @brief Field keyPrfAlgorithm, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyPrfAlgorithm;

  /// @brief Field certAlgorithm, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___certAlgorithm;

  /// @brief Field certPrfAlgorithm, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___certPrfAlgorithm;

  /// @brief Field useDerEncoding, offset: 0x58, size: 0x1, def value: None
  bool ___useDerEncoding;

  /// @brief Field unmarkedKeyEntry, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* ___unmarkedKeyEntry;

  /// @brief Field IgnoreUselessPasswordProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString IgnoreUselessPasswordProperty{ u"Org.BouncyCastle.Pkcs12.IgnoreUselessPassword" };

  /// @brief Field MinIterations offset 0xffffffff size 0x4
  static constexpr int32_t MinIterations{ static_cast<int32_t>(0x400) };

  /// @brief Field SaltSize offset 0xffffffff size 0x4
  static constexpr int32_t SaltSize{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12Store, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___localIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___certs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___chainCerts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___keyCerts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___keyAlgorithm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___keyPrfAlgorithm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___certAlgorithm) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___certPrfAlgorithm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___useDerEncoding) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Store, ___unmarkedKeyEntry) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12Store);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12Store*, "Org.BouncyCastle.Pkcs", "Pkcs12Store");
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::__Pkcs12Store__CertId*, "Org.BouncyCastle.Pkcs", "Pkcs12Store/CertId");
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::__Pkcs12Store__IgnoresCaseHashtable*, "Org.BouncyCastle.Pkcs", "Pkcs12Store/IgnoresCaseHashtable");
