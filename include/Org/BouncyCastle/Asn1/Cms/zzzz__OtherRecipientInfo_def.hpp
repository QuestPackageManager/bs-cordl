#pragma once
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
// Type: Org.BouncyCastle.Asn1.Cms::OtherRecipientInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(85))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::OtherRecipientInfo*
class CORDL_TYPE OtherRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field oriType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_oriType, put = __cordl_internal_set_oriType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType;

  /// @brief Field oriValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_oriValue, put = __cordl_internal_set_oriValue))::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue;

  __declspec(property(get = get_OriType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OriType;

  __declspec(property(get = get_OriValue))::Org::BouncyCastle::Asn1::Asn1Encodable* OriValue;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_oriType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_oriType() const;

  constexpr void __cordl_internal_set_oriType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_oriValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_oriValue() const;

  constexpr void __cordl_internal_set_oriValue(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType, ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue);

  /// @brief Method .ctor, addr 0xe7b964, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType, ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe7b990, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe7ba3c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xe7ba54, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* GetInstance(::System::Object* obj);

  /// @brief Method get_OriType, addr 0xe7baf8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OriType();

  /// @brief Method get_OriValue, addr 0xe7bb00, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_OriValue();

  /// @brief Method ToAsn1Object, addr 0xe7bb08, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherRecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherRecipientInfo(OtherRecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherRecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherRecipientInfo(OtherRecipientInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherRecipientInfo();

public:
  /// @brief Field oriType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___oriType;

  /// @brief Field oriValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___oriValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, ___oriType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, ___oriValue) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "OtherRecipientInfo");
