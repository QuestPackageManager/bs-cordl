#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Shader);
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

  __declspec(property(get = get_maximumLOD, put = set_maximumLOD)) int32_t maximumLOD;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_subshaderCount)) int32_t subshaderCount;

  /// @brief Method CheckPropertyIndex, addr 0x68cc8ac, size 0x70, virtual false, abstract: false, final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method DisableKeyword, addr 0x68c7fc0, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x68c7aa4, size 0x124, virtual false, abstract: false, final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeywordFast, addr 0x68c7dec, size 0x40, virtual false, abstract: false, final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast_Injected, addr 0x68c7e2c, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeywordFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x68c7bc8, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableKeyword, addr 0x68c7f7c, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x68c7944, size 0x124, virtual false, abstract: false, final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeywordFast, addr 0x68c7d70, size 0x40, virtual false, abstract: false, final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeywordFast_Injected, addr 0x68c7db0, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeywordFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x68c7a68, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method ExtractGlobalFloatArray, addr 0x68ca7d0, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalFloatArrayImpl, addr 0x68ca158, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractGlobalFloatArrayImpl_Injected, addr 0x68ca280, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalMatrixArray, addr 0x68caa48, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x68ca430, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl_Injected, addr 0x68ca558, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalVectorArray, addr 0x68ca90c, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalVectorArrayImpl, addr 0x68ca2c4, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl_Injected, addr 0x68ca3ec, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method Find, addr 0x68c6f34, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> Find(::StringW name);

  /// @brief Method FindBuiltin, addr 0x68c6fa4, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW name);

  /// @brief Method FindBuiltin_Injected, addr 0x68c7218, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindBuiltin_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method FindPassTagValue, addr 0x68c8a1c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue, addr 0x68c8b38, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPropertyIndex, addr 0x68cc9d8, size 0x174, virtual false, abstract: false, final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method FindPropertyIndex_Injected, addr 0x68ccb4c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPropertyIndex_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName);

  /// @brief Method FindSubshaderTagValue, addr 0x68c8cac, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindTextureStack, addr 0x68ccff0, size 0xa8, virtual false, abstract: false, final false
  inline bool FindTextureStack(int32_t propertyIndex, ::ByRef<::StringW> stackName, ::ByRef<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl, addr 0x68cc6e8, size 0x168, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ::ByRef<::StringW> stackName, ::ByRef<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl_Injected, addr 0x68cc850, size 0x5c, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl_Injected(::System::IntPtr s, int32_t propertyIdx, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> stackName, ::ByRef<int32_t> layerIndex);

  /// @brief Method GetAllGlobalKeywords, addr 0x68c7840, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords();

  /// @brief Method GetDependency, addr 0x68c84f4, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW name);

  /// @brief Method GetDependency_Injected, addr 0x68c878c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetEnabledGlobalKeywords, addr 0x68c77f0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords();

  /// @brief Method GetGlobalColor, addr 0x68cb810, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor, addr 0x68cb820, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalFloat, addr 0x68cb704, size 0x40, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat, addr 0x68cb744, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x68cb924, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray, addr 0x68cb934, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x68cba5c, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray, addr 0x68cba74, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArrayCountImpl, addr 0x68ca0a4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl, addr 0x68c9c84, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl_Injected, addr 0x68c9da0, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalFloatImpl, addr 0x68c9610, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalInt, addr 0x68cb650, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt, addr 0x68cb6ac, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalIntImpl, addr 0x68c95d4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalInteger, addr 0x68cb780, size 0x40, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger, addr 0x68cb7c0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalMatrix, addr 0x68cb824, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix, addr 0x68cb89c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x68cb9f4, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray, addr 0x68cba04, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x68cba94, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x68cbaac, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x68ca11c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl, addr 0x68c9f44, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl_Injected, addr 0x68ca060, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalMatrixImpl, addr 0x68c96e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl_Injected, addr 0x68c9754, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetGlobalTexture, addr 0x68cb910, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture, addr 0x68cb920, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalTextureImpl, addr 0x68c9798, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl_Injected, addr 0x68c98b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t name);

  /// @brief Method GetGlobalVector, addr 0x68cb7fc, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector, addr 0x68cb80c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x68cb98c, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray, addr 0x68cb99c, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x68cba78, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x68cba90, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArrayCountImpl, addr 0x68ca0e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl, addr 0x68c9de4, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl_Injected, addr 0x68c9f00, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalVectorImpl, addr 0x68c964c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl_Injected, addr 0x68c96a4, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetPassCountInSubshader, addr 0x68c8948, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method GetPassCountInSubshader_Injected, addr 0x68c89d8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPassCountInSubshader_Injected(::System::IntPtr _unity_self, int32_t subshaderIndex);

  /// @brief Method GetPropertyAttributes, addr 0x68ccc58, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes, addr 0x68cc138, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes_Injected, addr 0x68cc1ec, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyCount, addr 0x68cc91c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyCount_Injected, addr 0x68cc99c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPropertyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyDefaultFloatValue, addr 0x68ccc80, size 0x94, virtual false, abstract: false, final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x68cce40, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPropertyDefaultIntValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x68cc230, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue_Injected, addr 0x68cc2e4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue, addr 0x68cc328, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue_Injected, addr 0x68cc3f8, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDefaultValue_Injected(::System::IntPtr shader, int32_t propertyIndex, ::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetPropertyDefaultVectorValue, addr 0x68ccd14, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x68ccc08, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x68cbe9c, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription_Injected, addr 0x68cbfec, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDescription_Injected(::System::IntPtr shader, int32_t propertyIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyFlags, addr 0x68ccc30, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x68cc040, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags_Injected, addr 0x68cc0f4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x68ccb90, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x68cbb08, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x68ccbb8, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x68cbcac, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId_Injected, addr 0x68cbd60, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName_Injected, addr 0x68cbc58, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyRangeLimits, addr 0x68ccda4, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x68ccf60, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x68cc544, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName_Injected, addr 0x68cc694, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyTextureDefaultName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyTextureDimension, addr 0x68cced0, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x68cc44c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension_Injected, addr 0x68cc500, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x68ccbe0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x68cbda4, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType_Injected, addr 0x68cbe58, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method IDToTag, addr 0x68c83a8, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method IDToTag_Injected, addr 0x68c8474, size 0x44, virtual false, abstract: false, final false
  static inline void IDToTag_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method Internal_FindPassTagValue, addr 0x68c8aa0, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader, addr 0x68c8c04, size 0xa8, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader_Injected, addr 0x68c8e70, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValue_Injected, addr 0x68c8e1c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValue_Injected(::System::IntPtr _unity_self, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue, addr 0x68c8d84, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue_Injected, addr 0x68c8ecc, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindSubshaderTagValue_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t tagName);

  /// @brief Method IsKeywordEnabled, addr 0x68c8058, size 0x48, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabled, addr 0x68c7c04, size 0x130, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabledFast, addr 0x68c7efc, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method IsKeywordEnabledFast_Injected, addr 0x68c7f40, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x68c7d34, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method PropertyToID, addr 0x68c3680, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method PropertyToID_Injected, addr 0x68c84b8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method SetGlobalBuffer, addr 0x68caec8, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x68caf68, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x68caf18, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x68cafb8, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBufferImpl, addr 0x68c9290, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferImpl_Injected, addr 0x68c92e0, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalColor, addr 0x68cad7c, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x68cadbc, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68cb008, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68cb0d8, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68cb070, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68cb140, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl, addr 0x68c93b8, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0x68c9420, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x68c947c, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0x68c94e4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloat, addr 0x68cac10, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x68cac60, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x68cb368, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x68cb248, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x68ca59c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalFloatArray, addr 0x68cb38c, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x68cb2e0, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArrayImpl, addr 0x68c98f4, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0x68c99d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalFloatImpl, addr 0x68c8f64, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalGraphicsBufferImpl, addr 0x68c9324, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl_Injected, addr 0x68c9374, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalInt, addr 0x68cab84, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x68cabcc, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalIntImpl, addr 0x68c8f20, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x68cacac, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x68cacf4, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x68cadc0, size 0x64, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x68cae24, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x68cb618, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x68cb4f8, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x68ca714, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray, addr 0x68cb63c, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x68cb590, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArrayImpl, addr 0x68c9b54, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0x68c9c30, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalMatrixImpl, addr 0x68c9048, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixImpl_Injected, addr 0x68c908c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x68cb1a8, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x68cb1f8, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl, addr 0x68c9540, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl(int32_t name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl_Injected, addr 0x68c9590, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t name, ::System::IntPtr accelerationStructure);

  /// @brief Method SetGlobalRenderTextureImpl, addr 0x68c91a4, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalRenderTextureImpl_Injected, addr 0x68c923c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl_Injected(int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x68cae9c, size 0x28, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x68cae80, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x68caec4, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x68cae98, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl, addr 0x68c90d0, size 0x90, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl_Injected, addr 0x68c9160, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalVector, addr 0x68cad38, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x68cad78, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x68cb4c0, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x68cb3a0, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x68ca658, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArray, addr 0x68cb4e4, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x68cb438, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArrayImpl, addr 0x68c9a24, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0x68c9b00, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalVectorImpl, addr 0x68c8fb0, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorImpl_Injected, addr 0x68c9004, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetKeyword, addr 0x68c8004, size 0x54, virtual false, abstract: false, final false
  static inline void SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetKeywordFast, addr 0x68c7e68, size 0x50, virtual false, abstract: false, final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetKeywordFast_Injected, addr 0x68c7eb8, size 0x44, virtual false, abstract: false, final false
  static inline void SetKeywordFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method TagToID, addr 0x68c8240, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method TagToID_Injected, addr 0x68c836c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TagToID_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method WarmupAllShaders, addr 0x68c8218, size 0x28, virtual false, abstract: false, final false
  static inline void WarmupAllShaders();

  /// @brief Method .ctor, addr 0x68cbab0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disableBatching, addr 0x68c815c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method get_disableBatching_Injected, addr 0x68c81dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DisableBatchingType get_disableBatching_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledGlobalKeywords, addr 0x68c77c8, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords, addr 0x68c7818, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords();

  /// @brief Method get_globalMaximumLOD, addr 0x68c7448, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method get_globalRenderPipeline, addr 0x68c7568, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method get_globalRenderPipeline_Injected, addr 0x68c762c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_globalRenderPipeline_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_globalShaderHardwareTier, addr 0x68c6e50, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method get_isSupported, addr 0x68c74ac, size 0x80, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_isSupported_Injected, addr 0x68c752c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isSupported_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keywordSpace, addr 0x68c7868, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x68c7900, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_maximumChunksOverride, addr 0x68c7254, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method get_maximumLOD, addr 0x68c72b8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_maximumLOD();

  /// @brief Method get_maximumLOD_Injected, addr 0x68c7338, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maximumLOD_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_passCount, addr 0x68c87d0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x68c8850, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderQueue, addr 0x68c80a0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x68c8120, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_subshaderCount, addr 0x68c888c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subshaderCount();

  /// @brief Method get_subshaderCount_Injected, addr 0x68c890c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subshaderCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_globalMaximumLOD, addr 0x68c7470, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method set_globalRenderPipeline, addr 0x68c7668, size 0x124, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method set_globalRenderPipeline_Injected, addr 0x68c778c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_globalShaderHardwareTier, addr 0x68c6ebc, size 0x78, virtual false, abstract: false, final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method set_maximumChunksOverride, addr 0x68c727c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method set_maximumLOD, addr 0x68c7374, size 0x90, virtual false, abstract: false, final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method set_maximumLOD_Injected, addr 0x68c7404, size 0x44, virtual false, abstract: false, final false
  static inline void set_maximumLOD_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shader(Shader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shader(Shader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10138 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Shader, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
