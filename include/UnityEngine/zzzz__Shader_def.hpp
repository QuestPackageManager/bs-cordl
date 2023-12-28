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
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10096))
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

  /// @brief Method get_globalShaderHardwareTier addr 0x2cb84c8 size 0x68 virtual false final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method set_globalShaderHardwareTier addr 0x2cb8530 size 0x74 virtual false final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method Find addr 0x2cb85a4 size 0x6c virtual false final false
  static inline ::UnityEngine::Shader* Find(::StringW name);

  /// @brief Method FindBuiltin addr 0x2cb8610 size 0x3c virtual false final false
  static inline ::UnityEngine::Shader* FindBuiltin(::StringW name);

  /// @brief Method get_maximumChunksOverride addr 0x2cb864c size 0x28 virtual false final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method set_maximumChunksOverride addr 0x2cb8674 size 0x3c virtual false final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method get_maximumLOD addr 0x2cb86b0 size 0x3c virtual false final false
  inline int32_t get_maximumLOD();

  /// @brief Method set_maximumLOD addr 0x2cb86ec size 0x44 virtual false final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method get_globalMaximumLOD addr 0x2cb8730 size 0x28 virtual false final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method set_globalMaximumLOD addr 0x2cb8758 size 0x3c virtual false final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method get_isSupported addr 0x2cb8794 size 0x3c virtual false final false
  inline bool get_isSupported();

  /// @brief Method get_globalRenderPipeline addr 0x2cb87d0 size 0x28 virtual false final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method set_globalRenderPipeline addr 0x2cb87f8 size 0x3c virtual false final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method get_enabledGlobalKeywords addr 0x2cb8834 size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords addr 0x2cb8884 size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords();

  /// @brief Method get_keywordSpace addr 0x2cb88d4 size 0x4c virtual false final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method GetEnabledGlobalKeywords addr 0x2cb885c size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords();

  /// @brief Method GetAllGlobalKeywords addr 0x2cb88ac size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords();

  /// @brief Method EnableKeyword addr 0x2cb8964 size 0x3c virtual false final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword addr 0x2cb89a0 size 0x3c virtual false final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method IsKeywordEnabled addr 0x2cb89dc size 0x3c virtual false final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method EnableKeywordFast addr 0x2cb8a18 size 0x40 virtual false final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast addr 0x2cb8a94 size 0x40 virtual false final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method SetKeywordFast addr 0x2cb8b10 size 0x50 virtual false final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method IsKeywordEnabledFast addr 0x2cb8ba4 size 0x44 virtual false final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeyword addr 0x2cb8c24 size 0xc virtual false final false
  static inline void EnableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword addr 0x2cb8c30 size 0xc virtual false final false
  static inline void DisableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetKeyword addr 0x2cb8c3c size 0x14 virtual false final false
  static inline void SetKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabled addr 0x2cb8c50 size 0xc virtual false final false
  static inline bool IsKeywordEnabled(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method get_renderQueue addr 0x2cb8c5c size 0x3c virtual false final false
  inline int32_t get_renderQueue();

  /// @brief Method get_disableBatching addr 0x2cb8c98 size 0x3c virtual false final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method WarmupAllShaders addr 0x2cb8cd4 size 0x28 virtual false final false
  static inline void WarmupAllShaders();

  /// @brief Method TagToID addr 0x2cb8cfc size 0x3c virtual false final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method IDToTag addr 0x2cb8d38 size 0x3c virtual false final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method PropertyToID addr 0x2cb7b40 size 0x3c virtual false final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method GetDependency addr 0x2cb8d74 size 0x44 virtual false final false
  inline ::UnityEngine::Shader* GetDependency(::StringW name);

  /// @brief Method get_passCount addr 0x2cb8db8 size 0x3c virtual false final false
  inline int32_t get_passCount();

  /// @brief Method get_subshaderCount addr 0x2cb8df4 size 0x3c virtual false final false
  inline int32_t get_subshaderCount();

  /// @brief Method GetPassCountInSubshader addr 0x2cb8e30 size 0x44 virtual false final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method FindPassTagValue addr 0x2cb8e74 size 0x10c virtual false final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue addr 0x2cb8fd4 size 0x170 virtual false final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindSubshaderTagValue addr 0x2cb91a0 size 0x10c virtual false final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method Internal_FindPassTagValue addr 0x2cb8f80 size 0x54 virtual false final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader addr 0x2cb9144 size 0x5c virtual false final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue addr 0x2cb92ac size 0x54 virtual false final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method SetGlobalIntImpl addr 0x2cb9300 size 0x44 virtual false final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalFloatImpl addr 0x2cb9344 size 0x4c virtual false final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalVectorImpl addr 0x2cb9390 size 0x54 virtual false final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalMatrixImpl addr 0x2cb9428 size 0x44 virtual false final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalTextureImpl addr 0x2cb94b0 size 0x44 virtual false final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalRenderTextureImpl addr 0x2cb94f4 size 0x54 virtual false final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalBufferImpl addr 0x2cb9548 size 0x44 virtual false final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl addr 0x2cb958c size 0x44 virtual false final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalConstantBufferImpl addr 0x2cb95d0 size 0x5c virtual false final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl addr 0x2cb962c size 0x5c virtual false final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method GetGlobalIntImpl addr 0x2cb9688 size 0x3c virtual false final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalFloatImpl addr 0x2cb96c4 size 0x3c virtual false final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl addr 0x2cb9700 size 0x58 virtual false final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl addr 0x2cb979c size 0x6c virtual false final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl addr 0x2cb984c size 0x3c virtual false final false
  static inline ::UnityEngine::Texture* GetGlobalTextureImpl(int32_t name);

  /// @brief Method SetGlobalFloatArrayImpl addr 0x2cb9888 size 0x54 virtual false final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl addr 0x2cb98dc size 0x54 virtual false final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl addr 0x2cb9930 size 0x54 virtual false final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method GetGlobalFloatArrayImpl addr 0x2cb9984 size 0x3c virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl addr 0x2cb99c0 size 0x3c virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl addr 0x2cb99fc size 0x3c virtual false final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayCountImpl addr 0x2cb9a38 size 0x3c virtual false final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayCountImpl addr 0x2cb9a74 size 0x3c virtual false final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayCountImpl addr 0x2cb9ab0 size 0x3c virtual false final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method ExtractGlobalFloatArrayImpl addr 0x2cb9aec size 0x44 virtual false final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl addr 0x2cb9b30 size 0x44 virtual false final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl addr 0x2cb9b74 size 0x44 virtual false final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method SetGlobalFloatArray addr 0x2cb9bb8 size 0x110 virtual false final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArray addr 0x2cb9cc8 size 0x110 virtual false final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray addr 0x2cb9dd8 size 0x110 virtual false final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method ExtractGlobalFloatArray addr 0x2cb9ee8 size 0x178 virtual false final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalVectorArray addr 0x2cba060 size 0x178 virtual false final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalMatrixArray addr 0x2cba1d8 size 0x178 virtual false final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalInt addr 0x2cba350 size 0x7c virtual false final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt addr 0x2cba3cc size 0x4c virtual false final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalFloat addr 0x2cba418 size 0x78 virtual false final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat addr 0x2cba490 size 0x4c virtual false final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalInteger addr 0x2cba4dc size 0x70 virtual false final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger addr 0x2cba54c size 0x44 virtual false final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalVector addr 0x2cba590 size 0x70 virtual false final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector addr 0x2cba600 size 0x4 virtual false final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalColor addr 0x2cba604 size 0x70 virtual false final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor addr 0x2cba674 size 0x4 virtual false final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalMatrix addr 0x2cba678 size 0x8c virtual false final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix addr 0x2cba704 size 0x5c virtual false final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalTexture addr 0x2cba760 size 0x70 virtual false final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture addr 0x2cba7d0 size 0x44 virtual false final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture addr 0x2cba814 size 0x80 virtual false final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture addr 0x2cba894 size 0x54 virtual false final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalBuffer addr 0x2cba8e8 size 0x70 virtual false final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer addr 0x2cba958 size 0x44 virtual false final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer addr 0x2cba99c size 0x70 virtual false final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer addr 0x2cbaa0c size 0x44 virtual false final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalConstantBuffer addr 0x2cbaa50 size 0x88 virtual false final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer addr 0x2cbaad8 size 0x5c virtual false final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer addr 0x2cbab34 size 0x88 virtual false final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer addr 0x2cbabbc size 0x5c virtual false final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloatArray addr 0x2cbac18 size 0xa4 virtual false final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray addr 0x2cbacbc size 0x78 virtual false final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray addr 0x2cbad34 size 0x54 virtual false final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray addr 0x2cbad88 size 0x18 virtual false final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalVectorArray addr 0x2cbada0 size 0xa4 virtual false final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray addr 0x2cbae44 size 0x78 virtual false final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray addr 0x2cbaebc size 0x54 virtual false final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray addr 0x2cbaf10 size 0x18 virtual false final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalMatrixArray addr 0x2cbaf28 size 0xa4 virtual false final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray addr 0x2cbafcc size 0x78 virtual false final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray addr 0x2cbb044 size 0x54 virtual false final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray addr 0x2cbb098 size 0x18 virtual false final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method GetGlobalInt addr 0x2cbb0b0 size 0x84 virtual false final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt addr 0x2cbb134 size 0x58 virtual false final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalFloat addr 0x2cbb18c size 0x68 virtual false final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat addr 0x2cbb1f4 size 0x3c virtual false final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalInteger addr 0x2cbb230 size 0x68 virtual false final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger addr 0x2cbb298 size 0x3c virtual false final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalVector addr 0x2cbb2d4 size 0x40 virtual false final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector addr 0x2cbb314 size 0x4 virtual false final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalColor addr 0x2cbb318 size 0x40 virtual false final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor addr 0x2cbb358 size 0x4 virtual false final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalMatrix addr 0x2cbb35c size 0xac virtual false final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix addr 0x2cbb408 size 0x7c virtual false final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalTexture addr 0x2cbb484 size 0x68 virtual false final false
  static inline ::UnityEngine::Texture* GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture addr 0x2cbb4ec size 0x3c virtual false final false
  static inline ::UnityEngine::Texture* GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalFloatArray addr 0x2cbb528 size 0x40 virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray addr 0x2cbb568 size 0x78 virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray addr 0x2cbb5e0 size 0x40 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray addr 0x2cbb620 size 0x78 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray addr 0x2cbb698 size 0x40 virtual false final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray addr 0x2cbb6d8 size 0x78 virtual false final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray addr 0x2cbb750 size 0x48 virtual false final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray addr 0x2cbb798 size 0x4 virtual false final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalVectorArray addr 0x2cbb79c size 0x48 virtual false final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray addr 0x2cbb7e4 size 0x4 virtual false final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalMatrixArray addr 0x2cbb7e8 size 0x48 virtual false final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray addr 0x2cbb830 size 0x4 virtual false final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method .ctor addr 0x2cbb834 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method GetPropertyName addr 0x2cbb88c size 0x44 virtual false final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId addr 0x2cbb8d0 size 0x44 virtual false final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType addr 0x2cbb914 size 0x44 virtual false final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription addr 0x2cbb958 size 0x44 virtual false final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags addr 0x2cbb99c size 0x44 virtual false final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes addr 0x2cbb9e0 size 0x44 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue addr 0x2cbba24 size 0x44 virtual false final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue addr 0x2cbba68 size 0x60 virtual false final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension addr 0x2cbbb1c size 0x44 virtual false final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName addr 0x2cbbb60 size 0x44 virtual false final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method FindTextureStackImpl addr 0x2cbbba4 size 0x5c virtual false final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method CheckPropertyIndex addr 0x2cbbc00 size 0xa4 virtual false final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method GetPropertyCount addr 0x2cbbca4 size 0x3c virtual false final false
  inline int32_t GetPropertyCount();

  /// @brief Method FindPropertyIndex addr 0x2cbbce0 size 0x44 virtual false final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method GetPropertyName addr 0x2cbbd24 size 0x48 virtual false final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId addr 0x2cbbd6c size 0x48 virtual false final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyType addr 0x2cbbdb4 size 0x48 virtual false final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription addr 0x2cbbdfc size 0x48 virtual false final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags addr 0x2cbbe44 size 0x48 virtual false final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes addr 0x2cbbe8c size 0x48 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultFloatValue addr 0x2cbbed4 size 0x8c virtual false final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultVectorValue addr 0x2cbbf60 size 0x88 virtual false final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyRangeLimits addr 0x2cbbfe8 size 0x94 virtual false final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension addr 0x2cbc07c size 0xa8 virtual false final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName addr 0x2cbc124 size 0xa8 virtual false final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method FindTextureStack addr 0x2cbc1cc size 0xc0 virtual false final false
  inline bool FindTextureStack(int32_t propertyIndex, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method get_keywordSpace_Injected addr 0x2cb8920 size 0x44 virtual false final false
  inline void get_keywordSpace_Injected(ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method EnableKeywordFast_Injected addr 0x2cb8a58 size 0x3c virtual false final false
  static inline void EnableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeywordFast_Injected addr 0x2cb8ad4 size 0x3c virtual false final false
  static inline void DisableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetKeywordFast_Injected addr 0x2cb8b60 size 0x44 virtual false final false
  static inline void SetKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabledFast_Injected addr 0x2cb8be8 size 0x3c virtual false final false
  static inline bool IsKeywordEnabledFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetGlobalVectorImpl_Injected addr 0x2cb93e4 size 0x44 virtual false final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetGlobalMatrixImpl_Injected addr 0x2cb946c size 0x44 virtual false final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method GetGlobalVectorImpl_Injected addr 0x2cb9758 size 0x44 virtual false final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetGlobalMatrixImpl_Injected addr 0x2cb9808 size 0x44 virtual false final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPropertyDefaultValue_Injected addr 0x2cbbac8 size 0x54 virtual false final false
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
