#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/IPolynomialExtensionField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/Field/zzzz__IExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
CORDL_MODULE_EXPORT(IPolynomialExtensionField)
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField);
// Dependencies Org.BouncyCastle.Math.Field.IExtensionField, Org.BouncyCastle.Math.Field.IFiniteField
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
class CORDL_TYPE IPolynomialExtensionField {
public:
  // Declarations
  __declspec(property(get = get_MinimalPolynomial)) ::Org::BouncyCastle::Math::Field::IPolynomial* MinimalPolynomial;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IExtensionField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IExtensionField*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  /// @brief Method get_MinimalPolynomial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IExtensionField"
  constexpr ::Org::BouncyCastle::Math::Field::IExtensionField* i___Org__BouncyCastle__Math__Field__IExtensionField() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPolynomialExtensionField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPolynomialExtensionField(IPolynomialExtensionField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "IPolynomialExtensionField");
