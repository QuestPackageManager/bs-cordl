#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/HorizontalAlignment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalAlignment)
// Forward declare root types
namespace UnityEngine::TextCore {
struct HorizontalAlignment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::HorizontalAlignment);
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.HorizontalAlignment
struct CORDL_TYPE HorizontalAlignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HorizontalAlignment_Unwrapped
  enum struct __HorizontalAlignment_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
    __E_Justified = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HorizontalAlignment_Unwrapped() const noexcept {
    return static_cast<__HorizontalAlignment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalAlignment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HorizontalAlignment(int32_t value__) noexcept;

  /// @brief Field Center value: I32(1)
  static ::UnityEngine::TextCore::HorizontalAlignment const Center;

  /// @brief Field Justified value: I32(3)
  static ::UnityEngine::TextCore::HorizontalAlignment const Justified;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::TextCore::HorizontalAlignment const Left;

  /// @brief Field Right value: I32(2)
  static ::UnityEngine::TextCore::HorizontalAlignment const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17155 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::HorizontalAlignment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::HorizontalAlignment, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::HorizontalAlignment, "UnityEngine.TextCore", "HorizontalAlignment");
