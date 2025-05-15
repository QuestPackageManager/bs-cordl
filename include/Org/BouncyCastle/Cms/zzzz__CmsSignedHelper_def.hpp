#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsSignedHelper)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedHelper);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedHelper
class CORDL_TYPE CmsSignedHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field EncryptionECDsaWithSha1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EncryptionECDsaWithSha1, put = setStaticF_EncryptionECDsaWithSha1)) ::StringW EncryptionECDsaWithSha1;

  /// @brief Field EncryptionECDsaWithSha224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EncryptionECDsaWithSha224, put = setStaticF_EncryptionECDsaWithSha224)) ::StringW EncryptionECDsaWithSha224;

  /// @brief Field EncryptionECDsaWithSha256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EncryptionECDsaWithSha256, put = setStaticF_EncryptionECDsaWithSha256)) ::StringW EncryptionECDsaWithSha256;

  /// @brief Field EncryptionECDsaWithSha384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EncryptionECDsaWithSha384, put = setStaticF_EncryptionECDsaWithSha384)) ::StringW EncryptionECDsaWithSha384;

  /// @brief Field EncryptionECDsaWithSha512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EncryptionECDsaWithSha512, put = setStaticF_EncryptionECDsaWithSha512)) ::StringW EncryptionECDsaWithSha512;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::Org::BouncyCastle::Cms::CmsSignedHelper* Instance;

  /// @brief Field digestAlgs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestAlgs, put = setStaticF_digestAlgs)) ::System::Collections::IDictionary* digestAlgs;

  /// @brief Field digestAliases, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestAliases, put = setStaticF_digestAliases)) ::System::Collections::IDictionary* digestAliases;

  /// @brief Field ecAlgorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ecAlgorithms, put = setStaticF_ecAlgorithms)) ::System::Collections::IDictionary* ecAlgorithms;

  /// @brief Field encryptionAlgs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encryptionAlgs, put = setStaticF_encryptionAlgs)) ::System::Collections::IDictionary* encryptionAlgs;

  /// @brief Field noParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noParams, put = setStaticF_noParams)) ::Org::BouncyCastle::Utilities::Collections::ISet* noParams;

  /// @brief Method AddCertsFromSet, addr 0x2674cf8, size 0x4c8, virtual false, abstract: false, final false
  inline void AddCertsFromSet(::System::Collections::IList* certs, ::Org::BouncyCastle::Asn1::Asn1Set* certSet);

  /// @brief Method AddCrlsFromSet, addr 0x26751c0, size 0x478, virtual false, abstract: false, final false
  inline void AddCrlsFromSet(::System::Collections::IList* crls, ::Org::BouncyCastle::Asn1::Asn1Set* crlSet);

  /// @brief Method AddEntries, addr 0x2672d2c, size 0x16c, virtual false, abstract: false, final false
  static inline void AddEntries(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW digest, ::StringW encryption);

  /// @brief Method CreateAttributeStore, addr 0x265bc9c, size 0x634, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* CreateAttributeStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* certSet);

  /// @brief Method CreateCertificateStore, addr 0x265c358, size 0x1a0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* CreateCertificateStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* certSet);

  /// @brief Method CreateCrlStore, addr 0x265c580, size 0x1a0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* CreateCrlStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* crlSet);

  /// @brief Method FixAlgID, addr 0x265ce8c, size 0xcc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* FixAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method GetDigestAlgName, addr 0x2662ad0, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GetDigestAlgName(::StringW digestAlgOid);

  /// @brief Method GetDigestAliases, addr 0x2674bac, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetDigestAliases(::StringW algName);

  /// @brief Method GetDigestInstance, addr 0x2662f50, size 0x1fc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* GetDigestInstance(::StringW algorithm);

  /// @brief Method GetEncAlgorithmIdentifier, addr 0x266314c, size 0x138, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetEncAlgorithmIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encOid,
                                                                                         ::Org::BouncyCastle::Asn1::Asn1Encodable* sigX509Parameters);

  /// @brief Method GetEncOid, addr 0x265f5e8, size 0x4e8, virtual false, abstract: false, final false
  inline ::StringW GetEncOid(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::StringW digestOID);

  /// @brief Method GetEncryptionAlgName, addr 0x2662bd8, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GetEncryptionAlgName(::StringW encryptionAlgOid);

  /// @brief Method GetSignatureInstance, addr 0x26681a0, size 0x58, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* GetSignatureInstance(::StringW algorithm);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* New_ctor();

  /// @brief Method .ctor, addr 0x2674ba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_EncryptionECDsaWithSha1();

  static inline ::StringW getStaticF_EncryptionECDsaWithSha224();

  static inline ::StringW getStaticF_EncryptionECDsaWithSha256();

  static inline ::StringW getStaticF_EncryptionECDsaWithSha384();

  static inline ::StringW getStaticF_EncryptionECDsaWithSha512();

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Instance();

  static inline ::System::Collections::IDictionary* getStaticF_digestAlgs();

  static inline ::System::Collections::IDictionary* getStaticF_digestAliases();

  static inline ::System::Collections::IDictionary* getStaticF_ecAlgorithms();

  static inline ::System::Collections::IDictionary* getStaticF_encryptionAlgs();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams();

  static inline void setStaticF_EncryptionECDsaWithSha1(::StringW value);

  static inline void setStaticF_EncryptionECDsaWithSha224(::StringW value);

  static inline void setStaticF_EncryptionECDsaWithSha256(::StringW value);

  static inline void setStaticF_EncryptionECDsaWithSha384(::StringW value);

  static inline void setStaticF_EncryptionECDsaWithSha512(::StringW value);

  static inline void setStaticF_Instance(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

  static inline void setStaticF_digestAlgs(::System::Collections::IDictionary* value);

  static inline void setStaticF_digestAliases(::System::Collections::IDictionary* value);

  static inline void setStaticF_ecAlgorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_encryptionAlgs(::System::Collections::IDictionary* value);

  static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedHelper(CmsSignedHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedHelper(CmsSignedHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 660 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedHelper, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedHelper*, "Org.BouncyCastle.Cms", "CmsSignedHelper");
