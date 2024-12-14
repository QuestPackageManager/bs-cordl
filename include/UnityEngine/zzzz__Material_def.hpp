#pragma once
// IWYU pragma private; include "UnityEngine/Material.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Material)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
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
class Shader;
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
class Material;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Material);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Material
class CORDL_TYPE Material : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_doubleSidedGI, put = set_doubleSidedGI)) bool doubleSidedGI;

  __declspec(property(get = get_enableInstancing, put = set_enableInstancing)) bool enableInstancing;

  __declspec(property(get = get_enabledKeywords, put = set_enabledKeywords)) ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> enabledKeywords;

  __declspec(property(get = get_globalIlluminationFlags, put = set_globalIlluminationFlags)) ::UnityEngine::MaterialGlobalIlluminationFlags globalIlluminationFlags;

  __declspec(property(get = get_mainTexture, put = set_mainTexture)) ::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_mainTextureOffset, put = set_mainTextureOffset)) ::UnityEngine::Vector2 mainTextureOffset;

  __declspec(property(get = get_mainTextureScale, put = set_mainTextureScale)) ::UnityEngine::Vector2 mainTextureScale;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_rawRenderQueue)) int32_t rawRenderQueue;

  __declspec(property(get = get_renderQueue, put = set_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_shader, put = set_shader)) ::UnityW<::UnityEngine::Shader> shader;

  __declspec(property(get = get_shaderKeywords, put = set_shaderKeywords)) ::ArrayW<::StringW, ::Array<::StringW>*> shaderKeywords;

  /// @brief Method ComputeCRC, addr 0x4880b7c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t ComputeCRC();

  /// @brief Method CopyMatchingPropertiesFromMaterial, addr 0x48809f4, size 0x44, virtual false, abstract: false, final false
  inline void CopyMatchingPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyPropertiesFromMaterial, addr 0x48809b0, size 0x44, virtual false, abstract: false, final false
  inline void CopyPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method Create, addr 0x487eaf0, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Create(::StringW scriptContents);

  /// @brief Method CreateWithMaterial, addr 0x487ec04, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithMaterial(::UnityEngine::Material* self, ::UnityEngine::Material* source);

  /// @brief Method CreateWithShader, addr 0x487ebc0, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithShader(::UnityEngine::Material* self, ::UnityEngine::Shader* shader);

  /// @brief Method CreateWithString, addr 0x487ec48, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateWithString(::UnityEngine::Material* self);

  /// @brief Method DisableKeyword, addr 0x4880274, size 0x5c, virtual false, abstract: false, final false
  inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x487ff50, size 0x44, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableLocalKeyword, addr 0x4880060, size 0x44, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x48800a4, size 0x44, virtual false, abstract: false, final false
  inline void DisableLocalKeyword_Injected(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x4880218, size 0x5c, virtual false, abstract: false, final false
  inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x487ff0c, size 0x44, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableLocalKeyword, addr 0x487ffd8, size 0x44, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x488001c, size 0x44, virtual false, abstract: false, final false
  inline void EnableLocalKeyword_Injected(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method ExtractColorArray, addr 0x48823d4, size 0x180, virtual false, abstract: false, final false
  inline void ExtractColorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method ExtractColorArrayImpl, addr 0x48819f0, size 0x54, virtual false, abstract: false, final false
  inline void ExtractColorArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> val);

  /// @brief Method ExtractFloatArray, addr 0x48820d4, size 0x180, virtual false, abstract: false, final false
  inline void ExtractFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractFloatArrayImpl, addr 0x4881948, size 0x54, virtual false, abstract: false, final false
  inline void ExtractFloatArrayImpl(int32_t name, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractMatrixArray, addr 0x4882554, size 0x180, virtual false, abstract: false, final false
  inline void ExtractMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractMatrixArrayImpl, addr 0x4881a44, size 0x54, virtual false, abstract: false, final false
  inline void ExtractMatrixArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method ExtractVectorArray, addr 0x4882254, size 0x180, virtual false, abstract: false, final false
  inline void ExtractVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractVectorArrayImpl, addr 0x488199c, size 0x54, virtual false, abstract: false, final false
  inline void ExtractVectorArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method FindPass, addr 0x488072c, size 0x44, virtual false, abstract: false, final false
  inline int32_t FindPass(::StringW passName);

  /// @brief Method GetBuffer, addr 0x48836e4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBuffer(::StringW name);

  /// @brief Method GetBufferImpl, addr 0x4881458, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBufferImpl(int32_t name);

  /// @brief Method GetBufferImpl_Injected, addr 0x48814b4, size 0x54, virtual false, abstract: false, final false
  inline void GetBufferImpl_Injected(int32_t name, ::ByRef<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetColor, addr 0x487ef6c, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW name);

  /// @brief Method GetColor, addr 0x487ef68, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x488385c, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArray(::StringW name);

  /// @brief Method GetColorArray, addr 0x4883880, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArray(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x4883a8c, size 0x34, virtual false, abstract: false, final false
  inline void GetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArray, addr 0x4883ac0, size 0x4, virtual false, abstract: false, final false
  inline void GetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArrayCountImpl, addr 0x48818c0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetColorArrayCountImpl(int32_t name);

  /// @brief Method GetColorArrayImpl, addr 0x48817b0, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArrayImpl(int32_t name);

  /// @brief Method GetColorImpl, addr 0x4881290, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetColorImpl_Injected, addr 0x48812f0, size 0x54, virtual false, abstract: false, final false
  inline void GetColorImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetConstantBuffer, addr 0x488374c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBuffer(::StringW name);

  /// @brief Method GetConstantBufferImpl, addr 0x4881508, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBufferImpl(int32_t name);

  /// @brief Method GetConstantBufferImpl_Injected, addr 0x4881564, size 0x54, virtual false, abstract: false, final false
  inline void GetConstantBufferImpl_Injected(int32_t name, ::ByRef<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetDefaultLineMaterial, addr 0x487edf4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultLineMaterial();

  /// @brief Method GetDefaultMaterial, addr 0x487eda4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial();

  /// @brief Method GetDefaultParticleMaterial, addr 0x487edcc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultParticleMaterial();

  /// @brief Method GetEnabledKeywords, addr 0x4880394, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords();

  /// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x487ef24, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFloat, addr 0x4883480, size 0x50, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat, addr 0x48834d0, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x48837b4, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray(::StringW name);

  /// @brief Method GetFloatArray, addr 0x48837d8, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x4883a54, size 0x34, virtual false, abstract: false, final false
  inline void GetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArray, addr 0x4883a88, size 0x4, virtual false, abstract: false, final false
  inline void GetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArrayCountImpl, addr 0x4881838, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetFloatArrayCountImpl(int32_t name);

  /// @brief Method GetFloatArrayImpl, addr 0x4881728, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArrayImpl(int32_t name);

  /// @brief Method GetFloatImpl, addr 0x488124c, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetInt, addr 0x48833b4, size 0x6c, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW name);

  /// @brief Method GetInt, addr 0x4883420, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetInt(int32_t nameID);

  /// @brief Method GetIntImpl, addr 0x4881208, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetIntImpl(int32_t name);

  /// @brief Method GetInteger, addr 0x4883514, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger, addr 0x4883564, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t nameID);

  /// @brief Method GetMatrix, addr 0x48835d0, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(::StringW name);

  /// @brief Method GetMatrix, addr 0x4883660, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x48839ac, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArray(::StringW name);

  /// @brief Method GetMatrixArray, addr 0x48839d0, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArray(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x4883afc, size 0x34, virtual false, abstract: false, final false
  inline void GetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArray, addr 0x4883b30, size 0x4, virtual false, abstract: false, final false
  inline void GetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArrayCountImpl, addr 0x4881904, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetMatrixArrayImpl, addr 0x48817f4, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArrayImpl(int32_t name);

  /// @brief Method GetMatrixImpl, addr 0x4881344, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetMatrixImpl_Injected, addr 0x48813c0, size 0x54, virtual false, abstract: false, final false
  inline void GetMatrixImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPassName, addr 0x48806e8, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetPassName(int32_t pass);

  /// @brief Method GetPropertyNames, addr 0x4883b34, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyNames(::UnityEngine::MaterialPropertyType type);

  /// @brief Method GetPropertyNamesImpl, addr 0x4880b38, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyNamesImpl(int32_t propertyType);

  /// @brief Method GetShaderKeywords, addr 0x4880a38, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetShaderKeywords();

  /// @brief Method GetShaderPassEnabled, addr 0x48806a4, size 0x44, virtual false, abstract: false, final false
  inline bool GetShaderPassEnabled(::StringW passName);

  /// @brief Method GetTag, addr 0x4880880, size 0x88, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks);

  /// @brief Method GetTag, addr 0x4880820, size 0x60, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue);

  /// @brief Method GetTagImpl, addr 0x48807c4, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue);

  /// @brief Method GetTexture, addr 0x487f194, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW name);

  /// @brief Method GetTexture, addr 0x487f150, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t nameID);

  /// @brief Method GetTextureImpl, addr 0x4881414, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t name);

  /// @brief Method GetTextureOffset, addr 0x487f40c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(::StringW name);

  /// @brief Method GetTextureOffset, addr 0x487f3f4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);

  /// @brief Method GetTexturePropertyNameIDs, addr 0x4880bf4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTexturePropertyNameIDs();

  /// @brief Method GetTexturePropertyNameIDs, addr 0x4880d48, size 0x90, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDs(::System::Collections::Generic::List_1<int32_t>* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal, addr 0x4880c74, size 0x44, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDsInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNames, addr 0x4880bb8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetTexturePropertyNames();

  /// @brief Method GetTexturePropertyNames, addr 0x4880cb8, size 0x90, virtual false, abstract: false, final false
  inline void GetTexturePropertyNames(::System::Collections::Generic::List_1<::StringW>* outNames);

  /// @brief Method GetTexturePropertyNamesInternal, addr 0x4880c30, size 0x44, virtual false, abstract: false, final false
  inline void GetTexturePropertyNamesInternal(::System::Object* outNames);

  /// @brief Method GetTextureScale, addr 0x487f5a8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(::StringW name);

  /// @brief Method GetTextureScale, addr 0x487f5a4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(int32_t nameID);

  /// @brief Method GetTextureScaleAndOffsetImpl, addr 0x4881a98, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);

  /// @brief Method GetTextureScaleAndOffsetImpl_Injected, addr 0x4881af8, size 0x54, virtual false, abstract: false, final false
  inline void GetTextureScaleAndOffsetImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetVector, addr 0x48835a8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(::StringW name);

  /// @brief Method GetVector, addr 0x48835cc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x4883904, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArray(::StringW name);

  /// @brief Method GetVectorArray, addr 0x4883928, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArray(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x4883ac4, size 0x34, virtual false, abstract: false, final false
  inline void GetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArray, addr 0x4883af8, size 0x4, virtual false, abstract: false, final false
  inline void GetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArrayCountImpl, addr 0x488187c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVectorArrayCountImpl(int32_t name);

  /// @brief Method GetVectorArrayImpl, addr 0x488176c, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArrayImpl(int32_t name);

  /// @brief Method HasBuffer, addr 0x487fce4, size 0x50, virtual false, abstract: false, final false
  inline bool HasBuffer(::StringW name);

  /// @brief Method HasBuffer, addr 0x487fd34, size 0x44, virtual false, abstract: false, final false
  inline bool HasBuffer(int32_t nameID);

  /// @brief Method HasBufferImpl, addr 0x487fca0, size 0x44, virtual false, abstract: false, final false
  inline bool HasBufferImpl(int32_t name);

  /// @brief Method HasColor, addr 0x487fc0c, size 0x50, virtual false, abstract: false, final false
  inline bool HasColor(::StringW name);

  /// @brief Method HasColor, addr 0x487fc5c, size 0x44, virtual false, abstract: false, final false
  inline bool HasColor(int32_t nameID);

  /// @brief Method HasConstantBuffer, addr 0x487fdbc, size 0x50, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(::StringW name);

  /// @brief Method HasConstantBuffer, addr 0x487fe0c, size 0x44, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(int32_t nameID);

  /// @brief Method HasConstantBufferImpl, addr 0x487fd78, size 0x44, virtual false, abstract: false, final false
  inline bool HasConstantBufferImpl(int32_t name);

  /// @brief Method HasFloat, addr 0x487f784, size 0x50, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// @brief Method HasFloat, addr 0x487f7d4, size 0x44, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasFloatImpl, addr 0x487f740, size 0x44, virtual false, abstract: false, final false
  inline bool HasFloatImpl(int32_t name);

  /// @brief Method HasInt, addr 0x487f818, size 0x50, virtual false, abstract: false, final false
  inline bool HasInt(::StringW name);

  /// @brief Method HasInt, addr 0x487f868, size 0x44, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasIntImpl, addr 0x487f8ac, size 0x44, virtual false, abstract: false, final false
  inline bool HasIntImpl(int32_t name);

  /// @brief Method HasInteger, addr 0x487f8f0, size 0x50, virtual false, abstract: false, final false
  inline bool HasInteger(::StringW name);

  /// @brief Method HasInteger, addr 0x487f940, size 0x44, virtual false, abstract: false, final false
  inline bool HasInteger(int32_t nameID);

  /// @brief Method HasMatrix, addr 0x487faa0, size 0x50, virtual false, abstract: false, final false
  inline bool HasMatrix(::StringW name);

  /// @brief Method HasMatrix, addr 0x487faf0, size 0x44, virtual false, abstract: false, final false
  inline bool HasMatrix(int32_t nameID);

  /// @brief Method HasMatrixImpl, addr 0x487fa5c, size 0x44, virtual false, abstract: false, final false
  inline bool HasMatrixImpl(int32_t name);

  /// @brief Method HasProperty, addr 0x487f6f0, size 0x50, virtual false, abstract: false, final false
  inline bool HasProperty(::StringW name);

  /// @brief Method HasProperty, addr 0x487f6ac, size 0x44, virtual false, abstract: false, final false
  inline bool HasProperty(int32_t nameID);

  /// @brief Method HasTexture, addr 0x487f9c8, size 0x50, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// @brief Method HasTexture, addr 0x487fa18, size 0x44, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// @brief Method HasTextureImpl, addr 0x487f984, size 0x44, virtual false, abstract: false, final false
  inline bool HasTextureImpl(int32_t name);

  /// @brief Method HasVector, addr 0x487fb78, size 0x50, virtual false, abstract: false, final false
  inline bool HasVector(::StringW name);

  /// @brief Method HasVector, addr 0x487fbc8, size 0x44, virtual false, abstract: false, final false
  inline bool HasVector(int32_t nameID);

  /// @brief Method HasVectorImpl, addr 0x487fb34, size 0x44, virtual false, abstract: false, final false
  inline bool HasVectorImpl(int32_t name);

  /// @brief Method IsKeywordEnabled, addr 0x4880334, size 0x60, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsKeywordEnabled, addr 0x487ff94, size 0x44, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsLocalKeywordEnabled, addr 0x4880190, size 0x44, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x48801d4, size 0x44, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled_Injected(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method Lerp, addr 0x4880908, size 0x64, virtual false, abstract: false, final false
  inline void Lerp(::UnityEngine::Material* start, ::UnityEngine::Material* end, float_t t);

  static inline ::UnityEngine::Material* New_ctor(::StringW contents);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material* source);

  /// @brief Method SetBuffer, addr 0x4882ae4, size 0x60, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x4882b98, size 0x60, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBuffer, addr 0x4882b44, size 0x54, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x4882bf8, size 0x54, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBufferImpl, addr 0x4881088, size 0x54, virtual false, abstract: false, final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetColor, addr 0x487f04c, size 0x54, virtual false, abstract: false, final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor, addr 0x487f048, size 0x4, virtual false, abstract: false, final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetColorArray, addr 0x488308c, size 0x40, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorArray, addr 0x4882f7c, size 0x90, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray, addr 0x4881ebc, size 0x10c, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values, int32_t count);

  /// @brief Method SetColorArray, addr 0x48830cc, size 0x18, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorArray, addr 0x488300c, size 0x80, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArrayImpl, addr 0x4881670, size 0x5c, virtual false, abstract: false, final false
  inline void SetColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values, int32_t count);

  /// @brief Method SetColorImpl, addr 0x4880e80, size 0x5c, virtual false, abstract: false, final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl_Injected, addr 0x4880edc, size 0x54, virtual false, abstract: false, final false
  inline void SetColorImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method SetConstantBuffer, addr 0x4882c4c, size 0x78, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x4882d30, size 0x78, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x4882cc4, size 0x6c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x4882da8, size 0x6c, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl, addr 0x4881130, size 0x6c, virtual false, abstract: false, final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl, addr 0x488119c, size 0x6c, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetEnabledKeywords, addr 0x48803d0, size 0x44, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> keywords);

  /// @brief Method SetFloat, addr 0x4882788, size 0x60, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x48827e8, size 0x54, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetFloatArray, addr 0x4882f24, size 0x40, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray, addr 0x4882e14, size 0x90, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray, addr 0x4881ca4, size 0x10c, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetFloatArray, addr 0x4882f64, size 0x18, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray, addr 0x4882ea4, size 0x80, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArrayImpl, addr 0x48815b8, size 0x5c, virtual false, abstract: false, final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetFloatImpl, addr 0x4880e2c, size 0x54, virtual false, abstract: false, final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGraphicsBufferImpl, addr 0x48810dc, size 0x54, virtual false, abstract: false, final false
  inline void SetGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetInt, addr 0x48826d4, size 0x60, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt, addr 0x4882734, size 0x54, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// @brief Method SetIntImpl, addr 0x4880dd8, size 0x54, virtual false, abstract: false, final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetInteger, addr 0x488283c, size 0x60, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger, addr 0x488289c, size 0x54, virtual false, abstract: false, final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetKeyword, addr 0x48802d0, size 0x64, virtual false, abstract: false, final false
  inline void SetKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLocalKeyword, addr 0x48800e8, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x488013c, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalKeyword_Injected(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x4882948, size 0x74, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix, addr 0x48829bc, size 0x64, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixArray, addr 0x488335c, size 0x40, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray, addr 0x488324c, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray, addr 0x4881fc8, size 0x10c, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetMatrixArray, addr 0x488339c, size 0x18, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray, addr 0x48832dc, size 0x80, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArrayImpl, addr 0x48816cc, size 0x5c, virtual false, abstract: false, final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetMatrixImpl, addr 0x4880f30, size 0x54, virtual false, abstract: false, final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixImpl_Injected, addr 0x4880f84, size 0x54, virtual false, abstract: false, final false
  inline void SetMatrixImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetOverrideTag, addr 0x4880770, size 0x54, virtual false, abstract: false, final false
  inline void SetOverrideTag(::StringW tag, ::StringW val);

  /// @brief Method SetPass, addr 0x488096c, size 0x44, virtual false, abstract: false, final false
  inline bool SetPass(int32_t pass);

  /// @brief Method SetRenderTextureImpl, addr 0x488102c, size 0x5c, virtual false, abstract: false, final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetShaderKeywords, addr 0x4880a74, size 0x44, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method SetShaderPassEnabled, addr 0x4880650, size 0x54, virtual false, abstract: false, final false
  inline void SetShaderPassEnabled(::StringW passName, bool enabled);

  /// @brief Method SetTexture, addr 0x4882a20, size 0x68, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x487f300, size 0x60, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture, addr 0x4882a88, size 0x5c, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x487f2ac, size 0x54, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl, addr 0x4880fd8, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureOffset, addr 0x487f4e0, size 0x3c, virtual false, abstract: false, final false
  inline void SetTextureOffset(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffset, addr 0x487f4dc, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureOffset(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffsetImpl, addr 0x4881b4c, size 0x58, virtual false, abstract: false, final false
  inline void SetTextureOffsetImpl(int32_t name, ::UnityEngine::Vector2 offset);

  /// @brief Method SetTextureOffsetImpl_Injected, addr 0x4881ba4, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureOffsetImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Vector2> offset);

  /// @brief Method SetTextureScale, addr 0x487f670, size 0x3c, virtual false, abstract: false, final false
  inline void SetTextureScale(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale, addr 0x487f66c, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureScale(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScaleImpl, addr 0x4881bf8, size 0x58, virtual false, abstract: false, final false
  inline void SetTextureScaleImpl(int32_t name, ::UnityEngine::Vector2 scale);

  /// @brief Method SetTextureScaleImpl_Injected, addr 0x4881c50, size 0x54, virtual false, abstract: false, final false
  inline void SetTextureScaleImpl_Injected(int32_t name, ::ByRef<::UnityEngine::Vector2> scale);

  /// @brief Method SetVector, addr 0x48828f0, size 0x54, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector, addr 0x4882944, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorArray, addr 0x48831f4, size 0x40, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray, addr 0x48830e4, size 0x90, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray, addr 0x4881db0, size 0x10c, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetVectorArray, addr 0x4883234, size 0x18, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray, addr 0x4883174, size 0x80, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArrayImpl, addr 0x4881614, size 0x5c, virtual false, abstract: false, final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method .ctor, addr 0x487eb40, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW contents);

  /// @brief Method .ctor, addr 0x487ec84, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader);

  /// @brief Method .ctor, addr 0x487ed14, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* source);

  /// @brief Method get_color, addr 0x487ee9c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_doubleSidedGI, addr 0x4880514, size 0x3c, virtual false, abstract: false, final false
  inline bool get_doubleSidedGI();

  /// @brief Method get_enableInstancing, addr 0x4880594, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enableInstancing();

  /// @brief Method get_enabledKeywords, addr 0x4880414, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> get_enabledKeywords();

  /// @brief Method get_globalIlluminationFlags, addr 0x4880494, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags();

  /// @brief Method get_mainTexture, addr 0x487f0a0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_mainTextureOffset, addr 0x487f360, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureOffset();

  /// @brief Method get_mainTextureScale, addr 0x487f51c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureScale();

  /// @brief Method get_passCount, addr 0x4880614, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_rawRenderQueue, addr 0x487fed0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_rawRenderQueue();

  /// @brief Method get_renderQueue, addr 0x487fe50, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_shader, addr 0x487ee1c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_shaderKeywords, addr 0x4880ab8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_shaderKeywords();

  /// @brief Method set_color, addr 0x487ef90, size 0xb8, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_doubleSidedGI, addr 0x4880550, size 0x44, virtual false, abstract: false, final false
  inline void set_doubleSidedGI(bool value);

  /// @brief Method set_enableInstancing, addr 0x48805d0, size 0x44, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_enabledKeywords, addr 0x4880450, size 0x44, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> value);

  /// @brief Method set_globalIlluminationFlags, addr 0x48804d0, size 0x44, virtual false, abstract: false, final false
  inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_mainTexture, addr 0x487f1e4, size 0xc8, virtual false, abstract: false, final false
  inline void set_mainTexture(::UnityEngine::Texture* value);

  /// @brief Method set_mainTextureOffset, addr 0x487f43c, size 0xa0, virtual false, abstract: false, final false
  inline void set_mainTextureOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_mainTextureScale, addr 0x487f5cc, size 0xa0, virtual false, abstract: false, final false
  inline void set_mainTextureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_renderQueue, addr 0x487fe8c, size 0x44, virtual false, abstract: false, final false
  inline void set_renderQueue(int32_t value);

  /// @brief Method set_shader, addr 0x487ee58, size 0x44, virtual false, abstract: false, final false
  inline void set_shader(::UnityEngine::Shader* value);

  /// @brief Method set_shaderKeywords, addr 0x4880af4, size 0x44, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Material();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Material(Material&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Material(Material const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Material, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Material);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Material*, "UnityEngine", "Material");
