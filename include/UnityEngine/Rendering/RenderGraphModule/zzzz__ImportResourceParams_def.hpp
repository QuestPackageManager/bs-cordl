#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ImportResourceParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ImportResourceParams)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct ImportResourceParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams);
// Dependencies UnityEngine.Color
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.ImportResourceParams
struct CORDL_TYPE ImportResourceParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImportResourceParams();

  // Ctor Parameters [CppParam { name: "clearOnFirstUse", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "discardOnLastUse", ty: "bool", modifiers: "", def_value: None }]
  constexpr ImportResourceParams(bool clearOnFirstUse, ::UnityEngine::Color clearColor, bool discardOnLastUse) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12423 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field clearOnFirstUse, offset: 0x0, size: 0x1, def value: None
  bool clearOnFirstUse;

  /// @brief Field clearColor, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color clearColor;

  /// @brief Field discardOnLastUse, offset: 0x14, size: 0x1, def value: None
  bool discardOnLastUse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams, clearOnFirstUse) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams, clearColor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams, discardOnLastUse) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams, "UnityEngine.Rendering.RenderGraphModule", "ImportResourceParams");
