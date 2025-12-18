#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderTargetInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetInfo)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo);
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderTargetInfo
struct CORDL_TYPE RenderTargetInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetInfo();

  // Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "volumeDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "msaaSamples", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "bindMS", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderTargetInfo(int32_t width, int32_t height, int32_t volumeDepth, int32_t msaaSamples, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool bindMS) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12422 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  int32_t height;

  /// @brief Field volumeDepth, offset: 0x8, size: 0x4, def value: None
  int32_t volumeDepth;

  /// @brief Field msaaSamples, offset: 0xc, size: 0x4, def value: None
  int32_t msaaSamples;

  /// @brief Field format, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  /// @brief Field bindMS, offset: 0x14, size: 0x1, def value: None
  bool bindMS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, height) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, volumeDepth) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, msaaSamples) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, bindMS) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderTargetInfo");
