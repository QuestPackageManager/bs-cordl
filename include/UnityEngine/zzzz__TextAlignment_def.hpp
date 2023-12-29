#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAlignment)
// Forward declare root types
namespace UnityEngine {
struct TextAlignment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextAlignment);
// Type: UnityEngine::TextAlignment
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15792))
// CS Name: ::UnityEngine::TextAlignment
struct CORDL_TYPE TextAlignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextAlignment_Unwrapped
  enum struct __TextAlignment_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextAlignment_Unwrapped() const noexcept {
    return static_cast<__TextAlignment_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAlignment(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAlignment();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextAlignment const Left;

  /// @brief Field Center value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextAlignment const Center;

  /// @brief Field Right value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextAlignment const Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAlignment, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextAlignment, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAlignment, "UnityEngine", "TextAlignment");
