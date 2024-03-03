#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImagePosition)
// Forward declare root types
namespace UnityEngine {
struct ImagePosition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ImagePosition);
// Type: UnityEngine::ImagePosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ImagePosition
struct CORDL_TYPE ImagePosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ImagePosition_Unwrapped
  enum struct __ImagePosition_Unwrapped : int32_t {
    __E_ImageLeft = static_cast<int32_t>(0x0),
    __E_ImageAbove = static_cast<int32_t>(0x1),
    __E_ImageOnly = static_cast<int32_t>(0x2),
    __E_TextOnly = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ImagePosition_Unwrapped() const noexcept {
    return static_cast<__ImagePosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ImagePosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ImagePosition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ImageAbove value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ImagePosition const ImageAbove;

  /// @brief Field ImageLeft value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ImagePosition const ImageLeft;

  /// @brief Field ImageOnly value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ImagePosition const ImageOnly;

  /// @brief Field TextOnly value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ImagePosition const TextOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ImagePosition, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ImagePosition, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImagePosition, "UnityEngine", "ImagePosition");
