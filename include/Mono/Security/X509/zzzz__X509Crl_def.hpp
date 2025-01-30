#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Crl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Crl)
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security::X509 {
class X509Crl_X509CrlEntry;
}
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Crl;
}
namespace Mono::Security::X509 {
class X509Crl_X509CrlEntry;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509Crl);
MARK_REF_PTR_T(::Mono::Security::X509::X509Crl_X509CrlEntry);
// Dependencies System.DateTime, System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Crl/X509CrlEntry
class CORDL_TYPE X509Crl_X509CrlEntry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Extensions)) ::Mono::Security::X509::X509ExtensionCollection* Extensions;

  __declspec(property(get = get_RevocationDate)) ::System::DateTime RevocationDate;

  __declspec(property(get = get_SerialNumber)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  /// @brief Field extensions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Mono::Security::X509::X509ExtensionCollection* extensions;

  /// @brief Field revocationDate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_revocationDate, put = __cordl_internal_set_revocationDate)) ::System::DateTime revocationDate;

  /// @brief Field sn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sn, put = __cordl_internal_set_sn)) ::ArrayW<uint8_t, ::Array<uint8_t>*> sn;

  static inline ::Mono::Security::X509::X509Crl_X509CrlEntry* New_ctor(::Mono::Security::ASN1* entry);

  constexpr ::Mono::Security::X509::X509ExtensionCollection* const& __cordl_internal_get_extensions() const;

  constexpr ::Mono::Security::X509::X509ExtensionCollection*& __cordl_internal_get_extensions();

  constexpr ::System::DateTime const& __cordl_internal_get_revocationDate() const;

  constexpr ::System::DateTime& __cordl_internal_get_revocationDate();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sn() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sn();

  constexpr void __cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection* value);

  constexpr void __cordl_internal_set_revocationDate(::System::DateTime value);

  constexpr void __cordl_internal_set_sn(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3c3e2b4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* entry);

  /// @brief Method get_Extensions, addr 0x3c3eec8, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509ExtensionCollection* get_Extensions();

  /// @brief Method get_RevocationDate, addr 0x3c3eec0, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_RevocationDate();

  /// @brief Method get_SerialNumber, addr 0x3c3e93c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Crl_X509CrlEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Crl_X509CrlEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Crl_X509CrlEntry(X509Crl_X509CrlEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Crl_X509CrlEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Crl_X509CrlEntry(X509Crl_X509CrlEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15923 };

  /// @brief Field sn, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sn;

  /// @brief Field revocationDate, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___revocationDate;

  /// @brief Field extensions, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::X509::X509ExtensionCollection* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Crl_X509CrlEntry, ___sn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl_X509CrlEntry, ___revocationDate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl_X509CrlEntry, ___extensions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Crl_X509CrlEntry, 0x28>, "Size mismatch!");

} // namespace Mono::Security::X509
// Dependencies System.DateTime, System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Crl
class CORDL_TYPE X509Crl : public ::System::Object {
public:
  // Declarations
  using X509CrlEntry = ::Mono::Security::X509::X509Crl_X509CrlEntry;

  __declspec(property(get = get_Extensions)) ::Mono::Security::X509::X509ExtensionCollection* Extensions;

  __declspec(property(get = get_Hash)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Hash;

  __declspec(property(get = get_IssuerName)) ::StringW IssuerName;

  __declspec(property(get = get_NextUpdate)) ::System::DateTime NextUpdate;

  /// @brief Field encoded, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_encoded, put = __cordl_internal_set_encoded)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encoded;

  /// @brief Field entries, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_entries, put = __cordl_internal_set_entries)) ::System::Collections::ArrayList* entries;

  /// @brief Field extensions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Mono::Security::X509::X509ExtensionCollection* extensions;

  /// @brief Field hash_value, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_hash_value, put = __cordl_internal_set_hash_value)) ::ArrayW<uint8_t, ::Array<uint8_t>*> hash_value;

  /// @brief Field issuer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::StringW issuer;

  /// @brief Field nextUpdate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nextUpdate, put = __cordl_internal_set_nextUpdate)) ::System::DateTime nextUpdate;

  /// @brief Field signature, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field signatureOID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureOID, put = __cordl_internal_set_signatureOID)) ::StringW signatureOID;

  /// @brief Field thisUpdate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_thisUpdate, put = __cordl_internal_set_thisUpdate)) ::System::DateTime thisUpdate;

  /// @brief Field version, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) uint8_t version;

  /// @brief Method Compare, addr 0x3c3e6ec, size 0x90, virtual false, abstract: false, final false
  inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> array1, ::ArrayW<uint8_t, ::Array<uint8_t>*> array2);

  /// @brief Method GetCrlEntry, addr 0x3c3e7f8, size 0x144, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Crl_X509CrlEntry* GetCrlEntry(::ArrayW<uint8_t, ::Array<uint8_t>*> serialNumber);

  /// @brief Method GetCrlEntry, addr 0x3c3e77c, size 0x7c, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Crl_X509CrlEntry* GetCrlEntry(::Mono::Security::X509::X509Certificate* x509);

  static inline ::Mono::Security::X509::X509Crl* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> crl);

  /// @brief Method Parse, addr 0x3c3dc60, size 0x654, virtual false, abstract: false, final false
  inline void Parse(::ArrayW<uint8_t, ::Array<uint8_t>*> crl);

  /// @brief Method VerifySignature, addr 0x3c3ed4c, size 0x174, virtual false, abstract: false, final false
  inline bool VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa);

  /// @brief Method VerifySignature, addr 0x3c3e9b4, size 0x2c4, virtual false, abstract: false, final false
  inline bool VerifySignature(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method VerifySignature, addr 0x3c3ec78, size 0xd4, virtual false, abstract: false, final false
  inline bool VerifySignature(::System::Security::Cryptography::RSA* rsa);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_encoded() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_encoded();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_entries() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_entries();

  constexpr ::Mono::Security::X509::X509ExtensionCollection* const& __cordl_internal_get_extensions() const;

  constexpr ::Mono::Security::X509::X509ExtensionCollection*& __cordl_internal_get_extensions();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_hash_value() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_hash_value();

  constexpr ::StringW const& __cordl_internal_get_issuer() const;

  constexpr ::StringW& __cordl_internal_get_issuer();

  constexpr ::System::DateTime const& __cordl_internal_get_nextUpdate() const;

  constexpr ::System::DateTime& __cordl_internal_get_nextUpdate();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_signature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_signature();

  constexpr ::StringW const& __cordl_internal_get_signatureOID() const;

  constexpr ::StringW& __cordl_internal_get_signatureOID();

  constexpr ::System::DateTime const& __cordl_internal_get_thisUpdate() const;

  constexpr ::System::DateTime& __cordl_internal_get_thisUpdate();

  constexpr uint8_t const& __cordl_internal_get_version() const;

  constexpr uint8_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_encoded(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_entries(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection* value);

  constexpr void __cordl_internal_set_hash_value(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_issuer(::StringW value);

  constexpr void __cordl_internal_set_nextUpdate(::System::DateTime value);

  constexpr void __cordl_internal_set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_signatureOID(::StringW value);

  constexpr void __cordl_internal_set_thisUpdate(::System::DateTime value);

  constexpr void __cordl_internal_set_version(uint8_t value);

  /// @brief Method .ctor, addr 0x3c3db6c, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> crl);

  /// @brief Method get_Extensions, addr 0x3c3e4bc, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509ExtensionCollection* get_Extensions();

  /// @brief Method get_Hash, addr 0x3c3e4c4, size 0x218, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Hash();

  /// @brief Method get_IssuerName, addr 0x3c3e6dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IssuerName();

  /// @brief Method get_NextUpdate, addr 0x3c3e6e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_NextUpdate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Crl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Crl(X509Crl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Crl(X509Crl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15924 };

  /// @brief Field issuer, offset: 0x10, size: 0x8, def value: None
  ::StringW ___issuer;

  /// @brief Field version, offset: 0x18, size: 0x1, def value: None
  uint8_t ___version;

  /// @brief Field thisUpdate, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___thisUpdate;

  /// @brief Field nextUpdate, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ___nextUpdate;

  /// @brief Field entries, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___entries;

  /// @brief Field signatureOID, offset: 0x38, size: 0x8, def value: None
  ::StringW ___signatureOID;

  /// @brief Field signature, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___signature;

  /// @brief Field extensions, offset: 0x48, size: 0x8, def value: None
  ::Mono::Security::X509::X509ExtensionCollection* ___extensions;

  /// @brief Field encoded, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encoded;

  /// @brief Field hash_value, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___hash_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Crl, ___issuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___thisUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___nextUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___entries) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___signatureOID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___signature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___extensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___encoded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Crl, ___hash_value) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Crl, 0x60>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Crl);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Crl*, "Mono.Security.X509", "X509Crl");
NEED_NO_BOX(::Mono::Security::X509::X509Crl_X509CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Crl_X509CrlEntry*, "Mono.Security.X509", "X509Crl/X509CrlEntry");
