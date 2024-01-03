#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticatedDataParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
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
// Type: Org.BouncyCastle.Asn1.Cms::AuthenticatedDataParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(59))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AuthenticatedDataParser*
class CORDL_TYPE AuthenticatedDataParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field nextObject, offset 0x20, size 0x8
  __declspec(property(get = __get_nextObject, put = __set_nextObject))::Org::BouncyCastle::Asn1::IAsn1Convertible* nextObject;

  /// @brief Field originatorInfoCalled, offset 0x28, size 0x1
  __declspec(property(get = __get_originatorInfoCalled, put = __set_originatorInfoCalled)) bool originatorInfoCalled;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible*& __get_nextObject();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1Convertible*> const& __get_nextObject() const;

  constexpr void __set_nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible* value);

  constexpr bool& __get_originatorInfoCalled();

  constexpr bool const& __get_originatorInfoCalled() const;

  constexpr void __set_originatorInfoCalled(bool value);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method .ctor, addr 0xe72dbc, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version, addr 0xe72ee0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method GetOriginatorInfo, addr 0xe72ee8, size 0x2e0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo();

  /// @brief Method GetRecipientInfos, addr 0xe73340, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos();

  /// @brief Method GetMacAlgorithm, addr 0xe73440, size 0x168, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetMacAlgorithm();

  /// @brief Method GetDigestAlgorithm, addr 0xe735a8, size 0x19c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetDigestAlgorithm();

  /// @brief Method GetEnapsulatedContentInfo, addr 0xe73744, size 0x120, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEnapsulatedContentInfo();

  /// @brief Method GetAuthAttrs, addr 0xe73a44, size 0x1b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetAuthAttrs();

  /// @brief Method GetMac, addr 0xe73bfc, size 0x130, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetMac();

  /// @brief Method GetUnauthAttrs, addr 0xe73d2c, size 0x1ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnauthAttrs();

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticatedDataParser(AuthenticatedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticatedDataParser(AuthenticatedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticatedDataParser();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___nextObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, ___originatorInfoCalled) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*, "Org.BouncyCastle.Asn1.Cms", "AuthenticatedDataParser");
