#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TEXTURE_COLOR_SPACE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE);
// Type: LIV.SDK.Unity::TEXTURE_COLOR_SPACE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15106))
// CS Name: ::LIV.SDK.Unity::TEXTURE_COLOR_SPACE
struct CORDL_TYPE TEXTURE_COLOR_SPACE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __TEXTURE_COLOR_SPACE_Unwrapped
  enum struct __TEXTURE_COLOR_SPACE_Unwrapped : uint32_t {
    __E_UNDEFINED = static_cast<uint32_t>(0x20100u),
    __E_LINEAR = static_cast<uint32_t>(0x1000201u),
    __E_SRGB = static_cast<uint32_t>(0x2010002u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TEXTURE_COLOR_SPACE_Unwrapped() const noexcept {
    return static_cast<__TEXTURE_COLOR_SPACE_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TEXTURE_COLOR_SPACE(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TEXTURE_COLOR_SPACE();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UNDEFINED value: static_cast<uint32_t>(0x20100u)
  static ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE const UNDEFINED;

  /// @brief Field LINEAR value: static_cast<uint32_t>(0x1000201u)
  static ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE const LINEAR;

  /// @brief Field SRGB value: static_cast<uint32_t>(0x2010002u)
  static ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE const SRGB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE, 0x4>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE, "LIV.SDK.Unity", "TEXTURE_COLOR_SPACE");
