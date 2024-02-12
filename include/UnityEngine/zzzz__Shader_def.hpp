#pragma once
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8944))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8829))
// CS Name: ::UnityEngine::Shader*
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_maximumLOD, put = set_maximumLOD)) int32_t maximumLOD;

  __declspec(property(get = get_isSupported)) bool isSupported;

  __declspec(property(get = get_keywordSpace))::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  __declspec(property(get = get_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_disableBatching))::UnityEngine::DisableBatchingType disableBatching;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_subshaderCount)) int32_t subshaderCount;

  /// @brief Method get_globalShaderHardwareTier, addr 0x2cbbd04, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method set_globalShaderHardwareTier, addr 0x2cbbd6c, size 0x74, virtual false, abstract: false, final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method Find, addr 0x2cbbde0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> Find(::StringW name);

  /// @brief Method FindBuiltin, addr 0x2cbbe4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW name);

  /// @brief Method get_maximumChunksOverride, addr 0x2cbbe88, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method set_maximumChunksOverride, addr 0x2cbbeb0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method get_maximumLOD, addr 0x2cbbeec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_maximumLOD();

  /// @brief Method set_maximumLOD, addr 0x2cbbf28, size 0x44, virtual false, abstract: false, final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method get_globalMaximumLOD, addr 0x2cbbf6c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method set_globalMaximumLOD, addr 0x2cbbf94, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method get_isSupported, addr 0x2cbbfd0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_globalRenderPipeline, addr 0x2cbc00c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method set_globalRenderPipeline, addr 0x2cbc034, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method get_enabledGlobalKeywords, addr 0x2cbc070, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords, addr 0x2cbc0c0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords();

  /// @brief Method get_keywordSpace, addr 0x2cbc110, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method GetEnabledGlobalKeywords, addr 0x2cbc098, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords();

  /// @brief Method GetAllGlobalKeywords, addr 0x2cbc0e8, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords();

  /// @brief Method EnableKeyword, addr 0x2cbc1a0, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x2cbc1dc, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x2cbc218, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method EnableKeywordFast, addr 0x2cbc254, size 0x40, virtual false, abstract: false, final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast, addr 0x2cbc2d0, size 0x40, virtual false, abstract: false, final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method SetKeywordFast, addr 0x2cbc34c, size 0x50, virtual false, abstract: false, final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method IsKeywordEnabledFast, addr 0x2cbc3e0, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeyword, addr 0x2cbc460, size 0xc, virtual false, abstract: false, final false
  static inline void EnableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x2cbc46c, size 0xc, virtual false, abstract: false, final false
  static inline void DisableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetKeyword, addr 0x2cbc478, size 0x14, virtual false, abstract: false, final false
  static inline void SetKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabled, addr 0x2cbc48c, size 0xc, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method get_renderQueue, addr 0x2cbc498, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_disableBatching, addr 0x2cbc4d4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method WarmupAllShaders, addr 0x2cbc510, size 0x28, virtual false, abstract: false, final false
  static inline void WarmupAllShaders();

  /// @brief Method TagToID, addr 0x2cbc538, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method IDToTag, addr 0x2cbc574, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method PropertyToID, addr 0x2cbb37c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method GetDependency, addr 0x2cbc5b0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW name);

  /// @brief Method get_passCount, addr 0x2cbc5f4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_subshaderCount, addr 0x2cbc630, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subshaderCount();

  /// @brief Method GetPassCountInSubshader, addr 0x2cbc66c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method FindPassTagValue, addr 0x2cbc6b0, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue, addr 0x2cbc810, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindSubshaderTagValue, addr 0x2cbc9dc, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method Internal_FindPassTagValue, addr 0x2cbc7bc, size 0x54, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader, addr 0x2cbc980, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue, addr 0x2cbcae8, size 0x54, virtual false, abstract: false, final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method SetGlobalIntImpl, addr 0x2cbcb3c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalFloatImpl, addr 0x2cbcb80, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalVectorImpl, addr 0x2cbcbcc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalMatrixImpl, addr 0x2cbcc64, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalTextureImpl, addr 0x2cbccec, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalRenderTextureImpl, addr 0x2cbcd30, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalBufferImpl, addr 0x2cbcd84, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl, addr 0x2cbcdc8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalConstantBufferImpl, addr 0x2cbce0c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x2cbce68, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method GetGlobalIntImpl, addr 0x2cbcec4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalFloatImpl, addr 0x2cbcf00, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl, addr 0x2cbcf3c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl, addr 0x2cbcfd8, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl, addr 0x2cbd088, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t name);

  /// @brief Method SetGlobalFloatArrayImpl, addr 0x2cbd0c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl, addr 0x2cbd118, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl, addr 0x2cbd16c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method GetGlobalFloatArrayImpl, addr 0x2cbd1c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl, addr 0x2cbd1fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl, addr 0x2cbd238, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayCountImpl, addr 0x2cbd274, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayCountImpl, addr 0x2cbd2b0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x2cbd2ec, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method ExtractGlobalFloatArrayImpl, addr 0x2cbd328, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl, addr 0x2cbd36c, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x2cbd3b0, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method SetGlobalFloatArray, addr 0x2cbd3f4, size 0x110, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArray, addr 0x2cbd504, size 0x110, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray, addr 0x2cbd614, size 0x110, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method ExtractGlobalFloatArray, addr 0x2cbd724, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalVectorArray, addr 0x2cbd89c, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalMatrixArray, addr 0x2cbda14, size 0x178, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalInt, addr 0x2cbdb8c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x2cbdc08, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalFloat, addr 0x2cbdc54, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x2cbdccc, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalInteger, addr 0x2cbdd18, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x2cbdd88, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalVector, addr 0x2cbddcc, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x2cbde3c, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalColor, addr 0x2cbde40, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x2cbdeb0, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalMatrix, addr 0x2cbdeb4, size 0x8c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x2cbdf40, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalTexture, addr 0x2cbdf9c, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x2cbe00c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x2cbe050, size 0x80, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x2cbe0d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalBuffer, addr 0x2cbe124, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x2cbe194, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x2cbe1d8, size 0x70, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x2cbe248, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x2cbe28c, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x2cbe314, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x2cbe370, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x2cbe3f8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloatArray, addr 0x2cbe454, size 0xa4, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x2cbe4f8, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x2cbe570, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x2cbe5c4, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x2cbe5dc, size 0xa4, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x2cbe680, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x2cbe6f8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x2cbe74c, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x2cbe764, size 0xa4, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x2cbe808, size 0x78, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x2cbe880, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x2cbe8d4, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method GetGlobalInt, addr 0x2cbe8ec, size 0x84, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt, addr 0x2cbe970, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalFloat, addr 0x2cbe9c8, size 0x68, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat, addr 0x2cbea30, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalInteger, addr 0x2cbea6c, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger, addr 0x2cbead4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalVector, addr 0x2cbeb10, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector, addr 0x2cbeb50, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalColor, addr 0x2cbeb54, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor, addr 0x2cbeb94, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalMatrix, addr 0x2cbeb98, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix, addr 0x2cbec44, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalTexture, addr 0x2cbecc0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture, addr 0x2cbed28, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x2cbed64, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray, addr 0x2cbeda4, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x2cbee1c, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray, addr 0x2cbee5c, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x2cbeed4, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray, addr 0x2cbef14, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x2cbef8c, size 0x48, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray, addr 0x2cbefd4, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x2cbefd8, size 0x48, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x2cbf020, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x2cbf024, size 0x48, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x2cbf06c, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method .ctor, addr 0x2cbf070, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetPropertyName, addr 0x2cbf0c8, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x2cbf10c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x2cbf150, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x2cbf194, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x2cbf1d8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes, addr 0x2cbf21c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x2cbf260, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue, addr 0x2cbf2a4, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x2cbf358, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x2cbf39c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method FindTextureStackImpl, addr 0x2cbf3e0, size 0x5c, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method CheckPropertyIndex, addr 0x2cbf43c, size 0xa4, virtual false, abstract: false, final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method GetPropertyCount, addr 0x2cbf4e0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method FindPropertyIndex, addr 0x2cbf51c, size 0x44, virtual false, abstract: false, final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method GetPropertyName, addr 0x2cbf560, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x2cbf5a8, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x2cbf5f0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x2cbf638, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x2cbf680, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes, addr 0x2cbf6c8, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultFloatValue, addr 0x2cbf710, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultVectorValue, addr 0x2cbf79c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyRangeLimits, addr 0x2cbf824, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x2cbf8b8, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x2cbf960, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method FindTextureStack, addr 0x2cbfa08, size 0xc0, virtual false, abstract: false, final false
  inline bool FindTextureStack(int32_t propertyIndex, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method get_keywordSpace_Injected, addr 0x2cbc15c, size 0x44, virtual false, abstract: false, final false
  inline void get_keywordSpace_Injected(ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method EnableKeywordFast_Injected, addr 0x2cbc294, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeywordFast_Injected, addr 0x2cbc310, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetKeywordFast_Injected, addr 0x2cbc39c, size 0x44, virtual false, abstract: false, final false
  static inline void SetKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabledFast_Injected, addr 0x2cbc424, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetGlobalVectorImpl_Injected, addr 0x2cbcc20, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetGlobalMatrixImpl_Injected, addr 0x2cbcca8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method GetGlobalVectorImpl_Injected, addr 0x2cbcf94, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetGlobalMatrixImpl_Injected, addr 0x2cbd044, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPropertyDefaultValue_Injected, addr 0x2cbf304, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* shader, int32_t propertyIndex, ByRef<::UnityEngine::Vector4> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shader(Shader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shader(Shader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Shader, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
