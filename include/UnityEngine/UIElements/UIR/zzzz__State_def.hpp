#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(State)
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct State;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::State);
// Type: UnityEngine.UIElements.UIR::State
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7339))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7441))
// CS Name: ::UnityEngine.UIElements.UIR::State
struct CORDL_TYPE State {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityW<::UnityEngine::Texture>",
  // modifiers: "", def_value: None }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId",
  // modifiers: "", def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr State(::UnityW<::UnityEngine::Material> material, ::UnityW<::UnityEngine::Texture> font, float_t fontTexSDFScale, ::UnityEngine::UIElements::TextureId texture,
                  int32_t stencilRef) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr State();

  /// @brief Field material, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field font, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> font;

  /// @brief Field fontTexSDFScale, offset: 0x10, size: 0x4, def value: None
  float_t fontTexSDFScale;

  /// @brief Field texture, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId texture;

  /// @brief Field stencilRef, offset: 0x18, size: 0x4, def value: None
  int32_t stencilRef;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::State, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, font) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, fontTexSDFScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, texture) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, stencilRef) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::State, "UnityEngine.UIElements.UIR", "State");
