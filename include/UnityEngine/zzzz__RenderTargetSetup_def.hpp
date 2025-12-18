#pragma once
// IWYU pragma private; include "UnityEngine/RenderTargetSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetSetup)
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine {
struct RenderBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct RenderTargetSetup;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTargetSetup);
// Dependencies UnityEngine.CubemapFace, UnityEngine.RenderBuffer, UnityEngine.Rendering.RenderBufferLoadAction, UnityEngine.Rendering.RenderBufferStoreAction
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderTargetSetup
struct CORDL_TYPE RenderTargetSetup {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetSetup();

  // Ctor Parameters [CppParam { name: "color", ty: "::ArrayW<::UnityEngine::RenderBuffer,::Array<::UnityEngine::RenderBuffer>*>", modifiers: "", def_value: None }, CppParam { name: "depth", ty:
  // "::UnityEngine::RenderBuffer", modifiers: "", def_value: None }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapFace", ty:
  // "::UnityEngine::CubemapFace", modifiers: "", def_value: None }, CppParam { name: "depthSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "colorLoad", ty:
  // "::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction,::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*>", modifiers: "", def_value: None }, CppParam { name: "colorStore", ty:
  // "::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction,::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>", modifiers: "", def_value: None }, CppParam { name: "depthLoad", ty:
  // "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: None }, CppParam { name: "depthStore", ty: "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "",
  // def_value: None }]
  constexpr RenderTargetSetup(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ::UnityEngine::RenderBuffer depth, int32_t mipLevel,
                              ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice,
                              ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoad,
                              ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStore,
                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10128 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field color, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color;

  /// @brief Field depth, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::RenderBuffer depth;

  /// @brief Field mipLevel, offset: 0x18, size: 0x4, def value: None
  int32_t mipLevel;

  /// @brief Field cubemapFace, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::CubemapFace cubemapFace;

  /// @brief Field depthSlice, offset: 0x20, size: 0x4, def value: None
  int32_t depthSlice;

  /// @brief Field colorLoad, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoad;

  /// @brief Field colorStore, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStore;

  /// @brief Field depthLoad, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad;

  /// @brief Field depthStore, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction depthStore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderTargetSetup, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, depth) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, mipLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, cubemapFace) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, depthSlice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, colorLoad) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, colorStore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, depthLoad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTargetSetup, depthStore) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTargetSetup, 0x40>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTargetSetup, "UnityEngine", "RenderTargetSetup");
