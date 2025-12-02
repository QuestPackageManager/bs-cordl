#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/IExtensionField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IExtensionField)
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IExtensionField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::IExtensionField);
// Dependencies
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Field.IExtensionField
class CORDL_TYPE IExtensionField {
public:
  // Declarations
  __declspec(property(get = get_Degree)) int32_t Degree;

  __declspec(property(get = get_Subfield)) ::Org::BouncyCastle::Math::Field::IFiniteField* Subfield;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  /// @brief Method get_Degree, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Degree();

  /// @brief Method get_Subfield, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield();

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IExtensionField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExtensionField(IExtensionField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1582 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IExtensionField*, "Org.BouncyCastle.Math.Field", "IExtensionField");
