#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OccluderParameters)
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderParameters);
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderParameters
struct CORDL_TYPE OccluderParameters {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x665f5b8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(int32_t viewInstanceID);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderParameters();

  // Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subviewCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "depthTexture", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "depthSize", ty: "::UnityEngine::Vector2Int", modifiers:
  // "", def_value: None }, CppParam { name: "depthIsArray", ty: "bool", modifiers: "", def_value: None }]
  constexpr OccluderParameters(int32_t viewInstanceID, int32_t subviewCount, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture, ::UnityEngine::Vector2Int depthSize,
                               bool depthIsArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field viewInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field subviewCount, offset: 0x4, size: 0x4, def value: None
  int32_t subviewCount;

  /// @brief Field depthTexture, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture;

  /// @brief Field depthSize, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int depthSize;

  /// @brief Field depthIsArray, offset: 0x20, size: 0x1, def value: None
  bool depthIsArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderParameters, viewInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderParameters, subviewCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderParameters, depthTexture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderParameters, depthSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderParameters, depthIsArray) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderParameters, 0x24>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderParameters, "UnityEngine.Rendering", "OccluderParameters");
