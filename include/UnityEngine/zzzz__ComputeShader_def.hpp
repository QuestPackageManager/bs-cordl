#pragma once
// IWYU pragma private; include "UnityEngine/ComputeShader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::ComputeShader);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeShader
class CORDL_TYPE ComputeShader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_enabledKeywords, put = set_enabledKeywords)) ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> enabledKeywords;

  __declspec(property(get = get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  __declspec(property(get = get_shaderKeywords, put = set_shaderKeywords)) ::ArrayW<::StringW, ::Array<::StringW>*> shaderKeywords;

  /// @brief Method DisableKeyword, addr 0x6924968, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x692426c, size 0x168, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x69243d4, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method DisableLocalKeyword, addr 0x69246a8, size 0x90, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6924738, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method Dispatch, addr 0x6923c40, size 0xb0, virtual false, abstract: false, final false
  inline void Dispatch(int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method DispatchIndirect, addr 0x69254a8, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6925314, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method DispatchIndirect, addr 0x69255f4, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x69254b0, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Dispatch_Injected, addr 0x6923cf0, size 0x6c, virtual false, abstract: false, final false
  static inline void Dispatch_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method EnableKeyword, addr 0x692493c, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x69240c0, size 0x168, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6924228, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableLocalKeyword, addr 0x69245d4, size 0x90, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6924664, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method FindKernel, addr 0x69223dc, size 0x174, virtual false, abstract: false, final false
  inline int32_t FindKernel(::StringW name);

  /// @brief Method FindKernel_Injected, addr 0x6922550, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindKernel_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetEnabledKeywords, addr 0x6924c5c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6924cdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetKernelThreadGroupSizes, addr 0x6923b24, size 0xb0, virtual false, abstract: false, final false
  inline void GetKernelThreadGroupSizes(int32_t kernelIndex, ::ByRef<uint32_t> x, ::ByRef<uint32_t> y, ::ByRef<uint32_t> z);

  /// @brief Method GetKernelThreadGroupSizes_Injected, addr 0x6923bd4, size 0x6c, virtual false, abstract: false, final false
  static inline void GetKernelThreadGroupSizes_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::ByRef<uint32_t> x, ::ByRef<uint32_t> y, ::ByRef<uint32_t> z);

  /// @brief Method GetShaderKeywords, addr 0x6924ac4, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6924b44, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method HasKernel, addr 0x6922594, size 0x178, virtual false, abstract: false, final false
  inline bool HasKernel(::StringW name);

  /// @brief Method HasKernel_Injected, addr 0x692270c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasKernel_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Internal_DispatchIndirect, addr 0x6923d5c, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirectGraphicsBuffer, addr 0x6923ea0, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirectGraphicsBuffer(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirectGraphicsBuffer_Injected, addr 0x6923f88, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirect_Injected, addr 0x6923e44, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirect_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_SetBuffer, addr 0x6923494, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetBuffer_Injected, addr 0x692357c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetGraphicsBuffer, addr 0x69235d8, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetGraphicsBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0x69236c0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x692371c, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x6923804, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr accelerationStructure);

  /// @brief Method IsKeywordEnabled, addr 0x69249c0, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6924418, size 0x178, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6924590, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method IsLocalKeywordEnabled, addr 0x6924868, size 0x90, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x69248f8, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsSupported, addr 0x69249f0, size 0x90, virtual false, abstract: false, final false
  inline bool IsSupported(int32_t kernelIndex);

  /// @brief Method IsSupported_Injected, addr 0x6924a80, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSupported_Injected(::System::IntPtr _unity_self, int32_t kernelIndex);

  static inline ::UnityEngine::ComputeShader* New_ctor();

  /// @brief Method SetBool, addr 0x6925030, size 0x3c, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool val);

  /// @brief Method SetBool, addr 0x692506c, size 0x14, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool val);

  /// @brief Method SetBuffer, addr 0x69251c0, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x69251fc, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6923864, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6923868, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBuffer, addr 0x6925278, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x69252c8, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6925274, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x69252c4, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantComputeBuffer, addr 0x692386c, size 0xf0, virtual false, abstract: false, final false
  inline void SetConstantComputeBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantComputeBuffer_Injected, addr 0x692395c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantComputeBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBuffer, addr 0x69239c8, size 0xf0, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBuffer_Injected, addr 0x6923ab8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// @brief Method SetEnabledKeywords, addr 0x6924d18, size 0x90, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6924da8, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> keywords);

  /// @brief Method SetFloat, addr 0x6924e4c, size 0x34, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t val);

  /// @brief Method SetFloat, addr 0x6922750, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t val);

  /// @brief Method SetFloatArray, addr 0x6922b18, size 0x10c, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray_Injected, addr 0x6922c24, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetFloat_Injected, addr 0x69227f0, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t val);

  /// @brief Method SetFloats, addr 0x6924fc0, size 0x34, virtual false, abstract: false, final false
  inline void SetFloats(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloats, addr 0x6924ff4, size 0x4, virtual false, abstract: false, final false
  inline void SetFloats(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetInt, addr 0x6924e80, size 0x34, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t val);

  /// @brief Method SetInt, addr 0x6922844, size 0x98, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t val);

  /// @brief Method SetIntArray, addr 0x6922c78, size 0x10c, virtual false, abstract: false, final false
  inline void SetIntArray(int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetIntArray_Injected, addr 0x6922d84, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetInt_Injected, addr 0x69228dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t val);

  /// @brief Method SetInts, addr 0x6924ff8, size 0x34, virtual false, abstract: false, final false
  inline void SetInts(::StringW name, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetInts, addr 0x692502c, size 0x4, virtual false, abstract: false, final false
  inline void SetInts(int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetKeyword, addr 0x6924994, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLocalKeyword, addr 0x692477c, size 0x98, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6924814, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6924f08, size 0x50, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetMatrix, addr 0x6922a2c, size 0x98, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetMatrixArray, addr 0x6924f8c, size 0x34, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray, addr 0x6922f38, size 0x10c, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray_Injected, addr 0x6923044, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetMatrix_Injected, addr 0x6922ac4, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrix_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Matrix4x4> val);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6925238, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6923860, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetRenderTexture, addr 0x6923208, size 0x114, virtual false, abstract: false, final false
  inline void SetRenderTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTexture_Injected, addr 0x692331c, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel,
                                               ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetShaderKeywords, addr 0x6924b80, size 0x90, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6924c10, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method SetTexture, addr 0x6925118, size 0x54, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6925088, size 0x40, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture);

  /// @brief Method SetTexture, addr 0x69250c8, size 0x4c, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTexture, addr 0x6925114, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6925080, size 0x8, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Texture* texture);

  /// @brief Method SetTexture, addr 0x6923098, size 0x104, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTextureFromGlobal, addr 0x692516c, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, ::StringW name, ::StringW globalTextureName);

  /// @brief Method SetTextureFromGlobal, addr 0x6923390, size 0xa8, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTextureFromGlobal_Injected, addr 0x6923438, size 0x5c, virtual false, abstract: false, final false
  static inline void SetTextureFromGlobal_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTexture_Injected, addr 0x692319c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel);

  /// @brief Method SetVector, addr 0x6924eb4, size 0x54, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetVector, addr 0x6922930, size 0xa8, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetVectorArray, addr 0x6924f58, size 0x34, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray, addr 0x6922dd8, size 0x10c, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray_Injected, addr 0x6922ee4, size 0x54, virtual false, abstract: false, final false
  static inline void SetVectorArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetVector_Injected, addr 0x69229d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Vector4> val);

  /// @brief Method .ctor, addr 0x6924df4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabledKeywords, addr 0x6924dec, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> get_enabledKeywords();

  /// @brief Method get_keywordSpace, addr 0x6923fe4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x692407c, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_shaderKeywords, addr 0x6924c54, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_shaderKeywords();

  /// @brief Method set_enabledKeywords, addr 0x6924df0, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> value);

  /// @brief Method set_shaderKeywords, addr 0x6924c58, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeShader, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
