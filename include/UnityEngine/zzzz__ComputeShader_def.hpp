#pragma once
// IWYU pragma private; include "UnityEngine/ComputeShader.hpp"
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
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [UsedByNativeCode]
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

  /// [FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
  /// @brief Method DisableKeyword, addr 0x6f87708, size 0x160, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6f87dd4, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6f87868, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
  /// @brief Method DisableLocalKeyword, addr 0x6f87b2c, size 0x88, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6f87bb4, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [NativeName("DispatchComputeShader")]
  /// @brief Method Dispatch, addr 0x6f8712c, size 0xa8, virtual false, abstract: false, final false
  inline void Dispatch(int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// [ExcludeFromDocs]
  /// @brief Method DispatchIndirect, addr 0x6f888ec, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6f88758, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, /* [DefaultValue("0")] */ uint32_t argsOffset);

  /// [ExcludeFromDocs]
  /// @brief Method DispatchIndirect, addr 0x6f88a38, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6f888f4, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer, /* [DefaultValue("0")] */ uint32_t argsOffset);

  /// @brief Method Dispatch_Injected, addr 0x6f871d4, size 0x6c, virtual false, abstract: false, final false
  static inline void Dispatch_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// [FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
  /// @brief Method EnableKeyword, addr 0x6f87564, size 0x160, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6f87da8, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6f876c4, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
  /// @brief Method EnableLocalKeyword, addr 0x6f87a60, size 0x88, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6f87ae8, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// [RequiredByNativeCode]
  /// @brief Method FindKernel, addr 0x6f859ec, size 0x16c, virtual false, abstract: false, final false
  inline int32_t FindKernel(::StringW name);

  /// @brief Method FindKernel_Injected, addr 0x6f85b58, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindKernel_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction("ComputeShaderScripting::GetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method GetEnabledKeywords, addr 0x6f880b0, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6f88128, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod(Name = "ComputeShaderScripting::GetKernelThreadGroupSizes", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method GetKernelThreadGroupSizes, addr 0x6f87018, size 0xa8, virtual false, abstract: false, final false
  inline void GetKernelThreadGroupSizes(int32_t kernelIndex, ::by_ref<uint32_t> x, ::by_ref<uint32_t> y, ::by_ref<uint32_t> z);

  /// @brief Method GetKernelThreadGroupSizes_Injected, addr 0x6f870c0, size 0x6c, virtual false, abstract: false, final false
  static inline void GetKernelThreadGroupSizes_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::by_ref<uint32_t> x, ::by_ref<uint32_t> y, ::by_ref<uint32_t> z);

  /// [FreeFunction("ComputeShaderScripting::GetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method GetShaderKeywords, addr 0x6f87f28, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6f87fa0, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "ComputeShaderScripting::HasKernel", HasExplicitThis = true)]
  /// @brief Method HasKernel, addr 0x6f85b9c, size 0x170, virtual false, abstract: false, final false
  inline bool HasKernel(::StringW name);

  /// @brief Method HasKernel_Injected, addr 0x6f85d0c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasKernel_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction(Name = "ComputeShaderScripting::DispatchIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DispatchIndirect, addr 0x6f87240, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirect(int32_t kernelIndex, /* [NotNull] */ ::UnityEngine::ComputeBuffer* argsBuffer, uint32_t argsOffset);

  /// [FreeFunction(Name = "ComputeShaderScripting::DispatchIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DispatchIndirectGraphicsBuffer, addr 0x6f87368, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirectGraphicsBuffer(int32_t kernelIndex, /* [NotNull] */ ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirectGraphicsBuffer_Injected, addr 0x6f87434, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirect_Injected, addr 0x6f8730c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirect_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
  /// @brief Method Internal_SetBuffer, addr 0x6f86a14, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetBuffer(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetBuffer_Injected, addr 0x6f86ae0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
  /// @brief Method Internal_SetGraphicsBuffer, addr 0x6f86b3c, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetGraphicsBuffer(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0x6f86c08, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetRayTracingAccelerationStructure", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x6f86c64, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x6f86d30, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr accelerationStructure);

  /// [FreeFunction("ComputeShaderScripting::IsKeywordEnabled", HasExplicitThis = true)]
  /// @brief Method IsKeywordEnabled, addr 0x6f878ac, size 0x170, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6f87e2c, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6f87a1c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ComputeShaderScripting::IsKeywordEnabled", HasExplicitThis = true)]
  /// @brief Method IsLocalKeywordEnabled, addr 0x6f87cdc, size 0x88, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6f87d64, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("ComputeShaderScripting::IsSupported", HasExplicitThis = true)]
  /// @brief Method IsSupported, addr 0x6f87e5c, size 0x88, virtual false, abstract: false, final false
  inline bool IsSupported(int32_t kernelIndex);

  /// @brief Method IsSupported_Injected, addr 0x6f87ee4, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSupported_Injected(::System::IntPtr _unity_self, int32_t kernelIndex);

  static inline ::UnityEngine::ComputeShader* New_ctor();

  /// @brief Method SetBool, addr 0x6f88474, size 0x3c, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool val);

  /// @brief Method SetBool, addr 0x6f884b0, size 0x14, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool val);

  /// @brief Method SetBuffer, addr 0x6f88604, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6f88640, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6f86d90, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6f86d94, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBuffer, addr 0x6f886bc, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f8870c, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f886b8, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f88708, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
  /// @brief Method SetConstantComputeBuffer, addr 0x6f86d98, size 0xd4, virtual false, abstract: false, final false
  inline void SetConstantComputeBuffer(int32_t nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantComputeBuffer_Injected, addr 0x6f86e6c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantComputeBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
  /// @brief Method SetConstantGraphicsBuffer, addr 0x6f86ed8, size 0xd4, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBuffer(int32_t nameID, /* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBuffer_Injected, addr 0x6f86fac, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// [FreeFunction("ComputeShaderScripting::SetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method SetEnabledKeywords, addr 0x6f88164, size 0x88, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6f881ec, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetFloat, addr 0x6f88290, size 0x34, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<float>", HasExplicitThis = true)]
  /// @brief Method SetFloat, addr 0x6f85d50, size 0x98, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<float>", HasExplicitThis = true)]
  /// @brief Method SetFloatArray, addr 0x6f860f8, size 0x104, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray_Injected, addr 0x6f861fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetFloat_Injected, addr 0x6f85de8, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t val);

  /// @brief Method SetFloats, addr 0x6f88404, size 0x34, virtual false, abstract: false, final false
  inline void SetFloats(::StringW name, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetFloats, addr 0x6f88438, size 0x4, virtual false, abstract: false, final false
  inline void SetFloats(int32_t nameID, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetInt, addr 0x6f882c4, size 0x34, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
  /// @brief Method SetInt, addr 0x6f85e3c, size 0x90, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<int>", HasExplicitThis = true)]
  /// @brief Method SetIntArray, addr 0x6f86250, size 0x104, virtual false, abstract: false, final false
  inline void SetIntArray(int32_t nameID, ::ArrayW<int32_t> values);

  /// @brief Method SetIntArray_Injected, addr 0x6f86354, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetInt_Injected, addr 0x6f85ecc, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t val);

  /// @brief Method SetInts, addr 0x6f8843c, size 0x34, virtual false, abstract: false, final false
  inline void SetInts(::StringW name, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetInts, addr 0x6f88470, size 0x4, virtual false, abstract: false, final false
  inline void SetInts(int32_t nameID, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetKeyword, addr 0x6f87e00, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// [FreeFunction("ComputeShaderScripting::SetKeyword", HasExplicitThis = true)]
  /// @brief Method SetLocalKeyword, addr 0x6f87bf8, size 0x90, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6f87c88, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6f8834c, size 0x50, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<Matrix4x4f>", HasExplicitThis = true)]
  /// @brief Method SetMatrix, addr 0x6f86014, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetMatrixArray, addr 0x6f883d0, size 0x34, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<Matrix4x4f>", HasExplicitThis = true)]
  /// @brief Method SetMatrixArray, addr 0x6f86500, size 0x104, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray_Injected, addr 0x6f86604, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetMatrix_Injected, addr 0x6f860a4, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrix_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Matrix4x4 const> val);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f8867c, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f86d8c, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// [NativeMethod(Name = "ComputeShaderScripting::SetRenderTexture", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SetRenderTexture, addr 0x6f867ac, size 0xf8, virtual false, abstract: false, final false
  inline void SetRenderTexture(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTexture_Injected, addr 0x6f868a4, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel,
                                               ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// [FreeFunction("ComputeShaderScripting::SetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method SetShaderKeywords, addr 0x6f87fdc, size 0x88, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6f88064, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> names);

  /// @brief Method SetTexture, addr 0x6f8855c, size 0x54, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f884cc, size 0x40, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture);

  /// @brief Method SetTexture, addr 0x6f8850c, size 0x4c, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTexture, addr 0x6f88558, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f884c4, size 0x8, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Texture* texture);

  /// [NativeMethod(Name = "ComputeShaderScripting::SetTexture", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SetTexture, addr 0x6f86658, size 0xe8, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTextureFromGlobal, addr 0x6f885b0, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, ::StringW name, ::StringW globalTextureName);

  /// [NativeMethod(Name = "ComputeShaderScripting::SetTextureFromGlobal", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SetTextureFromGlobal, addr 0x6f86918, size 0xa0, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTextureFromGlobal_Injected, addr 0x6f869b8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetTextureFromGlobal_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTexture_Injected, addr 0x6f86740, size 0x6c, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel);

  /// @brief Method SetVector, addr 0x6f882f8, size 0x54, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<Vector4f>", HasExplicitThis = true)]
  /// @brief Method SetVector, addr 0x6f85f20, size 0xa0, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetVectorArray, addr 0x6f8839c, size 0x34, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<Vector4f>", HasExplicitThis = true)]
  /// @brief Method SetVectorArray, addr 0x6f863a8, size 0x104, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray_Injected, addr 0x6f864ac, size 0x54, virtual false, abstract: false, final false
  static inline void SetVectorArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetVector_Injected, addr 0x6f85fc0, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4 const> val);

  /// @brief Method .ctor, addr 0x6f88238, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabledKeywords, addr 0x6f88230, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> get_enabledKeywords();

  /// @brief Method get_keywordSpace, addr 0x6f87490, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x6f87520, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_shaderKeywords, addr 0x6f880a8, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_shaderKeywords();

  /// @brief Method set_enabledKeywords, addr 0x6f88234, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> value);

  /// @brief Method set_shaderKeywords, addr 0x6f880ac, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeShader(ComputeShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeShader(ComputeShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ComputeShader) == 0x18, "Size mismatch!");

} // namespace UnityEngine
