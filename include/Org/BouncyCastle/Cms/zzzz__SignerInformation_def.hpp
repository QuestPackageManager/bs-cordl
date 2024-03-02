#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
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
// CS Name: ::Org.BouncyCastle.Cms::SignerInformation*
class CORDL_TYPE SignerInformation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  __declspec(property(get = get_DigestAlgOid))::StringW DigestAlgOid;

  __declspec(property(get = get_DigestAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* DigestAlgParams;

  __declspec(property(get = get_DigestAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithmID;

  __declspec(property(get = get_EncryptionAlgOid))::StringW EncryptionAlgOid;

  __declspec(property(get = get_EncryptionAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* EncryptionAlgParams;

  __declspec(property(get = get_EncryptionAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* EncryptionAlgorithmID;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  __declspec(property(get = get_IsCounterSignature)) bool IsCounterSignature;

  __declspec(property(get = get_SignedAttributes))::Org::BouncyCastle::Asn1::Cms::AttributeTable* SignedAttributes;

  __declspec(property(get = get_SignerID))::Org::BouncyCastle::Cms::SignerID* SignerID;

  __declspec(property(get = get_UnsignedAttributes))::Org::BouncyCastle::Asn1::Cms::AttributeTable* UnsignedAttributes;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field content, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::Org::BouncyCastle::Cms::CmsProcessable* content;

  /// @brief Field contentType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  /// @brief Field digestAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgorithm, put = __cordl_internal_set_digestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;

  /// @brief Field digestCalculator, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_digestCalculator, put = __cordl_internal_set_digestCalculator))::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator;

  /// @brief Field encryptionAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptionAlgorithm, put = __cordl_internal_set_encryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgorithm;

  /// @brief Field info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info))::Org::BouncyCastle::Asn1::Cms::SignerInfo* info;

  /// @brief Field isCounterSignature, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_isCounterSignature, put = __cordl_internal_set_isCounterSignature)) bool isCounterSignature;

  /// @brief Field resultDigest, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_resultDigest, put = __cordl_internal_set_resultDigest))::ArrayW<uint8_t, ::Array<uint8_t>*> resultDigest;

  /// @brief Field sid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sid, put = __cordl_internal_set_sid))::Org::BouncyCastle::Cms::SignerID* sid;

  /// @brief Field signature, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature))::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field signedAttributeSet, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_signedAttributeSet, put = __cordl_internal_set_signedAttributeSet))::Org::BouncyCastle::Asn1::Asn1Set* signedAttributeSet;

  /// @brief Field signedAttributeTable, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_signedAttributeTable, put = __cordl_internal_set_signedAttributeTable))::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttributeTable;

  /// @brief Field unsignedAttributeSet, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_unsignedAttributeSet, put = __cordl_internal_set_unsignedAttributeSet))::Org::BouncyCastle::Asn1::Asn1Set* unsignedAttributeSet;

  /// @brief Field unsignedAttributeTable, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_unsignedAttributeTable, put = __cordl_internal_set_unsignedAttributeTable))::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributeTable;

  /// @brief Method AddCounterSigners, addr 0x127cb24, size 0x524, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Cms::SignerInformation* AddCounterSigners(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                               ::Org::BouncyCastle::Cms::SignerInformationStore* counterSigners);

  /// @brief Method DerDecode, addr 0x127c6a8, size 0xf8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* DerDecode(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method DoVerify, addr 0x127aa8c, size 0x12f4, virtual false, abstract: false, final false
  inline bool DoVerify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method GetContentDigest, addr 0x1279f88, size 0xc0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContentDigest();

  /// @brief Method GetCounterSignatures, addr 0x127a1a4, size 0x88c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInformationStore* GetCounterSignatures();

  /// @brief Method GetEncodedSignedAttributes, addr 0x127aa30, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedSignedAttributes();

  /// @brief Method GetSignature, addr 0x125de80, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetSigningTime, addr 0x127c838, size 0x140, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Time* GetSigningTime();

  /// @brief Method GetSingleValuedSignedAttribute, addr 0x127bd80, size 0x200, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetSingleValuedSignedAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrOID, ::StringW printableName);

  /// @brief Method IsNull, addr 0x127c624, size 0x84, virtual false, abstract: false, final false
  inline bool IsNull(::Org::BouncyCastle::Asn1::Asn1Encodable* o);

  static inline ::Org::BouncyCastle::Cms::SignerInformation* New_ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo);

  static inline ::Org::BouncyCastle::Cms::SignerInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                      ::Org::BouncyCastle::Cms::CmsProcessable* content, ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator);

  /// @brief Method ReplaceUnsignedAttributes, addr 0x127c9f0, size 0x134, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Cms::SignerInformation* ReplaceUnsignedAttributes(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                                       ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributes);

  /// @brief Method ToSignerInfo, addr 0x127c9e8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* ToSignerInfo();

  /// @brief Method Verify, addr 0x127c978, size 0x70, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method Verify, addr 0x127c7a0, size 0x98, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  /// @brief Method VerifyDigest, addr 0x127bf80, size 0x6a4, virtual false, abstract: false, final false
  inline bool VerifyDigest(::ArrayW<uint8_t, ::Array<uint8_t>*> digest, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Cms::CmsProcessable*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsProcessable*> const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_contentType() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_digestAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_digestAlgorithm() const;

  constexpr ::Org::BouncyCastle::Cms::IDigestCalculator*& __cordl_internal_get_digestCalculator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::IDigestCalculator*> const& __cordl_internal_get_digestCalculator() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_encryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_encryptionAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerInfo*& __cordl_internal_get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignerInfo*> const& __cordl_internal_get_info() const;

  constexpr bool const& __cordl_internal_get_isCounterSignature() const;

  constexpr bool& __cordl_internal_get_isCounterSignature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_resultDigest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_resultDigest();

  constexpr ::Org::BouncyCastle::Cms::SignerID*& __cordl_internal_get_sid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerID*> const& __cordl_internal_get_sid() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_signature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_signature();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_signedAttributeSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_signedAttributeSet() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_signedAttributeTable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __cordl_internal_get_signedAttributeTable() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unsignedAttributeSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_unsignedAttributeSet() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_unsignedAttributeTable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __cordl_internal_get_unsignedAttributeTable() const;

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Cms::CmsProcessable* value);

  constexpr void __cordl_internal_set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_digestCalculator(::Org::BouncyCastle::Cms::IDigestCalculator* value);

  constexpr void __cordl_internal_set_encryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::SignerInfo* value);

  constexpr void __cordl_internal_set_isCounterSignature(bool value);

  constexpr void __cordl_internal_set_resultDigest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_sid(::Org::BouncyCastle::Cms::SignerID* value);

  constexpr void __cordl_internal_set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_signedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_signedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr void __cordl_internal_set_unsignedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_unsignedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  /// @brief Method .ctor, addr 0x1279e44, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo);

  /// @brief Method .ctor, addr 0x1256e10, size 0x274, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Cms::CmsProcessable* content,
                    ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  /// @brief Method get_ContentType, addr 0x1279ee8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

  /// @brief Method get_DigestAlgOid, addr 0x1279f24, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_DigestAlgOid();

  /// @brief Method get_DigestAlgParams, addr 0x1279f50, size 0x38, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_DigestAlgParams();

  /// @brief Method get_DigestAlgorithmID, addr 0x1279f1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmID();

  /// @brief Method get_EncryptionAlgOid, addr 0x127a050, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_EncryptionAlgOid();

  /// @brief Method get_EncryptionAlgParams, addr 0x127a07c, size 0x38, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_EncryptionAlgParams();

  /// @brief Method get_EncryptionAlgorithmID, addr 0x127a048, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID();

  /// @brief Method get_IsCounterSignature, addr 0x1279ee0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCounterSignature();

  /// @brief Method get_SignedAttributes, addr 0x127a0b4, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_SignedAttributes();

  /// @brief Method get_SignerID, addr 0x1279ef0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerID* get_SignerID();

  /// @brief Method get_UnsignedAttributes, addr 0x127a12c, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_UnsignedAttributes();

  /// @brief Method get_Version, addr 0x1279ef8, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInformation(SignerInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInformation(SignerInformation const&) = delete;

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
