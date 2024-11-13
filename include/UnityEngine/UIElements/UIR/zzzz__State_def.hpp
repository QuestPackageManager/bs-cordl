#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/State.hpp"
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
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct State;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::State);
// Type: UnityEngine.UIElements.UIR::State
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::State
struct CORDL_TYPE State {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr State();

  // Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId",
  // modifiers: "", def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sdfScale", ty: "float_t", modifiers: "", def_value: None }]
  constexpr State(::UnityW<::UnityEngine::Material> material, ::UnityEngine::UIElements::TextureId texture, int32_t stencilRef, float_t sdfScale) noexcept;

  /// @brief Field material, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field texture, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId texture;

  /// @brief Field stencilRef, offset: 0xc, size: 0x4, def value: None
  int32_t stencilRef;

  /// @brief Field sdfScale, offset: 0x10, size: 0x4, def value: None
  float_t sdfScale;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::State, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, texture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, stencilRef) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::State, sdfScale) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::State, "UnityEngine.UIElements.UIR", "State");
