#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AttributeX509.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AttributeX509)
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
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AttributeX509);
// Type: Org.BouncyCastle.Asn1.X509::AttributeX509
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttributeX509*
class CORDL_TYPE AttributeX509 : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AttrType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AttrType;

  __declspec(property(get = get_AttrValues))::Org::BouncyCastle::Asn1::Asn1Set* AttrValues;

  /// @brief Field attrType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attrType, put = __cordl_internal_set_attrType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType;

  /// @brief Field attrValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attrValues, put = __cordl_internal_set_attrValues))::Org::BouncyCastle::Asn1::Asn1Set* attrValues;

  /// @brief Method GetAttributeValues, addr 0x12de568, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> GetAttributeValues();

  /// @brief Method GetInstance, addr 0x12de078, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeX509* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeX509* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeX509* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x12de594, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_attrType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_attrType() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_attrValues();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_attrValues() const;

  constexpr void __cordl_internal_set_attrType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_attrValues(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x12de534, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues);

  /// @brief Method .ctor, addr 0x12de200, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AttrType, addr 0x12de560, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AttrType();

  /// @brief Method get_AttrValues, addr 0x12de58c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AttrValues();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeX509();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeX509", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeX509(AttributeX509&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeX509", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeX509(AttributeX509 const&) = delete;

  /// @brief Field attrType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___attrType;

  /// @brief Field attrValues, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attrValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttributeX509, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeX509, ___attrType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeX509, ___attrValues) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttributeX509);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttributeX509*, "Org.BouncyCastle.Asn1.X509", "AttributeX509");
