#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct MaterialPropertyType;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Shader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Shader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Shader*, "UnityEngine", "Shader");
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [NativeHeader("Runtime/Misc/ResourceManager.h")]
// [NativeHeader("Runtime/Shaders/ShaderNameRegistry.h")]
// [NativeHeader("Runtime/Shaders/GpuPrograms/ShaderVariantCollection.h")]
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Shaders/Shader.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_disableBatching)) ::UnityEngine::DisableBatchingType disableBatching;

  __declspec(property(get = get_isSupported)) bool isSupported;

  __declspec(property(get = get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  /// @brief [NativeProperty("MaximumShaderLOD")]
  __declspec(property(get = get_maximumLOD, put = set_maximumLOD)) int32_t maximumLOD;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_subshaderCount)) int32_t subshaderCount;

  /// @brief Method CheckPropertyIndex, addr 0x6eec230, size 0x70, virtual false, abstract: false, final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::CreateFromCompiledData")]
  /// @brief Method CreateFromCompiledData, addr 0x6ee65e0, size 0x198, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> CreateFromCompiledData(::ArrayW<uint8_t> compiledData, ::ArrayW<::UnityEngine::Shader*> dependencies);

  /// @brief Method CreateFromCompiledData_Injected, addr 0x6ee6778, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateFromCompiledData_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> compiledData, ::ArrayW<::UnityEngine::Shader*> dependencies);

  /// [FreeFunction("ShaderScripting::DisableKeyword")]
  /// @brief Method DisableKeyword, addr 0x6ee7214, size 0x124, virtual false, abstract: false, final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6ee7728, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// [FreeFunction("ShaderScripting::DisableKeyword")]
  /// @brief Method DisableKeywordFast, addr 0x6ee755c, size 0x40, virtual false, abstract: false, final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast_Injected, addr 0x6ee759c, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6ee7338, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ShaderScripting::EnableKeyword")]
  /// @brief Method EnableKeyword, addr 0x6ee70b4, size 0x124, virtual false, abstract: false, final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6ee76e4, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// [FreeFunction("ShaderScripting::EnableKeyword")]
  /// @brief Method EnableKeywordFast, addr 0x6ee74e0, size 0x40, virtual false, abstract: false, final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeywordFast_Injected, addr 0x6ee7520, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6ee71d8, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method ExtractGlobalFloatArray, addr 0x6ee9fd8, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction("ShaderScripting::ExtractGlobalFloatArray")]
  /// @brief Method ExtractGlobalFloatArrayImpl, addr 0x6ee9960, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ::by_ref<::ArrayW<float_t>> val);

  /// @brief Method ExtractGlobalFloatArrayImpl_Injected, addr 0x6ee9a88, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalMatrixArray, addr 0x6eea250, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction("ShaderScripting::ExtractGlobalMatrixArray")]
  /// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x6ee9c38, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl_Injected, addr 0x6ee9d60, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalPropertyNames, addr 0x6eea38c, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalPropertyNames(::UnityEngine::MaterialPropertyType type, ::System::Collections::Generic::List_1<::StringW>* names);

  /// [FreeFunction("ShaderScripting::ExtractGlobalPropertyNames")]
  /// @brief Method ExtractGlobalPropertyNamesImpl, addr 0x6ee7864, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalPropertyNamesImpl(int32_t propertyType, ::by_ref<::ArrayW<::StringW>> names);

  /// @brief Method ExtractGlobalVectorArray, addr 0x6eea114, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction("ShaderScripting::ExtractGlobalVectorArray")]
  /// @brief Method ExtractGlobalVectorArrayImpl, addr 0x6ee9acc, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Vector4>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl_Injected, addr 0x6ee9bf4, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method Find, addr 0x6ee62c0, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> Find(::StringW name);

  /// [FreeFunction("GetBuiltinResource<Shader>")]
  /// @brief Method FindBuiltin, addr 0x6ee6330, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW name);

  /// @brief Method FindBuiltin_Injected, addr 0x6ee65a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindBuiltin_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method FindPassTagValue, addr 0x6ee8224, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue, addr 0x6ee8340, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPropertyIndex, addr 0x6eec35c, size 0x174, virtual false, abstract: false, final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method FindPropertyIndex_Injected, addr 0x6eec4d0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPropertyIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName);

  /// @brief Method FindSubshaderTagValue, addr 0x6ee84b4, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindTextureStack, addr 0x6eec974, size 0xa8, virtual false, abstract: false, final false
  inline bool FindTextureStack(int32_t propertyIndex, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex);

  /// [FreeFunction("ShaderScripting::FindTextureStack")]
  /// @brief Method FindTextureStackImpl, addr 0x6eec06c, size 0x168, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl(/* [NotNull] */ ::UnityEngine::Shader* s, int32_t propertyIdx, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl_Injected, addr 0x6eec1d4, size 0x5c, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl_Injected(::System::IntPtr s, int32_t propertyIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> stackName, ::by_ref<int32_t> layerIndex);

  /// [FreeFunction("keywords::GetAllGlobalKeywords")]
  /// @brief Method GetAllGlobalKeywords, addr 0x6ee6e4c, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetAllGlobalKeywords();

  /// @brief Method GetAllGlobalKeywords_Injected, addr 0x6ee7078, size 0x3c, virtual false, abstract: false, final false
  static inline void GetAllGlobalKeywords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetDependency, addr 0x6ee7cfc, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW name);

  /// @brief Method GetDependency_Injected, addr 0x6ee7f94, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction("keywords::GetEnabledGlobalKeywords")]
  /// @brief Method GetEnabledGlobalKeywords, addr 0x6ee6d34, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetEnabledGlobalKeywords();

  /// @brief Method GetEnabledGlobalKeywords_Injected, addr 0x6ee703c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetEnabledGlobalKeywords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalColor, addr 0x6eeb190, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor, addr 0x6eeb1a0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalFloat, addr 0x6eeb084, size 0x40, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat, addr 0x6eeb0c4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x6eeb2a4, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray, addr 0x6eeb2b4, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x6eeb3dc, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray, addr 0x6eeb3f4, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction("ShaderScripting::GetGlobalFloatArrayCount")]
  /// @brief Method GetGlobalFloatArrayCountImpl, addr 0x6ee98ac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// [FreeFunction("ShaderScripting::GetGlobalFloatArray")]
  /// @brief Method GetGlobalFloatArrayImpl, addr 0x6ee948c, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl_Injected, addr 0x6ee95a8, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("ShaderScripting::GetGlobalFloat")]
  /// @brief Method GetGlobalFloatImpl, addr 0x6ee8e18, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalInt, addr 0x6eeafd0, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt, addr 0x6eeb02c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// [FreeFunction("ShaderScripting::GetGlobalInt")]
  /// @brief Method GetGlobalIntImpl, addr 0x6ee8ddc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalInteger, addr 0x6eeb100, size 0x40, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger, addr 0x6eeb140, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalMatrix, addr 0x6eeb1a4, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix, addr 0x6eeb21c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x6eeb374, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray, addr 0x6eeb384, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x6eeb414, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x6eeb42c, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction("ShaderScripting::GetGlobalMatrixArrayCount")]
  /// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x6ee9924, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// [FreeFunction("ShaderScripting::GetGlobalMatrixArray")]
  /// @brief Method GetGlobalMatrixArrayImpl, addr 0x6ee974c, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl_Injected, addr 0x6ee9868, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("ShaderScripting::GetGlobalMatrix")]
  /// @brief Method GetGlobalMatrixImpl, addr 0x6ee8ef0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl_Injected, addr 0x6ee8f5c, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("ShaderScripting::GetGlobalPropertyCount")]
  /// @brief Method GetGlobalPropertyCount, addr 0x6ee7800, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGlobalPropertyCount();

  /// [FreeFunction("ShaderScripting::GetGlobalPropertyCount")]
  /// @brief Method GetGlobalPropertyCountImpl, addr 0x6ee7828, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalPropertyCountImpl(int32_t propertyType);

  /// @brief Method GetGlobalPropertyNames, addr 0x6eeb430, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalPropertyNames(::UnityEngine::MaterialPropertyType type, ::System::Collections::Generic::List_1<::StringW>* names);

  /// @brief Method GetGlobalTexture, addr 0x6eeb290, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture, addr 0x6eeb2a0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t nameID);

  /// [FreeFunction("ShaderScripting::GetGlobalTexture")]
  /// @brief Method GetGlobalTextureImpl, addr 0x6ee8fa0, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl_Injected, addr 0x6ee90c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t name);

  /// @brief Method GetGlobalVector, addr 0x6eeb17c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector, addr 0x6eeb18c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x6eeb30c, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray, addr 0x6eeb31c, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x6eeb3f8, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x6eeb410, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction("ShaderScripting::GetGlobalVectorArrayCount")]
  /// @brief Method GetGlobalVectorArrayCountImpl, addr 0x6ee98e8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// [FreeFunction("ShaderScripting::GetGlobalVectorArray")]
  /// @brief Method GetGlobalVectorArrayImpl, addr 0x6ee95ec, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl_Injected, addr 0x6ee9708, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("ShaderScripting::GetGlobalVector")]
  /// @brief Method GetGlobalVectorImpl, addr 0x6ee8e54, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl_Injected, addr 0x6ee8eac, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> ret);

  /// [FreeFunction(Name = "ShaderScripting::GetPassCountInSubshader", HasExplicitThis = true)]
  /// @brief Method GetPassCountInSubshader, addr 0x6ee8150, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method GetPassCountInSubshader_Injected, addr 0x6ee81e0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPassCountInSubshader_Injected(::System::IntPtr _unity_self, int32_t subshaderIndex);

  /// @brief Method GetPropertyAttributes, addr 0x6eec5dc, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyAttributes(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyAttributes")]
  /// @brief Method GetPropertyAttributes, addr 0x6eebabc, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyAttributes(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes_Injected, addr 0x6eebb70, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyAttributes_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyCount, addr 0x6eec2a0, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyCount_Injected, addr 0x6eec320, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPropertyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyDefaultFloatValue, addr 0x6eec604, size 0x94, virtual false, abstract: false, final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x6eec7c4, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPropertyDefaultIntValue(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyDefaultIntValue")]
  /// @brief Method GetPropertyDefaultIntValue, addr 0x6eebbb4, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue_Injected, addr 0x6eebc68, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyDefaultValue")]
  /// @brief Method GetPropertyDefaultValue, addr 0x6eebcac, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue_Injected, addr 0x6eebd7c, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDefaultValue_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPropertyDefaultVectorValue, addr 0x6eec698, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x6eec58c, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyDescription")]
  /// @brief Method GetPropertyDescription, addr 0x6eeb820, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyDescription(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription_Injected, addr 0x6eeb970, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDescription_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyFlags, addr 0x6eec5b4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyFlags")]
  /// @brief Method GetPropertyFlags, addr 0x6eeb9c4, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags_Injected, addr 0x6eeba78, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x6eec514, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyName")]
  /// @brief Method GetPropertyName, addr 0x6eeb48c, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyName(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x6eec53c, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyNameId")]
  /// @brief Method GetPropertyNameId, addr 0x6eeb630, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId_Injected, addr 0x6eeb6e4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName_Injected, addr 0x6eeb5dc, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyRangeLimits, addr 0x6eec728, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x6eec8e4, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyTextureDefaultName")]
  /// @brief Method GetPropertyTextureDefaultName, addr 0x6eebec8, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyTextureDefaultName(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName_Injected, addr 0x6eec018, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyTextureDefaultName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyTextureDimension, addr 0x6eec854, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyTextureDimension")]
  /// @brief Method GetPropertyTextureDimension, addr 0x6eebdd0, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension_Injected, addr 0x6eebe84, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x6eec564, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::GetPropertyType")]
  /// @brief Method GetPropertyType, addr 0x6eeb728, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(/* [NotNull] */ ::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType_Injected, addr 0x6eeb7dc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// [FreeFunction("ShaderScripting::IDToTag")]
  /// @brief Method IDToTag, addr 0x6ee7bb0, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method IDToTag_Injected, addr 0x6ee7c7c, size 0x44, virtual false, abstract: false, final false
  static inline void IDToTag_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction(Name = "ShaderScripting::FindPassTagValue", HasExplicitThis = true)]
  /// @brief Method Internal_FindPassTagValue, addr 0x6ee82a8, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// [FreeFunction(Name = "ShaderScripting::FindPassTagValue", HasExplicitThis = true)]
  /// @brief Method Internal_FindPassTagValueInSubShader, addr 0x6ee840c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader_Injected, addr 0x6ee8678, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValue_Injected, addr 0x6ee8624, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValue_Injected(::System::IntPtr _unity_self, int32_t passIndex, int32_t tagName);

  /// [FreeFunction(Name = "ShaderScripting::FindSubshaderTagValue", HasExplicitThis = true)]
  /// @brief Method Internal_FindSubshaderTagValue, addr 0x6ee858c, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue_Injected, addr 0x6ee86d4, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindSubshaderTagValue_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t tagName);

  /// [FreeFunction("ShaderScripting::IsKeywordEnabled")]
  /// @brief Method IsKeywordEnabled, addr 0x6ee7374, size 0x130, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6ee77b8, size 0x48, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// [FreeFunction("ShaderScripting::IsKeywordEnabled")]
  /// @brief Method IsKeywordEnabledFast, addr 0x6ee7664, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method IsKeywordEnabledFast_Injected, addr 0x6ee76a8, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6ee74a4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  static inline ::UnityEngine::Shader* New_ctor();

  /// [FreeFunction(Name = "ShaderScripting::PropertyToID", IsThreadSafe = true)]
  /// @brief Method PropertyToID, addr 0x6ee255c, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method PropertyToID_Injected, addr 0x6ee7cc0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method SetGlobalBuffer, addr 0x6eea848, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6eea8e8, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6eea898, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6eea938, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// [FreeFunction("ShaderScripting::SetGlobalBuffer")]
  /// @brief Method SetGlobalBufferImpl, addr 0x6ee8a98, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferImpl_Injected, addr 0x6ee8ae8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalColor, addr 0x6eea6fc, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x6eea73c, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6eea988, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6eeaa58, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6eea9f0, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6eeaac0, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// [FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
  /// @brief Method SetGlobalConstantBufferImpl, addr 0x6ee8bc0, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0x6ee8c28, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// [FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
  /// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x6ee8c84, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0x6ee8cec, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloat, addr 0x6eea590, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x6eea5e0, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x6eeace8, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6eeabc8, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x6ee9da4, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetGlobalFloatArray, addr 0x6eead0c, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6eeac60, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction("ShaderScripting::SetGlobalFloatArray")]
  /// @brief Method SetGlobalFloatArrayImpl, addr 0x6ee90fc, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0x6ee91d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [FreeFunction("ShaderScripting::SetGlobalFloat")]
  /// @brief Method SetGlobalFloatImpl, addr 0x6ee876c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// [FreeFunction("ShaderScripting::SetGlobalBuffer")]
  /// @brief Method SetGlobalGraphicsBufferImpl, addr 0x6ee8b2c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl_Injected, addr 0x6ee8b7c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalInt, addr 0x6eea504, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x6eea54c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// [FreeFunction("ShaderScripting::SetGlobalInt")]
  /// @brief Method SetGlobalIntImpl, addr 0x6ee8728, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6eea62c, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6eea674, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x6eea740, size 0x64, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x6eea7a4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x6eeaf98, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6eeae78, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6ee9f1c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray, addr 0x6eeafbc, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6eeaf10, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction("ShaderScripting::SetGlobalMatrixArray")]
  /// @brief Method SetGlobalMatrixArrayImpl, addr 0x6ee935c, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0x6ee9438, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [FreeFunction("ShaderScripting::SetGlobalMatrix")]
  /// @brief Method SetGlobalMatrixImpl, addr 0x6ee8850, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixImpl_Injected, addr 0x6ee8894, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x6eeab28, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x6eeab78, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// [FreeFunction("ShaderScripting::SetGlobalRayTracingAccelerationStructure")]
  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl, addr 0x6ee8d48, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl(int32_t name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl_Injected, addr 0x6ee8d98, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t name, ::System::IntPtr accelerationStructure);

  /// [FreeFunction("ShaderScripting::SetGlobalRenderTexture")]
  /// @brief Method SetGlobalRenderTextureImpl, addr 0x6ee89ac, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalRenderTextureImpl_Injected, addr 0x6ee8a44, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl_Injected(int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6eea81c, size 0x28, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6eea800, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x6eea844, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6eea818, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// [FreeFunction("ShaderScripting::SetGlobalTexture")]
  /// @brief Method SetGlobalTextureImpl, addr 0x6ee88d8, size 0x90, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl_Injected, addr 0x6ee8968, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalVector, addr 0x6eea6b8, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x6eea6f8, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x6eeae40, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6eead20, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x6ee9e60, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetGlobalVectorArray, addr 0x6eeae64, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6eeadb8, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction("ShaderScripting::SetGlobalVectorArray")]
  /// @brief Method SetGlobalVectorArrayImpl, addr 0x6ee922c, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0x6ee9308, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [FreeFunction("ShaderScripting::SetGlobalVector")]
  /// @brief Method SetGlobalVectorImpl, addr 0x6ee87b8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorImpl_Injected, addr 0x6ee880c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> value);

  /// @brief Method SetKeyword, addr 0x6ee776c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// [FreeFunction("ShaderScripting::SetKeyword")]
  /// @brief Method SetKeywordFast, addr 0x6ee75d8, size 0x48, virtual false, abstract: false, final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetKeywordFast_Injected, addr 0x6ee7620, size 0x44, virtual false, abstract: false, final false
  static inline void SetKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// [FreeFunction("ShaderScripting::TagToID")]
  /// @brief Method TagToID, addr 0x6ee7a48, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method TagToID_Injected, addr 0x6ee7b74, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TagToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction]
  /// @brief Method WarmupAllShaders, addr 0x6ee7a20, size 0x28, virtual false, abstract: false, final false
  static inline void WarmupAllShaders();

  /// @brief Method .ctor, addr 0x6eeb434, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// [FreeFunction("ShaderScripting::GetDisableBatchingType", HasExplicitThis = true)]
  /// @brief Method get_disableBatching, addr 0x6ee7964, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method get_disableBatching_Injected, addr 0x6ee79e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DisableBatchingType get_disableBatching_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledGlobalKeywords, addr 0x6ee6d30, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords, addr 0x6ee6e48, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_globalKeywords();

  /// @brief Method get_globalMaximumLOD, addr 0x6ee69b0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method get_globalRenderPipeline, addr 0x6ee6ad0, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method get_globalRenderPipeline_Injected, addr 0x6ee6b94, size 0x3c, virtual false, abstract: false, final false
  static inline void get_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_globalShaderHardwareTier, addr 0x6ee61dc, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// [NativeMethod("IsSupported")]
  /// @brief Method get_isSupported, addr 0x6ee6a14, size 0x80, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_isSupported_Injected, addr 0x6ee6a94, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isSupported_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keywordSpace, addr 0x6ee6f60, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x6ee6ff8, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_maximumChunksOverride, addr 0x6ee67bc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method get_maximumLOD, addr 0x6ee6820, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_maximumLOD();

  /// @brief Method get_maximumLOD_Injected, addr 0x6ee68a0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maximumLOD_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "ShaderScripting::GetPassCount", HasExplicitThis = true)]
  /// @brief Method get_passCount, addr 0x6ee7fd8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6ee8058, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("ShaderScripting::GetRenderQueue", HasExplicitThis = true)]
  /// @brief Method get_renderQueue, addr 0x6ee78a8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6ee7928, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "ShaderScripting::GetSubshaderCount", HasExplicitThis = true)]
  /// @brief Method get_subshaderCount, addr 0x6ee8094, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subshaderCount();

  /// @brief Method get_subshaderCount_Injected, addr 0x6ee8114, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subshaderCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_globalMaximumLOD, addr 0x6ee69d8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method set_globalRenderPipeline, addr 0x6ee6bd0, size 0x124, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method set_globalRenderPipeline_Injected, addr 0x6ee6cf4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_globalShaderHardwareTier, addr 0x6ee6248, size 0x78, virtual false, abstract: false, final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method set_maximumChunksOverride, addr 0x6ee67e4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method set_maximumLOD, addr 0x6ee68dc, size 0x90, virtual false, abstract: false, final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method set_maximumLOD_Injected, addr 0x6ee696c, size 0x44, virtual false, abstract: false, final false
  static inline void set_maximumLOD_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shader(Shader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shader(Shader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Shader) == 0x18, "Size mismatch!");

} // namespace UnityEngine
