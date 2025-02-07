#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspReqGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OcspReqGenerator)
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Ocsp {
class OcspReqGenerator_RequestObject;
}
namespace Org::BouncyCastle::Ocsp {
class OcspReq;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspReqGenerator;
}
namespace Org::BouncyCastle::Ocsp {
class OcspReqGenerator_RequestObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspReqGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject);
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.OcspReqGenerator/RequestObject
class CORDL_TYPE OcspReqGenerator_RequestObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field certId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certId, put = __cordl_internal_set_certId)) ::Org::BouncyCastle::Ocsp::CertificateID* certId;

  /// @brief Field extensions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  static inline ::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method ToRequest, addr 0x2521d28, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::Request* ToRequest();

  constexpr ::Org::BouncyCastle::Ocsp::CertificateID* const& __cordl_internal_get_certId() const;

  constexpr ::Org::BouncyCastle::Ocsp::CertificateID*& __cordl_internal_get_certId();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr void __cordl_internal_set_certId(::Org::BouncyCastle::Ocsp::CertificateID* value);

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method .ctor, addr 0x2520ec0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspReqGenerator_RequestObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspReqGenerator_RequestObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspReqGenerator_RequestObject(OcspReqGenerator_RequestObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspReqGenerator_RequestObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspReqGenerator_RequestObject(OcspReqGenerator_RequestObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1614 };

  /// @brief Field certId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Ocsp::CertificateID* ___certId;

  /// @brief Field extensions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject, ___certId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject, ___extensions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.OcspReqGenerator
class CORDL_TYPE OcspReqGenerator : public ::System::Object {
public:
  // Declarations
  using RequestObject = ::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject;

  __declspec(property(get = get_SignatureAlgNames)) ::System::Collections::IEnumerable* SignatureAlgNames;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::IList* list;

  /// @brief Field requestExtensions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_requestExtensions, put = __cordl_internal_set_requestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions;

  /// @brief Field requestorName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_requestorName, put = __cordl_internal_set_requestorName)) ::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName;

  /// @brief Method AddRequest, addr 0x2520de0, size 0xe0, virtual false, abstract: false, final false
  inline void AddRequest(::Org::BouncyCastle::Ocsp::CertificateID* certId);

  /// @brief Method AddRequest, addr 0x2520eec, size 0xe4, virtual false, abstract: false, final false
  inline void AddRequest(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions);

  /// @brief Method Generate, addr 0x2521d9c, size 0x14, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::OcspReq* Generate();

  /// @brief Method Generate, addr 0x2521db0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::OcspReq* Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                      ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain);

  /// @brief Method Generate, addr 0x2521db8, size 0x1a4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::OcspReq* Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                      ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                      ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateRequest, addr 0x2521108, size 0xc20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::OcspReq* GenerateRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                             ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                             ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Ocsp::OcspReqGenerator* New_ctor();

  /// @brief Method SetRequestExtensions, addr 0x2521100, size 0x8, virtual false, abstract: false, final false
  inline void SetRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method SetRequestorName, addr 0x25210f8, size 0x8, virtual false, abstract: false, final false
  inline void SetRequestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName);

  /// @brief Method SetRequestorName, addr 0x2520fd0, size 0x128, virtual false, abstract: false, final false
  inline void SetRequestorName(::Org::BouncyCastle::Asn1::X509::X509Name* requestorName);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_list();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_requestExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_requestExtensions();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_requestorName() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_requestorName();

  constexpr void __cordl_internal_set_list(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  /// @brief Method .ctor, addr 0x25221b0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SignatureAlgNames, addr 0x2522164, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspReqGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspReqGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspReqGenerator(OcspReqGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspReqGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspReqGenerator(OcspReqGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1615 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___list;

  /// @brief Field requestorName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___requestorName;

  /// @brief Field requestExtensions, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___requestExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspReqGenerator, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspReqGenerator, ___requestorName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspReqGenerator, ___requestExtensions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspReqGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspReqGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspReqGenerator*, "Org.BouncyCastle.Ocsp", "OcspReqGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject*, "Org.BouncyCastle.Ocsp", "OcspReqGenerator/RequestObject");
