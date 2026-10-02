#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureSlotCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureSlotCount)
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextureSlotCount;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextureSlotCount);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextureSlotCount, "UnityEngine.UIElements", "TextureSlotCount");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextureSlotCount
struct CORDL_TYPE TextureSlotCount {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureSlotCount_Unwrapped
  enum struct __TextureSlotCount_Unwrapped : int32_t {
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Four = static_cast<int32_t>(0x4),
    __E_Eight = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureSlotCount_Unwrapped() const noexcept {
    return static_cast<__TextureSlotCount_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureSlotCount();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr TextureSlotCount(int32_t value__) noexcept;

  /// @brief Field Eight value: I32(8)
  static ::UnityEngine::UIElements::TextureSlotCount const Eight;

  /// @brief Field Four value: I32(4)
  static ::UnityEngine::UIElements::TextureSlotCount const Four;

  /// @brief Field One value: I32(1)
  static ::UnityEngine::UIElements::TextureSlotCount const One;

  /// @brief Field Two value: I32(2)
  static ::UnityEngine::UIElements::TextureSlotCount const Two;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5206 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextureSlotCount, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TextureSlotCount) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
