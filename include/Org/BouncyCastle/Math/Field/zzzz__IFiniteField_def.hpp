#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IFiniteField)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::IFiniteField);
// Type: Org.BouncyCastle.Math.Field::IFiniteField
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1581))
// CS Name: ::Org.BouncyCastle.Math.Field::IFiniteField*
class CORDL_TYPE IFiniteField {
public:
  // Declarations
  __declspec(property(get = get_Characteristic))::Org::BouncyCastle::Math::BigInteger* Characteristic;

  __declspec(property(get = get_Dimension)) int32_t Dimension;

  /// @brief Method get_Characteristic addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();

  /// @brief Method get_Dimension addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_Dimension();

  // Ctor Parameters [CppParam { name: "", ty: "IFiniteField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFiniteField(IFiniteField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFiniteField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFiniteField(IFiniteField const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IFiniteField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IFiniteField*, "Org.BouncyCastle.Math.Field", "IFiniteField");
