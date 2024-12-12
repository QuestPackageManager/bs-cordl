#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/TimeStampedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampedData)
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
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
class TimeStampedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampedData);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.TimeStampedData
class CORDL_TYPE TimeStampedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Content)) ::Org::BouncyCastle::Asn1::Asn1OctetString* Content;

  __declspec(property(get = get_DataUri)) ::Org::BouncyCastle::Asn1::DerIA5String* DataUri;

  __declspec(property(get = get_MetaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData* MetaData;

  __declspec(property(get = get_TemporalEvidence)) ::Org::BouncyCastle::Asn1::Cms::Evidence* TemporalEvidence;

  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1OctetString* content;

  /// @brief Field dataUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataUri, put = __cordl_internal_set_dataUri)) ::Org::BouncyCastle::Asn1::DerIA5String* dataUri;

  /// @brief Field metaData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_metaData, put = __cordl_internal_set_metaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData* metaData;

  /// @brief Field temporalEvidence, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_temporalEvidence, put = __cordl_internal_set_temporalEvidence)) ::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x230e200, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* New_ctor(::Org::BouncyCastle::Asn1::DerIA5String* dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData* metaData,
                                                                          ::Org::BouncyCastle::Asn1::Asn1OctetString* content, ::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x230e2c4, size 0x1ac, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_content();

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& __cordl_internal_get_dataUri() const;

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __cordl_internal_get_dataUri();

  constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData* const& __cordl_internal_get_metaData() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData*& __cordl_internal_get_metaData();

  constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence* const& __cordl_internal_get_temporalEvidence() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence*& __cordl_internal_get_temporalEvidence();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr void __cordl_internal_set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData* value);

  constexpr void __cordl_internal_set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x230de24, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerIA5String* dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData* metaData, ::Org::BouncyCastle::Asn1::Asn1OctetString* content,
                    ::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence);

  /// @brief Method .ctor, addr 0x230deb0, size 0x268, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Content, addr 0x230e2b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Content();

  /// @brief Method get_DataUri, addr 0x230e2a4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri();

  /// @brief Method get_MetaData, addr 0x230e2ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData();

  /// @brief Method get_TemporalEvidence, addr 0x230e2bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Evidence* get_TemporalEvidence();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampedData(TimeStampedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampedData(TimeStampedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 99 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field dataUri, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___dataUri;

  /// @brief Field metaData, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::MetaData* ___metaData;

  /// @brief Field content, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___content;

  /// @brief Field temporalEvidence, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::Evidence* ___temporalEvidence;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedData, ___dataUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedData, ___metaData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedData, ___content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampedData, ___temporalEvidence) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampedData, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampedData*, "Org.BouncyCastle.Asn1.Cms", "TimeStampedData");
