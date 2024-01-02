#pragma once
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
// Type: Org.BouncyCastle.Math.Field::IExtensionField
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1582))
// CS Name: ::Org.BouncyCastle.Math.Field::IExtensionField*
class CORDL_TYPE IExtensionField {
public:
  // Declarations
  __declspec(property(get = get_Subfield))::Org::BouncyCastle::Math::Field::IFiniteField* Subfield;

  __declspec(property(get = get_Degree)) int32_t Degree;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  /// @brief Method get_Subfield, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield();

  /// @brief Method get_Degree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Degree();

  // Ctor Parameters [CppParam { name: "", ty: "IExtensionField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExtensionField(IExtensionField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExtensionField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExtensionField(IExtensionField const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IExtensionField*, "Org.BouncyCastle.Math.Field", "IExtensionField");
