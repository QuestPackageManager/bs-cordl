#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthEnvelopedDataParser)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthEnvelopedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::AuthEnvelopedDataParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(61))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AuthEnvelopedDataParser*
class CORDL_TYPE AuthEnvelopedDataParser : public ::System::Object {
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

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method .ctor addr 0xe74778 size 0x124 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version addr 0xe7489c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method GetOriginatorInfo addr 0xe748a4 size 0x2e0 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo();

  /// @brief Method GetRecipientInfos addr 0xe74b84 size 0x100 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos();

  /// @brief Method GetAuthEncryptedContentInfo addr 0xe74c84 size 0x120 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* GetAuthEncryptedContentInfo();

  /// @brief Method GetAuthAttrs addr 0xe7505c size 0x1b8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetAuthAttrs();

  /// @brief Method GetMac addr 0xe75214 size 0x130 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetMac();

  /// @brief Method GetUnauthAttrs addr 0xe75344 size 0x1ac virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnauthAttrs();

  // Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthEnvelopedDataParser(AuthEnvelopedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthEnvelopedDataParser(AuthEnvelopedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthEnvelopedDataParser();

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*, "Org.BouncyCastle.Asn1.Cms", "AuthEnvelopedDataParser");
