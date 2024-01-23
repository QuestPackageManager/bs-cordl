#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAttributeTableParameter)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
struct CmsAttributeTableParameter;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Cms::CmsAttributeTableParameter);
// Type: Org.BouncyCastle.Cms::CmsAttributeTableParameter
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(614))
// CS Name: ::Org.BouncyCastle.Cms::CmsAttributeTableParameter
struct CORDL_TYPE CmsAttributeTableParameter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CmsAttributeTableParameter_Unwrapped
  enum struct __CmsAttributeTableParameter_Unwrapped : int32_t {
    __E_ContentType = static_cast<int32_t>(0x0),
    __E_Digest = static_cast<int32_t>(0x1),
    __E_Signature = static_cast<int32_t>(0x2),
    __E_DigestAlgorithmIdentifier = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CmsAttributeTableParameter_Unwrapped() const noexcept {
    return static_cast<__CmsAttributeTableParameter_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CmsAttributeTableParameter(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAttributeTableParameter();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ContentType value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const ContentType;

  /// @brief Field Digest value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const Digest;

  /// @brief Field Signature value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const Signature;

  /// @brief Field DigestAlgorithmIdentifier value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const DigestAlgorithmIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAttributeTableParameter, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAttributeTableParameter, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableParameter, "Org.BouncyCastle.Cms", "CmsAttributeTableParameter");
