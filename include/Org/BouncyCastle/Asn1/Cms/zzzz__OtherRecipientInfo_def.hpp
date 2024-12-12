#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/OtherRecipientInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRecipientInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.OtherRecipientInfo
class CORDL_TYPE OtherRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OriType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* OriType;

  __declspec(property(get = get_OriValue)) ::Org::BouncyCastle::Asn1::Asn1Encodable* OriValue;

  /// @brief Field oriType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_oriType, put = __cordl_internal_set_oriType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType;

  /// @brief Field oriValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_oriValue, put = __cordl_internal_set_oriValue)) ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue;

  /// @brief Method GetInstance, addr 0x23086b4, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x23086cc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType, ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2308780, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_oriType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_oriType();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_oriValue() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_oriValue();

  constexpr void __cordl_internal_set_oriType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_oriValue(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x23085dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType, ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue);

  /// @brief Method .ctor, addr 0x2308608, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OriType, addr 0x2308770, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OriType();

  /// @brief Method get_OriValue, addr 0x2308778, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_OriValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherRecipientInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherRecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherRecipientInfo(OtherRecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherRecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherRecipientInfo(OtherRecipientInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 85 };

  /// @brief Field oriType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___oriType;

  /// @brief Field oriValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___oriValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, ___oriType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, ___oriValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "OtherRecipientInfo");
