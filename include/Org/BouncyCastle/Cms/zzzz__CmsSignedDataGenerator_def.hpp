#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedDataGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataGenerator_SignerInf;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataGenerator_SignerInf;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataGenerator/SignerInf
class CORDL_TYPE CmsSignedDataGenerator_SignerInf : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DigestAlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithmID;

  __declspec(property(get = get_SignedAttributes)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* SignedAttributes;

  __declspec(property(get = get_UnsignedAttributes)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* UnsignedAttributes;

  /// @brief Field baseSignedTable, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_baseSignedTable, put = __cordl_internal_set_baseSignedTable)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable;

  /// @brief Field digestOID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_digestOID, put = __cordl_internal_set_digestOID)) ::StringW digestOID;

  /// @brief Field encOID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_encOID, put = __cordl_internal_set_encOID)) ::StringW encOID;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::Org::BouncyCastle::Cms::CmsSignedGenerator* outer;

  /// @brief Field sAttr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sAttr, put = __cordl_internal_set_sAttr)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr;

  /// @brief Field sigCalc, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigCalc, put = __cordl_internal_set_sigCalc)) ::Org::BouncyCastle::Crypto::ISignatureFactory* sigCalc;

  /// @brief Field signerIdentifier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_signerIdentifier, put = __cordl_internal_set_signerIdentifier)) ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier;

  /// @brief Field unsAttr, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_unsAttr, put = __cordl_internal_set_unsAttr)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr;

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf* New_ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                     ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW digestOID, ::StringW encOID,
                                                                                     ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr,
                                                                                     ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr,
                                                                                     ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*
  New_ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::ISignatureFactory* sigCalc, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
           ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable);

  /// @brief Method ToSignerInfo, addr 0x35bb73c, size 0xbb4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* ToSignerInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Cms::CmsProcessable* content,
                                                                  ::Org::BouncyCastle::Security::SecureRandom* random);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& __cordl_internal_get_baseSignedTable() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_baseSignedTable();

  constexpr ::StringW const& __cordl_internal_get_digestOID() const;

  constexpr ::StringW& __cordl_internal_get_digestOID();

  constexpr ::StringW const& __cordl_internal_get_encOID() const;

  constexpr ::StringW& __cordl_internal_get_encOID();

  constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator* const& __cordl_internal_get_outer() const;

  constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator*& __cordl_internal_get_outer();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& __cordl_internal_get_sAttr() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get_sAttr();

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory* const& __cordl_internal_get_sigCalc() const;

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& __cordl_internal_get_sigCalc();

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* const& __cordl_internal_get_signerIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& __cordl_internal_get_signerIdentifier();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& __cordl_internal_get_unsAttr() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get_unsAttr();

  constexpr void __cordl_internal_set_baseSignedTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr void __cordl_internal_set_digestOID(::StringW value);

  constexpr void __cordl_internal_set_encOID(::StringW value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Cms::CmsSignedGenerator* value);

  constexpr void __cordl_internal_set_sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr void __cordl_internal_set_sigCalc(::Org::BouncyCastle::Crypto::ISignatureFactory* value);

  constexpr void __cordl_internal_set_signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value);

  constexpr void __cordl_internal_set_unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  /// @brief Method .ctor, addr 0x35ba668, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
                    ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr,
                    ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable);

  /// @brief Method .ctor, addr 0x35ba454, size 0x214, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::ISignatureFactory* sigCalc, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
                    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr,
                    ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable);

  /// @brief Method get_DigestAlgorithmID, addr 0x35bb684, size 0xb8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmID();

  /// @brief Method get_SignedAttributes, addr 0x35bcc5c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_SignedAttributes();

  /// @brief Method get_UnsignedAttributes, addr 0x35bcc64, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_UnsignedAttributes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataGenerator_SignerInf();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataGenerator_SignerInf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataGenerator_SignerInf(CmsSignedDataGenerator_SignerInf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataGenerator_SignerInf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataGenerator_SignerInf(CmsSignedDataGenerator_SignerInf const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 650 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsSignedGenerator* ___outer;

  /// @brief Field sigCalc, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISignatureFactory* ___sigCalc;

  /// @brief Field signerIdentifier, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* ___signerIdentifier;

  /// @brief Field digestOID, offset: 0x28, size: 0x8, def value: None
  ::StringW ___digestOID;

  /// @brief Field encOID, offset: 0x30, size: 0x8, def value: None
  ::StringW ___encOID;

  /// @brief Field sAttr, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___sAttr;

  /// @brief Field unsAttr, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___unsAttr;

  /// @brief Field baseSignedTable, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___baseSignedTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___sigCalc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___signerIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___digestOID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___encOID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___sAttr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___unsAttr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, ___baseSignedTable) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies Org.BouncyCastle.Cms.CmsSignedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataGenerator
class CORDL_TYPE CmsSignedDataGenerator : public ::Org::BouncyCastle::Cms::CmsSignedGenerator {
public:
  // Declarations
  using SignerInf = ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper)) ::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  /// @brief Field signerInfs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInfs, put = __cordl_internal_set_signerInfs)) ::System::Collections::IList* signerInfs;

  /// @brief Method AddSigner, addr 0x35b92ac, size 0xa4, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID);

  /// @brief Method AddSigner, addr 0x35b9c48, size 0xbc, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x35ba060, size 0xbc, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen);

  /// @brief Method AddSigner, addr 0x35b985c, size 0xd8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOID, ::StringW digestOID);

  /// @brief Method AddSigner, addr 0x35b9d04, size 0x110, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOID, ::StringW digestOID,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x35ba11c, size 0xb8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOID, ::StringW digestOID,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen);

  /// @brief Method AddSigner, addr 0x35b9acc, size 0xa4, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOID);

  /// @brief Method AddSigner, addr 0x35b9e94, size 0xbc, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOID,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x35ba1d4, size 0xbc, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOID,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen);

  /// @brief Method AddSigner, addr 0x35b9b70, size 0xd8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID);

  /// @brief Method AddSigner, addr 0x35b9f50, size 0x110, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x35ba290, size 0xb8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen);

  /// @brief Method AddSignerInfoGenerator, addr 0x35ba348, size 0x10c, virtual false, abstract: false, final false
  inline void AddSignerInfoGenerator(::Org::BouncyCastle::Cms::SignerInfoGenerator* signerInfoGenerator);

  /// @brief Method Generate, addr 0x35ba7ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsSignedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content);

  /// @brief Method Generate, addr 0x35ba7b4, size 0x7c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsSignedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, bool encapsulate);

  /// @brief Method Generate, addr 0x35ba830, size 0xe54, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsSignedData* Generate(::StringW signedContentType, ::Org::BouncyCastle::Cms::CmsProcessable* content, bool encapsulate);

  /// @brief Method GenerateCounterSigners, addr 0x35bc670, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInformationStore* GenerateCounterSigners(::Org::BouncyCastle::Cms::SignerInformation* signer);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_signerInfs() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_signerInfs();

  constexpr void __cordl_internal_set_signerInfs(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x35b917c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35b920c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method doAddSigner, addr 0x35b9994, size 0x138, virtual false, abstract: false, final false
  inline void doAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW encryptionOID,
                          ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen,
                          ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataGenerator(CmsSignedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataGenerator(CmsSignedDataGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 651 };

  /// @brief Field signerInfs, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IList* ___signerInfs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataGenerator, ___signerInfs) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataGenerator*, "Org.BouncyCastle.Cms", "CmsSignedDataGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*, "Org.BouncyCastle.Cms", "CmsSignedDataGenerator/SignerInf");
