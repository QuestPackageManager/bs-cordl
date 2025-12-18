#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBufferHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBufferHelpers)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
class UnsafeCommandBuffer;
}
namespace UnityEngine::VFX {
struct VFXCameraXRSettings;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CommandBufferHelpers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CommandBufferHelpers);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CommandBufferHelpers
#pragma pack(push, 0)
struct CORDL_TYPE CommandBufferHelpers {
public:
  // Declarations
  /// @brief Field computeCmd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_computeCmd, put = setStaticF_computeCmd)) ::UnityEngine::Rendering::ComputeCommandBuffer* computeCmd;

  /// @brief Field rasterCmd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rasterCmd, put = setStaticF_rasterCmd)) ::UnityEngine::Rendering::RasterCommandBuffer* rasterCmd;

  /// @brief Field unsafeCmd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_unsafeCmd, put = setStaticF_unsafeCmd)) ::UnityEngine::Rendering::UnsafeCommandBuffer* unsafeCmd;

  /// @brief Method GetComputeCommandBuffer, addr 0x6597a8c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ComputeCommandBuffer* GetComputeCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer);

  /// @brief Method GetNativeCommandBuffer, addr 0x6597b64, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CommandBuffer* GetNativeCommandBuffer(::UnityEngine::Rendering::UnsafeCommandBuffer* baseBuffer);

  /// @brief Method GetRasterCommandBuffer, addr 0x6597a20, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RasterCommandBuffer* GetRasterCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer);

  /// @brief Method GetUnsafeCommandBuffer, addr 0x6597af8, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnsafeCommandBuffer* GetUnsafeCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer);

  /// @brief Method VFXManager_ProcessCameraCommand, addr 0x6597b78, size 0xa8, virtual false, abstract: false, final false
  static inline void VFXManager_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                     ::UnityEngine::Rendering::CullingResults results);

  static inline ::UnityEngine::Rendering::ComputeCommandBuffer* getStaticF_computeCmd();

  static inline ::UnityEngine::Rendering::RasterCommandBuffer* getStaticF_rasterCmd();

  static inline ::UnityEngine::Rendering::UnsafeCommandBuffer* getStaticF_unsafeCmd();

  static inline void setStaticF_computeCmd(::UnityEngine::Rendering::ComputeCommandBuffer* value);

  static inline void setStaticF_rasterCmd(::UnityEngine::Rendering::RasterCommandBuffer* value);

  static inline void setStaticF_unsafeCmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferHelpers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11846 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBufferHelpers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBufferHelpers, "UnityEngine.Rendering", "CommandBufferHelpers");
