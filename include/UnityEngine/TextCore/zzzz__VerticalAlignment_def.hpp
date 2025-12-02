#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/VerticalAlignment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalAlignment)
// Forward declare root types
namespace UnityEngine::TextCore {
struct VerticalAlignment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::VerticalAlignment);
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.VerticalAlignment
struct CORDL_TYPE VerticalAlignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VerticalAlignment_Unwrapped
  enum struct __VerticalAlignment_Unwrapped : int32_t {
    __E_Top = static_cast<int32_t>(0x0),
    __E_Middle = static_cast<int32_t>(0x1),
    __E_Bottom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VerticalAlignment_Unwrapped() const noexcept {
    return static_cast<__VerticalAlignment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalAlignment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VerticalAlignment(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(2)
  static ::UnityEngine::TextCore::VerticalAlignment const Bottom;

  /// @brief Field Middle value: I32(1)
  static ::UnityEngine::TextCore::VerticalAlignment const Middle;

  /// @brief Field Top value: I32(0)
  static ::UnityEngine::TextCore::VerticalAlignment const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17142 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::VerticalAlignment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::VerticalAlignment, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::VerticalAlignment, "UnityEngine.TextCore", "VerticalAlignment");
