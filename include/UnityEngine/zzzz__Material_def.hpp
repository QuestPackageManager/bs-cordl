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
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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

  /// @brief Field k_ColorId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ColorId, put = setStaticF_k_ColorId)) int32_t k_ColorId;

  /// @brief Field k_MainTexId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MainTexId, put = setStaticF_k_MainTexId)) int32_t k_MainTexId;

  __declspec(property(get = get_mainTexture, put = set_mainTexture)) ::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_mainTextureOffset, put = set_mainTextureOffset)) ::UnityEngine::Vector2 mainTextureOffset;

  __declspec(property(get = get_mainTextureScale, put = set_mainTextureScale)) ::UnityEngine::Vector2 mainTextureScale;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_rawRenderQueue)) int32_t rawRenderQueue;

  __declspec(property(get = get_renderQueue, put = set_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_shader, put = set_shader)) ::UnityW<::UnityEngine::Shader> shader;

  __declspec(property(get = get_shaderKeywords, put = set_shaderKeywords)) ::ArrayW<::StringW, ::Array<::StringW>*> shaderKeywords;

  /// @brief Method ComputeCRC, addr 0x6869958, size 0xa8, virtual false, abstract: false, final false
  inline int32_t ComputeCRC();

  /// @brief Method ComputeCRC_Injected, addr 0x6869a00, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ComputeCRC_Injected(::System::IntPtr _unity_self);

  /// @brief Method CopyMatchingPropertiesFromMaterial, addr 0x6869548, size 0xe8, virtual false, abstract: false, final false
  inline void CopyMatchingPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyMatchingPropertiesFromMaterial_Injected, addr 0x6869630, size 0x44, virtual false, abstract: false, final false
  static inline void CopyMatchingPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// @brief Method CopyPropertiesFromMaterial, addr 0x686941c, size 0xe8, virtual false, abstract: false, final false
  inline void CopyPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyPropertiesFromMaterial_Injected, addr 0x6869504, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// @brief Method Create, addr 0x6865520, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Create(::StringW scriptContents);

  /// @brief Method CreateWithMaterial, addr 0x6865734, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithMaterial(::UnityEngine::Material* self, ::UnityEngine::Material* source);

  /// @brief Method CreateWithMaterial_Injected, addr 0x6865810, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithMaterial_Injected(::UnityEngine::Material* self, ::System::IntPtr source);

  /// @brief Method CreateWithShader, addr 0x6865614, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithShader(::UnityEngine::Material* self, ::UnityEngine::Shader* shader);

  /// @brief Method CreateWithShader_Injected, addr 0x68656f0, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithShader_Injected(::UnityEngine::Material* self, ::System::IntPtr shader);

  /// @brief Method CreateWithString, addr 0x6865854, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateWithString(::UnityEngine::Material* self);

  /// @brief Method DisableKeyword, addr 0x6867bf0, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x6867404, size 0x190, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6867594, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method DisableLocalKeyword, addr 0x68678b8, size 0xb8, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6867970, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x6867bc4, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x6867230, size 0x190, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x68673c0, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableLocalKeyword, addr 0x68677bc, size 0xb8, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6867874, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method ExtractColorArray, addr 0x686d5d4, size 0x128, virtual false, abstract: false, final false
  inline void ExtractColorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method ExtractColorArrayImpl, addr 0x686c984, size 0x188, virtual false, abstract: false, final false
  inline void ExtractColorArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> val);

  /// @brief Method ExtractColorArrayImpl_Injected, addr 0x686cb0c, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractFloatArray, addr 0x686d384, size 0x128, virtual false, abstract: false, final false
  inline void ExtractFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractFloatArrayImpl, addr 0x686c5cc, size 0x188, virtual false, abstract: false, final false
  inline void ExtractFloatArrayImpl(int32_t name, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> val);

  /// @brief Method ExtractFloatArrayImpl_Injected, addr 0x686c754, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractMatrixArray, addr 0x686d6fc, size 0x128, virtual false, abstract: false, final false
  inline void ExtractMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractMatrixArrayImpl, addr 0x686cb60, size 0x188, virtual false, abstract: false, final false
  inline void ExtractMatrixArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val);

  /// @brief Method ExtractMatrixArrayImpl_Injected, addr 0x686cce8, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractVectorArray, addr 0x686d4ac, size 0x128, virtual false, abstract: false, final false
  inline void ExtractVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractVectorArrayImpl, addr 0x686c7a8, size 0x188, virtual false, abstract: false, final false
  inline void ExtractVectorArrayImpl(int32_t name, ::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val);

  /// @brief Method ExtractVectorArrayImpl_Injected, addr 0x686c930, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method FindPass, addr 0x68689cc, size 0x19c, virtual false, abstract: false, final false
  inline int32_t FindPass(::StringW passName);

  /// @brief Method FindPass_Injected, addr 0x6868b68, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetBuffer, addr 0x686e2d8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBuffer(::StringW name);

  /// @brief Method GetBufferImpl, addr 0x686b184, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBufferImpl(int32_t name);

  /// @brief Method GetBufferImpl_Injected, addr 0x686b24c, size 0x54, virtual false, abstract: false, final false
  static inline void GetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetColor, addr 0x686e1f8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW name);

  /// @brief Method GetColor, addr 0x68661ec, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x686e374, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArray(::StringW name);

  /// @brief Method GetColorArray, addr 0x686e394, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArray(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x686e4bc, size 0x30, virtual false, abstract: false, final false
  inline void GetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArray, addr 0x686e4ec, size 0x4, virtual false, abstract: false, final false
  inline void GetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArrayCountImpl, addr 0x686c3d4, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetColorArrayCountImpl(int32_t name);

  /// @brief Method GetColorArrayCountImpl_Injected, addr 0x686c48c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetColorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetColorArrayImpl, addr 0x686be0c, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetColorArrayImpl(int32_t name);

  /// @brief Method GetColorArrayImpl_Injected, addr 0x686bfa0, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetColorImpl, addr 0x686ad5c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetColorImpl_Injected, addr 0x686ae30, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetConstantBuffer, addr 0x686e2f8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBuffer(::StringW name);

  /// @brief Method GetConstantBufferImpl, addr 0x686b2a0, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBufferImpl(int32_t name);

  /// @brief Method GetConstantBufferImpl_Injected, addr 0x686b368, size 0x54, virtual false, abstract: false, final false
  static inline void GetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetDefaultLineMaterial, addr 0x6865c78, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultLineMaterial();

  /// @brief Method GetDefaultLineMaterial_Injected, addr 0x6865db4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultLineMaterial_Injected();

  /// @brief Method GetDefaultMaterial, addr 0x68659b0, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial();

  /// @brief Method GetDefaultMaterial_Injected, addr 0x6865aec, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultMaterial_Injected();

  /// @brief Method GetDefaultParticleMaterial, addr 0x6865b14, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultParticleMaterial();

  /// @brief Method GetDefaultParticleMaterial_Injected, addr 0x6865c50, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultParticleMaterial_Injected();

  /// @brief Method GetEnabledKeywords, addr 0x6867c78, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6867d20, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x6866134, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFirstPropertyNameIdByAttribute_Injected, addr 0x68665e4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFirstPropertyNameIdByAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFloat, addr 0x686e1b0, size 0x20, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat, addr 0x686e1d0, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x686e318, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray(::StringW name);

  /// @brief Method GetFloatArray, addr 0x686e338, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x686e488, size 0x30, virtual false, abstract: false, final false
  inline void GetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArray, addr 0x686e4b8, size 0x4, virtual false, abstract: false, final false
  inline void GetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArrayCountImpl, addr 0x686c1dc, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFloatArrayCountImpl(int32_t name);

  /// @brief Method GetFloatArrayCountImpl_Injected, addr 0x686c294, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFloatArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetFloatArrayImpl, addr 0x686ba3c, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArrayImpl(int32_t name);

  /// @brief Method GetFloatArrayImpl_Injected, addr 0x686bbd0, size 0x54, virtual false, abstract: false, final false
  static inline void GetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetFloatImpl, addr 0x686ac60, size 0xb8, virtual false, abstract: false, final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetFloatImpl_Injected, addr 0x686ad18, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInt, addr 0x686e14c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW name);

  /// @brief Method GetInt, addr 0x686e188, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetInt(int32_t nameID);

  /// @brief Method GetIntImpl, addr 0x686ab64, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetIntImpl(int32_t name);

  /// @brief Method GetIntImpl_Injected, addr 0x686ac1c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInteger, addr 0x686e1d4, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger, addr 0x686e1f4, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t nameID);

  /// @brief Method GetMatrix, addr 0x686e23c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(::StringW name);

  /// @brief Method GetMatrix, addr 0x686e288, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x686e42c, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArray(::StringW name);

  /// @brief Method GetMatrixArray, addr 0x686e44c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArray(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x686e524, size 0x30, virtual false, abstract: false, final false
  inline void GetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArray, addr 0x686e554, size 0x4, virtual false, abstract: false, final false
  inline void GetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArrayCountImpl, addr 0x686c4d0, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetMatrixArrayCountImpl_Injected, addr 0x686c588, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMatrixArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetMatrixArrayImpl, addr 0x686bff4, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetMatrixArrayImpl(int32_t name);

  /// @brief Method GetMatrixArrayImpl_Injected, addr 0x686c188, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetMatrixImpl, addr 0x686ae84, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetMatrixImpl_Injected, addr 0x686af6c, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPassName, addr 0x6868810, size 0x168, virtual false, abstract: false, final false
  inline ::StringW GetPassName(int32_t pass);

  /// @brief Method GetPassName_Injected, addr 0x6868978, size 0x54, virtual false, abstract: false, final false
  static inline void GetPassName_Injected(::System::IntPtr _unity_self, int32_t pass, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyNames, addr 0x686e614, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyNames(::UnityEngine::MaterialPropertyType type);

  /// @brief Method GetPropertyNamesImpl, addr 0x686985c, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyNamesImpl(int32_t propertyType);

  /// @brief Method GetPropertyNamesImpl_Injected, addr 0x6869914, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPropertyNamesImpl_Injected(::System::IntPtr _unity_self, int32_t propertyType);

  /// @brief Method GetShaderKeywords, addr 0x6869674, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x686971c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetShaderPassEnabled, addr 0x686862c, size 0x1a0, virtual false, abstract: false, final false
  inline bool GetShaderPassEnabled(::StringW passName);

  /// @brief Method GetShaderPassEnabled_Injected, addr 0x68687cc, size 0x44, virtual false, abstract: false, final false
  static inline bool GetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetTag, addr 0x686913c, size 0x68, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks);

  /// @brief Method GetTag, addr 0x6869130, size 0xc, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue);

  /// @brief Method GetTagImpl, addr 0x6868e10, size 0x2b4, virtual false, abstract: false, final false
  inline ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue);

  /// @brief Method GetTagImpl_Injected, addr 0x68690c4, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTagImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> tag, bool currentSubShaderOnly,
                                         ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> defaultValue, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetTexture, addr 0x686e2b8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW name);

  /// @brief Method GetTexture, addr 0x6866314, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t nameID);

  /// @brief Method GetTextureImpl, addr 0x686afc0, size 0x180, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t name);

  /// @brief Method GetTextureImpl_Injected, addr 0x686b140, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetTextureOffset, addr 0x686e5c8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(::StringW name);

  /// @brief Method GetTextureOffset, addr 0x6866428, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);

  /// @brief Method GetTexturePropertyNameIDs, addr 0x6869b20, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTexturePropertyNameIDs();

  /// @brief Method GetTexturePropertyNameIDs, addr 0x6869f38, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDs(::System::Collections::Generic::List_1<int32_t>* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal, addr 0x6869de8, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDsInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal_Injected, addr 0x6869ea0, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDs_Injected, addr 0x6869ca8, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDs_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetTexturePropertyNames, addr 0x6869a3c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetTexturePropertyNames();

  /// @brief Method GetTexturePropertyNames, addr 0x6869ee4, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNames(::System::Collections::Generic::List_1<::StringW>* outNames);

  /// @brief Method GetTexturePropertyNamesInternal, addr 0x6869cec, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNamesInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNamesInternal_Injected, addr 0x6869da4, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNamesInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNames_Injected, addr 0x6869ae4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetTexturePropertyNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTextureScale, addr 0x686e5f4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(::StringW name);

  /// @brief Method GetTextureScale, addr 0x686654c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(int32_t nameID);

  /// @brief Method GetTextureScaleAndOffsetImpl, addr 0x686cd3c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);

  /// @brief Method GetTextureScaleAndOffsetImpl_Injected, addr 0x686ce10, size 0x54, virtual false, abstract: false, final false
  static inline void GetTextureScaleAndOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetVector, addr 0x686e218, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(::StringW name);

  /// @brief Method GetVector, addr 0x686e238, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x686e3d0, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArray(::StringW name);

  /// @brief Method GetVectorArray, addr 0x686e3f0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArray(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x686e4f0, size 0x30, virtual false, abstract: false, final false
  inline void GetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArray, addr 0x686e520, size 0x4, virtual false, abstract: false, final false
  inline void GetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArrayCountImpl, addr 0x686c2d8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetVectorArrayCountImpl(int32_t name);

  /// @brief Method GetVectorArrayCountImpl_Injected, addr 0x686c390, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVectorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetVectorArrayImpl, addr 0x686bc24, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetVectorArrayImpl(int32_t name);

  /// @brief Method GetVectorArrayImpl_Injected, addr 0x686bdb8, size 0x54, virtual false, abstract: false, final false
  static inline void GetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method HasBuffer, addr 0x6866e28, size 0x20, virtual false, abstract: false, final false
  inline bool HasBuffer(::StringW name);

  /// @brief Method HasBuffer, addr 0x6866e48, size 0x4, virtual false, abstract: false, final false
  inline bool HasBuffer(int32_t nameID);

  /// @brief Method HasBufferImpl, addr 0x6866d2c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasBufferImpl(int32_t name);

  /// @brief Method HasBufferImpl_Injected, addr 0x6866de4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasColor, addr 0x6866d08, size 0x20, virtual false, abstract: false, final false
  inline bool HasColor(::StringW name);

  /// @brief Method HasColor, addr 0x6866d28, size 0x4, virtual false, abstract: false, final false
  inline bool HasColor(int32_t nameID);

  /// @brief Method HasConstantBuffer, addr 0x6866f48, size 0x20, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(::StringW name);

  /// @brief Method HasConstantBuffer, addr 0x6866f68, size 0x4, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(int32_t nameID);

  /// @brief Method HasConstantBufferImpl, addr 0x6866e4c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasConstantBufferImpl(int32_t name);

  /// @brief Method HasConstantBufferImpl_Injected, addr 0x6866f04, size 0x44, virtual false, abstract: false, final false
  static inline bool HasConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasFloat, addr 0x6866840, size 0x20, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// @brief Method HasFloat, addr 0x6866860, size 0x4, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasFloatImpl, addr 0x6866744, size 0xb8, virtual false, abstract: false, final false
  inline bool HasFloatImpl(int32_t name);

  /// @brief Method HasFloatImpl_Injected, addr 0x68667fc, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInt, addr 0x6866864, size 0x20, virtual false, abstract: false, final false
  inline bool HasInt(::StringW name);

  /// @brief Method HasInt, addr 0x6866884, size 0x4, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasIntImpl, addr 0x6866888, size 0xb8, virtual false, abstract: false, final false
  inline bool HasIntImpl(int32_t name);

  /// @brief Method HasIntImpl_Injected, addr 0x6866940, size 0x44, virtual false, abstract: false, final false
  static inline bool HasIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInteger, addr 0x6866984, size 0x20, virtual false, abstract: false, final false
  inline bool HasInteger(::StringW name);

  /// @brief Method HasInteger, addr 0x68669a4, size 0x4, virtual false, abstract: false, final false
  inline bool HasInteger(int32_t nameID);

  /// @brief Method HasMatrix, addr 0x6866bc4, size 0x20, virtual false, abstract: false, final false
  inline bool HasMatrix(::StringW name);

  /// @brief Method HasMatrix, addr 0x6866be4, size 0x4, virtual false, abstract: false, final false
  inline bool HasMatrix(int32_t nameID);

  /// @brief Method HasMatrixImpl, addr 0x6866ac8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasMatrixImpl(int32_t name);

  /// @brief Method HasMatrixImpl_Injected, addr 0x6866b80, size 0x44, virtual false, abstract: false, final false
  static inline bool HasMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasProperty, addr 0x6866724, size 0x20, virtual false, abstract: false, final false
  inline bool HasProperty(::StringW name);

  /// @brief Method HasProperty, addr 0x6866628, size 0xb8, virtual false, abstract: false, final false
  inline bool HasProperty(int32_t nameID);

  /// @brief Method HasProperty_Injected, addr 0x68666e0, size 0x44, virtual false, abstract: false, final false
  static inline bool HasProperty_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasTexture, addr 0x6866aa4, size 0x20, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// @brief Method HasTexture, addr 0x6866ac4, size 0x4, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// @brief Method HasTextureImpl, addr 0x68669a8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasTextureImpl(int32_t name);

  /// @brief Method HasTextureImpl_Injected, addr 0x6866a60, size 0x44, virtual false, abstract: false, final false
  static inline bool HasTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasVector, addr 0x6866ce4, size 0x20, virtual false, abstract: false, final false
  inline bool HasVector(::StringW name);

  /// @brief Method HasVector, addr 0x6866d04, size 0x4, virtual false, abstract: false, final false
  inline bool HasVector(int32_t nameID);

  /// @brief Method HasVectorImpl, addr 0x6866be8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasVectorImpl(int32_t name);

  /// @brief Method HasVectorImpl_Injected, addr 0x6866ca0, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVectorImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method IsKeywordEnabled, addr 0x6867c48, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsKeywordEnabled, addr 0x68675d8, size 0x1a0, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6867778, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method IsLocalKeywordEnabled, addr 0x6867ac8, size 0xb8, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6867b80, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method Lerp, addr 0x68691a4, size 0x118, virtual false, abstract: false, final false
  inline void Lerp(::UnityEngine::Material* start, ::UnityEngine::Material* end, float_t t);

  /// @brief Method Lerp_Injected, addr 0x68692bc, size 0x64, virtual false, abstract: false, final false
  static inline void Lerp_Injected(::System::IntPtr _unity_self, ::System::IntPtr start, ::System::IntPtr end, float_t t);

  static inline ::UnityEngine::Material* New_ctor(::StringW contents);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material* source);

  /// @brief Method SetBuffer, addr 0x686da4c, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x686da80, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBuffer, addr 0x686da7c, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x686dab0, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBufferImpl, addr 0x686a694, size 0xc8, virtual false, abstract: false, final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBufferImpl_Injected, addr 0x686a75c, size 0x54, virtual false, abstract: false, final false
  static inline void SetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetColor, addr 0x686d8c4, size 0x50, virtual false, abstract: false, final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor, addr 0x6866298, size 0x4, virtual false, abstract: false, final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetColorArray, addr 0x686ddfc, size 0x3c, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorArray, addr 0x686dccc, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray, addr 0x686d20c, size 0xbc, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values, int32_t count);

  /// @brief Method SetColorArray, addr 0x686de38, size 0x14, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorArray, addr 0x686dd6c, size 0x90, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArrayImpl, addr 0x686b6fc, size 0x144, virtual false, abstract: false, final false
  inline void SetColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values, int32_t count);

  /// @brief Method SetColorArrayImpl_Injected, addr 0x686b840, size 0x5c, virtual false, abstract: false, final false
  static inline void SetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetColorImpl, addr 0x686a1bc, size 0xd0, virtual false, abstract: false, final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl_Injected, addr 0x686a28c, size 0x54, virtual false, abstract: false, final false
  static inline void SetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method SetConstantBuffer, addr 0x686dab4, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x686db00, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x686dafc, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x686db48, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl, addr 0x686a8cc, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl_Injected, addr 0x686a9ac, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl, addr 0x686aa18, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl_Injected, addr 0x686aaf8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetEnabledKeywords, addr 0x6867d5c, size 0xb8, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6867e14, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> keywords);

  /// @brief Method SetFloat, addr 0x686d85c, size 0x30, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x686d88c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetFloatArray, addr 0x686dc7c, size 0x3c, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray, addr 0x686db4c, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray, addr 0x686d094, size 0xbc, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetFloatArray, addr 0x686dcb8, size 0x14, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray, addr 0x686dbec, size 0x90, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArrayImpl, addr 0x686b3bc, size 0x144, virtual false, abstract: false, final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetFloatArrayImpl_Injected, addr 0x686b500, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetFloatImpl, addr 0x686a0a0, size 0xc8, virtual false, abstract: false, final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetFloatImpl_Injected, addr 0x686a168, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name, float_t value);

  /// @brief Method SetGraphicsBufferImpl, addr 0x686a7b0, size 0xc8, virtual false, abstract: false, final false
  inline void SetGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGraphicsBufferImpl_Injected, addr 0x686a878, size 0x54, virtual false, abstract: false, final false
  static inline void SetGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetInt, addr 0x686d824, size 0x30, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt, addr 0x686d854, size 0x8, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// @brief Method SetIntImpl, addr 0x6869f8c, size 0xc0, virtual false, abstract: false, final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetIntImpl_Injected, addr 0x686a04c, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name, int32_t value);

  /// @brief Method SetInteger, addr 0x686d890, size 0x30, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger, addr 0x686d8c0, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetKeyword, addr 0x6867c1c, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLocalKeyword, addr 0x68679b4, size 0xc0, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6867a74, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x686d968, size 0x4c, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix, addr 0x686d9b4, size 0x2c, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixArray, addr 0x686e0fc, size 0x3c, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray, addr 0x686dfcc, size 0xa0, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray, addr 0x686d2c8, size 0xbc, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetMatrixArray, addr 0x686e138, size 0x14, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray, addr 0x686e06c, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArrayImpl, addr 0x686b89c, size 0x144, virtual false, abstract: false, final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl_Injected, addr 0x686b9e0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetMatrixImpl, addr 0x686a2e0, size 0xc0, virtual false, abstract: false, final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixImpl_Injected, addr 0x686a3a0, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetOverrideTag, addr 0x6868bac, size 0x210, virtual false, abstract: false, final false
  inline void SetOverrideTag(::StringW tag, ::StringW val);

  /// @brief Method SetOverrideTag_Injected, addr 0x6868dbc, size 0x54, virtual false, abstract: false, final false
  static inline void SetOverrideTag_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> val);

  /// @brief Method SetPass, addr 0x6869320, size 0xb8, virtual false, abstract: false, final false
  inline bool SetPass(int32_t pass);

  /// @brief Method SetPass_Injected, addr 0x68693d8, size 0x44, virtual false, abstract: false, final false
  static inline bool SetPass_Injected(::System::IntPtr _unity_self, int32_t pass);

  /// @brief Method SetRenderTextureImpl, addr 0x686a538, size 0x100, virtual false, abstract: false, final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTextureImpl_Injected, addr 0x686a638, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRenderTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetShaderKeywords, addr 0x6869758, size 0xb8, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6869810, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method SetShaderPassEnabled, addr 0x686843c, size 0x19c, virtual false, abstract: false, final false
  inline void SetShaderPassEnabled(::StringW passName, bool enabled);

  /// @brief Method SetShaderPassEnabled_Injected, addr 0x68685d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> passName, bool enabled);

  /// @brief Method SetTexture, addr 0x686da10, size 0x38, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x686d9e0, size 0x30, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture, addr 0x686da48, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x68663a0, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl, addr 0x686a3f4, size 0xf0, virtual false, abstract: false, final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl_Injected, addr 0x686a4e4, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetTextureOffset, addr 0x686e558, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureOffset(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffset, addr 0x68664d0, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureOffset(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffsetImpl, addr 0x686ce64, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureOffsetImpl(int32_t name, ::UnityEngine::Vector2 offset);

  /// @brief Method SetTextureOffsetImpl_Injected, addr 0x686cf28, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Vector2> offset);

  /// @brief Method SetTextureScale, addr 0x686e590, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureScale(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale, addr 0x68665e0, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureScale(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScaleImpl, addr 0x686cf7c, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureScaleImpl(int32_t name, ::UnityEngine::Vector2 scale);

  /// @brief Method SetTextureScaleImpl_Injected, addr 0x686d040, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureScaleImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Vector2> scale);

  /// @brief Method SetVector, addr 0x686d914, size 0x50, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector, addr 0x686d964, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorArray, addr 0x686df7c, size 0x3c, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray, addr 0x686de4c, size 0xa0, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray, addr 0x686d150, size 0xbc, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetVectorArray, addr 0x686dfb8, size 0x14, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray, addr 0x686deec, size 0x90, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArrayImpl, addr 0x686b55c, size 0x144, virtual false, abstract: false, final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetVectorArrayImpl_Injected, addr 0x686b6a0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method .ctor, addr 0x6865574, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW contents);

  /// @brief Method .ctor, addr 0x6865890, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader);

  /// @brief Method .ctor, addr 0x6865920, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* source);

  static inline int32_t getStaticF_k_ColorId();

  static inline int32_t getStaticF_k_MainTexId();

  /// @brief Method get_color, addr 0x68660bc, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_doubleSidedGI, addr 0x6868040, size 0xa8, virtual false, abstract: false, final false
  inline bool get_doubleSidedGI();

  /// @brief Method get_doubleSidedGI_Injected, addr 0x68680e8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_doubleSidedGI_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableInstancing, addr 0x68535b0, size 0xa8, virtual false, abstract: false, final false
  inline bool get_enableInstancing();

  /// @brief Method get_enableInstancing_Injected, addr 0x6868220, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableInstancing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledKeywords, addr 0x6867e58, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> get_enabledKeywords();

  /// @brief Method get_globalIlluminationFlags, addr 0x6867e60, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags();

  /// @brief Method get_globalIlluminationFlags_Injected, addr 0x6867f08, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mainTexture, addr 0x686629c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_mainTextureOffset, addr 0x68663a4, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureOffset();

  /// @brief Method get_mainTextureScale, addr 0x68664d4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureScale();

  /// @brief Method get_passCount, addr 0x6868358, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6868400, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rawRenderQueue, addr 0x686714c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_rawRenderQueue();

  /// @brief Method get_rawRenderQueue_Injected, addr 0x68671f4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_rawRenderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderQueue, addr 0x6866f6c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6867014, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shader, addr 0x6865ddc, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_shaderKeywords, addr 0x6869854, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_shaderKeywords();

  /// @brief Method get_shader_Injected, addr 0x6865f54, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_shader_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_k_ColorId(int32_t value);

  static inline void setStaticF_k_MainTexId(int32_t value);

  /// @brief Method set_color, addr 0x68661f0, size 0xa8, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_doubleSidedGI, addr 0x6868124, size 0xb8, virtual false, abstract: false, final false
  inline void set_doubleSidedGI(bool value);

  /// @brief Method set_doubleSidedGI_Injected, addr 0x68681dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_doubleSidedGI_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enableInstancing, addr 0x686825c, size 0xb8, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_enableInstancing_Injected, addr 0x6868314, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableInstancing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enabledKeywords, addr 0x6867e5c, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> value);

  /// @brief Method set_globalIlluminationFlags, addr 0x6867f44, size 0xb8, virtual false, abstract: false, final false
  inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_globalIlluminationFlags_Injected, addr 0x6867ffc, size 0x44, virtual false, abstract: false, final false
  static inline void set_globalIlluminationFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_mainTexture, addr 0x6866318, size 0x88, virtual false, abstract: false, final false
  inline void set_mainTexture(::UnityEngine::Texture* value);

  /// @brief Method set_mainTextureOffset, addr 0x6866440, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_mainTextureScale, addr 0x6866550, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_renderQueue, addr 0x6867050, size 0xb8, virtual false, abstract: false, final false
  inline void set_renderQueue(int32_t value);

  /// @brief Method set_renderQueue_Injected, addr 0x6867108, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderQueue_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shader, addr 0x6865f90, size 0xe8, virtual false, abstract: false, final false
  inline void set_shader(::UnityEngine::Shader* value);

  /// @brief Method set_shaderKeywords, addr 0x6869858, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_shader_Injected, addr 0x6866078, size 0x44, virtual false, abstract: false, final false
  static inline void set_shader_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10135 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Material, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Material);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Material*, "UnityEngine", "Material");
