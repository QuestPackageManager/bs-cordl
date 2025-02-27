#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X500/AttributeTypeAndValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AttributeTypeAndValue)
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
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X500.AttributeTypeAndValue
class CORDL_TYPE AttributeTypeAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* value;

  /// @brief Method GetInstance, addr 0x250523c, size 0xec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method ToAsn1Object, addr 0x2505364, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_type() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_type();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_value() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x250515c, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2505328, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method get_Type, addr 0x2505354, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method get_Value, addr 0x250535c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTypeAndValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeTypeAndValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeTypeAndValue(AttributeTypeAndValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTypeAndValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeTypeAndValue(AttributeTypeAndValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 324 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___type;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, "Org.BouncyCastle.Asn1.X500", "AttributeTypeAndValue");
