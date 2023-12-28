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
CORDL_MODULE_EXPORT(Material)
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class Material;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Material);
// Type: UnityEngine::Material
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10097))
// CS Name: ::UnityEngine::Material*
class CORDL_TYPE Material : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_shader, put = set_shader))::UnityEngine::Shader* shader;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_mainTexture, put = set_mainTexture))::UnityEngine::Texture* mainTexture;

  __declspec(property(get = get_mainTextureOffset, put = set_mainTextureOffset))::UnityEngine::Vector2 mainTextureOffset;

  __declspec(property(get = get_mainTextureScale, put = set_mainTextureScale))::UnityEngine::Vector2 mainTextureScale;

  __declspec(property(get = get_renderQueue, put = set_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_rawRenderQueue)) int32_t rawRenderQueue;

  __declspec(property(get = get_enabledKeywords, put = set_enabledKeywords))::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> enabledKeywords;

  __declspec(property(get = get_globalIlluminationFlags, put = set_globalIlluminationFlags))::UnityEngine::MaterialGlobalIlluminationFlags globalIlluminationFlags;

  __declspec(property(get = get_doubleSidedGI, put = set_doubleSidedGI)) bool doubleSidedGI;

  __declspec(property(get = get_enableInstancing, put = set_enableInstancing)) bool enableInstancing;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_shaderKeywords, put = set_shaderKeywords))::ArrayW<::StringW, ::Array<::StringW>*> shaderKeywords;

  /// @brief Method Create addr 0x2cbc28c size 0x58 virtual false final false
  static inline ::UnityEngine::Material* Create(::StringW scriptContents);

  /// @brief Method CreateWithShader addr 0x2cbc364 size 0x44 virtual false final false
  static inline void CreateWithShader(::UnityEngine::Material* self, ::UnityEngine::Shader* shader);

  /// @brief Method CreateWithMaterial addr 0x2cbc3a8 size 0x44 virtual false final false
  static inline void CreateWithMaterial(::UnityEngine::Material* self, ::UnityEngine::Material* source);

  /// @brief Method CreateWithString addr 0x2cbc3ec size 0x3c virtual false final false
  static inline void CreateWithString(::UnityEngine::Material* self);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader* shader);

  /// @brief Method .ctor addr 0x2cbc428 size 0x90 virtual false final false
  inline void _ctor(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material* source);

  /// @brief Method .ctor addr 0x2cbc4b8 size 0x90 virtual false final false
  inline void _ctor(::UnityEngine::Material* source);

  static inline ::UnityEngine::Material* New_ctor(::StringW contents);

  /// @brief Method .ctor addr 0x2cbc2e4 size 0x80 virtual false final false
  inline void _ctor(::StringW contents);

  /// @brief Method GetDefaultMaterial addr 0x2cbc548 size 0x28 virtual false final false
  static inline ::UnityEngine::Material* GetDefaultMaterial();

  /// @brief Method GetDefaultParticleMaterial addr 0x2cbc570 size 0x28 virtual false final false
  static inline ::UnityEngine::Material* GetDefaultParticleMaterial();

  /// @brief Method GetDefaultLineMaterial addr 0x2cbc598 size 0x28 virtual false final false
  static inline ::UnityEngine::Material* GetDefaultLineMaterial();

  /// @brief Method get_shader addr 0x2cbc5c0 size 0x3c virtual false final false
  inline ::UnityEngine::Shader* get_shader();

  /// @brief Method set_shader addr 0x2cbc5fc size 0x44 virtual false final false
  inline void set_shader(::UnityEngine::Shader* value);

  /// @brief Method get_color addr 0x2cbc640 size 0x8c virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2cbc760 size 0xd4 virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_mainTexture addr 0x2cbc8b4 size 0xb0 virtual false final false
  inline ::UnityEngine::Texture* get_mainTexture();

  /// @brief Method set_mainTexture addr 0x2cbca18 size 0xc8 virtual false final false
  inline void set_mainTexture(::UnityEngine::Texture* value);

  /// @brief Method get_mainTextureOffset addr 0x2cbcbb4 size 0x94 virtual false final false
  inline ::UnityEngine::Vector2 get_mainTextureOffset();

  /// @brief Method set_mainTextureOffset addr 0x2cbccb8 size 0xb0 virtual false final false
  inline void set_mainTextureOffset(::UnityEngine::Vector2 value);

  /// @brief Method get_mainTextureScale addr 0x2cbcdd0 size 0x8c virtual false final false
  inline ::UnityEngine::Vector2 get_mainTextureScale();

  /// @brief Method set_mainTextureScale addr 0x2cbceac size 0xb0 virtual false final false
  inline void set_mainTextureScale(::UnityEngine::Vector2 value);

  /// @brief Method GetFirstPropertyNameIdByAttribute addr 0x2cbc6cc size 0x44 virtual false final false
  inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method HasProperty addr 0x2cbcfc4 size 0x44 virtual false final false
  inline bool HasProperty(int32_t nameID);

  /// @brief Method HasProperty addr 0x2cbd008 size 0x70 virtual false final false
  inline bool HasProperty(::StringW name);

  /// @brief Method HasFloatImpl addr 0x2cbd078 size 0x44 virtual false final false
  inline bool HasFloatImpl(int32_t name);

  /// @brief Method HasFloat addr 0x2cbd0bc size 0x70 virtual false final false
  inline bool HasFloat(::StringW name);

  /// @brief Method HasFloat addr 0x2cbd12c size 0x44 virtual false final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasInt addr 0x2cbd170 size 0x70 virtual false final false
  inline bool HasInt(::StringW name);

  /// @brief Method HasInt addr 0x2cbd1e0 size 0x44 virtual false final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasIntImpl addr 0x2cbd224 size 0x44 virtual false final false
  inline bool HasIntImpl(int32_t name);

  /// @brief Method HasInteger addr 0x2cbd268 size 0x70 virtual false final false
  inline bool HasInteger(::StringW name);

  /// @brief Method HasInteger addr 0x2cbd2d8 size 0x44 virtual false final false
  inline bool HasInteger(int32_t nameID);

  /// @brief Method HasTextureImpl addr 0x2cbd31c size 0x44 virtual false final false
  inline bool HasTextureImpl(int32_t name);

  /// @brief Method HasTexture addr 0x2cbd360 size 0x70 virtual false final false
  inline bool HasTexture(::StringW name);

  /// @brief Method HasTexture addr 0x2cbd3d0 size 0x44 virtual false final false
  inline bool HasTexture(int32_t nameID);

  /// @brief Method HasMatrixImpl addr 0x2cbd414 size 0x44 virtual false final false
  inline bool HasMatrixImpl(int32_t name);

  /// @brief Method HasMatrix addr 0x2cbd458 size 0x70 virtual false final false
  inline bool HasMatrix(::StringW name);

  /// @brief Method HasMatrix addr 0x2cbd4c8 size 0x44 virtual false final false
  inline bool HasMatrix(int32_t nameID);

  /// @brief Method HasVectorImpl addr 0x2cbd50c size 0x44 virtual false final false
  inline bool HasVectorImpl(int32_t name);

  /// @brief Method HasVector addr 0x2cbd550 size 0x70 virtual false final false
  inline bool HasVector(::StringW name);

  /// @brief Method HasVector addr 0x2cbd5c0 size 0x44 virtual false final false
  inline bool HasVector(int32_t nameID);

  /// @brief Method HasColor addr 0x2cbd604 size 0x70 virtual false final false
  inline bool HasColor(::StringW name);

  /// @brief Method HasColor addr 0x2cbd674 size 0x44 virtual false final false
  inline bool HasColor(int32_t nameID);

  /// @brief Method HasBufferImpl addr 0x2cbd6b8 size 0x44 virtual false final false
  inline bool HasBufferImpl(int32_t name);

  /// @brief Method HasBuffer addr 0x2cbd6fc size 0x70 virtual false final false
  inline bool HasBuffer(::StringW name);

  /// @brief Method HasBuffer addr 0x2cbd76c size 0x44 virtual false final false
  inline bool HasBuffer(int32_t nameID);

  /// @brief Method HasConstantBufferImpl addr 0x2cbd7b0 size 0x44 virtual false final false
  inline bool HasConstantBufferImpl(int32_t name);

  /// @brief Method HasConstantBuffer addr 0x2cbd7f4 size 0x70 virtual false final false
  inline bool HasConstantBuffer(::StringW name);

  /// @brief Method HasConstantBuffer addr 0x2cbd864 size 0x44 virtual false final false
  inline bool HasConstantBuffer(int32_t nameID);

  /// @brief Method get_renderQueue addr 0x2cbd8a8 size 0x3c virtual false final false
  inline int32_t get_renderQueue();

  /// @brief Method set_renderQueue addr 0x2cbd8e4 size 0x44 virtual false final false
  inline void set_renderQueue(int32_t value);

  /// @brief Method get_rawRenderQueue addr 0x2cbd928 size 0x3c virtual false final false
  inline int32_t get_rawRenderQueue();

  /// @brief Method EnableKeyword addr 0x2cbd964 size 0x44 virtual false final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword addr 0x2cbd9a8 size 0x44 virtual false final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method IsKeywordEnabled addr 0x2cbd9ec size 0x44 virtual false final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method EnableLocalKeyword addr 0x2cbda30 size 0x44 virtual false final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword addr 0x2cbdab8 size 0x44 virtual false final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method SetLocalKeyword addr 0x2cbdb40 size 0x54 virtual false final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method IsLocalKeywordEnabled addr 0x2cbdbe8 size 0x44 virtual false final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableKeyword addr 0x2cbdc70 size 0x5c virtual false final false
  inline void EnableKeyword(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword addr 0x2cbdccc size 0x5c virtual false final false
  inline void DisableKeyword(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method SetKeyword addr 0x2cbdd28 size 0x64 virtual false final false
  inline void SetKeyword(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method IsKeywordEnabled addr 0x2cbdd8c size 0x60 virtual false final false
  inline bool IsKeywordEnabled(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method GetEnabledKeywords addr 0x2cbddec size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords();

  /// @brief Method SetEnabledKeywords addr 0x2cbde28 size 0x44 virtual false final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> keywords);

  /// @brief Method get_enabledKeywords addr 0x2cbde6c size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> get_enabledKeywords();

  /// @brief Method set_enabledKeywords addr 0x2cbdea8 size 0x44 virtual false final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> value);

  /// @brief Method get_globalIlluminationFlags addr 0x2cbdeec size 0x3c virtual false final false
  inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags();

  /// @brief Method set_globalIlluminationFlags addr 0x2cbdf28 size 0x44 virtual false final false
  inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method get_doubleSidedGI addr 0x2cbdf6c size 0x3c virtual false final false
  inline bool get_doubleSidedGI();

  /// @brief Method set_doubleSidedGI addr 0x2cbdfa8 size 0x44 virtual false final false
  inline void set_doubleSidedGI(bool value);

  /// @brief Method get_enableInstancing addr 0x2cb5d6c size 0x3c virtual false final false
  inline bool get_enableInstancing();

  /// @brief Method set_enableInstancing addr 0x2cbdfec size 0x44 virtual false final false
  inline void set_enableInstancing(bool value);

  /// @brief Method get_passCount addr 0x2cbe030 size 0x3c virtual false final false
  inline int32_t get_passCount();

  /// @brief Method SetShaderPassEnabled addr 0x2cbe06c size 0x54 virtual false final false
  inline void SetShaderPassEnabled(::StringW passName, bool enabled);

  /// @brief Method GetShaderPassEnabled addr 0x2cbe0c0 size 0x44 virtual false final false
  inline bool GetShaderPassEnabled(::StringW passName);

  /// @brief Method GetPassName addr 0x2cbe104 size 0x44 virtual false final false
  inline ::StringW GetPassName(int32_t pass);

  /// @brief Method FindPass addr 0x2cbe148 size 0x44 virtual false final false
  inline int32_t FindPass(::StringW passName);

  /// @brief Method SetOverrideTag addr 0x2cbe18c size 0x54 virtual false final false
  inline void SetOverrideTag(::StringW tag, ::StringW val);

  /// @brief Method GetTagImpl addr 0x2cbe1e0 size 0x5c virtual false final false
  inline ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue);

  /// @brief Method GetTag addr 0x2cbe23c size 0x5c virtual false final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue);

  /// @brief Method GetTag addr 0x2cbe298 size 0x88 virtual false final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks);

  /// @brief Method Lerp addr 0x2cbe320 size 0x64 virtual false final false
  inline void Lerp(::UnityEngine::Material* start, ::UnityEngine::Material* end, float_t t);

  /// @brief Method SetPass addr 0x2cbe384 size 0x44 virtual false final false
  inline bool SetPass(int32_t pass);

  /// @brief Method CopyPropertiesFromMaterial addr 0x2cbe3c8 size 0x44 virtual false final false
  inline void CopyPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetShaderKeywords addr 0x2cbe40c size 0x3c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetShaderKeywords();

  /// @brief Method SetShaderKeywords addr 0x2cbe448 size 0x44 virtual false final false
  inline void SetShaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method get_shaderKeywords addr 0x2cbe48c size 0x3c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_shaderKeywords();

  /// @brief Method set_shaderKeywords addr 0x2cbe4c8 size 0x44 virtual false final false
  inline void set_shaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method ComputeCRC addr 0x2cbe50c size 0x3c virtual false final false
  inline int32_t ComputeCRC();

  /// @brief Method GetTexturePropertyNames addr 0x2cbe548 size 0x3c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetTexturePropertyNames();

  /// @brief Method GetTexturePropertyNameIDs addr 0x2cbe584 size 0x3c virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTexturePropertyNameIDs();

  /// @brief Method GetTexturePropertyNamesInternal addr 0x2cbe5c0 size 0x44 virtual false final false
  inline void GetTexturePropertyNamesInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal addr 0x2cbe604 size 0x44 virtual false final false
  inline void GetTexturePropertyNameIDsInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNames addr 0x2cbe648 size 0x94 virtual false final false
  inline void GetTexturePropertyNames(::System::Collections::Generic::List_1<::StringW>* outNames);

  /// @brief Method GetTexturePropertyNameIDs addr 0x2cbe6dc size 0x94 virtual false final false
  inline void GetTexturePropertyNameIDs(::System::Collections::Generic::List_1<int32_t>* outNames);

  /// @brief Method SetIntImpl addr 0x2cbe770 size 0x54 virtual false final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetFloatImpl addr 0x2cbe7c4 size 0x54 virtual false final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetColorImpl addr 0x2cbe818 size 0x5c virtual false final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetMatrixImpl addr 0x2cbe8c8 size 0x54 virtual false final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetTextureImpl addr 0x2cbe970 size 0x54 virtual false final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetRenderTextureImpl addr 0x2cbe9c4 size 0x5c virtual false final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetBufferImpl addr 0x2cbea20 size 0x54 virtual false final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGraphicsBufferImpl addr 0x2cbea74 size 0x54 virtual false final false
  inline void SetGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetConstantBufferImpl addr 0x2cbeac8 size 0x6c virtual false final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl addr 0x2cbeb34 size 0x6c virtual false final false
  inline void SetConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method GetIntImpl addr 0x2cbeba0 size 0x44 virtual false final false
  inline int32_t GetIntImpl(int32_t name);

  /// @brief Method GetFloatImpl addr 0x2cbebe4 size 0x44 virtual false final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetColorImpl addr 0x2cbec28 size 0x60 virtual false final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetMatrixImpl addr 0x2cbecdc size 0x7c virtual false final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetTextureImpl addr 0x2cbedac size 0x44 virtual false final false
  inline ::UnityEngine::Texture* GetTextureImpl(int32_t name);

  /// @brief Method SetFloatArrayImpl addr 0x2cbedf0 size 0x5c virtual false final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetVectorArrayImpl addr 0x2cbee4c size 0x5c virtual false final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetColorArrayImpl addr 0x2cbeea8 size 0x5c virtual false final false
  inline void SetColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl addr 0x2cbef04 size 0x5c virtual false final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method GetFloatArrayImpl addr 0x2cbef60 size 0x44 virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArrayImpl(int32_t name);

  /// @brief Method GetVectorArrayImpl addr 0x2cbefa4 size 0x44 virtual false final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArrayImpl(int32_t name);

  /// @brief Method GetColorArrayImpl addr 0x2cbefe8 size 0x44 virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArrayImpl(int32_t name);

  /// @brief Method GetMatrixArrayImpl addr 0x2cbf02c size 0x44 virtual false final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArrayImpl(int32_t name);

  /// @brief Method GetFloatArrayCountImpl addr 0x2cbf070 size 0x44 virtual false final false
  inline int32_t GetFloatArrayCountImpl(int32_t name);

  /// @brief Method GetVectorArrayCountImpl addr 0x2cbf0b4 size 0x44 virtual false final false
  inline int32_t GetVectorArrayCountImpl(int32_t name);

  /// @brief Method GetColorArrayCountImpl addr 0x2cbf0f8 size 0x44 virtual false final false
  inline int32_t GetColorArrayCountImpl(int32_t name);

  /// @brief Method GetMatrixArrayCountImpl addr 0x2cbf13c size 0x44 virtual false final false
  inline int32_t GetMatrixArrayCountImpl(int32_t name);

  /// @brief Method ExtractFloatArrayImpl addr 0x2cbf180 size 0x54 virtual false final false
  inline void ExtractFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractVectorArrayImpl addr 0x2cbf1d4 size 0x54 virtual false final false
  inline void ExtractVectorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method ExtractColorArrayImpl addr 0x2cbf228 size 0x54 virtual false final false
  inline void ExtractColorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> val);

  /// @brief Method ExtractMatrixArrayImpl addr 0x2cbf27c size 0x54 virtual false final false
  inline void ExtractMatrixArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method GetTextureScaleAndOffsetImpl addr 0x2cbf2d0 size 0x60 virtual false final false
  inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);

  /// @brief Method SetTextureOffsetImpl addr 0x2cbf384 size 0x58 virtual false final false
  inline void SetTextureOffsetImpl(int32_t name, ::UnityEngine::Vector2 offset);

  /// @brief Method SetTextureScaleImpl addr 0x2cbf430 size 0x58 virtual false final false
  inline void SetTextureScaleImpl(int32_t name, ::UnityEngine::Vector2 scale);

  /// @brief Method SetFloatArray addr 0x2cbf4dc size 0x118 virtual false final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetVectorArray addr 0x2cbf5f4 size 0x118 virtual false final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetColorArray addr 0x2cbf70c size 0x118 virtual false final false
  inline void SetColorArray(int32_t name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values, int32_t count);

  /// @brief Method SetMatrixArray addr 0x2cbf824 size 0x118 virtual false final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method ExtractFloatArray addr 0x2cbf93c size 0x184 virtual false final false
  inline void ExtractFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractVectorArray addr 0x2cbfac0 size 0x184 virtual false final false
  inline void ExtractVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractColorArray addr 0x2cbfc44 size 0x184 virtual false final false
  inline void ExtractColorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method ExtractMatrixArray addr 0x2cbfdc8 size 0x184 virtual false final false
  inline void ExtractMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetInt addr 0x2cbff4c size 0x8c virtual false final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt addr 0x2cbffd8 size 0x54 virtual false final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// @brief Method SetFloat addr 0x2cc002c size 0x80 virtual false final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat addr 0x2cc00ac size 0x54 virtual false final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetInteger addr 0x2cc0100 size 0x80 virtual false final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger addr 0x2cc0180 size 0x54 virtual false final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetColor addr 0x2cbc838 size 0x7c virtual false final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor addr 0x2cbc834 size 0x4 virtual false final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetVector addr 0x2cc01d4 size 0x7c virtual false final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector addr 0x2cc0250 size 0x4 virtual false final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetMatrix addr 0x2cc0254 size 0x9c virtual false final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix addr 0x2cc02f0 size 0x64 virtual false final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetTexture addr 0x2cbcb34 size 0x80 virtual false final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture addr 0x2cbcae0 size 0x54 virtual false final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture addr 0x2cc0354 size 0x88 virtual false final false
  inline void SetTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture addr 0x2cc03dc size 0x5c virtual false final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetBuffer addr 0x2cc0438 size 0x80 virtual false final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer addr 0x2cc04b8 size 0x54 virtual false final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer addr 0x2cc050c size 0x80 virtual false final false
  inline void SetBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBuffer addr 0x2cc058c size 0x54 virtual false final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetConstantBuffer addr 0x2cc05e0 size 0x98 virtual false final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer addr 0x2cc0678 size 0x6c virtual false final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer addr 0x2cc06e4 size 0x98 virtual false final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer addr 0x2cc077c size 0x6c virtual false final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetFloatArray addr 0x2cc07e8 size 0xac virtual false final false
  inline void SetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray addr 0x2cc0894 size 0x80 virtual false final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray addr 0x2cc0914 size 0x68 virtual false final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray addr 0x2cc097c size 0x18 virtual false final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetColorArray addr 0x2cc0994 size 0xac virtual false final false
  inline void SetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray addr 0x2cc0a40 size 0x80 virtual false final false
  inline void SetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray addr 0x2cc0ac0 size 0x68 virtual false final false
  inline void SetColorArray(::StringW name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorArray addr 0x2cc0b28 size 0x18 virtual false final false
  inline void SetColorArray(int32_t nameID, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetVectorArray addr 0x2cc0b40 size 0xac virtual false final false
  inline void SetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray addr 0x2cc0bec size 0x80 virtual false final false
  inline void SetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray addr 0x2cc0c6c size 0x68 virtual false final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray addr 0x2cc0cd4 size 0x18 virtual false final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetMatrixArray addr 0x2cc0cec size 0xac virtual false final false
  inline void SetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray addr 0x2cc0d98 size 0x80 virtual false final false
  inline void SetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray addr 0x2cc0e18 size 0x68 virtual false final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray addr 0x2cc0e80 size 0x18 virtual false final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method GetInt addr 0x2cc0e98 size 0x8c virtual false final false
  inline int32_t GetInt(::StringW name);

  /// @brief Method GetInt addr 0x2cc0f24 size 0x60 virtual false final false
  inline int32_t GetInt(int32_t nameID);

  /// @brief Method GetFloat addr 0x2cc0f84 size 0x70 virtual false final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat addr 0x2cc0ff4 size 0x44 virtual false final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetInteger addr 0x2cc1038 size 0x70 virtual false final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger addr 0x2cc10a8 size 0x44 virtual false final false
  inline int32_t GetInteger(int32_t nameID);

  /// @brief Method GetColor addr 0x2cbc714 size 0x4c virtual false final false
  inline ::UnityEngine::Color GetColor(::StringW name);

  /// @brief Method GetColor addr 0x2cbc710 size 0x4 virtual false final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetVector addr 0x2cc10ec size 0x4c virtual false final false
  inline ::UnityEngine::Vector4 GetVector(::StringW name);

  /// @brief Method GetVector addr 0x2cc1138 size 0x4 virtual false final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetMatrix addr 0x2cc113c size 0xbc virtual false final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(::StringW name);

  /// @brief Method GetMatrix addr 0x2cc11f8 size 0x8c virtual false final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetTexture addr 0x2cbc9a8 size 0x70 virtual false final false
  inline ::UnityEngine::Texture* GetTexture(::StringW name);

  /// @brief Method GetTexture addr 0x2cbc964 size 0x44 virtual false final false
  inline ::UnityEngine::Texture* GetTexture(int32_t nameID);

  /// @brief Method GetFloatArray addr 0x2cc1284 size 0x4c virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray(::StringW name);

  /// @brief Method GetFloatArray addr 0x2cc12d0 size 0x84 virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray(int32_t nameID);

  /// @brief Method GetColorArray addr 0x2cc1354 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArray(::StringW name);

  /// @brief Method GetColorArray addr 0x2cc13a0 size 0x84 virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArray(int32_t nameID);

  /// @brief Method GetVectorArray addr 0x2cc1424 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArray(::StringW name);

  /// @brief Method GetVectorArray addr 0x2cc1470 size 0x84 virtual false final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArray(int32_t nameID);

  /// @brief Method GetMatrixArray addr 0x2cc14f4 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArray(::StringW name);

  /// @brief Method GetMatrixArray addr 0x2cc1540 size 0x84 virtual false final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArray(int32_t nameID);

  /// @brief Method GetFloatArray addr 0x2cc15c4 size 0x5c virtual false final false
  inline void GetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArray addr 0x2cc1620 size 0x4 virtual false final false
  inline void GetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetColorArray addr 0x2cc1624 size 0x5c virtual false final false
  inline void GetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArray addr 0x2cc1680 size 0x4 virtual false final false
  inline void GetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetVectorArray addr 0x2cc1684 size 0x5c virtual false final false
  inline void GetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArray addr 0x2cc16e0 size 0x4 virtual false final false
  inline void GetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetMatrixArray addr 0x2cc16e4 size 0x5c virtual false final false
  inline void GetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArray addr 0x2cc1740 size 0x4 virtual false final false
  inline void GetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetTextureOffset addr 0x2cbcd6c size 0x64 virtual false final false
  inline void SetTextureOffset(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffset addr 0x2cbcd68 size 0x4 virtual false final false
  inline void SetTextureOffset(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale addr 0x2cbcf60 size 0x64 virtual false final false
  inline void SetTextureScale(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale addr 0x2cbcf5c size 0x4 virtual false final false
  inline void SetTextureScale(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method GetTextureOffset addr 0x2cbcc60 size 0x58 virtual false final false
  inline ::UnityEngine::Vector2 GetTextureOffset(::StringW name);

  /// @brief Method GetTextureOffset addr 0x2cbcc48 size 0x18 virtual false final false
  inline ::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);

  /// @brief Method GetTextureScale addr 0x2cbce60 size 0x4c virtual false final false
  inline ::UnityEngine::Vector2 GetTextureScale(::StringW name);

  /// @brief Method GetTextureScale addr 0x2cbce5c size 0x4 virtual false final false
  inline ::UnityEngine::Vector2 GetTextureScale(int32_t nameID);

  /// @brief Method EnableLocalKeyword_Injected addr 0x2cbda74 size 0x44 virtual false final false
  inline void EnableLocalKeyword_Injected(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableLocalKeyword_Injected addr 0x2cbdafc size 0x44 virtual false final false
  inline void DisableLocalKeyword_Injected(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method SetLocalKeyword_Injected addr 0x2cbdb94 size 0x54 virtual false final false
  inline void SetLocalKeyword_Injected(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method IsLocalKeywordEnabled_Injected addr 0x2cbdc2c size 0x44 virtual false final false
  inline bool IsLocalKeywordEnabled_Injected(ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method SetColorImpl_Injected addr 0x2cbe874 size 0x54 virtual false final false
  inline void SetColorImpl_Injected(int32_t name, ByRef<::UnityEngine::Color> value);

  /// @brief Method SetMatrixImpl_Injected addr 0x2cbe91c size 0x54 virtual false final false
  inline void SetMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method GetColorImpl_Injected addr 0x2cbec88 size 0x54 virtual false final false
  inline void GetColorImpl_Injected(int32_t name, ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetMatrixImpl_Injected addr 0x2cbed58 size 0x54 virtual false final false
  inline void GetMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetTextureScaleAndOffsetImpl_Injected addr 0x2cbf330 size 0x54 virtual false final false
  inline void GetTextureScaleAndOffsetImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method SetTextureOffsetImpl_Injected addr 0x2cbf3dc size 0x54 virtual false final false
  inline void SetTextureOffsetImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector2> offset);

  /// @brief Method SetTextureScaleImpl_Injected addr 0x2cbf488 size 0x54 virtual false final false
  inline void SetTextureScaleImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector2> scale);

  // Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Material(Material&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Material(Material const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Material();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Material, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Material);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Material*, "UnityEngine", "Material");
