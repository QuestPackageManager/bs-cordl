#pragma once
// IWYU pragma private; include "UnityEngine\ComputeShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeShader)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
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
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class ComputeShader;
}
// Write type traits
MARK_REF_T(::UnityEngine::ComputeShader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeShader
class CORDL_TYPE ComputeShader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_enabledKeywords, put = set_enabledKeywords)) ::ArrayW<::UnityEngine::Rendering::LocalKeyword> enabledKeywords;

  __declspec(property(get = get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  __declspec(property(get = get_shaderKeywords, put = set_shaderKeywords)) ::ArrayW<::StringW> shaderKeywords;

  /// @brief Method DisableKeyword, addr 0x6aeea7c, size 0x168, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6aef178, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6aeebe4, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method DisableLocalKeyword, addr 0x6aeeeb8, size 0x90, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6aeef48, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method Dispatch, addr 0x6aee450, size 0xb0, virtual false, abstract: false, final false
  inline void Dispatch(int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method DispatchIndirect, addr 0x6aefcb8, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6aefb24, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method DispatchIndirect, addr 0x6aefe04, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6aefcc0, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Dispatch_Injected, addr 0x6aee500, size 0x6c, virtual false, abstract: false, final false
  static inline void Dispatch_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method EnableKeyword, addr 0x6aee8d0, size 0x168, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6aef14c, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6aeea38, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableLocalKeyword, addr 0x6aeede4, size 0x90, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6aeee74, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method FindKernel, addr 0x6aecbec, size 0x174, virtual false, abstract: false, final false
  inline int32_t FindKernel(::StringW name);

  /// @brief Method FindKernel_Injected, addr 0x6aecd60, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindKernel_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetEnabledKeywords, addr 0x6aef46c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6aef4ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetKernelThreadGroupSizes, addr 0x6aee334, size 0xb0, virtual false, abstract: false, final false
  inline void GetKernelThreadGroupSizes(int32_t kernelIndex, ::by_ref<uint32_t> x, ::by_ref<uint32_t> y, ::by_ref<uint32_t> z);

  /// @brief Method GetKernelThreadGroupSizes_Injected, addr 0x6aee3e4, size 0x6c, virtual false, abstract: false, final false
  static inline void GetKernelThreadGroupSizes_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::by_ref<uint32_t> x, ::by_ref<uint32_t> y, ::by_ref<uint32_t> z);

  /// @brief Method GetShaderKeywords, addr 0x6aef2d4, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6aef354, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method HasKernel, addr 0x6aecda4, size 0x178, virtual false, abstract: false, final false
  inline bool HasKernel(::StringW name);

  /// @brief Method HasKernel_Injected, addr 0x6aecf1c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasKernel_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Internal_DispatchIndirect, addr 0x6aee56c, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirectGraphicsBuffer, addr 0x6aee6b0, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirectGraphicsBuffer(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirectGraphicsBuffer_Injected, addr 0x6aee798, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirect_Injected, addr 0x6aee654, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirect_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_SetBuffer, addr 0x6aedca4, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetBuffer_Injected, addr 0x6aedd8c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetGraphicsBuffer, addr 0x6aedde8, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetGraphicsBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0x6aeded0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x6aedf2c, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x6aee014, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr accelerationStructure);

  /// @brief Method IsKeywordEnabled, addr 0x6aeec28, size 0x178, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6aef1d0, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6aeeda0, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method IsLocalKeywordEnabled, addr 0x6aef078, size 0x90, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6aef108, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsSupported, addr 0x6aef200, size 0x90, virtual false, abstract: false, final false
  inline bool IsSupported(int32_t kernelIndex);

  /// @brief Method IsSupported_Injected, addr 0x6aef290, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSupported_Injected(::System::IntPtr _unity_self, int32_t kernelIndex);

  static inline ::UnityEngine::ComputeShader* New_ctor();

  /// @brief Method SetBool, addr 0x6aef840, size 0x3c, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool val);

  /// @brief Method SetBool, addr 0x6aef87c, size 0x14, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool val);

  /// @brief Method SetBuffer, addr 0x6aef9d0, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6aefa0c, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6aee074, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6aee078, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBuffer, addr 0x6aefa88, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6aefad8, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6aefa84, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6aefad4, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantComputeBuffer, addr 0x6aee07c, size 0xf0, virtual false, abstract: false, final false
  inline void SetConstantComputeBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantComputeBuffer_Injected, addr 0x6aee16c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantComputeBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBuffer, addr 0x6aee1d8, size 0xf0, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBuffer_Injected, addr 0x6aee2c8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// @brief Method SetEnabledKeywords, addr 0x6aef528, size 0x90, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6aef5b8, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetFloat, addr 0x6aef65c, size 0x34, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t val);

  /// @brief Method SetFloat, addr 0x6aecf60, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t val);

  /// @brief Method SetFloatArray, addr 0x6aed328, size 0x10c, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray_Injected, addr 0x6aed434, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetFloat_Injected, addr 0x6aed000, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t val);

  /// @brief Method SetFloats, addr 0x6aef7d0, size 0x34, virtual false, abstract: false, final false
  inline void SetFloats(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetFloats, addr 0x6aef804, size 0x4, virtual false, abstract: false, final false
  inline void SetFloats(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetInt, addr 0x6aef690, size 0x34, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t val);

  /// @brief Method SetInt, addr 0x6aed054, size 0x98, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t val);

  /// @brief Method SetIntArray, addr 0x6aed488, size 0x10c, virtual false, abstract: false, final false
  inline void SetIntArray(int32_t nameID, ::ArrayW<int32_t> values);

  /// @brief Method SetIntArray_Injected, addr 0x6aed594, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetInt_Injected, addr 0x6aed0ec, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t val);

  /// @brief Method SetInts, addr 0x6aef808, size 0x34, virtual false, abstract: false, final false
  inline void SetInts(::StringW name, ::ArrayW<int32_t> values);

  /// @brief Method SetInts, addr 0x6aef83c, size 0x4, virtual false, abstract: false, final false
  inline void SetInts(int32_t nameID, ::ArrayW<int32_t> values);

  /// @brief Method SetKeyword, addr 0x6aef1a4, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLocalKeyword, addr 0x6aeef8c, size 0x98, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6aef024, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6aef718, size 0x50, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetMatrix, addr 0x6aed23c, size 0x98, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetMatrixArray, addr 0x6aef79c, size 0x34, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6aed748, size 0x10c, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray_Injected, addr 0x6aed854, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetMatrix_Injected, addr 0x6aed2d4, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrix_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Matrix4x4> val);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6aefa48, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6aee070, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetRenderTexture, addr 0x6aeda18, size 0x114, virtual false, abstract: false, final false
  inline void SetRenderTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTexture_Injected, addr 0x6aedb2c, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel,
                                               ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetShaderKeywords, addr 0x6aef390, size 0x90, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6aef420, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> names);

  /// @brief Method SetTexture, addr 0x6aef928, size 0x54, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6aef898, size 0x40, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture);

  /// @brief Method SetTexture, addr 0x6aef8d8, size 0x4c, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTexture, addr 0x6aef924, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6aef890, size 0x8, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Texture* texture);

  /// @brief Method SetTexture, addr 0x6aed8a8, size 0x104, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTextureFromGlobal, addr 0x6aef97c, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, ::StringW name, ::StringW globalTextureName);

  /// @brief Method SetTextureFromGlobal, addr 0x6aedba0, size 0xa8, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTextureFromGlobal_Injected, addr 0x6aedc48, size 0x5c, virtual false, abstract: false, final false
  static inline void SetTextureFromGlobal_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTexture_Injected, addr 0x6aed9ac, size 0x6c, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel);

  /// @brief Method SetVector, addr 0x6aef6c4, size 0x54, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetVector, addr 0x6aed140, size 0xa8, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetVectorArray, addr 0x6aef768, size 0x34, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6aed5e8, size 0x10c, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray_Injected, addr 0x6aed6f4, size 0x54, virtual false, abstract: false, final false
  static inline void SetVectorArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetVector_Injected, addr 0x6aed1e8, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4> val);

  /// @brief Method .ctor, addr 0x6aef604, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabledKeywords, addr 0x6aef5fc, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> get_enabledKeywords();

  /// @brief Method get_keywordSpace, addr 0x6aee7f4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x6aee88c, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_shaderKeywords, addr 0x6aef464, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_shaderKeywords();

  /// @brief Method set_enabledKeywords, addr 0x6aef600, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> value);

  /// @brief Method set_shaderKeywords, addr 0x6aef468, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeShader(ComputeShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeShader(ComputeShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10396 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ComputeShader) == 0x18, "Size mismatch!");

} // namespace UnityEngine
