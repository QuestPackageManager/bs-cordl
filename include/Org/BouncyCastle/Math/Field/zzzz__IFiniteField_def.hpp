#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/IFiniteField.hpp"
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
// Dependencies
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Field.IFiniteField
class CORDL_TYPE IFiniteField {
public:
  // Declarations
  __declspec(property(get = get_Characteristic)) ::Org::BouncyCastle::Math::BigInteger* Characteristic;

  __declspec(property(get = get_Dimension)) int32_t Dimension;

  /// @brief Method get_Characteristic, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();

  /// @brief Method get_Dimension, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Dimension();

  // Ctor Parameters [CppParam { name: "", ty: "IFiniteField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFiniteField(IFiniteField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1581 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IFiniteField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IFiniteField*, "Org.BouncyCastle.Math.Field", "IFiniteField");
