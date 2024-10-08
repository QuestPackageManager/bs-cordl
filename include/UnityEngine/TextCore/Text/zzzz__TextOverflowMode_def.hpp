#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextOverflowMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextOverflowMode)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextOverflowMode);
// Type: UnityEngine.TextCore.Text::TextOverflowMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::TextOverflowMode
struct CORDL_TYPE TextOverflowMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextOverflowMode_Unwrapped
  enum struct __TextOverflowMode_Unwrapped : int32_t {
    __E_Overflow = static_cast<int32_t>(0x0),
    __E_Ellipsis = static_cast<int32_t>(0x1),
    __E_Masking = static_cast<int32_t>(0x2),
    __E_Truncate = static_cast<int32_t>(0x3),
    __E_ScrollRect = static_cast<int32_t>(0x4),
    __E_Page = static_cast<int32_t>(0x5),
    __E_Linked = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextOverflowMode_Unwrapped() const noexcept {
    return static_cast<__TextOverflowMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextOverflowMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextOverflowMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ellipsis value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const Ellipsis;

  /// @brief Field Linked value: static_cast<int32_t>(0x6)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const Linked;

  /// @brief Field Masking value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const Masking;

  /// @brief Field Overflow value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const Overflow;

  /// @brief Field Page value: static_cast<int32_t>(0x5)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const Page;

  /// @brief Field ScrollRect value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const ScrollRect;

  /// @brief Field Truncate value: static_cast<int32_t>(0x3)
  static ::UnityEngine::TextCore::Text::TextOverflowMode const Truncate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15223 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextOverflowMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextOverflowMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextOverflowMode, "UnityEngine.TextCore.Text", "TextOverflowMode");
