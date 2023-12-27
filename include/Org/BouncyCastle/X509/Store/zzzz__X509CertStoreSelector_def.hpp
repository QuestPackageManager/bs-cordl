#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertStoreSelector)
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CertStoreSelector);
// Type: Org.BouncyCastle.X509.Store::X509CertStoreSelector
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(678))
// CS Name: ::Org.BouncyCastle.X509.Store::X509CertStoreSelector*
class CORDL_TYPE X509CertStoreSelector : public ::System::Object {
public:
  // Declarations
  /// @brief Field authorityKeyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_authorityKeyIdentifier, put = __set_authorityKeyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> authorityKeyIdentifier;

  /// @brief Field basicConstraints, offset 0x18, size 0x4
  __declspec(property(get = __get_basicConstraints, put = __set_basicConstraints)) int32_t basicConstraints;

  /// @brief Field certificate, offset 0x20, size 0x8
  __declspec(property(get = __get_certificate, put = __set_certificate))::Org::BouncyCastle::X509::X509Certificate* certificate;

  /// @brief Field certificateValid, offset 0x28, size 0x8
  __declspec(property(get = __get_certificateValid, put = __set_certificateValid))::Org::BouncyCastle::Utilities::Date::DateTimeObject* certificateValid;

  /// @brief Field extendedKeyUsage, offset 0x30, size 0x8
  __declspec(property(get = __get_extendedKeyUsage, put = __set_extendedKeyUsage))::Org::BouncyCastle::Utilities::Collections::ISet* extendedKeyUsage;

  /// @brief Field ignoreX509NameOrdering, offset 0x38, size 0x1
  __declspec(property(get = __get_ignoreX509NameOrdering, put = __set_ignoreX509NameOrdering)) bool ignoreX509NameOrdering;

  /// @brief Field issuer, offset 0x40, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field keyUsage, offset 0x48, size 0x8
  __declspec(property(get = __get_keyUsage, put = __set_keyUsage))::ArrayW<bool, ::Array<bool>*> keyUsage;

  /// @brief Field policy, offset 0x50, size 0x8
  __declspec(property(get = __get_policy, put = __set_policy))::Org::BouncyCastle::Utilities::Collections::ISet* policy;

  /// @brief Field privateKeyValid, offset 0x58, size 0x8
  __declspec(property(get = __get_privateKeyValid, put = __set_privateKeyValid))::Org::BouncyCastle::Utilities::Date::DateTimeObject* privateKeyValid;

  /// @brief Field serialNumber, offset 0x60, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Math::BigInteger* serialNumber;

  /// @brief Field subject, offset 0x68, size 0x8
  __declspec(property(get = __get_subject, put = __set_subject))::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectKeyIdentifier, offset 0x70, size 0x8
  __declspec(property(get = __get_subjectKeyIdentifier, put = __set_subjectKeyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier;

  /// @brief Field subjectPublicKey, offset 0x78, size 0x8
  __declspec(property(get = __get_subjectPublicKey, put = __set_subjectPublicKey))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKey;

  /// @brief Field subjectPublicKeyAlgID, offset 0x80, size 0x8
  __declspec(property(get = __get_subjectPublicKeyAlgID, put = __set_subjectPublicKeyAlgID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* subjectPublicKeyAlgID;

  __declspec(property(get = get_AuthorityKeyIdentifier, put = set_AuthorityKeyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> AuthorityKeyIdentifier;

  __declspec(property(get = get_BasicConstraints, put = set_BasicConstraints)) int32_t BasicConstraints;

  __declspec(property(get = get_Certificate, put = set_Certificate))::Org::BouncyCastle::X509::X509Certificate* Certificate;

  __declspec(property(get = get_CertificateValid, put = set_CertificateValid))::Org::BouncyCastle::Utilities::Date::DateTimeObject* CertificateValid;

  __declspec(property(get = get_ExtendedKeyUsage, put = set_ExtendedKeyUsage))::Org::BouncyCastle::Utilities::Collections::ISet* ExtendedKeyUsage;

  __declspec(property(get = get_IgnoreX509NameOrdering, put = set_IgnoreX509NameOrdering)) bool IgnoreX509NameOrdering;

  __declspec(property(get = get_Issuer, put = set_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_IssuerAsString))::StringW IssuerAsString;

  __declspec(property(get = get_KeyUsage, put = set_KeyUsage))::ArrayW<bool, ::Array<bool>*> KeyUsage;

  __declspec(property(get = get_Policy, put = set_Policy))::Org::BouncyCastle::Utilities::Collections::ISet* Policy;

  __declspec(property(get = get_PrivateKeyValid, put = set_PrivateKeyValid))::Org::BouncyCastle::Utilities::Date::DateTimeObject* PrivateKeyValid;

  __declspec(property(get = get_SerialNumber, put = set_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_Subject, put = set_Subject))::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectAsString))::StringW SubjectAsString;

  __declspec(property(get = get_SubjectKeyIdentifier, put = set_SubjectKeyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectKeyIdentifier;

  __declspec(property(get = get_SubjectPublicKey, put = set_SubjectPublicKey))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKey;

  __declspec(property(get = get_SubjectPublicKeyAlgID, put = set_SubjectPublicKeyAlgID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectPublicKeyAlgID;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_authorityKeyIdentifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_authorityKeyIdentifier() const;

  constexpr void __set_authorityKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_basicConstraints();

  constexpr int32_t const& __get_basicConstraints() const;

  constexpr void __set_basicConstraints(int32_t value);

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __get_certificate() const;

  constexpr void __set_certificate(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __get_certificateValid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& __get_certificateValid() const;

  constexpr void __set_certificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_extendedKeyUsage();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_extendedKeyUsage() const;

  constexpr void __set_extendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr bool& __get_ignoreX509NameOrdering();

  constexpr bool const& __get_ignoreX509NameOrdering() const;

  constexpr void __set_ignoreX509NameOrdering(bool value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_keyUsage();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_keyUsage() const;

  constexpr void __set_keyUsage(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_policy();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_policy() const;

  constexpr void __set_policy(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __get_privateKeyValid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& __get_privateKeyValid() const;

  constexpr void __set_privateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_subject();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_subject() const;

  constexpr void __set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_subjectKeyIdentifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_subjectKeyIdentifier() const;

  constexpr void __set_subjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_subjectPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_subjectPublicKey() const;

  constexpr void __set_subjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_subjectPublicKeyAlgID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_subjectPublicKeyAlgID() const;

  constexpr void __set_subjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* New_ctor();

  /// @brief Method .ctor addr 0x12055b0 size 0x10 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o);

  /// @brief Method .ctor addr 0x12055c0 size 0xa8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o);

  /// @brief Method Clone addr 0x1205738 size 0x60 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method get_AuthorityKeyIdentifier addr 0x1205668 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_AuthorityKeyIdentifier();

  /// @brief Method set_AuthorityKeyIdentifier addr 0x1205798 size 0x6c virtual false final false
  inline void set_AuthorityKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_BasicConstraints addr 0x1205804 size 0x8 virtual false final false
  inline int32_t get_BasicConstraints();

  /// @brief Method set_BasicConstraints addr 0x120580c size 0x80 virtual false final false
  inline void set_BasicConstraints(int32_t value);

  /// @brief Method get_Certificate addr 0x120588c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Certificate();

  /// @brief Method set_Certificate addr 0x1205894 size 0x8 virtual false final false
  inline void set_Certificate(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method get_CertificateValid addr 0x120589c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_CertificateValid();

  /// @brief Method set_CertificateValid addr 0x12058a4 size 0x8 virtual false final false
  inline void set_CertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method get_ExtendedKeyUsage addr 0x12056c4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_ExtendedKeyUsage();

  /// @brief Method set_ExtendedKeyUsage addr 0x120591c size 0x1c virtual false final false
  inline void set_ExtendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method get_IgnoreX509NameOrdering addr 0x1205938 size 0x8 virtual false final false
  inline bool get_IgnoreX509NameOrdering();

  /// @brief Method set_IgnoreX509NameOrdering addr 0x1205940 size 0xc virtual false final false
  inline void set_IgnoreX509NameOrdering(bool value);

  /// @brief Method get_Issuer addr 0x120594c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method set_Issuer addr 0x1205954 size 0x8 virtual false final false
  inline void set_Issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  /// @brief Method get_IssuerAsString addr 0x120595c size 0x18 virtual false final false
  inline ::StringW get_IssuerAsString();

  /// @brief Method get_KeyUsage addr 0x12056cc size 0x8 virtual false final false
  inline ::ArrayW<bool, ::Array<bool>*> get_KeyUsage();

  /// @brief Method set_KeyUsage addr 0x12059ec size 0x1c virtual false final false
  inline void set_KeyUsage(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method get_Policy addr 0x12056d4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_Policy();

  /// @brief Method set_Policy addr 0x1205a08 size 0x1c virtual false final false
  inline void set_Policy(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method get_PrivateKeyValid addr 0x1205a24 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_PrivateKeyValid();

  /// @brief Method set_PrivateKeyValid addr 0x1205a2c size 0x8 virtual false final false
  inline void set_PrivateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method get_SerialNumber addr 0x1205a34 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method set_SerialNumber addr 0x1205a3c size 0x8 virtual false final false
  inline void set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method get_Subject addr 0x1205a44 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method set_Subject addr 0x1205a4c size 0x8 virtual false final false
  inline void set_Subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  /// @brief Method get_SubjectAsString addr 0x1205a54 size 0x18 virtual false final false
  inline ::StringW get_SubjectAsString();

  /// @brief Method get_SubjectKeyIdentifier addr 0x12056dc size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SubjectKeyIdentifier();

  /// @brief Method set_SubjectKeyIdentifier addr 0x1203e90 size 0x6c virtual false final false
  inline void set_SubjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_SubjectPublicKey addr 0x1205a6c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKey();

  /// @brief Method set_SubjectPublicKey addr 0x1205a74 size 0x8 virtual false final false
  inline void set_SubjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  /// @brief Method get_SubjectPublicKeyAlgID addr 0x1205a7c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SubjectPublicKeyAlgID();

  /// @brief Method set_SubjectPublicKeyAlgID addr 0x1205a84 size 0x8 virtual false final false
  inline void set_SubjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method Match addr 0x1205a8c size 0xbd0 virtual true final false
  inline bool Match(::System::Object* obj);

  /// @brief Method IssuersMatch addr 0x120673c size 0x1c virtual false final false
  static inline bool IssuersMatch(::Org::BouncyCastle::Asn1::X509::X509Name* a, ::Org::BouncyCastle::Asn1::X509::X509Name* b);

  /// @brief Method CopyBoolArray addr 0x1205974 size 0x78 virtual false final false
  static inline ::ArrayW<bool, ::Array<bool>*> CopyBoolArray(::ArrayW<bool, ::Array<bool>*> b);

  /// @brief Method CopySet addr 0x12058ac size 0x70 virtual false final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* CopySet(::Org::BouncyCastle::Utilities::Collections::ISet* s);

  /// @brief Method GetSubjectPublicKey addr 0x1206714 size 0x28 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetSubjectPublicKey(::Org::BouncyCastle::X509::X509Certificate* c);

  /// @brief Method MatchExtension addr 0x120665c size 0xb8 virtual false final false
  static inline bool MatchExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> b, ::Org::BouncyCastle::X509::X509Certificate* c, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  // Ctor Parameters [CppParam { name: "", ty: "X509CertStoreSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertStoreSelector(X509CertStoreSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertStoreSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertStoreSelector(X509CertStoreSelector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertStoreSelector();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CertStoreSelector, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CertStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, "Org.BouncyCastle.X509.Store", "X509CertStoreSelector");
