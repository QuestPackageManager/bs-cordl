#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/TimeStampedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimeStampedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.TimeStampedDataParser
class CORDL_TYPE TimeStampedDataParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Content)) ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Content;

  __declspec(property(get = get_DataUri)) ::Org::BouncyCastle::Asn1::DerIA5String* DataUri;

  __declspec(property(get = get_MetaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData* MetaData;

  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* content;

  /// @brief Field dataUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataUri, put = __cordl_internal_set_dataUri)) ::Org::BouncyCastle::Asn1::DerIA5String* dataUri;

  /// @brief Field metaData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_metaData, put = __cordl_internal_set_metaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData* metaData;

  /// @brief Field parser, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_parser, put = __cordl_internal_set_parser)) ::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser;

  /// @brief Field temporalEvidence, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_temporalEvidence, put = __cordl_internal_set_temporalEvidence)) ::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x2314fc0, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* GetInstance(::System::Object* obj);

  /// @brief Method GetTemporalEvidence, addr 0x23150f4, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetTemporalEvidence();

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*& __cordl_internal_get_content();

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& __cordl_internal_get_dataUri() const;

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __cordl_internal_get_dataUri();

  constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData* const& __cordl_internal_get_metaData() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData*& __cordl_internal_get_metaData();

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* const& __cordl_internal_get_parser() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __cordl_internal_get_parser();

  constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence* const& __cordl_internal_get_temporalEvidence() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence*& __cordl_internal_get_temporalEvidence();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1OctetStringParser* value);

  constexpr void __cordl_internal_set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr void __cordl_internal_set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData* value);

  constexpr void __cordl_internal_set_parser(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  constexpr void __cordl_internal_set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2314bc0, size 0x400, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser);

  /// @brief Method get_Content, addr 0x23150ec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Content();

  /// @brief Method get_DataUri, addr 0x23150dc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri();

  /// @brief Method get_MetaData, addr 0x23150e4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampedDataParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampedDataParser(TimeStampedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampedDataParser(TimeStampedDataParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 100 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field dataUri, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___dataUri;

  /// @brief Field metaData, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::MetaData* ___metaData;

  /// @brief Field content, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* ___content;

  /// @brief Field temporalEvidence, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::Evidence* ___temporalEvidence;

  /// @brief Field parser, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1SequenceParser* ___parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___dataUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___metaData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___temporalEvidence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___parser) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*, "Org.BouncyCastle.Asn1.Cms", "TimeStampedDataParser");
