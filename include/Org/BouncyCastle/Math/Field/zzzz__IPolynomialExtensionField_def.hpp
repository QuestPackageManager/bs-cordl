#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPolynomialExtensionField)
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IExtensionField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField);
// Type: Org.BouncyCastle.Math.Field::IPolynomialExtensionField
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1583))
// CS Name: ::Org.BouncyCastle.Math.Field::IPolynomialExtensionField*
class CORDL_TYPE IPolynomialExtensionField {
public:
  // Declarations
  __declspec(property(get = get_MinimalPolynomial))::Org::BouncyCastle::Math::Field::IPolynomial* MinimalPolynomial;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IExtensionField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IExtensionField*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  /// @brief Method get_MinimalPolynomial addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();

  // Ctor Parameters [CppParam { name: "", ty: "IPolynomialExtensionField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPolynomialExtensionField(IPolynomialExtensionField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPolynomialExtensionField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPolynomialExtensionField(IPolynomialExtensionField const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "IPolynomialExtensionField");
