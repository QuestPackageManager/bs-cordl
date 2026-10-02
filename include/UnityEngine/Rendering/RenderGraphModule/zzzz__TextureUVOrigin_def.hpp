#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureUVOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureUVOrigin)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureUVOrigin;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin, "UnityEngine.Rendering.RenderGraphModule", "TextureUVOrigin");
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureUVOrigin
struct CORDL_TYPE TextureUVOrigin {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureUVOrigin_Unwrapped
  enum struct __TextureUVOrigin_Unwrapped : int32_t {
    __E_BottomLeft = static_cast<int32_t>(0x0),
    __E_TopLeft = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureUVOrigin_Unwrapped() const noexcept {
    return static_cast<__TextureUVOrigin_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureUVOrigin();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr TextureUVOrigin(int32_t value__) noexcept;

  /// @brief Field BottomLeft value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin const BottomLeft;

  /// @brief Field TopLeft value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin const TopLeft;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9372 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
