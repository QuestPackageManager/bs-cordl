#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeRayTracingShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeRayTracingShader)
namespace Unity::Mathematics {
struct uint3;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
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
class ComputeShader;
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
class ComputeRayTracingShader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*, "UnityEngine.Rendering.UnifiedRayTracing", "ComputeRayTracingShader");
// Dependencies System.Object, Unity.Mathematics.uint3
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingShader
class CORDL_TYPE ComputeRayTracingShader : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ComputeIndirectDispatchDimsKernelIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ComputeIndirectDispatchDimsKernelIndex,
                      put = __cordl_internal_set_m_ComputeIndirectDispatchDimsKernelIndex)) int32_t m_ComputeIndirectDispatchDimsKernelIndex;

  /// @brief Field m_DispatchBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DispatchBuffer, put = __cordl_internal_set_m_DispatchBuffer)) ::UnityEngine::GraphicsBuffer* m_DispatchBuffer;

  /// @brief Field m_KernelIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KernelIndex, put = __cordl_internal_set_m_KernelIndex)) int32_t m_KernelIndex;

  /// @brief Field m_Shader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::ComputeShader> m_Shader;

  /// @brief Field m_ThreadGroupSizes, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ThreadGroupSizes, put = __cordl_internal_set_m_ThreadGroupSizes)) ::Unity::Mathematics::uint3 m_ThreadGroupSizes;

  /// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
  constexpr operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*() noexcept;

  /// @brief Method Dispatch, addr 0x6e0c4a4, size 0x44, virtual true, abstract: false, final true
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method Dispatch, addr 0x6e0c320, size 0x170, virtual true, abstract: false, final true
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, uint32_t width, uint32_t height, uint32_t depth);

  /// @brief Method DispatchIndirect, addr 0x6e0c5bc, size 0xd8, virtual false, abstract: false, final false
  inline void DispatchIndirect(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method GetThreadGroupSizes, addr 0x6e0c0e8, size 0x10, virtual true, abstract: false, final true
  inline ::Unity::Mathematics::uint3 GetThreadGroupSizes();

  /// @brief Method GetTraceScratchBufferRequiredSizeInBytes, addr 0x6e0c490, size 0x14, virtual true, abstract: false, final true
  inline uint64_t GetTraceScratchBufferRequiredSizeInBytes(uint32_t width, uint32_t height, uint32_t depth);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader* New_ctor(::UnityEngine::ComputeShader* shader, ::StringW dispatchFuncName,
                                                                                               ::UnityEngine::GraphicsBuffer* dispatchBuffer);

  /// @brief Method SetAccelerationStructure, addr 0x6e0c0f8, size 0xa8, virtual true, abstract: false, final true
  inline void SetAccelerationStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct);

  /// @brief Method SetBufferParam, addr 0x6e0c2c0, size 0x28, virtual true, abstract: false, final true
  inline void SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBufferParam, addr 0x6e0c298, size 0x28, virtual true, abstract: false, final true
  inline void SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBufferParam, addr 0x6e0c304, size 0x1c, virtual true, abstract: false, final true
  inline void SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferParam, addr 0x6e0c2e8, size 0x1c, virtual true, abstract: false, final true
  inline void SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetFloatParam, addr 0x6e0c1c0, size 0x20, virtual true, abstract: false, final true
  inline void SetFloatParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, float_t val);

  /// @brief Method SetIndirectDispatchDimensions, addr 0x6e0c4e8, size 0xd4, virtual false, abstract: false, final false
  inline void SetIndirectDispatchDimensions(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method SetIntParam, addr 0x6e0c1a0, size 0x20, virtual true, abstract: false, final true
  inline void SetIntParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t val);

  /// @brief Method SetMatrixParam, addr 0x6e0c200, size 0x44, virtual true, abstract: false, final true
  inline void SetMatrixParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetTextureParam, addr 0x6e0c244, size 0x54, virtual true, abstract: false, final true
  inline void SetTextureParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetVectorParam, addr 0x6e0c1e0, size 0x20, virtual true, abstract: false, final true
  inline void SetVectorParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Vector4 val);

  constexpr int32_t const& __cordl_internal_get_m_ComputeIndirectDispatchDimsKernelIndex() const;

  constexpr int32_t& __cordl_internal_get_m_ComputeIndirectDispatchDimsKernelIndex();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_DispatchBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_DispatchBuffer();

  constexpr int32_t const& __cordl_internal_get_m_KernelIndex() const;

  constexpr int32_t& __cordl_internal_get_m_KernelIndex();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_Shader();

  constexpr ::Unity::Mathematics::uint3 const& __cordl_internal_get_m_ThreadGroupSizes() const;

  constexpr ::Unity::Mathematics::uint3& __cordl_internal_get_m_ThreadGroupSizes();

  constexpr void __cordl_internal_set_m_ComputeIndirectDispatchDimsKernelIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DispatchBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_KernelIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_ThreadGroupSizes(::Unity::Mathematics::uint3 value);

  /// @brief Method .ctor, addr 0x6e0bf88, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ComputeShader* shader, ::StringW dispatchFuncName, ::UnityEngine::GraphicsBuffer* dispatchBuffer);

  /// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingShader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeRayTracingShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingShader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeRayTracingShader(ComputeRayTracingShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingShader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeRayTracingShader(ComputeRayTracingShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20488 };

  /// @brief Field m_Shader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_Shader;

  /// @brief Field m_KernelIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_KernelIndex;

  /// @brief Field m_ComputeIndirectDispatchDimsKernelIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_ComputeIndirectDispatchDimsKernelIndex;

  /// @brief Field m_ThreadGroupSizes, offset: 0x20, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 ___m_ThreadGroupSizes;

  /// @brief Field m_DispatchBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_DispatchBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader, ___m_Shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader, ___m_KernelIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader, ___m_ComputeIndirectDispatchDimsKernelIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader, ___m_ThreadGroupSizes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader, ___m_DispatchBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
