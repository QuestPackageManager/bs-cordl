#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/HardwareRayTracingShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareRayTracingShader)
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
class RayTracingShader;
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
class HardwareRayTracingShader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*, "UnityEngine.Rendering.UnifiedRayTracing", "HardwareRayTracingShader");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingShader
class CORDL_TYPE HardwareRayTracingShader : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Shader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::Rendering::RayTracingShader> m_Shader;

  /// @brief Field m_ShaderDispatchFuncName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderDispatchFuncName, put = __cordl_internal_set_m_ShaderDispatchFuncName)) ::StringW m_ShaderDispatchFuncName;

  /// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
  constexpr operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*() noexcept;

  /// @brief Method Dispatch, addr 0x6e0cefc, size 0x24, virtual true, abstract: false, final true
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method Dispatch, addr 0x6e0cedc, size 0x20, virtual true, abstract: false, final true
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, uint32_t width, uint32_t height, uint32_t depth);

  /// @brief Method GetThreadGroupSizes, addr 0x6e0cc9c, size 0xc, virtual true, abstract: false, final true
  inline ::Unity::Mathematics::uint3 GetThreadGroupSizes();

  /// @brief Method GetTraceScratchBufferRequiredSizeInBytes, addr 0x6e0cf20, size 0x8, virtual true, abstract: false, final true
  inline uint64_t GetTraceScratchBufferRequiredSizeInBytes(uint32_t width, uint32_t height, uint32_t depth);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader* New_ctor(::UnityEngine::Rendering::RayTracingShader* shader, ::StringW dispatchFuncName,
                                                                                                ::UnityEngine::GraphicsBuffer* unused);

  /// @brief Method SetAccelerationStructure, addr 0x6e0cca8, size 0xf0, virtual true, abstract: false, final true
  inline void SetAccelerationStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct);

  /// @brief Method SetBufferParam, addr 0x6e0ce88, size 0x1c, virtual true, abstract: false, final true
  inline void SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBufferParam, addr 0x6e0ce6c, size 0x1c, virtual true, abstract: false, final true
  inline void SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBufferParam, addr 0x6e0cec0, size 0x1c, virtual true, abstract: false, final true
  inline void SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferParam, addr 0x6e0cea4, size 0x1c, virtual true, abstract: false, final true
  inline void SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetFloatParam, addr 0x6e0cdb4, size 0x1c, virtual true, abstract: false, final true
  inline void SetFloatParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, float_t val);

  /// @brief Method SetIntParam, addr 0x6e0cd98, size 0x1c, virtual true, abstract: false, final true
  inline void SetIntParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t val);

  /// @brief Method SetMatrixParam, addr 0x6e0cdec, size 0x40, virtual true, abstract: false, final true
  inline void SetMatrixParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetTextureParam, addr 0x6e0ce2c, size 0x40, virtual true, abstract: false, final true
  inline void SetTextureParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetVectorParam, addr 0x6e0cdd0, size 0x1c, virtual true, abstract: false, final true
  inline void SetVectorParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Vector4 val);

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& __cordl_internal_get_m_Shader();

  constexpr ::StringW const& __cordl_internal_get_m_ShaderDispatchFuncName() const;

  constexpr ::StringW& __cordl_internal_get_m_ShaderDispatchFuncName();

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Rendering::RayTracingShader> value);

  constexpr void __cordl_internal_set_m_ShaderDispatchFuncName(::StringW value);

  /// @brief Method .ctor, addr 0x6e0cc20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RayTracingShader* shader, ::StringW dispatchFuncName, ::UnityEngine::GraphicsBuffer* unused);

  /// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingShader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HardwareRayTracingShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HardwareRayTracingShader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HardwareRayTracingShader(HardwareRayTracingShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HardwareRayTracingShader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HardwareRayTracingShader(HardwareRayTracingShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20491 };

  /// @brief Field m_Shader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::RayTracingShader> ___m_Shader;

  /// @brief Field m_ShaderDispatchFuncName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_ShaderDispatchFuncName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader, ___m_Shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader, ___m_ShaderDispatchFuncName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
