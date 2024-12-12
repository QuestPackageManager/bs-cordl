#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/EnvelopedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvelopedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
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
class EnvelopedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.EnvelopedDataParser
class CORDL_TYPE EnvelopedDataParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field _nextObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nextObject, put = __cordl_internal_set__nextObject)) ::Org::BouncyCastle::Asn1::IAsn1Convertible* _nextObject;

  /// @brief Field _originatorInfoCalled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__originatorInfoCalled, put = __cordl_internal_set__originatorInfoCalled)) bool _originatorInfoCalled;

  /// @brief Field _seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__seq, put = __cordl_internal_set__seq)) ::Org::BouncyCastle::Asn1::Asn1SequenceParser* _seq;

  /// @brief Field _version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::Org::BouncyCastle::Asn1::DerInteger* _version;

  /// @brief Method GetEncryptedContentInfo, addr 0x2304be0, size 0x114, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* GetEncryptedContentInfo();

  /// @brief Method GetOriginatorInfo, addr 0x2304804, size 0x2dc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo();

  /// @brief Method GetRecipientInfos, addr 0x2304ae0, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos();

  /// @brief Method GetUnprotectedAttrs, addr 0x2304cf4, size 0x1ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnprotectedAttrs();

  static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* const& __cordl_internal_get__nextObject() const;

  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible*& __cordl_internal_get__nextObject();

  constexpr bool const& __cordl_internal_get__originatorInfoCalled() const;

  constexpr bool& __cordl_internal_get__originatorInfoCalled();

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* const& __cordl_internal_get__seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __cordl_internal_get__seq();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get__version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible* value);

  constexpr void __cordl_internal_set__originatorInfoCalled(bool value);

  constexpr void __cordl_internal_set__seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  constexpr void __cordl_internal_set__version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23046d8, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version, addr 0x23047fc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvelopedDataParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvelopedDataParser(EnvelopedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvelopedDataParser(EnvelopedDataParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 72 };

  /// @brief Field _seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1SequenceParser* ____seq;

  /// @brief Field _version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ____version;

  /// @brief Field _nextObject, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IAsn1Convertible* ____nextObject;

  /// @brief Field _originatorInfoCalled, offset: 0x28, size: 0x1, def value: None
  bool ____originatorInfoCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____nextObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____originatorInfoCalled) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*, "Org.BouncyCastle.Asn1.Cms", "EnvelopedDataParser");
