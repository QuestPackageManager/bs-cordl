#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/IRayTracingShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IRayTracingShader)
namespace Unity::Mathematics {
struct uint3;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*, "UnityEngine.Rendering.UnifiedRayTracing", "IRayTracingShader");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.IRayTracingShader
class CORDL_TYPE IRayTracingShader {
public:
  // Declarations
  /// @brief Method Dispatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method Dispatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, uint32_t width, uint32_t height, uint32_t depth);

  /// @brief Method GetThreadGroupSizes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Mathematics::uint3 GetThreadGroupSizes();

  /// @brief Method GetTraceScratchBufferRequiredSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t GetTraceScratchBufferRequiredSizeInBytes(uint32_t width, uint32_t height, uint32_t depth);

  /// @brief Method SetAccelerationStructure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetAccelerationStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct);

  /// @brief Method SetBufferParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBufferParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBufferParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetFloatParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetFloatParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, float_t val);

  /// @brief Method SetIntParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIntParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t val);

  /// @brief Method SetMatrixParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetMatrixParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetTextureParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetVectorParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetVectorParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Vector4 val);

  // Ctor Parameters [CppParam { name: "", ty: "IRayTracingShader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRayTracingShader(IRayTracingShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::UnifiedRayTracing
