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
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine {
class ComputeBuffer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10024))
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

  /// @brief Method get_globalShaderHardwareTier addr 0x2b530b0 size 0x68 virtual false final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method set_globalShaderHardwareTier addr 0x2b53118 size 0x74 virtual false final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method Find addr 0x2b5318c size 0x6c virtual false final false
  static inline ::UnityEngine::Shader* Find(::StringW name);

  /// @brief Method FindBuiltin addr 0x2b531f8 size 0x3c virtual false final false
  static inline ::UnityEngine::Shader* FindBuiltin(::StringW name);

  /// @brief Method get_maximumChunksOverride addr 0x2b53234 size 0x28 virtual false final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method set_maximumChunksOverride addr 0x2b5325c size 0x3c virtual false final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method get_maximumLOD addr 0x2b53298 size 0x3c virtual false final false
  inline int32_t get_maximumLOD();

  /// @brief Method set_maximumLOD addr 0x2b532d4 size 0x44 virtual false final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method get_globalMaximumLOD addr 0x2b53318 size 0x28 virtual false final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method set_globalMaximumLOD addr 0x2b53340 size 0x3c virtual false final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method get_isSupported addr 0x2b5337c size 0x3c virtual false final false
  inline bool get_isSupported();

  /// @brief Method get_globalRenderPipeline addr 0x2b533b8 size 0x28 virtual false final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method set_globalRenderPipeline addr 0x2b533e0 size 0x3c virtual false final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method get_enabledGlobalKeywords addr 0x2b5341c size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords addr 0x2b5346c size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords();

  /// @brief Method get_keywordSpace addr 0x2b534bc size 0x4c virtual false final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method GetEnabledGlobalKeywords addr 0x2b53444 size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords();

  /// @brief Method GetAllGlobalKeywords addr 0x2b53494 size 0x28 virtual false final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords();

  /// @brief Method EnableKeyword addr 0x2b5354c size 0x3c virtual false final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword addr 0x2b53588 size 0x3c virtual false final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method IsKeywordEnabled addr 0x2b535c4 size 0x3c virtual false final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method EnableKeywordFast addr 0x2b53600 size 0x40 virtual false final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast addr 0x2b5367c size 0x40 virtual false final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method SetKeywordFast addr 0x2b536f8 size 0x50 virtual false final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method IsKeywordEnabledFast addr 0x2b5378c size 0x44 virtual false final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeyword addr 0x2b5380c size 0xc virtual false final false
  static inline void EnableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword addr 0x2b53818 size 0xc virtual false final false
  static inline void DisableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetKeyword addr 0x2b53824 size 0x14 virtual false final false
  static inline void SetKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabled addr 0x2b53838 size 0xc virtual false final false
  static inline bool IsKeywordEnabled(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method get_renderQueue addr 0x2b53844 size 0x3c virtual false final false
  inline int32_t get_renderQueue();

  /// @brief Method get_disableBatching addr 0x2b53880 size 0x3c virtual false final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method WarmupAllShaders addr 0x2b538bc size 0x28 virtual false final false
  static inline void WarmupAllShaders();

  /// @brief Method TagToID addr 0x2b538e4 size 0x3c virtual false final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method IDToTag addr 0x2b53920 size 0x3c virtual false final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method PropertyToID addr 0x2b52728 size 0x3c virtual false final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method GetDependency addr 0x2b5395c size 0x44 virtual false final false
  inline ::UnityEngine::Shader* GetDependency(::StringW name);

  /// @brief Method get_passCount addr 0x2b539a0 size 0x3c virtual false final false
  inline int32_t get_passCount();

  /// @brief Method get_subshaderCount addr 0x2b539dc size 0x3c virtual false final false
  inline int32_t get_subshaderCount();

  /// @brief Method GetPassCountInSubshader addr 0x2b53a18 size 0x44 virtual false final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method FindPassTagValue addr 0x2b53a5c size 0x10c virtual false final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue addr 0x2b53bbc size 0x170 virtual false final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindSubshaderTagValue addr 0x2b53d88 size 0x10c virtual false final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method Internal_FindPassTagValue addr 0x2b53b68 size 0x54 virtual false final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader addr 0x2b53d2c size 0x5c virtual false final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue addr 0x2b53e94 size 0x54 virtual false final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method SetGlobalIntImpl addr 0x2b53ee8 size 0x44 virtual false final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalFloatImpl addr 0x2b53f2c size 0x4c virtual false final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalVectorImpl addr 0x2b53f78 size 0x54 virtual false final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalMatrixImpl addr 0x2b54010 size 0x44 virtual false final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalTextureImpl addr 0x2b54098 size 0x44 virtual false final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalRenderTextureImpl addr 0x2b540dc size 0x54 virtual false final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalBufferImpl addr 0x2b54130 size 0x44 virtual false final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl addr 0x2b54174 size 0x44 virtual false final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalConstantBufferImpl addr 0x2b541b8 size 0x5c virtual false final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl addr 0x2b54214 size 0x5c virtual false final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method GetGlobalIntImpl addr 0x2b54270 size 0x3c virtual false final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalFloatImpl addr 0x2b542ac size 0x3c virtual false final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl addr 0x2b542e8 size 0x58 virtual false final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl addr 0x2b54384 size 0x6c virtual false final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl addr 0x2b54434 size 0x3c virtual false final false
  static inline ::UnityEngine::Texture* GetGlobalTextureImpl(int32_t name);

  /// @brief Method SetGlobalFloatArrayImpl addr 0x2b54470 size 0x54 virtual false final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl addr 0x2b544c4 size 0x54 virtual false final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl addr 0x2b54518 size 0x54 virtual false final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method GetGlobalFloatArrayImpl addr 0x2b5456c size 0x3c virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl addr 0x2b545a8 size 0x3c virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl addr 0x2b545e4 size 0x3c virtual false final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayCountImpl addr 0x2b54620 size 0x3c virtual false final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayCountImpl addr 0x2b5465c size 0x3c virtual false final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayCountImpl addr 0x2b54698 size 0x3c virtual false final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method ExtractGlobalFloatArrayImpl addr 0x2b546d4 size 0x44 virtual false final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl addr 0x2b54718 size 0x44 virtual false final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl addr 0x2b5475c size 0x44 virtual false final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method SetGlobalFloatArray addr 0x2b547a0 size 0x110 virtual false final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetGlobalVectorArray addr 0x2b548b0 size 0x110 virtual false final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray addr 0x2b549c0 size 0x110 virtual false final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method ExtractGlobalFloatArray addr 0x2b54ad0 size 0x178 virtual false final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalVectorArray addr 0x2b54c48 size 0x178 virtual false final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalMatrixArray addr 0x2b54dc0 size 0x178 virtual false final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalInt addr 0x2b54f38 size 0x7c virtual false final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt addr 0x2b54fb4 size 0x4c virtual false final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalFloat addr 0x2b55000 size 0x78 virtual false final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat addr 0x2b55078 size 0x4c virtual false final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalInteger addr 0x2b550c4 size 0x70 virtual false final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger addr 0x2b55134 size 0x44 virtual false final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalVector addr 0x2b55178 size 0x70 virtual false final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector addr 0x2b551e8 size 0x4 virtual false final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalColor addr 0x2b551ec size 0x70 virtual false final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor addr 0x2b5525c size 0x4 virtual false final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalMatrix addr 0x2b55260 size 0x8c virtual false final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix addr 0x2b552ec size 0x5c virtual false final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalTexture addr 0x2b55348 size 0x70 virtual false final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture addr 0x2b553b8 size 0x44 virtual false final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture addr 0x2b553fc size 0x80 virtual false final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture addr 0x2b5547c size 0x54 virtual false final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalBuffer addr 0x2b554d0 size 0x70 virtual false final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer addr 0x2b55540 size 0x44 virtual false final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer addr 0x2b55584 size 0x70 virtual false final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer addr 0x2b555f4 size 0x44 virtual false final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalConstantBuffer addr 0x2b55638 size 0x88 virtual false final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer addr 0x2b556c0 size 0x5c virtual false final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer addr 0x2b5571c size 0x88 virtual false final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer addr 0x2b557a4 size 0x5c virtual false final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloatArray addr 0x2b55800 size 0xa4 virtual false final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray addr 0x2b558a4 size 0x78 virtual false final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray addr 0x2b5591c size 0x54 virtual false final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray addr 0x2b55970 size 0x18 virtual false final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalVectorArray addr 0x2b55988 size 0xa4 virtual false final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray addr 0x2b55a2c size 0x78 virtual false final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray addr 0x2b55aa4 size 0x54 virtual false final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray addr 0x2b55af8 size 0x18 virtual false final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalMatrixArray addr 0x2b55b10 size 0xa4 virtual false final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray addr 0x2b55bb4 size 0x78 virtual false final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray addr 0x2b55c2c size 0x54 virtual false final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray addr 0x2b55c80 size 0x18 virtual false final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method GetGlobalInt addr 0x2b55c98 size 0x84 virtual false final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt addr 0x2b55d1c size 0x58 virtual false final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalFloat addr 0x2b55d74 size 0x68 virtual false final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat addr 0x2b55ddc size 0x3c virtual false final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalInteger addr 0x2b55e18 size 0x68 virtual false final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger addr 0x2b55e80 size 0x3c virtual false final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalVector addr 0x2b55ebc size 0x40 virtual false final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector addr 0x2b55efc size 0x4 virtual false final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalColor addr 0x2b55f00 size 0x40 virtual false final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor addr 0x2b55f40 size 0x4 virtual false final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalMatrix addr 0x2b55f44 size 0xac virtual false final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix addr 0x2b55ff0 size 0x7c virtual false final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalTexture addr 0x2b5606c size 0x68 virtual false final false
  static inline ::UnityEngine::Texture* GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture addr 0x2b560d4 size 0x3c virtual false final false
  static inline ::UnityEngine::Texture* GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalFloatArray addr 0x2b56110 size 0x40 virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray addr 0x2b56150 size 0x78 virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray addr 0x2b561c8 size 0x40 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray addr 0x2b56208 size 0x78 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray addr 0x2b56280 size 0x40 virtual false final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray addr 0x2b562c0 size 0x78 virtual false final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray addr 0x2b56338 size 0x48 virtual false final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray addr 0x2b56380 size 0x4 virtual false final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalVectorArray addr 0x2b56384 size 0x48 virtual false final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray addr 0x2b563cc size 0x4 virtual false final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalMatrixArray addr 0x2b563d0 size 0x48 virtual false final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray addr 0x2b56418 size 0x4 virtual false final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method .ctor addr 0x2b5641c size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method GetPropertyName addr 0x2b56474 size 0x44 virtual false final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId addr 0x2b564b8 size 0x44 virtual false final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType addr 0x2b564fc size 0x44 virtual false final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription addr 0x2b56540 size 0x44 virtual false final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags addr 0x2b56584 size 0x44 virtual false final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes addr 0x2b565c8 size 0x44 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue addr 0x2b5660c size 0x44 virtual false final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue addr 0x2b56650 size 0x60 virtual false final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension addr 0x2b56704 size 0x44 virtual false final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName addr 0x2b56748 size 0x44 virtual false final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method FindTextureStackImpl addr 0x2b5678c size 0x5c virtual false final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method CheckPropertyIndex addr 0x2b567e8 size 0xa4 virtual false final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method GetPropertyCount addr 0x2b5688c size 0x3c virtual false final false
  inline int32_t GetPropertyCount();

  /// @brief Method FindPropertyIndex addr 0x2b568c8 size 0x44 virtual false final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method GetPropertyName addr 0x2b5690c size 0x48 virtual false final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId addr 0x2b56954 size 0x48 virtual false final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyType addr 0x2b5699c size 0x48 virtual false final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription addr 0x2b569e4 size 0x48 virtual false final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags addr 0x2b56a2c size 0x48 virtual false final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes addr 0x2b56a74 size 0x48 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultFloatValue addr 0x2b56abc size 0x8c virtual false final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultVectorValue addr 0x2b56b48 size 0x88 virtual false final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyRangeLimits addr 0x2b56bd0 size 0x94 virtual false final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension addr 0x2b56c64 size 0xa8 virtual false final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName addr 0x2b56d0c size 0xa8 virtual false final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method FindTextureStack addr 0x2b56db4 size 0xc0 virtual false final false
  inline bool FindTextureStack(int32_t propertyIndex, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex);

  /// @brief Method get_keywordSpace_Injected addr 0x2b53508 size 0x44 virtual false final false
  inline void get_keywordSpace_Injected(ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method EnableKeywordFast_Injected addr 0x2b53640 size 0x3c virtual false final false
  static inline void EnableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeywordFast_Injected addr 0x2b536bc size 0x3c virtual false final false
  static inline void DisableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetKeywordFast_Injected addr 0x2b53748 size 0x44 virtual false final false
  static inline void SetKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabledFast_Injected addr 0x2b537d0 size 0x3c virtual false final false
  static inline bool IsKeywordEnabledFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method SetGlobalVectorImpl_Injected addr 0x2b53fcc size 0x44 virtual false final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetGlobalMatrixImpl_Injected addr 0x2b54054 size 0x44 virtual false final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method GetGlobalVectorImpl_Injected addr 0x2b54340 size 0x44 virtual false final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetGlobalMatrixImpl_Injected addr 0x2b543f0 size 0x44 virtual false final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPropertyDefaultValue_Injected addr 0x2b566b0 size 0x54 virtual false final false
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
