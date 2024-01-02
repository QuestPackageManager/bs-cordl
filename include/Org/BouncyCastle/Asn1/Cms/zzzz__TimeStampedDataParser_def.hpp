#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimeStampedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampedDataParser
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(100))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::TimeStampedDataParser*
class CORDL_TYPE TimeStampedDataParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field dataUri, offset 0x18, size 0x8
  __declspec(property(get = __get_dataUri, put = __set_dataUri))::Org::BouncyCastle::Asn1::DerIA5String* dataUri;

  /// @brief Field metaData, offset 0x20, size 0x8
  __declspec(property(get = __get_metaData, put = __set_metaData))::Org::BouncyCastle::Asn1::Cms::MetaData* metaData;

  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::Org::BouncyCastle::Asn1::Asn1OctetStringParser* content;

  /// @brief Field temporalEvidence, offset 0x30, size 0x8
  __declspec(property(get = __get_temporalEvidence, put = __set_temporalEvidence))::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence;

  /// @brief Field parser, offset 0x38, size 0x8
  __declspec(property(get = __get_parser, put = __set_parser))::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser;

  __declspec(property(get = get_DataUri))::Org::BouncyCastle::Asn1::DerIA5String* DataUri;

  __declspec(property(get = get_MetaData))::Org::BouncyCastle::Asn1::Cms::MetaData* MetaData;

  __declspec(property(get = get_Content))::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Content;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __get_dataUri();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> const& __get_dataUri() const;

  constexpr void __set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData*& __get_metaData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::MetaData*> const& __get_metaData() const;

  constexpr void __set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*> const& __get_content() const;

  constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1OctetStringParser* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence*& __get_temporalEvidence();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::Evidence*> const& __get_temporalEvidence() const;

  constexpr void __set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __get_parser();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> const& __get_parser() const;

  constexpr void __set_parser(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser);

  /// @brief Method .ctor, addr 0xe82948, size 0x400, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser);

  /// @brief Method GetInstance, addr 0xe82d48, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* GetInstance(::System::Object* obj);

  /// @brief Method get_DataUri, addr 0xe82e70, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri();

  /// @brief Method get_MetaData, addr 0xe82e78, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData();

  /// @brief Method get_Content, addr 0xe82e80, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Content();

  /// @brief Method GetTemporalEvidence, addr 0xe82e88, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetTemporalEvidence();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampedDataParser(TimeStampedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampedDataParser(TimeStampedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampedDataParser();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___dataUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___metaData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___temporalEvidence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, ___parser) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*, "Org.BouncyCastle.Asn1.Cms", "TimeStampedDataParser");
