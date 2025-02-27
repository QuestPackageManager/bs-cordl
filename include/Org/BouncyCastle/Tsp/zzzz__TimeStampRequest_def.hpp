#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampRequest)
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampReq;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampRequest);
// Dependencies Org.BouncyCastle.X509.X509ExtensionBase
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampRequest
class CORDL_TYPE TimeStampRequest : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_CertReq)) bool CertReq;

  __declspec(property(get = get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  __declspec(property(get = get_HasExtensions)) bool HasExtensions;

  __declspec(property(get = get_MessageImprintAlgOid)) ::StringW MessageImprintAlgOid;

  __declspec(property(get = get_Nonce)) ::Org::BouncyCastle::Math::BigInteger* Nonce;

  __declspec(property(get = get_ReqPolicy)) ::StringW ReqPolicy;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field extensions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field req, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_req, put = __cordl_internal_set_req)) ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* req;

  /// @brief Method GetEncoded, addr 0x25cea50, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetExtension, addr 0x25cea7c, size 0x14, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionOids, addr 0x25cea90, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetExtensionOids();

  /// @brief Method GetMessageImprintDigest, addr 0x25ce178, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMessageImprintDigest();

  /// @brief Method GetX509Extensions, addr 0x25ceb98, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> req);

  static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* req);

  static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* str);

  /// @brief Method Validate, addr 0x25ce220, size 0x610, virtual false, abstract: false, final false
  inline void Validate(::System::Collections::IList* algorithms, ::System::Collections::IList* policies, ::System::Collections::IList* extensions);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* const& __cordl_internal_get_req() const;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*& __cordl_internal_get_req();

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_req(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* value);

  /// @brief Method .ctor, addr 0x25ce0ac, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x25cdf14, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> req);

  /// @brief Method .ctor, addr 0x25cdedc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* req);

  /// @brief Method .ctor, addr 0x25cdf80, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* str);

  /// @brief Method get_CertReq, addr 0x25ce1f4, size 0x2c, virtual false, abstract: false, final false
  inline bool get_CertReq();

  /// @brief Method get_Extensions, addr 0x25ce854, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method get_HasExtensions, addr 0x25cea6c, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasExtensions();

  /// @brief Method get_MessageImprintAlgOid, addr 0x25ce13c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_MessageImprintAlgOid();

  /// @brief Method get_Nonce, addr 0x25ce1c8, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Nonce();

  /// @brief Method get_ReqPolicy, addr 0x25ce19c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_ReqPolicy();

  /// @brief Method get_Version, addr 0x25ce118, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampRequest(TimeStampRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampRequest(TimeStampRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1764 };

  /// @brief Field req, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* ___req;

  /// @brief Field extensions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampRequest, ___req) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampRequest, ___extensions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampRequest, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampRequest*, "Org.BouncyCastle.Tsp", "TimeStampRequest");
