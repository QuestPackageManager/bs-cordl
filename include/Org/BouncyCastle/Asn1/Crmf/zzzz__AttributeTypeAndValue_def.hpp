#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributeTypeAndValue)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue);
// Type: Org.BouncyCastle.Asn1.Crmf::AttributeTypeAndValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(102))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::AttributeTypeAndValue*
class CORDL_TYPE AttributeTypeAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::Org::BouncyCastle::Asn1::Asn1Encodable* value;

  __declspec(property(get = get_Type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_type() const;

  constexpr void __set_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_value() const;

  constexpr void __set_value(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe835ac, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe8368c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* New_ctor(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0xe83814, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0xe83894, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method get_Type, addr 0xe838c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method get_Value, addr 0xe838c8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Method ToAsn1Object, addr 0xe838d0, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTypeAndValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeTypeAndValue(AttributeTypeAndValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTypeAndValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeTypeAndValue(AttributeTypeAndValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTypeAndValue();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___type;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue, ___value) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, "Org.BouncyCastle.Asn1.Crmf", "AttributeTypeAndValue");
