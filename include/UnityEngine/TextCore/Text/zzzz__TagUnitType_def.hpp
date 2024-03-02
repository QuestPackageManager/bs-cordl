#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagUnitType)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TagUnitType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TagUnitType);
// Type: UnityEngine.TextCore.Text::TagUnitType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::TagUnitType
struct CORDL_TYPE TagUnitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TagUnitType_Unwrapped
  enum struct __TagUnitType_Unwrapped : int32_t {
    __E_Pixels = static_cast<int32_t>(0x0),
    __E_FontUnits = static_cast<int32_t>(0x1),
    __E_Percentage = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TagUnitType_Unwrapped() const noexcept {
    return static_cast<__TagUnitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TagUnitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TagUnitType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FontUnits value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::Text::TagUnitType const FontUnits;

  /// @brief Field Percentage value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::Text::TagUnitType const Percentage;

  /// @brief Field Pixels value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::Text::TagUnitType const Pixels;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TagUnitType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TagUnitType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TagUnitType, "UnityEngine.TextCore.Text", "TagUnitType");
