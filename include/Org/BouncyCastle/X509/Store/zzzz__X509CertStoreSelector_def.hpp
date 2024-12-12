#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CertStoreSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertStoreSelector)
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CertStoreSelector);
// Dependencies Org.BouncyCastle.X509.Store.IX509Selector, System.ICloneable, System.Object
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.Store.X509CertStoreSelector
class CORDL_TYPE X509CertStoreSelector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AuthorityKeyIdentifier, put = set_AuthorityKeyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> AuthorityKeyIdentifier;

  __declspec(property(get = get_BasicConstraints, put = set_BasicConstraints)) int32_t BasicConstraints;

  __declspec(property(get = get_Certificate, put = set_Certificate)) ::Org::BouncyCastle::X509::X509Certificate* Certificate;

  __declspec(property(get = get_CertificateValid, put = set_CertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* CertificateValid;

  __declspec(property(get = get_ExtendedKeyUsage, put = set_ExtendedKeyUsage)) ::Org::BouncyCastle::Utilities::Collections::ISet* ExtendedKeyUsage;

  __declspec(property(get = get_IgnoreX509NameOrdering, put = set_IgnoreX509NameOrdering)) bool IgnoreX509NameOrdering;

  __declspec(property(get = get_Issuer, put = set_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_IssuerAsString)) ::StringW IssuerAsString;

  __declspec(property(get = get_KeyUsage, put = set_KeyUsage)) ::ArrayW<bool, ::Array<bool>*> KeyUsage;

  __declspec(property(get = get_Policy, put = set_Policy)) ::Org::BouncyCastle::Utilities::Collections::ISet* Policy;

  __declspec(property(get = get_PrivateKeyValid, put = set_PrivateKeyValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* PrivateKeyValid;

  __declspec(property(get = get_SerialNumber, put = set_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_Subject, put = set_Subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectAsString)) ::StringW SubjectAsString;

  __declspec(property(get = get_SubjectKeyIdentifier, put = set_SubjectKeyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectKeyIdentifier;

  __declspec(property(get = get_SubjectPublicKey, put = set_SubjectPublicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKey;

  __declspec(property(get = get_SubjectPublicKeyAlgID, put = set_SubjectPublicKeyAlgID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectPublicKeyAlgID;

  /// @brief Field authorityKeyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_authorityKeyIdentifier, put = __cordl_internal_set_authorityKeyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> authorityKeyIdentifier;

  /// @brief Field basicConstraints, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_basicConstraints, put = __cordl_internal_set_basicConstraints)) int32_t basicConstraints;

  /// @brief Field certificate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate)) ::Org::BouncyCastle::X509::X509Certificate* certificate;

  /// @brief Field certificateValid, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateValid, put = __cordl_internal_set_certificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* certificateValid;

  /// @brief Field extendedKeyUsage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_extendedKeyUsage, put = __cordl_internal_set_extendedKeyUsage)) ::Org::BouncyCastle::Utilities::Collections::ISet* extendedKeyUsage;

  /// @brief Field ignoreX509NameOrdering, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreX509NameOrdering, put = __cordl_internal_set_ignoreX509NameOrdering)) bool ignoreX509NameOrdering;

  /// @brief Field issuer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field keyUsage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_keyUsage, put = __cordl_internal_set_keyUsage)) ::ArrayW<bool, ::Array<bool>*> keyUsage;

  /// @brief Field policy, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_policy, put = __cordl_internal_set_policy)) ::Org::BouncyCastle::Utilities::Collections::ISet* policy;

  /// @brief Field privateKeyValid, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKeyValid, put = __cordl_internal_set_privateKeyValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* privateKeyValid;

  /// @brief Field serialNumber, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Math::BigInteger* serialNumber;

  /// @brief Field subject, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_subject, put = __cordl_internal_set_subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectKeyIdentifier, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectKeyIdentifier, put = __cordl_internal_set_subjectKeyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier;

  /// @brief Field subjectPublicKey, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectPublicKey, put = __cordl_internal_set_subjectPublicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKey;

  /// @brief Field subjectPublicKeyAlgID, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectPublicKeyAlgID, put = __cordl_internal_set_subjectPublicKeyAlgID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* subjectPublicKeyAlgID;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x2678a10, size 0x58, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method CopyBoolArray, addr 0x2678c38, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CopyBoolArray(::ArrayW<bool, ::Array<bool>*> b);

  /// @brief Method CopySet, addr 0x2678b78, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* CopySet(::Org::BouncyCastle::Utilities::Collections::ISet* s);

  /// @brief Method GetSubjectPublicKey, addr 0x2679a14, size 0x28, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetSubjectPublicKey(::Org::BouncyCastle::X509::X509Certificate* c);

  /// @brief Method IssuersMatch, addr 0x2679a3c, size 0x1c, virtual false, abstract: false, final false
  static inline bool IssuersMatch(::Org::BouncyCastle::Asn1::X509::X509Name* a, ::Org::BouncyCastle::Asn1::X509::X509Name* b);

  /// @brief Method Match, addr 0x2678d50, size 0xc0c, virtual true, abstract: false, final false
  inline bool Match(::System::Object* obj);

  /// @brief Method MatchExtension, addr 0x267995c, size 0xb8, virtual false, abstract: false, final false
  static inline bool MatchExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> b, ::Org::BouncyCastle::X509::X509Certificate* c, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* New_ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_authorityKeyIdentifier() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_authorityKeyIdentifier();

  constexpr int32_t const& __cordl_internal_get_basicConstraints() const;

  constexpr int32_t& __cordl_internal_get_basicConstraints();

  constexpr ::Org::BouncyCastle::X509::X509Certificate* const& __cordl_internal_get_certificate() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_certificate();

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& __cordl_internal_get_certificateValid() const;

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __cordl_internal_get_certificateValid();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get_extendedKeyUsage() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_extendedKeyUsage();

  constexpr bool const& __cordl_internal_get_ignoreX509NameOrdering() const;

  constexpr bool& __cordl_internal_get_ignoreX509NameOrdering();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_issuer();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_keyUsage() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_keyUsage();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get_policy() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_policy();

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& __cordl_internal_get_privateKeyValid() const;

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __cordl_internal_get_privateKeyValid();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_serialNumber();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_subject() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_subject();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_subjectKeyIdentifier() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_subjectKeyIdentifier();

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& __cordl_internal_get_subjectPublicKey() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __cordl_internal_get_subjectPublicKey();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_subjectPublicKeyAlgID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_subjectPublicKeyAlgID();

  constexpr void __cordl_internal_set_authorityKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_basicConstraints(int32_t value);

  constexpr void __cordl_internal_set_certificate(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_certificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr void __cordl_internal_set_extendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_ignoreX509NameOrdering(bool value);

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_keyUsage(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_policy(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_privateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_subjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_subjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr void __cordl_internal_set_subjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x2678870, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2678880, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o);

  /// @brief Method get_AuthorityKeyIdentifier, addr 0x2678940, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_AuthorityKeyIdentifier();

  /// @brief Method get_BasicConstraints, addr 0x2678ad4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_BasicConstraints();

  /// @brief Method get_Certificate, addr 0x2678b58, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Certificate();

  /// @brief Method get_CertificateValid, addr 0x2678b68, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_CertificateValid();

  /// @brief Method get_ExtendedKeyUsage, addr 0x267899c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_ExtendedKeyUsage();

  /// @brief Method get_IgnoreX509NameOrdering, addr 0x2678bfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreX509NameOrdering();

  /// @brief Method get_Issuer, addr 0x2678c10, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_IssuerAsString, addr 0x2678c20, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_IssuerAsString();

  /// @brief Method get_KeyUsage, addr 0x26789a4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_KeyUsage();

  /// @brief Method get_Policy, addr 0x26789ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_Policy();

  /// @brief Method get_PrivateKeyValid, addr 0x2678ce8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_PrivateKeyValid();

  /// @brief Method get_SerialNumber, addr 0x2678cf8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_Subject, addr 0x2678d08, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_SubjectAsString, addr 0x2678d18, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_SubjectAsString();

  /// @brief Method get_SubjectKeyIdentifier, addr 0x26789b4, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SubjectKeyIdentifier();

  /// @brief Method get_SubjectPublicKey, addr 0x2678d30, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKey();

  /// @brief Method get_SubjectPublicKeyAlgID, addr 0x2678d40, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SubjectPublicKeyAlgID();

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_AuthorityKeyIdentifier, addr 0x2678a68, size 0x6c, virtual false, abstract: false, final false
  inline void set_AuthorityKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_BasicConstraints, addr 0x2678adc, size 0x7c, virtual false, abstract: false, final false
  inline void set_BasicConstraints(int32_t value);

  /// @brief Method set_Certificate, addr 0x2678b60, size 0x8, virtual false, abstract: false, final false
  inline void set_Certificate(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method set_CertificateValid, addr 0x2678b70, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method set_ExtendedKeyUsage, addr 0x2678be0, size 0x1c, virtual false, abstract: false, final false
  inline void set_ExtendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method set_IgnoreX509NameOrdering, addr 0x2678c04, size 0xc, virtual false, abstract: false, final false
  inline void set_IgnoreX509NameOrdering(bool value);

  /// @brief Method set_Issuer, addr 0x2678c18, size 0x8, virtual false, abstract: false, final false
  inline void set_Issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  /// @brief Method set_KeyUsage, addr 0x2678cb0, size 0x1c, virtual false, abstract: false, final false
  inline void set_KeyUsage(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method set_Policy, addr 0x2678ccc, size 0x1c, virtual false, abstract: false, final false
  inline void set_Policy(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method set_PrivateKeyValid, addr 0x2678cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_PrivateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method set_SerialNumber, addr 0x2678d00, size 0x8, virtual false, abstract: false, final false
  inline void set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method set_Subject, addr 0x2678d10, size 0x8, virtual false, abstract: false, final false
  inline void set_Subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  /// @brief Method set_SubjectKeyIdentifier, addr 0x26771b0, size 0x6c, virtual false, abstract: false, final false
  inline void set_SubjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_SubjectPublicKey, addr 0x2678d38, size 0x8, virtual false, abstract: false, final false
  inline void set_SubjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  /// @brief Method set_SubjectPublicKeyAlgID, addr 0x2678d48, size 0x8, virtual false, abstract: false, final false
  inline void set_SubjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertStoreSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertStoreSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertStoreSelector(X509CertStoreSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertStoreSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertStoreSelector(X509CertStoreSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 678 };

  /// @brief Field authorityKeyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___authorityKeyIdentifier;

  /// @brief Field basicConstraints, offset: 0x18, size: 0x4, def value: None
  int32_t ___basicConstraints;

  /// @brief Field certificate, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___certificate;

  /// @brief Field certificateValid, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___certificateValid;

  /// @brief Field extendedKeyUsage, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___extendedKeyUsage;

  /// @brief Field ignoreX509NameOrdering, offset: 0x38, size: 0x1, def value: None
  bool ___ignoreX509NameOrdering;

  /// @brief Field issuer, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field keyUsage, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___keyUsage;

  /// @brief Field policy, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___policy;

  /// @brief Field privateKeyValid, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___privateKeyValid;

  /// @brief Field serialNumber, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___serialNumber;

  /// @brief Field subject, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___subject;

  /// @brief Field subjectKeyIdentifier, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___subjectKeyIdentifier;

  /// @brief Field subjectPublicKey, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___subjectPublicKey;

  /// @brief Field subjectPublicKeyAlgID, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___subjectPublicKeyAlgID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___authorityKeyIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___basicConstraints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___certificate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___certificateValid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___extendedKeyUsage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___ignoreX509NameOrdering) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___issuer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___keyUsage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___policy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___privateKeyValid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___serialNumber) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___subject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___subjectKeyIdentifier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___subjectPublicKey) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector, ___subjectPublicKeyAlgID) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CertStoreSelector, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CertStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, "Org.BouncyCastle.X509.Store", "X509CertStoreSelector");
