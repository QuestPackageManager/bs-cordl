#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureAccess)
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::TextureAccess);
// Dependencies UnityEngine.Rendering.RenderGraphModule.AccessFlags, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureAccess
struct CORDL_TYPE TextureAccess {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x65c4198, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel, int32_t depthSlice);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureAccess();

  // Ctor Parameters [CppParam { name: "textureHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "mipLevel", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "depthSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::AccessFlags", modifiers: "", def_value: None }]
  constexpr TextureAccess(::UnityEngine::Rendering::RenderGraphModule::TextureHandle textureHandle, int32_t mipLevel, int32_t depthSlice,
                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12432 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field textureHandle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle textureHandle;

  /// @brief Field mipLevel, offset: 0x10, size: 0x4, def value: None
  int32_t mipLevel;

  /// @brief Field depthSlice, offset: 0x14, size: 0x4, def value: None
  int32_t depthSlice;

  /// @brief Field flags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureAccess, textureHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureAccess, mipLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureAccess, depthSlice) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureAccess, flags) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::TextureAccess, "UnityEngine.Rendering.RenderGraphModule", "TextureAccess");
