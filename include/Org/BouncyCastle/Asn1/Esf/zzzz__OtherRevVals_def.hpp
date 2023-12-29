#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRevVals)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevVals;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherRevVals);
// Type: Org.BouncyCastle.Asn1.Esf::OtherRevVals
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(152))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherRevVals*
class CORDL_TYPE OtherRevVals : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field otherRevValType, offset 0x10, size 0x8
  __declspec(property(get = __get_otherRevValType, put = __set_otherRevValType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevValType;

  /// @brief Field otherRevVals, offset 0x18, size 0x8
  __declspec(property(get = __get_otherRevVals, put = __set_otherRevVals))::Org::BouncyCastle::Asn1::Asn1Object* otherRevVals;

  __declspec(property(get = get_OtherRevValType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OtherRevValType;

  __declspec(property(get = get_OtherRevValsObject))::Org::BouncyCastle::Asn1::Asn1Object* OtherRevValsObject;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_otherRevValType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_otherRevValType() const;

  constexpr void __set_otherRevValType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_otherRevVals();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_otherRevVals() const;

  constexpr void __set_otherRevVals(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method GetInstance addr 0xe205b0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe20738 size 0x208 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevValType, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevVals);

  /// @brief Method .ctor addr 0xe20940 size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevValType, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevVals);

  /// @brief Method get_OtherRevValType addr 0xe209f8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherRevValType();

  /// @brief Method get_OtherRevValsObject addr 0xe20a00 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_OtherRevValsObject();

  /// @brief Method ToAsn1Object addr 0xe20a08 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherRevVals(OtherRevVals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherRevVals(OtherRevVals const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherRevVals();

public:
  /// @brief Field otherRevValType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___otherRevValType;

  /// @brief Field otherRevVals, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___otherRevVals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherRevVals, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherRevVals, ___otherRevValType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherRevVals, ___otherRevVals) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherRevVals);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherRevVals*, "Org.BouncyCastle.Asn1.Esf", "OtherRevVals");
