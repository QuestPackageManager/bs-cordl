#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAttributeSubpacketTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag);
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacketTag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: ::Org.BouncyCastle.Bcpg::UserAttributeSubpacketTag
struct CORDL_TYPE UserAttributeSubpacketTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UserAttributeSubpacketTag_Unwrapped
  enum struct __UserAttributeSubpacketTag_Unwrapped : int32_t {
    __E_ImageAttribute = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UserAttributeSubpacketTag_Unwrapped() const noexcept {
    return static_cast<__UserAttributeSubpacketTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAttributeSubpacketTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UserAttributeSubpacketTag(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ImageAttribute value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag const ImageAttribute;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacketTag");
