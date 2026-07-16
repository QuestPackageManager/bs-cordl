#pragma once
// IWYU pragma private; include "UnityEngine/Material.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Material*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Material*, "UnityEngine", "Material");
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

  __declspec(property(get = get_enabledKeywords, put = set_enabledKeywords)) ::ArrayW<::UnityEngine::Rendering::LocalKeyword> enabledKeywords;

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

  __declspec(property(get = get_shaderKeywords, put = set_shaderKeywords)) ::ArrayW<::StringW> shaderKeywords;

  /// @brief Method ComputeCRC, addr 0x6a98c68, size 0xa8, virtual false, abstract: false, final false
  inline int32_t ComputeCRC();

  /// @brief Method ComputeCRC_Injected, addr 0x6a98d10, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ComputeCRC_Injected(::System::IntPtr _unity_self);

  /// @brief Method CopyMatchingPropertiesFromMaterial, addr 0x6a98858, size 0xe8, virtual false, abstract: false, final false
  inline void CopyMatchingPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyMatchingPropertiesFromMaterial_Injected, addr 0x6a98940, size 0x44, virtual false, abstract: false, final false
  static inline void CopyMatchingPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// @brief Method CopyPropertiesFromMaterial, addr 0x6a9872c, size 0xe8, virtual false, abstract: false, final false
  inline void CopyPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyPropertiesFromMaterial_Injected, addr 0x6a98814, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// @brief Method Create, addr 0x6a94830, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Create(::StringW scriptContents);

  /// @brief Method CreateWithMaterial, addr 0x6a94a44, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithMaterial(::UnityEngine::Material* self, ::UnityEngine::Material* source);

  /// @brief Method CreateWithMaterial_Injected, addr 0x6a94b20, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithMaterial_Injected(::UnityEngine::Material* self, ::System::IntPtr source);

  /// @brief Method CreateWithShader, addr 0x6a94924, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithShader(::UnityEngine::Material* self, ::UnityEngine::Shader* shader);

  /// @brief Method CreateWithShader_Injected, addr 0x6a94a00, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithShader_Injected(::UnityEngine::Material* self, ::System::IntPtr shader);

  /// @brief Method CreateWithString, addr 0x6a94b64, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateWithString(::UnityEngine::Material* self);

  /// @brief Method DisableKeyword, addr 0x6a96714, size 0x190, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6a96f00, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6a968a4, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method DisableLocalKeyword, addr 0x6a96bc8, size 0xb8, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6a96c80, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x6a96540, size 0x190, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6a96ed4, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6a966d0, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableLocalKeyword, addr 0x6a96acc, size 0xb8, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6a96b84, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method ExtractColorArray, addr 0x6a9c8e4, size 0x128, virtual false, abstract: false, final false
  inline void ExtractColorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method ExtractColorArrayImpl, addr 0x6a9bc94, size 0x188, virtual false, abstract: false, final false
  inline void ExtractColorArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Color>> val);

  /// @brief Method ExtractColorArrayImpl_Injected, addr 0x6a9be1c, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractFloatArray, addr 0x6a9c694, size 0x128, virtual false, abstract: false, final false
  inline void ExtractFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractFloatArrayImpl, addr 0x6a9b8dc, size 0x188, virtual false, abstract: false, final false
  inline void ExtractFloatArrayImpl(int32_t name, ::by_ref<::ArrayW<float_t>> val);

  /// @brief Method ExtractFloatArrayImpl_Injected, addr 0x6a9ba64, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractMatrixArray, addr 0x6a9ca0c, size 0x128, virtual false, abstract: false, final false
  inline void ExtractMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractMatrixArrayImpl, addr 0x6a9be70, size 0x188, virtual false, abstract: false, final false
  inline void ExtractMatrixArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>> val);

  /// @brief Method ExtractMatrixArrayImpl_Injected, addr 0x6a9bff8, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractVectorArray, addr 0x6a9c7bc, size 0x128, virtual false, abstract: false, final false
  inline void ExtractVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractVectorArrayImpl, addr 0x6a9bab8, size 0x188, virtual false, abstract: false, final false
  inline void ExtractVectorArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Vector4>> val);

  /// @brief Method ExtractVectorArrayImpl_Injected, addr 0x6a9bc40, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method FindPass, addr 0x6a97cdc, size 0x19c, virtual false, abstract: false, final false
  inline int32_t FindPass(::StringW passName);

  /// @brief Method FindPass_Injected, addr 0x6a97e78, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetBuffer, addr 0x6a9d5e8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBuffer(::StringW name);

  /// @brief Method GetBufferImpl, addr 0x6a9a494, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBufferImpl(int32_t name);

  /// @brief Method GetBufferImpl_Injected, addr 0x6a9a55c, size 0x54, virtual false, abstract: false, final false
  static inline void GetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetColor, addr 0x6a9d508, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW name);

  /// @brief Method GetColor, addr 0x6a954fc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x6a9d684, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArray(::StringW name);

  /// @brief Method GetColorArray, addr 0x6a9d6a4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArray(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x6a9d7cc, size 0x30, virtual false, abstract: false, final false
  inline void GetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArray, addr 0x6a9d7fc, size 0x4, virtual false, abstract: false, final false
  inline void GetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArrayCountImpl, addr 0x6a9b6e4, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetColorArrayCountImpl(int32_t name);

  /// @brief Method GetColorArrayCountImpl_Injected, addr 0x6a9b79c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetColorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetColorArrayImpl, addr 0x6a9b11c, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArrayImpl(int32_t name);

  /// @brief Method GetColorArrayImpl_Injected, addr 0x6a9b2b0, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetColorImpl, addr 0x6a9a06c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetColorImpl_Injected, addr 0x6a9a140, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetConstantBuffer, addr 0x6a9d608, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBuffer(::StringW name);

  /// @brief Method GetConstantBufferImpl, addr 0x6a9a5b0, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBufferImpl(int32_t name);

  /// @brief Method GetConstantBufferImpl_Injected, addr 0x6a9a678, size 0x54, virtual false, abstract: false, final false
  static inline void GetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetDefaultLineMaterial, addr 0x6a94f88, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultLineMaterial();

  /// @brief Method GetDefaultLineMaterial_Injected, addr 0x6a950c4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultLineMaterial_Injected();

  /// @brief Method GetDefaultMaterial, addr 0x6a94cc0, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial();

  /// @brief Method GetDefaultMaterial_Injected, addr 0x6a94dfc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultMaterial_Injected();

  /// @brief Method GetDefaultParticleMaterial, addr 0x6a94e24, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultParticleMaterial();

  /// @brief Method GetDefaultParticleMaterial_Injected, addr 0x6a94f60, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultParticleMaterial_Injected();

  /// @brief Method GetEnabledKeywords, addr 0x6a96f88, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6a97030, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x6a95444, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFirstPropertyNameIdByAttribute_Injected, addr 0x6a958f4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFirstPropertyNameIdByAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFloat, addr 0x6a9d4c0, size 0x20, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat, addr 0x6a9d4e0, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x6a9d628, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArray(::StringW name);

  /// @brief Method GetFloatArray, addr 0x6a9d648, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArray(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x6a9d798, size 0x30, virtual false, abstract: false, final false
  inline void GetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArray, addr 0x6a9d7c8, size 0x4, virtual false, abstract: false, final false
  inline void GetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArrayCountImpl, addr 0x6a9b4ec, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFloatArrayCountImpl(int32_t name);

  /// @brief Method GetFloatArrayCountImpl_Injected, addr 0x6a9b5a4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFloatArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetFloatArrayImpl, addr 0x6a9ad4c, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArrayImpl(int32_t name);

  /// @brief Method GetFloatArrayImpl_Injected, addr 0x6a9aee0, size 0x54, virtual false, abstract: false, final false
  static inline void GetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetFloatImpl, addr 0x6a99f70, size 0xb8, virtual false, abstract: false, final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetFloatImpl_Injected, addr 0x6a9a028, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInt, addr 0x6a9d45c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW name);

  /// @brief Method GetInt, addr 0x6a9d498, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetInt(int32_t nameID);

  /// @brief Method GetIntImpl, addr 0x6a99e74, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetIntImpl(int32_t name);

  /// @brief Method GetIntImpl_Injected, addr 0x6a99f2c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInteger, addr 0x6a9d4e4, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger, addr 0x6a9d504, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t nameID);

  /// @brief Method GetMatrix, addr 0x6a9d54c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(::StringW name);

  /// @brief Method GetMatrix, addr 0x6a9d598, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x6a9d73c, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArray(::StringW name);

  /// @brief Method GetMatrixArray, addr 0x6a9d75c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArray(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x6a9d834, size 0x30, virtual false, abstract: false, final false
  inline void GetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArray, addr 0x6a9d864, size 0x4, virtual false, abstract: false, final false
  inline void GetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArrayCountImpl, addr 0x6a9b7e0, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetMatrixArrayCountImpl_Injected, addr 0x6a9b898, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMatrixArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetMatrixArrayImpl, addr 0x6a9b304, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArrayImpl(int32_t name);

  /// @brief Method GetMatrixArrayImpl_Injected, addr 0x6a9b498, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetMatrixImpl, addr 0x6a9a194, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetMatrixImpl_Injected, addr 0x6a9a27c, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPassName, addr 0x6a97b20, size 0x168, virtual false, abstract: false, final false
  inline ::StringW GetPassName(int32_t pass);

  /// @brief Method GetPassName_Injected, addr 0x6a97c88, size 0x54, virtual false, abstract: false, final false
  static inline void GetPassName_Injected(::System::IntPtr _unity_self, int32_t pass, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyNames, addr 0x6a9d924, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyNames(::UnityEngine::MaterialPropertyType type);

  /// @brief Method GetPropertyNamesImpl, addr 0x6a98b6c, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyNamesImpl(int32_t propertyType);

  /// @brief Method GetPropertyNamesImpl_Injected, addr 0x6a98c24, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyNamesImpl_Injected(::System::IntPtr _unity_self, int32_t propertyType);

  /// @brief Method GetShaderKeywords, addr 0x6a98984, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6a98a2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetShaderPassEnabled, addr 0x6a9793c, size 0x1a0, virtual false, abstract: false, final false
  inline bool GetShaderPassEnabled(::StringW passName);

  /// @brief Method GetShaderPassEnabled_Injected, addr 0x6a97adc, size 0x44, virtual false, abstract: false, final false
  static inline bool GetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetTag, addr 0x6a9844c, size 0x68, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks);

  /// @brief Method GetTag, addr 0x6a98440, size 0xc, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue);

  /// @brief Method GetTagImpl, addr 0x6a98120, size 0x2b4, virtual false, abstract: false, final false
  inline ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue);

  /// @brief Method GetTagImpl_Injected, addr 0x6a983d4, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTagImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, bool currentSubShaderOnly,
                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> defaultValue, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetTexture, addr 0x6a9d5c8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW name);

  /// @brief Method GetTexture, addr 0x6a95624, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t nameID);

  /// @brief Method GetTextureImpl, addr 0x6a9a2d0, size 0x180, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t name);

  /// @brief Method GetTextureImpl_Injected, addr 0x6a9a450, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetTextureOffset, addr 0x6a9d8d8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(::StringW name);

  /// @brief Method GetTextureOffset, addr 0x6a95738, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);

  /// @brief Method GetTexturePropertyNameIDs, addr 0x6a98e30, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTexturePropertyNameIDs();

  /// @brief Method GetTexturePropertyNameIDs, addr 0x6a99248, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDs(::System::Collections::Generic::List_1<int32_t>* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal, addr 0x6a990f8, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDsInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal_Injected, addr 0x6a991b0, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDs_Injected, addr 0x6a98fb8, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetTexturePropertyNames, addr 0x6a98d4c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetTexturePropertyNames();

  /// @brief Method GetTexturePropertyNames, addr 0x6a991f4, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNames(::System::Collections::Generic::List_1<::StringW>* outNames);

  /// @brief Method GetTexturePropertyNamesInternal, addr 0x6a98ffc, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNamesInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNamesInternal_Injected, addr 0x6a990b4, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNamesInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNames_Injected, addr 0x6a98df4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetTexturePropertyNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTextureScale, addr 0x6a9d904, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(::StringW name);

  /// @brief Method GetTextureScale, addr 0x6a9585c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(int32_t nameID);

  /// @brief Method GetTextureScaleAndOffsetImpl, addr 0x6a9c04c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);

  /// @brief Method GetTextureScaleAndOffsetImpl_Injected, addr 0x6a9c120, size 0x54, virtual false, abstract: false, final false
  static inline void GetTextureScaleAndOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetVector, addr 0x6a9d528, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(::StringW name);

  /// @brief Method GetVector, addr 0x6a9d548, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x6a9d6e0, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArray(::StringW name);

  /// @brief Method GetVectorArray, addr 0x6a9d700, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArray(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x6a9d800, size 0x30, virtual false, abstract: false, final false
  inline void GetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArray, addr 0x6a9d830, size 0x4, virtual false, abstract: false, final false
  inline void GetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArrayCountImpl, addr 0x6a9b5e8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetVectorArrayCountImpl(int32_t name);

  /// @brief Method GetVectorArrayCountImpl_Injected, addr 0x6a9b6a0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVectorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetVectorArrayImpl, addr 0x6a9af34, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArrayImpl(int32_t name);

  /// @brief Method GetVectorArrayImpl_Injected, addr 0x6a9b0c8, size 0x54, virtual false, abstract: false, final false
  static inline void GetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method HasBuffer, addr 0x6a96138, size 0x20, virtual false, abstract: false, final false
  inline bool HasBuffer(::StringW name);

  /// @brief Method HasBuffer, addr 0x6a96158, size 0x4, virtual false, abstract: false, final false
  inline bool HasBuffer(int32_t nameID);

  /// @brief Method HasBufferImpl, addr 0x6a9603c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasBufferImpl(int32_t name);

  /// @brief Method HasBufferImpl_Injected, addr 0x6a960f4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasColor, addr 0x6a96018, size 0x20, virtual false, abstract: false, final false
  inline bool HasColor(::StringW name);

  /// @brief Method HasColor, addr 0x6a96038, size 0x4, virtual false, abstract: false, final false
  inline bool HasColor(int32_t nameID);

  /// @brief Method HasConstantBuffer, addr 0x6a96258, size 0x20, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(::StringW name);

  /// @brief Method HasConstantBuffer, addr 0x6a96278, size 0x4, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(int32_t nameID);

  /// @brief Method HasConstantBufferImpl, addr 0x6a9615c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasConstantBufferImpl(int32_t name);

  /// @brief Method HasConstantBufferImpl_Injected, addr 0x6a96214, size 0x44, virtual false, abstract: false, final false
  static inline bool HasConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasFloat, addr 0x6a95b50, size 0x20, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// @brief Method HasFloat, addr 0x6a95b70, size 0x4, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasFloatImpl, addr 0x6a95a54, size 0xb8, virtual false, abstract: false, final false
  inline bool HasFloatImpl(int32_t name);

  /// @brief Method HasFloatImpl_Injected, addr 0x6a95b0c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInt, addr 0x6a95b74, size 0x20, virtual false, abstract: false, final false
  inline bool HasInt(::StringW name);

  /// @brief Method HasInt, addr 0x6a95b94, size 0x4, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasIntImpl, addr 0x6a95b98, size 0xb8, virtual false, abstract: false, final false
  inline bool HasIntImpl(int32_t name);

  /// @brief Method HasIntImpl_Injected, addr 0x6a95c50, size 0x44, virtual false, abstract: false, final false
  static inline bool HasIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInteger, addr 0x6a95c94, size 0x20, virtual false, abstract: false, final false
  inline bool HasInteger(::StringW name);

  /// @brief Method HasInteger, addr 0x6a95cb4, size 0x4, virtual false, abstract: false, final false
  inline bool HasInteger(int32_t nameID);

  /// @brief Method HasMatrix, addr 0x6a95ed4, size 0x20, virtual false, abstract: false, final false
  inline bool HasMatrix(::StringW name);

  /// @brief Method HasMatrix, addr 0x6a95ef4, size 0x4, virtual false, abstract: false, final false
  inline bool HasMatrix(int32_t nameID);

  /// @brief Method HasMatrixImpl, addr 0x6a95dd8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasMatrixImpl(int32_t name);

  /// @brief Method HasMatrixImpl_Injected, addr 0x6a95e90, size 0x44, virtual false, abstract: false, final false
  static inline bool HasMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasProperty, addr 0x6a95a34, size 0x20, virtual false, abstract: false, final false
  inline bool HasProperty(::StringW name);

  /// @brief Method HasProperty, addr 0x6a95938, size 0xb8, virtual false, abstract: false, final false
  inline bool HasProperty(int32_t nameID);

  /// @brief Method HasProperty_Injected, addr 0x6a959f0, size 0x44, virtual false, abstract: false, final false
  static inline bool HasProperty_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasTexture, addr 0x6a95db4, size 0x20, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// @brief Method HasTexture, addr 0x6a95dd4, size 0x4, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// @brief Method HasTextureImpl, addr 0x6a95cb8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasTextureImpl(int32_t name);

  /// @brief Method HasTextureImpl_Injected, addr 0x6a95d70, size 0x44, virtual false, abstract: false, final false
  static inline bool HasTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasVector, addr 0x6a95ff4, size 0x20, virtual false, abstract: false, final false
  inline bool HasVector(::StringW name);

  /// @brief Method HasVector, addr 0x6a96014, size 0x4, virtual false, abstract: false, final false
  inline bool HasVector(int32_t nameID);

  /// @brief Method HasVectorImpl, addr 0x6a95ef8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasVectorImpl(int32_t name);

  /// @brief Method HasVectorImpl_Injected, addr 0x6a95fb0, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVectorImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method IsKeywordEnabled, addr 0x6a968e8, size 0x1a0, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6a96f58, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6a96a88, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method IsLocalKeywordEnabled, addr 0x6a96dd8, size 0xb8, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6a96e90, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method Lerp, addr 0x6a984b4, size 0x118, virtual false, abstract: false, final false
  inline void Lerp(::UnityEngine::Material* start, ::UnityEngine::Material* end, float_t t);

  /// @brief Method Lerp_Injected, addr 0x6a985cc, size 0x64, virtual false, abstract: false, final false
  static inline void Lerp_Injected(::System::IntPtr _unity_self, ::System::IntPtr start, ::System::IntPtr end, float_t t);

  static inline ::UnityEngine::Material* New_ctor(::StringW contents);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material* source);

  /// @brief Method SetBuffer, addr 0x6a9cd5c, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x6a9cd90, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBuffer, addr 0x6a9cd8c, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x6a9cdc0, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBufferImpl, addr 0x6a999a4, size 0xc8, virtual false, abstract: false, final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBufferImpl_Injected, addr 0x6a99a6c, size 0x54, virtual false, abstract: false, final false
  static inline void SetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetColor, addr 0x6a9cbd4, size 0x50, virtual false, abstract: false, final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor, addr 0x6a955a8, size 0x4, virtual false, abstract: false, final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetColorArray, addr 0x6a9d10c, size 0x3c, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::ArrayW<::UnityEngine::Color> values);

  /// @brief Method SetColorArray, addr 0x6a9cfdc, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray, addr 0x6a9c51c, size 0xbc, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t name, ::ArrayW<::UnityEngine::Color> values, int32_t count);

  /// @brief Method SetColorArray, addr 0x6a9d148, size 0x14, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::ArrayW<::UnityEngine::Color> values);

  /// @brief Method SetColorArray, addr 0x6a9d07c, size 0x90, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArrayImpl, addr 0x6a9aa0c, size 0x144, virtual false, abstract: false, final false
  inline void SetColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color> values, int32_t count);

  /// @brief Method SetColorArrayImpl_Injected, addr 0x6a9ab50, size 0x5c, virtual false, abstract: false, final false
  static inline void SetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetColorImpl, addr 0x6a994cc, size 0xd0, virtual false, abstract: false, final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl_Injected, addr 0x6a9959c, size 0x54, virtual false, abstract: false, final false
  static inline void SetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Color> value);

  /// @brief Method SetConstantBuffer, addr 0x6a9cdc4, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6a9ce10, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6a9ce0c, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6a9ce58, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl, addr 0x6a99bdc, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl_Injected, addr 0x6a99cbc, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl, addr 0x6a99d28, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl_Injected, addr 0x6a99e08, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetEnabledKeywords, addr 0x6a9706c, size 0xb8, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6a97124, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetFloat, addr 0x6a9cb6c, size 0x30, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x6a9cb9c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetFloatArray, addr 0x6a9cf8c, size 0x3c, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray, addr 0x6a9ce5c, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray, addr 0x6a9c3a4, size 0xbc, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetFloatArray, addr 0x6a9cfc8, size 0x14, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray, addr 0x6a9cefc, size 0x90, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArrayImpl, addr 0x6a9a6cc, size 0x144, virtual false, abstract: false, final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetFloatArrayImpl_Injected, addr 0x6a9a810, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetFloatImpl, addr 0x6a993b0, size 0xc8, virtual false, abstract: false, final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetFloatImpl_Injected, addr 0x6a99478, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name, float_t value);

  /// @brief Method SetGraphicsBufferImpl, addr 0x6a99ac0, size 0xc8, virtual false, abstract: false, final false
  inline void SetGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGraphicsBufferImpl_Injected, addr 0x6a99b88, size 0x54, virtual false, abstract: false, final false
  static inline void SetGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetInt, addr 0x6a9cb34, size 0x30, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt, addr 0x6a9cb64, size 0x8, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// @brief Method SetIntImpl, addr 0x6a9929c, size 0xc0, virtual false, abstract: false, final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetIntImpl_Injected, addr 0x6a9935c, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name, int32_t value);

  /// @brief Method SetInteger, addr 0x6a9cba0, size 0x30, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger, addr 0x6a9cbd0, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetKeyword, addr 0x6a96f2c, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLocalKeyword, addr 0x6a96cc4, size 0xc0, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6a96d84, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6a9cc78, size 0x4c, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix, addr 0x6a9ccc4, size 0x2c, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixArray, addr 0x6a9d40c, size 0x3c, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6a9d2dc, size 0xa0, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray, addr 0x6a9c5d8, size 0xbc, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetMatrixArray, addr 0x6a9d448, size 0x14, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6a9d37c, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArrayImpl, addr 0x6a9abac, size 0x144, virtual false, abstract: false, final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl_Injected, addr 0x6a9acf0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetMatrixImpl, addr 0x6a995f0, size 0xc0, virtual false, abstract: false, final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixImpl_Injected, addr 0x6a996b0, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetOverrideTag, addr 0x6a97ebc, size 0x210, virtual false, abstract: false, final false
  inline void SetOverrideTag(::StringW tag, ::StringW val);

  /// @brief Method SetOverrideTag_Injected, addr 0x6a980cc, size 0x54, virtual false, abstract: false, final false
  static inline void SetOverrideTag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val);

  /// @brief Method SetPass, addr 0x6a98630, size 0xb8, virtual false, abstract: false, final false
  inline bool SetPass(int32_t pass);

  /// @brief Method SetPass_Injected, addr 0x6a986e8, size 0x44, virtual false, abstract: false, final false
  static inline bool SetPass_Injected(::System::IntPtr _unity_self, int32_t pass);

  /// @brief Method SetRenderTextureImpl, addr 0x6a99848, size 0x100, virtual false, abstract: false, final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTextureImpl_Injected, addr 0x6a99948, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRenderTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetShaderKeywords, addr 0x6a98a68, size 0xb8, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6a98b20, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> names);

  /// @brief Method SetShaderPassEnabled, addr 0x6a9774c, size 0x19c, virtual false, abstract: false, final false
  inline void SetShaderPassEnabled(::StringW passName, bool enabled);

  /// @brief Method SetShaderPassEnabled_Injected, addr 0x6a978e8, size 0x54, virtual false, abstract: false, final false
  static inline void SetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName, bool enabled);

  /// @brief Method SetTexture, addr 0x6a9cd20, size 0x38, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6a9ccf0, size 0x30, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture, addr 0x6a9cd58, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6a956b0, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl, addr 0x6a99704, size 0xf0, virtual false, abstract: false, final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl_Injected, addr 0x6a997f4, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetTextureOffset, addr 0x6a9d868, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureOffset(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffset, addr 0x6a957e0, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureOffset(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffsetImpl, addr 0x6a9c174, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureOffsetImpl(int32_t name, ::UnityEngine::Vector2 offset);

  /// @brief Method SetTextureOffsetImpl_Injected, addr 0x6a9c238, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector2> offset);

  /// @brief Method SetTextureScale, addr 0x6a9d8a0, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureScale(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale, addr 0x6a958f0, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureScale(int32_t nameID, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScaleImpl, addr 0x6a9c28c, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureScaleImpl(int32_t name, ::UnityEngine::Vector2 scale);

  /// @brief Method SetTextureScaleImpl_Injected, addr 0x6a9c350, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureScaleImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector2> scale);

  /// @brief Method SetVector, addr 0x6a9cc24, size 0x50, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector, addr 0x6a9cc74, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorArray, addr 0x6a9d28c, size 0x3c, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6a9d15c, size 0xa0, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray, addr 0x6a9c460, size 0xbc, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetVectorArray, addr 0x6a9d2c8, size 0x14, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6a9d1fc, size 0x90, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArrayImpl, addr 0x6a9a86c, size 0x144, virtual false, abstract: false, final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetVectorArrayImpl_Injected, addr 0x6a9a9b0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method .ctor, addr 0x6a94884, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW contents);

  /// @brief Method .ctor, addr 0x6a94ba0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader);

  /// @brief Method .ctor, addr 0x6a94c30, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* source);

  static inline int32_t getStaticF_k_ColorId();

  static inline int32_t getStaticF_k_MainTexId();

  /// @brief Method get_color, addr 0x6a953cc, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_doubleSidedGI, addr 0x6a97350, size 0xa8, virtual false, abstract: false, final false
  inline bool get_doubleSidedGI();

  /// @brief Method get_doubleSidedGI_Injected, addr 0x6a973f8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_doubleSidedGI_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableInstancing, addr 0x6a828ec, size 0xa8, virtual false, abstract: false, final false
  inline bool get_enableInstancing();

  /// @brief Method get_enableInstancing_Injected, addr 0x6a97530, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableInstancing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledKeywords, addr 0x6a97168, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> get_enabledKeywords();

  /// @brief Method get_globalIlluminationFlags, addr 0x6a97170, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags();

  /// @brief Method get_globalIlluminationFlags_Injected, addr 0x6a97218, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mainTexture, addr 0x6a955ac, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_mainTextureOffset, addr 0x6a956b4, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureOffset();

  /// @brief Method get_mainTextureScale, addr 0x6a957e4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureScale();

  /// @brief Method get_passCount, addr 0x6a97668, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6a97710, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rawRenderQueue, addr 0x6a9645c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_rawRenderQueue();

  /// @brief Method get_rawRenderQueue_Injected, addr 0x6a96504, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_rawRenderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderQueue, addr 0x6a9627c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6a96324, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shader, addr 0x6a950ec, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_shaderKeywords, addr 0x6a98b64, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_shaderKeywords();

  /// @brief Method get_shader_Injected, addr 0x6a95264, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_shader_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_k_ColorId(int32_t value);

  static inline void setStaticF_k_MainTexId(int32_t value);

  /// @brief Method set_color, addr 0x6a95500, size 0xa8, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_doubleSidedGI, addr 0x6a97434, size 0xb8, virtual false, abstract: false, final false
  inline void set_doubleSidedGI(bool value);

  /// @brief Method set_doubleSidedGI_Injected, addr 0x6a974ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_doubleSidedGI_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enableInstancing, addr 0x6a9756c, size 0xb8, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_enableInstancing_Injected, addr 0x6a97624, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableInstancing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enabledKeywords, addr 0x6a9716c, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> value);

  /// @brief Method set_globalIlluminationFlags, addr 0x6a97254, size 0xb8, virtual false, abstract: false, final false
  inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_globalIlluminationFlags_Injected, addr 0x6a9730c, size 0x44, virtual false, abstract: false, final false
  static inline void set_globalIlluminationFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_mainTexture, addr 0x6a95628, size 0x88, virtual false, abstract: false, final false
  inline void set_mainTexture(::UnityEngine::Texture* value);

  /// @brief Method set_mainTextureOffset, addr 0x6a95750, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_mainTextureScale, addr 0x6a95860, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_renderQueue, addr 0x6a96360, size 0xb8, virtual false, abstract: false, final false
  inline void set_renderQueue(int32_t value);

  /// @brief Method set_renderQueue_Injected, addr 0x6a96418, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderQueue_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shader, addr 0x6a952a0, size 0xe8, virtual false, abstract: false, final false
  inline void set_shader(::UnityEngine::Shader* value);

  /// @brief Method set_shaderKeywords, addr 0x6a98b68, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW> value);

  /// @brief Method set_shader_Injected, addr 0x6a95388, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Material) == 0x18, "Size mismatch!");

} // namespace UnityEngine
