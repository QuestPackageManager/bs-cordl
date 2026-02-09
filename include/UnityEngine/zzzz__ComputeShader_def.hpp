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
 __declspec(property(get=get_enabledKeywords, put=set_enabledKeywords)) ::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*>  enabledKeywords;

 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

 __declspec(property(get=get_shaderKeywords, put=set_shaderKeywords)) ::ArrayW<::StringW,::Array<::StringW>*>  shaderKeywords;

/// @brief Method DisableKeyword, addr 0x6925028, size 0x2c, virtual false, abstract: false, final false
inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x692492c, size 0x168, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0x6924a94, size 0x44, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method DisableLocalKeyword, addr 0x6924d68, size 0x90, virtual false, abstract: false, final false
inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableLocalKeyword_Injected, addr 0x6924df8, size 0x44, virtual false, abstract: false, final false
static inline void DisableLocalKeyword_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method Dispatch, addr 0x6924300, size 0xb0, virtual false, abstract: false, final false
inline void Dispatch(int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method DispatchIndirect, addr 0x6925b68, size 0x8, virtual false, abstract: false, final false
inline void DispatchIndirect(int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  argsBuffer) ;

/// @brief Method DispatchIndirect, addr 0x69259d4, size 0x144, virtual false, abstract: false, final false
inline void DispatchIndirect(int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  argsBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchIndirect, addr 0x6925cb4, size 0x8, virtual false, abstract: false, final false
inline void DispatchIndirect(int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  argsBuffer) ;

/// @brief Method DispatchIndirect, addr 0x6925b70, size 0x144, virtual false, abstract: false, final false
inline void DispatchIndirect(int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset) ;

/// @brief Method Dispatch_Injected, addr 0x69243b0, size 0x6c, virtual false, abstract: false, final false
static inline void Dispatch_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method EnableKeyword, addr 0x6924ffc, size 0x2c, virtual false, abstract: false, final false
inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x6924780, size 0x168, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0x69248e8, size 0x44, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method EnableLocalKeyword, addr 0x6924c94, size 0x90, virtual false, abstract: false, final false
inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method EnableLocalKeyword_Injected, addr 0x6924d24, size 0x44, virtual false, abstract: false, final false
static inline void EnableLocalKeyword_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method FindKernel, addr 0x6922a9c, size 0x174, virtual false, abstract: false, final false
inline int32_t FindKernel(::StringW  name) ;

/// @brief Method FindKernel_Injected, addr 0x6922c10, size 0x44, virtual false, abstract: false, final false
static inline int32_t FindKernel_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetEnabledKeywords, addr 0x692531c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords() ;

/// @brief Method GetEnabledKeywords_Injected, addr 0x692539c, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetKernelThreadGroupSizes, addr 0x69241e4, size 0xb0, virtual false, abstract: false, final false
inline void GetKernelThreadGroupSizes(int32_t  kernelIndex, ::ByRef<uint32_t>  x, ::ByRef<uint32_t>  y, ::ByRef<uint32_t>  z) ;

/// @brief Method GetKernelThreadGroupSizes_Injected, addr 0x6924294, size 0x6c, virtual false, abstract: false, final false
static inline void GetKernelThreadGroupSizes_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, ::ByRef<uint32_t>  x, ::ByRef<uint32_t>  y, ::ByRef<uint32_t>  z) ;

/// @brief Method GetShaderKeywords, addr 0x6925184, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetShaderKeywords() ;

/// @brief Method GetShaderKeywords_Injected, addr 0x6925204, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetShaderKeywords_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method HasKernel, addr 0x6922c54, size 0x178, virtual false, abstract: false, final false
inline bool HasKernel(::StringW  name) ;

/// @brief Method HasKernel_Injected, addr 0x6922dcc, size 0x44, virtual false, abstract: false, final false
static inline bool HasKernel_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Internal_DispatchIndirect, addr 0x692441c, size 0xe8, virtual false, abstract: false, final false
inline void Internal_DispatchIndirect(int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  argsBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchIndirectGraphicsBuffer, addr 0x6924560, size 0xe8, virtual false, abstract: false, final false
inline void Internal_DispatchIndirectGraphicsBuffer(int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchIndirectGraphicsBuffer_Injected, addr 0x6924648, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_DispatchIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, ::System::IntPtr  argsBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchIndirect_Injected, addr 0x6924504, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_DispatchIndirect_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, ::System::IntPtr  argsBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_SetBuffer, addr 0x6923b54, size 0xe8, virtual false, abstract: false, final false
inline void Internal_SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetBuffer_Injected, addr 0x6923c3c, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetGraphicsBuffer, addr 0x6923c98, size 0xe8, virtual false, abstract: false, final false
inline void Internal_SetGraphicsBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0x6923d80, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x6923ddc, size 0xe8, virtual false, abstract: false, final false
inline void Internal_SetRayTracingAccelerationStructure(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x6923ec4, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  accelerationStructure) ;

/// @brief Method IsKeywordEnabled, addr 0x6925080, size 0x30, virtual false, abstract: false, final false
inline bool IsKeywordEnabled(::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method IsKeywordEnabled, addr 0x6924ad8, size 0x178, virtual false, abstract: false, final false
inline bool IsKeywordEnabled(::StringW  keyword) ;

/// @brief Method IsKeywordEnabled_Injected, addr 0x6924c50, size 0x44, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method IsLocalKeywordEnabled, addr 0x6924f28, size 0x90, virtual false, abstract: false, final false
inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6924fb8, size 0x44, virtual false, abstract: false, final false
static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method IsSupported, addr 0x69250b0, size 0x90, virtual false, abstract: false, final false
inline bool IsSupported(int32_t  kernelIndex) ;

/// @brief Method IsSupported_Injected, addr 0x6925140, size 0x44, virtual false, abstract: false, final false
static inline bool IsSupported_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex) ;

static inline ::UnityEngine::ComputeShader* New_ctor() ;

/// @brief Method SetBool, addr 0x69256f0, size 0x3c, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  val) ;

/// @brief Method SetBool, addr 0x692572c, size 0x14, virtual false, abstract: false, final false
inline void SetBool(int32_t  nameID, bool  val) ;

/// @brief Method SetBuffer, addr 0x6925880, size 0x3c, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0x69258bc, size 0x3c, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0x6923f24, size 0x4, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0x6923f28, size 0x4, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetConstantBuffer, addr 0x6925938, size 0x4c, virtual false, abstract: false, final false
inline void SetConstantBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBuffer, addr 0x6925988, size 0x4c, virtual false, abstract: false, final false
inline void SetConstantBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBuffer, addr 0x6925934, size 0x4, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBuffer, addr 0x6925984, size 0x4, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantComputeBuffer, addr 0x6923f2c, size 0xf0, virtual false, abstract: false, final false
inline void SetConstantComputeBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantComputeBuffer_Injected, addr 0x692401c, size 0x6c, virtual false, abstract: false, final false
static inline void SetConstantComputeBuffer_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantGraphicsBuffer, addr 0x6924088, size 0xf0, virtual false, abstract: false, final false
inline void SetConstantGraphicsBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantGraphicsBuffer_Injected, addr 0x6924178, size 0x6c, virtual false, abstract: false, final false
static inline void SetConstantGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetEnabledKeywords, addr 0x69253d8, size 0x90, virtual false, abstract: false, final false
inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*>  keywords) ;

/// @brief Method SetEnabledKeywords_Injected, addr 0x6925468, size 0x44, virtual false, abstract: false, final false
static inline void SetEnabledKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*>  keywords) ;

/// @brief Method SetFloat, addr 0x692550c, size 0x34, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  val) ;

/// @brief Method SetFloat, addr 0x6922e10, size 0xa0, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  val) ;

/// @brief Method SetFloatArray, addr 0x69231d8, size 0x10c, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  nameID, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetFloatArray_Injected, addr 0x69232e4, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetFloat_Injected, addr 0x6922eb0, size 0x54, virtual false, abstract: false, final false
static inline void SetFloat_Injected(::System::IntPtr  _unity_self, int32_t  nameID, float_t  val) ;

/// @brief Method SetFloats, addr 0x6925680, size 0x34, virtual false, abstract: false, final false
inline void SetFloats(::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetFloats, addr 0x69256b4, size 0x4, virtual false, abstract: false, final false
inline void SetFloats(int32_t  nameID, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetInt, addr 0x6925540, size 0x34, virtual false, abstract: false, final false
inline void SetInt(::StringW  name, int32_t  val) ;

/// @brief Method SetInt, addr 0x6922f04, size 0x98, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  val) ;

/// @brief Method SetIntArray, addr 0x6923338, size 0x10c, virtual false, abstract: false, final false
inline void SetIntArray(int32_t  nameID, ::ArrayW<int32_t,::Array<int32_t>*>  values) ;

/// @brief Method SetIntArray_Injected, addr 0x6923444, size 0x54, virtual false, abstract: false, final false
static inline void SetIntArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetInt_Injected, addr 0x6922f9c, size 0x54, virtual false, abstract: false, final false
static inline void SetInt_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  val) ;

/// @brief Method SetInts, addr 0x69256b8, size 0x34, virtual false, abstract: false, final false
inline void SetInts(::StringW  name, ::ArrayW<int32_t,::Array<int32_t>*>  values) ;

/// @brief Method SetInts, addr 0x69256ec, size 0x4, virtual false, abstract: false, final false
inline void SetInts(int32_t  nameID, ::ArrayW<int32_t,::Array<int32_t>*>  values) ;

/// @brief Method SetKeyword, addr 0x6925054, size 0x2c, virtual false, abstract: false, final false
inline void SetKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetLocalKeyword, addr 0x6924e3c, size 0x98, virtual false, abstract: false, final false
inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetLocalKeyword_Injected, addr 0x6924ed4, size 0x54, virtual false, abstract: false, final false
static inline void SetLocalKeyword_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetMatrix, addr 0x69255c8, size 0x50, virtual false, abstract: false, final false
inline void SetMatrix(::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetMatrix, addr 0x69230ec, size 0x98, virtual false, abstract: false, final false
inline void SetMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetMatrixArray, addr 0x692564c, size 0x34, virtual false, abstract: false, final false
inline void SetMatrixArray(::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetMatrixArray, addr 0x69235f8, size 0x10c, virtual false, abstract: false, final false
inline void SetMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetMatrixArray_Injected, addr 0x6923704, size 0x54, virtual false, abstract: false, final false
static inline void SetMatrixArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetMatrix_Injected, addr 0x6923184, size 0x54, virtual false, abstract: false, final false
static inline void SetMatrix_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::ByRef<::UnityEngine::Matrix4x4>  val) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x69258f8, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x6923f20, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method SetRenderTexture, addr 0x69238c8, size 0x114, virtual false, abstract: false, final false
inline void SetRenderTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::RenderTexture*  texture, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetRenderTexture_Injected, addr 0x69239dc, size 0x74, virtual false, abstract: false, final false
static inline void SetRenderTexture_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  texture, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetShaderKeywords, addr 0x6925240, size 0x90, virtual false, abstract: false, final false
inline void SetShaderKeywords(::ArrayW<::StringW,::Array<::StringW>*>  names) ;

/// @brief Method SetShaderKeywords_Injected, addr 0x69252d0, size 0x44, virtual false, abstract: false, final false
static inline void SetShaderKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::StringW,::Array<::StringW>*>  names) ;

/// @brief Method SetTexture, addr 0x69257d8, size 0x54, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::RenderTexture*  texture, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetTexture, addr 0x6925748, size 0x40, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Texture*  texture) ;

/// @brief Method SetTexture, addr 0x6925788, size 0x4c, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Texture*  texture, int32_t  mipLevel) ;

/// @brief Method SetTexture, addr 0x69257d4, size 0x4, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::RenderTexture*  texture, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetTexture, addr 0x6925740, size 0x8, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Texture*  texture) ;

/// @brief Method SetTexture, addr 0x6923758, size 0x104, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Texture*  texture, int32_t  mipLevel) ;

/// @brief Method SetTextureFromGlobal, addr 0x692582c, size 0x54, virtual false, abstract: false, final false
inline void SetTextureFromGlobal(int32_t  kernelIndex, ::StringW  name, ::StringW  globalTextureName) ;

/// @brief Method SetTextureFromGlobal, addr 0x6923a50, size 0xa8, virtual false, abstract: false, final false
inline void SetTextureFromGlobal(int32_t  kernelIndex, int32_t  nameID, int32_t  globalTextureNameID) ;

/// @brief Method SetTextureFromGlobal_Injected, addr 0x6923af8, size 0x5c, virtual false, abstract: false, final false
static inline void SetTextureFromGlobal_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, int32_t  globalTextureNameID) ;

/// @brief Method SetTexture_Injected, addr 0x692385c, size 0x6c, virtual false, abstract: false, final false
static inline void SetTexture_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  texture, int32_t  mipLevel) ;

/// @brief Method SetVector, addr 0x6925574, size 0x54, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetVector, addr 0x6922ff0, size 0xa8, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetVectorArray, addr 0x6925618, size 0x34, virtual false, abstract: false, final false
inline void SetVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetVectorArray, addr 0x6923498, size 0x10c, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetVectorArray_Injected, addr 0x69235a4, size 0x54, virtual false, abstract: false, final false
static inline void SetVectorArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetVector_Injected, addr 0x6923098, size 0x54, virtual false, abstract: false, final false
static inline void SetVector_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::ByRef<::UnityEngine::Vector4>  val) ;

/// @brief Method .ctor, addr 0x69254b4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enabledKeywords, addr 0x69254ac, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*> get_enabledKeywords() ;

/// @brief Method get_keywordSpace, addr 0x69246a4, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0x692473c, size 0x44, virtual false, abstract: false, final false
static inline void get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method get_shaderKeywords, addr 0x6925314, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_shaderKeywords() ;

/// @brief Method set_enabledKeywords, addr 0x69254b0, size 0x4, virtual false, abstract: false, final false
inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*>  value) ;

/// @brief Method set_shaderKeywords, addr 0x6925318, size 0x4, virtual false, abstract: false, final false
inline void set_shaderKeywords(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputeShader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeShader(ComputeShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeShader(ComputeShader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeShader, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
