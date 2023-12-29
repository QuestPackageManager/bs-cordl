#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerInformation)
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Time;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerInformation);
// Type: Org.BouncyCastle.Cms::SignerInformation
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 121, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(691))
// CS Name: ::Org.BouncyCastle.Cms::SignerInformation*
class CORDL_TYPE SignerInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field sid, offset 0x10, size 0x8
  __declspec(property(get = __get_sid, put = __set_sid))::Org::BouncyCastle::Cms::SignerID* sid;

  /// @brief Field info, offset 0x18, size 0x8
  __declspec(property(get = __get_info, put = __set_info))::Org::BouncyCastle::Asn1::Cms::SignerInfo* info;

  /// @brief Field digestAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __get_digestAlgorithm, put = __set_digestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;

  /// @brief Field encryptionAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __get_encryptionAlgorithm, put = __set_encryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgorithm;

  /// @brief Field signedAttributeSet, offset 0x30, size 0x8
  __declspec(property(get = __get_signedAttributeSet, put = __set_signedAttributeSet))::Org::BouncyCastle::Asn1::Asn1Set* signedAttributeSet;

  /// @brief Field unsignedAttributeSet, offset 0x38, size 0x8
  __declspec(property(get = __get_unsignedAttributeSet, put = __set_unsignedAttributeSet))::Org::BouncyCastle::Asn1::Asn1Set* unsignedAttributeSet;

  /// @brief Field content, offset 0x40, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::Org::BouncyCastle::Cms::CmsProcessable* content;

  /// @brief Field signature, offset 0x48, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field contentType, offset 0x50, size 0x8
  __declspec(property(get = __get_contentType, put = __set_contentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  /// @brief Field digestCalculator, offset 0x58, size 0x8
  __declspec(property(get = __get_digestCalculator, put = __set_digestCalculator))::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator;

  /// @brief Field resultDigest, offset 0x60, size 0x8
  __declspec(property(get = __get_resultDigest, put = __set_resultDigest))::ArrayW<uint8_t, ::Array<uint8_t>*> resultDigest;

  /// @brief Field signedAttributeTable, offset 0x68, size 0x8
  __declspec(property(get = __get_signedAttributeTable, put = __set_signedAttributeTable))::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttributeTable;

  /// @brief Field unsignedAttributeTable, offset 0x70, size 0x8
  __declspec(property(get = __get_unsignedAttributeTable, put = __set_unsignedAttributeTable))::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributeTable;

  /// @brief Field isCounterSignature, offset 0x78, size 0x1
  __declspec(property(get = __get_isCounterSignature, put = __set_isCounterSignature)) bool isCounterSignature;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  __declspec(property(get = get_IsCounterSignature)) bool IsCounterSignature;

  __declspec(property(get = get_ContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  __declspec(property(get = get_SignerID))::Org::BouncyCastle::Cms::SignerID* SignerID;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_DigestAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithmID;

  __declspec(property(get = get_DigestAlgOid))::StringW DigestAlgOid;

  __declspec(property(get = get_DigestAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* DigestAlgParams;

  __declspec(property(get = get_EncryptionAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* EncryptionAlgorithmID;

  __declspec(property(get = get_EncryptionAlgOid))::StringW EncryptionAlgOid;

  __declspec(property(get = get_EncryptionAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* EncryptionAlgParams;

  __declspec(property(get = get_SignedAttributes))::Org::BouncyCastle::Asn1::Cms::AttributeTable* SignedAttributes;

  __declspec(property(get = get_UnsignedAttributes))::Org::BouncyCastle::Asn1::Cms::AttributeTable* UnsignedAttributes;

  constexpr ::Org::BouncyCastle::Cms::SignerID*& __get_sid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerID*> const& __get_sid() const;

  constexpr void __set_sid(::Org::BouncyCastle::Cms::SignerID* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerInfo*& __get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignerInfo*> const& __get_info() const;

  constexpr void __set_info(::Org::BouncyCastle::Asn1::Cms::SignerInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_digestAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_digestAlgorithm() const;

  constexpr void __set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_encryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_encryptionAlgorithm() const;

  constexpr void __set_encryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_signedAttributeSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_signedAttributeSet() const;

  constexpr void __set_signedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_unsignedAttributeSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_unsignedAttributeSet() const;

  constexpr void __set_unsignedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Cms::CmsProcessable*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsProcessable*> const& __get_content() const;

  constexpr void __set_content(::Org::BouncyCastle::Cms::CmsProcessable* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_signature() const;

  constexpr void __set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_contentType() const;

  constexpr void __set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Cms::IDigestCalculator*& __get_digestCalculator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::IDigestCalculator*> const& __get_digestCalculator() const;

  constexpr void __set_digestCalculator(::Org::BouncyCastle::Cms::IDigestCalculator* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_resultDigest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_resultDigest() const;

  constexpr void __set_resultDigest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get_signedAttributeTable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get_signedAttributeTable() const;

  constexpr void __set_signedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get_unsignedAttributeTable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get_unsignedAttributeTable() const;

  constexpr void __set_unsignedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr bool& __get_isCounterSignature();

  constexpr bool const& __get_isCounterSignature() const;

  constexpr void __set_isCounterSignature(bool value);

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  static inline ::Org::BouncyCastle::Cms::SignerInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                      ::Org::BouncyCastle::Cms::CmsProcessable* content, ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator);

  /// @brief Method .ctor addr 0x1174d60 size 0x274 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Cms::CmsProcessable* content,
                    ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator);

  static inline ::Org::BouncyCastle::Cms::SignerInformation* New_ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo);

  /// @brief Method .ctor addr 0x1197d94 size 0x9c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo);

  /// @brief Method get_IsCounterSignature addr 0x1197e30 size 0x8 virtual false final false
  inline bool get_IsCounterSignature();

  /// @brief Method get_ContentType addr 0x1197e38 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

  /// @brief Method get_SignerID addr 0x1197e40 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Cms::SignerID* get_SignerID();

  /// @brief Method get_Version addr 0x1197e48 size 0x24 virtual false final false
  inline int32_t get_Version();

  /// @brief Method get_DigestAlgorithmID addr 0x1197e6c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmID();

  /// @brief Method get_DigestAlgOid addr 0x1197e74 size 0x2c virtual false final false
  inline ::StringW get_DigestAlgOid();

  /// @brief Method get_DigestAlgParams addr 0x1197ea0 size 0x38 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_DigestAlgParams();

  /// @brief Method GetContentDigest addr 0x1197ed8 size 0xc0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContentDigest();

  /// @brief Method get_EncryptionAlgorithmID addr 0x1197f98 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID();

  /// @brief Method get_EncryptionAlgOid addr 0x1197fa0 size 0x2c virtual false final false
  inline ::StringW get_EncryptionAlgOid();

  /// @brief Method get_EncryptionAlgParams addr 0x1197fcc size 0x38 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_EncryptionAlgParams();

  /// @brief Method get_SignedAttributes addr 0x1198004 size 0x78 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_SignedAttributes();

  /// @brief Method get_UnsignedAttributes addr 0x119807c size 0x78 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_UnsignedAttributes();

  /// @brief Method GetSignature addr 0x117bdd0 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetCounterSignatures addr 0x11980f4 size 0x88c virtual false final false
  inline ::Org::BouncyCastle::Cms::SignerInformationStore* GetCounterSignatures();

  /// @brief Method GetEncodedSignedAttributes addr 0x1198980 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedSignedAttributes();

  /// @brief Method DoVerify addr 0x11989dc size 0x12f4 virtual false final false
  inline bool DoVerify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method IsNull addr 0x119a574 size 0x84 virtual false final false
  inline bool IsNull(::Org::BouncyCastle::Asn1::Asn1Encodable* o);

  /// @brief Method DerDecode addr 0x119a5f8 size 0xf8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* DerDecode(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method VerifyDigest addr 0x1199ed0 size 0x6a4 virtual false final false
  inline bool VerifyDigest(::ArrayW<uint8_t, ::Array<uint8_t>*> digest, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Verify addr 0x119a6f0 size 0x98 virtual false final false
  inline bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  /// @brief Method Verify addr 0x119a8c8 size 0x70 virtual false final false
  inline bool Verify(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method ToSignerInfo addr 0x119a938 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* ToSignerInfo();

  /// @brief Method GetSingleValuedSignedAttribute addr 0x1199cd0 size 0x200 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetSingleValuedSignedAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrOID, ::StringW printableName);

  /// @brief Method GetSigningTime addr 0x119a788 size 0x140 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::Time* GetSigningTime();

  /// @brief Method ReplaceUnsignedAttributes addr 0x119a940 size 0x134 virtual false final false
  static inline ::Org::BouncyCastle::Cms::SignerInformation* ReplaceUnsignedAttributes(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                                       ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributes);

  /// @brief Method AddCounterSigners addr 0x119aa74 size 0x524 virtual false final false
  static inline ::Org::BouncyCastle::Cms::SignerInformation* AddCounterSigners(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                               ::Org::BouncyCastle::Cms::SignerInformationStore* counterSigners);

  // Ctor Parameters [CppParam { name: "", ty: "SignerInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInformation(SignerInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInformation(SignerInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInformation();

public:
  /// @brief Field sid, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::SignerID* ___sid;

  /// @brief Field info, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::SignerInfo* ___info;

  /// @brief Field digestAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___digestAlgorithm;

  /// @brief Field encryptionAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___encryptionAlgorithm;

  /// @brief Field signedAttributeSet, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___signedAttributeSet;

  /// @brief Field unsignedAttributeSet, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unsignedAttributeSet;

  /// @brief Field content, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsProcessable* ___content;

  /// @brief Field signature, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___signature;

  /// @brief Field contentType, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___contentType;

  /// @brief Field digestCalculator, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::IDigestCalculator* ___digestCalculator;

  /// @brief Field resultDigest, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___resultDigest;

  /// @brief Field signedAttributeTable, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___signedAttributeTable;

  /// @brief Field unsignedAttributeTable, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___unsignedAttributeTable;

  /// @brief Field isCounterSignature, offset: 0x78, size: 0x1, def value: None
  bool ___isCounterSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerInformation, 0x80>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___sid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___digestAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___encryptionAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___signedAttributeSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___unsignedAttributeSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___content) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___signature) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___contentType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___digestCalculator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___resultDigest) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___signedAttributeTable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___unsignedAttributeTable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformation, ___isCounterSignature) == 0x78, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerInformation*, "Org.BouncyCastle.Cms", "SignerInformation");
