#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/AuthenticatedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticatedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.AuthenticatedDataParser
class CORDL_TYPE AuthenticatedDataParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field nextObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nextObject, put = __cordl_internal_set_nextObject)) ::Org::BouncyCastle::Asn1::IAsn1Convertible* nextObject;

  /// @brief Field originatorInfoCalled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_originatorInfoCalled, put = __cordl_internal_set_originatorInfoCalled)) bool originatorInfoCalled;

  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetAuthAttrs, addr 0x2302bfc, size 0x1b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetAuthAttrs();

  /// @brief Method GetDigestAlgorithm, addr 0x230276c, size 0x19c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetDigestAlgorithm();

  /// @brief Method GetEnapsulatedContentInfo, addr 0x2302908, size 0x114, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEnapsulatedContentInfo();

  /// @brief Method GetMac, addr 0x2302db4, size 0x130, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetMac();

  /// @brief Method GetMacAlgorithm, addr 0x2302604, size 0x168, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetMacAlgorithm();

  /// @brief Method GetOriginatorInfo, addr 0x23020c0, size 0x2dc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo();

  /// @brief Method GetRecipientInfos, addr 0x2302504, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos();

  /// @brief Method GetUnauthAttrs, addr 0x2302ee4, size 0x1ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnauthAttrs();

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* const& __cordl_internal_get_nextObject() const;

  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible*& __cordl_internal_get_nextObject();

  constexpr bool const& __cordl_internal_get_originatorInfoCalled() const;

  constexpr bool& __cordl_internal_get_originatorInfoCalled();

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __cordl_internal_get_seq();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible* value);

  constexpr void __cordl_internal_set_originatorInfoCalled(bool value);

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2301f94, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version, addr 0x23020b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticatedDataParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticatedDataParser(AuthenticatedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticatedDataParser(AuthenticatedDataParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 59 };

  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1SequenceParser* ___seq;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field nextObject, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IAsn1Convertible* ___nextObject;

  /// @brief Field originatorInfoCalled, offset: 0x28, size: 0x1, def value: None
  bool ___originatorInfoCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___nextObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___originatorInfoCalled) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*, "Org.BouncyCastle.Asn1.Cms", "AuthenticatedDataParser");
