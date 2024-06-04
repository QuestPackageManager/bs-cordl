#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
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
// Type: UnityEngine::Shader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Shader*
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_disableBatching))::UnityEngine::DisableBatchingType disableBatching;

  __declspec(property(get = get_isSupported)) bool isSupported;

  __declspec(property(get = get_keywordSpace))::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  __declspec(property(get = get_maximumLOD, put = set_maximumLOD)) int32_t maximumLOD;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_subshaderCount)) int32_t subshaderCount;

  /// @brief Method CheckPropertyIndex, addr 0x341f948, size 0xa4, virtual false, abstract: false, final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method DisableKeyword, addr 0x341c6e8, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x341c978, size 0xc, virtual false, abstract: false, final false
  static inline void DisableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeywordFast, addr 0x341c7dc, size 0x40, virtual false, abstract: false, final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast_Injected, addr 0x341c81c, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x341c6ac, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x341c96c, size 0xc, virtual false, abstract: false, final false
  static inline void EnableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeywordFast, addr 0x341c760, size 0x40, virtual false, abstract: false, final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeywordFast_Injected, addr 0x341c7a0, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method ExtractGlobalFloatArray, addr 0x341dc30, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalFloatArrayImpl, addr 0x341d834, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractGlobalMatrixArray, addr 0x341df20, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x341d8bc, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method ExtractGlobalVectorArray, addr 0x341dda8, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalVectorArrayImpl, addr 0x341d878, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method Find, addr 0x341c2ec, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> Find(::StringW name);

  /// @brief Method FindBuiltin, addr 0x341c358, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW name);

  /// @brief Method FindPassTagValue, addr 0x341cbbc, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue, addr 0x341cd1c, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPropertyIndex, addr 0x341fa28, size 0x44, virtual false, abstract: false, final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method FindSubshaderTagValue, addr 0x341cee8, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindTextureStack, addr 0x341ff14, size 0xc0, virtual false, abstract: false, final false
  inline bool FindTextureStack(int32_t propertyIndex, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl, addr 0x341f8ec, size 0x5c, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method GetAllGlobalKeywords, addr 0x341c5f4, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords();

  /// @brief Method GetDependency, addr 0x341cabc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW name);

  /// @brief Method GetEnabledGlobalKeywords, addr 0x341c5a4, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords();

  /// @brief Method GetGlobalColor, addr 0x341f060, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor, addr 0x341f0a0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalFloat, addr 0x341eed4, size 0x68, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat, addr 0x341ef3c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x341f270, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray, addr 0x341f2b0, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x341f498, size 0x48, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray, addr 0x341f4e0, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArrayCountImpl, addr 0x341d780, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl, addr 0x341d6cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatImpl, addr 0x341d40c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalInt, addr 0x341edf8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt, addr 0x341ee7c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalIntImpl, addr 0x341d3d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalInteger, addr 0x341ef78, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger, addr 0x341efe0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalMatrix, addr 0x341f0a4, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix, addr 0x341f150, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x341f3e0, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray, addr 0x341f420, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x341f530, size 0x48, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x341f578, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x341d7f8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl, addr 0x341d744, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl, addr 0x341d4e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl_Injected, addr 0x341d550, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetGlobalTexture, addr 0x341f1cc, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture, addr 0x341f234, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalTextureImpl, addr 0x341d594, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t name);

  /// @brief Method GetGlobalVector, addr 0x341f01c, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector, addr 0x341f05c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x341f328, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray, addr 0x341f368, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x341f4e4, size 0x48, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x341f52c, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArrayCountImpl, addr 0x341d7bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl, addr 0x341d708, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl, addr 0x341d448, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl_Injected, addr 0x341d4a0, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetPassCountInSubshader, addr 0x341cb78, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method GetPropertyAttributes, addr 0x341fbd4, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes, addr 0x341f728, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyCount, addr 0x341f9ec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyDefaultFloatValue, addr 0x341fc1c, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x341f76c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue, addr 0x341f7b0, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue_Injected, addr 0x341f810, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* shader, int32_t propertyIndex, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetPropertyDefaultVectorValue, addr 0x341fca8, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x341fb44, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x341f6a0, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x341fb8c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x341f6e4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x341fa6c, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x341f5d4, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x341fab4, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x341f618, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyRangeLimits, addr 0x341fd30, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x341fe6c, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x341f8a8, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x341fdc4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x341f864, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x341fafc, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x341f65c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method IDToTag, addr 0x341ca80, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method Internal_FindPassTagValue, addr 0x341ccc8, size 0x54, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader, addr 0x341ce8c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue, addr 0x341cff4, size 0x54, virtual false, abstract: false, final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method IsKeywordEnabled, addr 0x341c724, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x341c998, size 0xc, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabledFast, addr 0x341c8ec, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method IsKeywordEnabledFast_Injected, addr 0x341c930, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method PropertyToID, addr 0x341b888, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method SetGlobalBuffer, addr 0x341e630, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x341e6e4, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x341e6a0, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x341e754, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBufferImpl, addr 0x341d290, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalColor, addr 0x341e34c, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x341e3bc, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x341e798, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x341e87c, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x341e820, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x341e904, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl, addr 0x341d318, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x341d374, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloat, addr 0x341e160, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x341e1d8, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x341ea7c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x341e960, size 0xa4, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x341d900, size 0x110, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalFloatArray, addr 0x341ead0, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x341ea04, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArrayImpl, addr 0x341d5d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalFloatImpl, addr 0x341d08c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalGraphicsBufferImpl, addr 0x341d2d4, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalInt, addr 0x341e098, size 0x7c, virtual false, abstract: false, final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x341e114, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalIntImpl, addr 0x341d048, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x341e224, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x341e294, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x341e3c0, size 0x8c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x341e44c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x341ed8c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x341ec70, size 0xa4, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x341db20, size 0x110, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray, addr 0x341ede0, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x341ed14, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArrayImpl, addr 0x341d678, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixImpl, addr 0x341d170, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixImpl_Injected, addr 0x341d1b4, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalRenderTextureImpl, addr 0x341d23c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x341e55c, size 0x80, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x341e4a8, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x341e5dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x341e518, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl, addr 0x341d1f8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalVector, addr 0x341e2d8, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x341e348, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x341ec04, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x341eae8, size 0xa4, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x341da10, size 0x110, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArray, addr 0x341ec58, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x341eb8c, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArrayImpl, addr 0x341d624, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalVectorImpl, addr 0x341d0d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorImpl_Injected, addr 0x341d12c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetKeyword, addr 0x341c984, size 0x14, virtual false, abstract: false, final false
  static inline void SetKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetKeywordFast, addr 0x341c858, size 0x50, virtual false, abstract: false, final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetKeywordFast_Injected, addr 0x341c8a8, size 0x44, virtual false, abstract: false, final false
  static inline void SetKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method TagToID, addr 0x341ca44, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method WarmupAllShaders, addr 0x341ca1c, size 0x28, virtual false, abstract: false, final false
  static inline void WarmupAllShaders();

  /// @brief Method .ctor, addr 0x341f57c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disableBatching, addr 0x341c9e0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method get_enabledGlobalKeywords, addr 0x341c57c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords, addr 0x341c5cc, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords();

  /// @brief Method get_globalMaximumLOD, addr 0x341c478, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method get_globalRenderPipeline, addr 0x341c518, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method get_globalShaderHardwareTier, addr 0x341c210, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method get_isSupported, addr 0x341c4dc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_keywordSpace, addr 0x341c61c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x341c668, size 0x44, virtual false, abstract: false, final false
  inline void get_keywordSpace_Injected(ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_maximumChunksOverride, addr 0x341c394, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method get_maximumLOD, addr 0x341c3f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_maximumLOD();

  /// @brief Method get_passCount, addr 0x341cb00, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_renderQueue, addr 0x341c9a4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_subshaderCount, addr 0x341cb3c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subshaderCount();

  /// @brief Method set_globalMaximumLOD, addr 0x341c4a0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method set_globalRenderPipeline, addr 0x341c540, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method set_globalShaderHardwareTier, addr 0x341c278, size 0x74, virtual false, abstract: false, final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method set_maximumChunksOverride, addr 0x341c3bc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method set_maximumLOD, addr 0x341c434, size 0x44, virtual false, abstract: false, final false
  inline void set_maximumLOD(int32_t value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Shader, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
