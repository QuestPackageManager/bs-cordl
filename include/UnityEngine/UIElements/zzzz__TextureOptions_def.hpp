#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureOptions)
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextureOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextureOptions);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextureOptions, "UnityEngine.UIElements", "TextureOptions");
// [Flags]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextureOptions
struct CORDL_TYPE TextureOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureOptions_Unwrapped
  enum struct __TextureOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SkipDynamicAtlas = static_cast<int32_t>(0x1),
    __E_PremultipliedAlpha = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureOptions_Unwrapped() const noexcept {
    return static_cast<__TextureOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr TextureOptions(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::TextureOptions const None;

  /// @brief Field PremultipliedAlpha value: I32(2)
  static ::UnityEngine::UIElements::TextureOptions const PremultipliedAlpha;

  /// @brief Field SkipDynamicAtlas value: I32(1)
  static ::UnityEngine::UIElements::TextureOptions const SkipDynamicAtlas;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextureOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TextureOptions) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
