#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherRevVals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRevVals)
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
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevVals;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherRevVals);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherRevVals
class CORDL_TYPE OtherRevVals : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OtherRevValType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* OtherRevValType;

  __declspec(property(get = get_OtherRevValsObject)) ::Org::BouncyCastle::Asn1::Asn1Object* OtherRevValsObject;

  /// @brief Field otherRevValType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevValType, put = __cordl_internal_set_otherRevValType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevValType;

  /// @brief Field otherRevVals, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevVals, put = __cordl_internal_set_otherRevVals)) ::Org::BouncyCastle::Asn1::Asn1Object* otherRevVals;

  /// @brief Method GetInstance, addr 0x2323014, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevValType, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevVals);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2323450, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_otherRevValType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_otherRevValType();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get_otherRevVals() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_otherRevVals();

  constexpr void __cordl_internal_set_otherRevValType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_otherRevVals(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x2323390, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevValType, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevVals);

  /// @brief Method .ctor, addr 0x2323190, size 0x200, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OtherRevValType, addr 0x2323440, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherRevValType();

  /// @brief Method get_OtherRevValsObject, addr 0x2323448, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_OtherRevValsObject();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherRevVals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherRevVals(OtherRevVals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherRevVals(OtherRevVals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 152 };

  /// @brief Field otherRevValType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___otherRevValType;

  /// @brief Field otherRevVals, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___otherRevVals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherRevVals, ___otherRevValType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherRevVals, ___otherRevVals) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherRevVals, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherRevVals);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherRevVals*, "Org.BouncyCastle.Asn1.Esf", "OtherRevVals");
