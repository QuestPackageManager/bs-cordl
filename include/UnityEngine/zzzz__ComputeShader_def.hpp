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
  /// @brief Method DisableKeyword, addr 0x6f497c8, size 0x160, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6f49e94, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6f49928, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
  /// @brief Method DisableLocalKeyword, addr 0x6f49bec, size 0x88, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6f49c74, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// [NativeName("DispatchComputeShader")]
  /// @brief Method Dispatch, addr 0x6f491ec, size 0xa8, virtual false, abstract: false, final false
  inline void Dispatch(int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// [ExcludeFromDocs]
  /// @brief Method DispatchIndirect, addr 0x6f4a9ac, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6f4a818, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, /* [DefaultValue("0")] */ uint32_t argsOffset);

  /// [ExcludeFromDocs]
  /// @brief Method DispatchIndirect, addr 0x6f4aaf8, size 0x8, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer);

  /// @brief Method DispatchIndirect, addr 0x6f4a9b4, size 0x144, virtual false, abstract: false, final false
  inline void DispatchIndirect(int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* argsBuffer, /* [DefaultValue("0")] */ uint32_t argsOffset);

  /// @brief Method Dispatch_Injected, addr 0x6f49294, size 0x6c, virtual false, abstract: false, final false
  static inline void Dispatch_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// [FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
  /// @brief Method EnableKeyword, addr 0x6f49624, size 0x160, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6f49e68, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6f49784, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
  /// @brief Method EnableLocalKeyword, addr 0x6f49b20, size 0x88, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6f49ba8, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// [NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// [RequiredByNativeCode]
  /// @brief Method FindKernel, addr 0x6f47aac, size 0x16c, virtual false, abstract: false, final false
  inline int32_t FindKernel(::StringW name);

  /// @brief Method FindKernel_Injected, addr 0x6f47c18, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindKernel_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction("ComputeShaderScripting::GetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method GetEnabledKeywords, addr 0x6f4a170, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6f4a1e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod(Name = "ComputeShaderScripting::GetKernelThreadGroupSizes", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method GetKernelThreadGroupSizes, addr 0x6f490d8, size 0xa8, virtual false, abstract: false, final false
  inline void GetKernelThreadGroupSizes(int32_t kernelIndex, ::by_ref<uint32_t> x, ::by_ref<uint32_t> y, ::by_ref<uint32_t> z);

  /// @brief Method GetKernelThreadGroupSizes_Injected, addr 0x6f49180, size 0x6c, virtual false, abstract: false, final false
  static inline void GetKernelThreadGroupSizes_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::by_ref<uint32_t> x, ::by_ref<uint32_t> y, ::by_ref<uint32_t> z);

  /// [FreeFunction("ComputeShaderScripting::GetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method GetShaderKeywords, addr 0x6f49fe8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6f4a060, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "ComputeShaderScripting::HasKernel", HasExplicitThis = true)]
  /// @brief Method HasKernel, addr 0x6f47c5c, size 0x170, virtual false, abstract: false, final false
  inline bool HasKernel(::StringW name);

  /// @brief Method HasKernel_Injected, addr 0x6f47dcc, size 0x44, virtual false, abstract: false, final false
  static inline bool HasKernel_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction(Name = "ComputeShaderScripting::DispatchIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DispatchIndirect, addr 0x6f49300, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirect(int32_t kernelIndex, /* [NotNull] */ ::UnityEngine::ComputeBuffer* argsBuffer, uint32_t argsOffset);

  /// [FreeFunction(Name = "ComputeShaderScripting::DispatchIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DispatchIndirectGraphicsBuffer, addr 0x6f49428, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_DispatchIndirectGraphicsBuffer(int32_t kernelIndex, /* [NotNull] */ ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirectGraphicsBuffer_Injected, addr 0x6f494f4, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchIndirect_Injected, addr 0x6f493cc, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_DispatchIndirect_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, ::System::IntPtr argsBuffer, uint32_t argsOffset);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
  /// @brief Method Internal_SetBuffer, addr 0x6f48ad4, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetBuffer(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetBuffer_Injected, addr 0x6f48ba0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
  /// @brief Method Internal_SetGraphicsBuffer, addr 0x6f48bfc, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetGraphicsBuffer(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0x6f48cc8, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetRayTracingAccelerationStructure", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x6f48d24, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x6f48df0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr accelerationStructure);

  /// [FreeFunction("ComputeShaderScripting::IsKeywordEnabled", HasExplicitThis = true)]
  /// @brief Method IsKeywordEnabled, addr 0x6f4996c, size 0x170, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6f49eec, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6f49adc, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ComputeShaderScripting::IsKeywordEnabled", HasExplicitThis = true)]
  /// @brief Method IsLocalKeywordEnabled, addr 0x6f49d9c, size 0x88, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6f49e24, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// [FreeFunction("ComputeShaderScripting::IsSupported", HasExplicitThis = true)]
  /// @brief Method IsSupported, addr 0x6f49f1c, size 0x88, virtual false, abstract: false, final false
  inline bool IsSupported(int32_t kernelIndex);

  /// @brief Method IsSupported_Injected, addr 0x6f49fa4, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSupported_Injected(::System::IntPtr _unity_self, int32_t kernelIndex);

  static inline ::UnityEngine::ComputeShader* New_ctor();

  /// @brief Method SetBool, addr 0x6f4a534, size 0x3c, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool val);

  /// @brief Method SetBool, addr 0x6f4a570, size 0x14, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool val);

  /// @brief Method SetBuffer, addr 0x6f4a6c4, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6f4a700, size 0x3c, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6f48e50, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetBuffer, addr 0x6f48e54, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetConstantBuffer, addr 0x6f4a77c, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f4a7cc, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f4a778, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f4a7c8, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
  /// @brief Method SetConstantComputeBuffer, addr 0x6f48e58, size 0xd4, virtual false, abstract: false, final false
  inline void SetConstantComputeBuffer(int32_t nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantComputeBuffer_Injected, addr 0x6f48f2c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantComputeBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
  /// @brief Method SetConstantGraphicsBuffer, addr 0x6f48f98, size 0xd4, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBuffer(int32_t nameID, /* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBuffer_Injected, addr 0x6f4906c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr buffer, int32_t offset, int32_t size);

  /// [FreeFunction("ComputeShaderScripting::SetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method SetEnabledKeywords, addr 0x6f4a224, size 0x88, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6f4a2ac, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetFloat, addr 0x6f4a350, size 0x34, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<float>", HasExplicitThis = true)]
  /// @brief Method SetFloat, addr 0x6f47e10, size 0x98, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<float>", HasExplicitThis = true)]
  /// @brief Method SetFloatArray, addr 0x6f481b8, size 0x104, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray_Injected, addr 0x6f482bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetFloat_Injected, addr 0x6f47ea8, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t val);

  /// @brief Method SetFloats, addr 0x6f4a4c4, size 0x34, virtual false, abstract: false, final false
  inline void SetFloats(::StringW name, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetFloats, addr 0x6f4a4f8, size 0x4, virtual false, abstract: false, final false
  inline void SetFloats(int32_t nameID, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetInt, addr 0x6f4a384, size 0x34, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
  /// @brief Method SetInt, addr 0x6f47efc, size 0x90, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<int>", HasExplicitThis = true)]
  /// @brief Method SetIntArray, addr 0x6f48310, size 0x104, virtual false, abstract: false, final false
  inline void SetIntArray(int32_t nameID, ::ArrayW<int32_t> values);

  /// @brief Method SetIntArray_Injected, addr 0x6f48414, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetInt_Injected, addr 0x6f47f8c, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t val);

  /// @brief Method SetInts, addr 0x6f4a4fc, size 0x34, virtual false, abstract: false, final false
  inline void SetInts(::StringW name, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetInts, addr 0x6f4a530, size 0x4, virtual false, abstract: false, final false
  inline void SetInts(int32_t nameID, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetKeyword, addr 0x6f49ec0, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// [FreeFunction("ComputeShaderScripting::SetKeyword", HasExplicitThis = true)]
  /// @brief Method SetLocalKeyword, addr 0x6f49cb8, size 0x90, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6f49d48, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6f4a40c, size 0x50, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<Matrix4x4f>", HasExplicitThis = true)]
  /// @brief Method SetMatrix, addr 0x6f480d4, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetMatrixArray, addr 0x6f4a490, size 0x34, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<Matrix4x4f>", HasExplicitThis = true)]
  /// @brief Method SetMatrixArray, addr 0x6f485c0, size 0x104, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray_Injected, addr 0x6f486c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetMatrix_Injected, addr 0x6f48164, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrix_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Matrix4x4> val);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f4a73c, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f48e4c, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// [NativeMethod(Name = "ComputeShaderScripting::SetRenderTexture", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SetRenderTexture, addr 0x6f4886c, size 0xf8, virtual false, abstract: false, final false
  inline void SetRenderTexture(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTexture_Injected, addr 0x6f48964, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel,
                                               ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// [FreeFunction("ComputeShaderScripting::SetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method SetShaderKeywords, addr 0x6f4a09c, size 0x88, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6f4a124, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> names);

  /// @brief Method SetTexture, addr 0x6f4a61c, size 0x54, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f4a58c, size 0x40, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture);

  /// @brief Method SetTexture, addr 0x6f4a5cc, size 0x4c, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, ::StringW name, ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTexture, addr 0x6f4a618, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::RenderTexture* texture, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f4a584, size 0x8, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, ::UnityEngine::Texture* texture);

  /// [NativeMethod(Name = "ComputeShaderScripting::SetTexture", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SetTexture, addr 0x6f48718, size 0xe8, virtual false, abstract: false, final false
  inline void SetTexture(int32_t kernelIndex, int32_t nameID, /* [NotNull] */ ::UnityEngine::Texture* texture, int32_t mipLevel);

  /// @brief Method SetTextureFromGlobal, addr 0x6f4a670, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, ::StringW name, ::StringW globalTextureName);

  /// [NativeMethod(Name = "ComputeShaderScripting::SetTextureFromGlobal", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SetTextureFromGlobal, addr 0x6f489d8, size 0xa0, virtual false, abstract: false, final false
  inline void SetTextureFromGlobal(int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTextureFromGlobal_Injected, addr 0x6f48a78, size 0x5c, virtual false, abstract: false, final false
  static inline void SetTextureFromGlobal_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, int32_t globalTextureNameID);

  /// @brief Method SetTexture_Injected, addr 0x6f48800, size 0x6c, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, int32_t kernelIndex, int32_t nameID, ::System::IntPtr texture, int32_t mipLevel);

  /// @brief Method SetVector, addr 0x6f4a3b8, size 0x54, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 val);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetValue<Vector4f>", HasExplicitThis = true)]
  /// @brief Method SetVector, addr 0x6f47fe0, size 0xa0, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetVectorArray, addr 0x6f4a45c, size 0x34, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// [FreeFunction(Name = "ComputeShaderScripting::SetArray<Vector4f>", HasExplicitThis = true)]
  /// @brief Method SetVectorArray, addr 0x6f48468, size 0x104, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray_Injected, addr 0x6f4856c, size 0x54, virtual false, abstract: false, final false
  static inline void SetVectorArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetVector_Injected, addr 0x6f48080, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4> val);

  /// @brief Method .ctor, addr 0x6f4a2f8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabledKeywords, addr 0x6f4a2f0, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> get_enabledKeywords();

  /// @brief Method get_keywordSpace, addr 0x6f49550, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x6f495e0, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_shaderKeywords, addr 0x6f4a168, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_shaderKeywords();

  /// @brief Method set_enabledKeywords, addr 0x6f4a2f4, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> value);

  /// @brief Method set_shaderKeywords, addr 0x6f4a16c, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ComputeShader) == 0x18, "Size mismatch!");

} // namespace UnityEngine
