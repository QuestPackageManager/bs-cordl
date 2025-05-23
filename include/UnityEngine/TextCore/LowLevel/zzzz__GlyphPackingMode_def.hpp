#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphPackingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphPackingMode)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPackingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphPackingMode);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphPackingMode
struct CORDL_TYPE GlyphPackingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GlyphPackingMode_Unwrapped
  enum struct __GlyphPackingMode_Unwrapped : int32_t {
    __E_BestShortSideFit = static_cast<int32_t>(0x0),
    __E_BestLongSideFit = static_cast<int32_t>(0x1),
    __E_BestAreaFit = static_cast<int32_t>(0x2),
    __E_BottomLeftRule = static_cast<int32_t>(0x3),
    __E_ContactPointRule = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GlyphPackingMode_Unwrapped() const noexcept {
    return static_cast<__GlyphPackingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphPackingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphPackingMode(int32_t value__) noexcept;

  /// @brief Field BestAreaFit value: I32(2)
  static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestAreaFit;

  /// @brief Field BestLongSideFit value: I32(1)
  static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestLongSideFit;

  /// @brief Field BestShortSideFit value: I32(0)
  static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestShortSideFit;

  /// @brief Field BottomLeftRule value: I32(3)
  static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BottomLeftRule;

  /// @brief Field ContactPointRule value: I32(4)
  static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const ContactPointRule;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphPackingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphPackingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPackingMode, "UnityEngine.TextCore.LowLevel", "GlyphPackingMode");
