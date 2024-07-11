#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/OtherKeyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherKeyAttribute)
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
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute);
// Type: Org.BouncyCastle.Asn1.Cms::OtherKeyAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::OtherKeyAttribute*
class CORDL_TYPE OtherKeyAttribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_KeyAttr))::Org::BouncyCastle::Asn1::Asn1Encodable* KeyAttr;

  __declspec(property(get = get_KeyAttrId))::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyAttrId;

  /// @brief Field keyAttr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyAttr, put = __cordl_internal_set_keyAttr))::Org::BouncyCastle::Asn1::Asn1Encodable* keyAttr;

  /// @brief Field keyAttrId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyAttrId, put = __cordl_internal_set_keyAttrId))::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAttrId;

  /// @brief Method GetInstance, addr 0x10e9e30, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAttrId, ::Org::BouncyCastle::Asn1::Asn1Encodable* keyAttr);

  static inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10ecbe8, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_keyAttr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_keyAttr() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyAttrId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_keyAttrId() const;

  constexpr void __cordl_internal_set_keyAttr(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_keyAttrId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x10ecbac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAttrId, ::Org::BouncyCastle::Asn1::Asn1Encodable* keyAttr);

  /// @brief Method .ctor, addr 0x10ecacc, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_KeyAttr, addr 0x10ecbe0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_KeyAttr();

  /// @brief Method get_KeyAttrId, addr 0x10ecbd8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_KeyAttrId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherKeyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherKeyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherKeyAttribute(OtherKeyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherKeyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherKeyAttribute(OtherKeyAttribute const&) = delete;

  /// @brief Field keyAttrId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyAttrId;

  /// @brief Field keyAttr, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___keyAttr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute, ___keyAttrId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute, ___keyAttr) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*, "Org.BouncyCastle.Asn1.Cms", "OtherKeyAttribute");
