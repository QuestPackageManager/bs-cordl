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
// [NativeHeader("Runtime/Shaders/Material.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Material
class CORDL_TYPE Material : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_doubleSidedGI, put = set_doubleSidedGI)) bool doubleSidedGI;

  /// @brief [NativeProperty("EnableInstancingVariants")]
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

  /// @brief Method ComputeCRC, addr 0x6f2ec30, size 0xa8, virtual false, abstract: false, final false
  inline int32_t ComputeCRC();

  /// @brief Method ComputeCRC_Injected, addr 0x6f2ecd8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ComputeCRC_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("MaterialScripting::CopyMatchingPropertiesFrom", HasExplicitThis = true)]
  /// @brief Method CopyMatchingPropertiesFromMaterial, addr 0x6f2e73c, size 0xe8, virtual false, abstract: false, final false
  inline void CopyMatchingPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyMatchingPropertiesFromMaterial_Injected, addr 0x6f2e824, size 0x44, virtual false, abstract: false, final false
  static inline void CopyMatchingPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// [FreeFunction("MaterialScripting::CopyPropertiesFrom", HasExplicitThis = true)]
  /// @brief Method CopyPropertiesFromMaterial, addr 0x6f2e610, size 0xe8, virtual false, abstract: false, final false
  inline void CopyPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyPropertiesFromMaterial_Injected, addr 0x6f2e6f8, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// [Obsolete("Creating materials from shader source string will be removed in the future. Use Shader assets instead.", true)]
  /// @brief Method Create, addr 0x6f2a798, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Create(::StringW scriptContents);

  /// [FreeFunction("MaterialScripting::CreateWithMaterial")]
  /// @brief Method CreateWithMaterial, addr 0x6f2a964, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithMaterial(/* [Writable] */ ::UnityEngine::Material* self, /* [NotNull] */ ::UnityEngine::Material* source);

  /// @brief Method CreateWithMaterial_Injected, addr 0x6f2aa40, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithMaterial_Injected(/* [Writable] */ ::UnityEngine::Material* self, ::System::IntPtr source);

  /// [FreeFunction("MaterialScripting::CreateWithShader")]
  /// @brief Method CreateWithShader, addr 0x6f2a844, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithShader(/* [Writable] */ ::UnityEngine::Material* self, /* [NotNull] */ ::UnityEngine::Shader* shader);

  /// @brief Method CreateWithShader_Injected, addr 0x6f2a920, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithShader_Injected(/* [Writable] */ ::UnityEngine::Material* self, ::System::IntPtr shader);

  /// @brief Method DisableKeyword, addr 0x6f2c5f8, size 0x190, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6f2cde4, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6f2c788, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("MaterialScripting::DisableKeyword", HasExplicitThis = true)]
  /// @brief Method DisableLocalKeyword, addr 0x6f2caac, size 0xb8, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6f2cb64, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6f2c424, size 0x190, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6f2cdb8, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6f2c5b4, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("MaterialScripting::EnableKeyword", HasExplicitThis = true)]
  /// @brief Method EnableLocalKeyword, addr 0x6f2c9b0, size 0xb8, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6f2ca68, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method ExtractColorArray, addr 0x6f328ac, size 0x128, virtual false, abstract: false, final false
  inline void ExtractColorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractColorArray", HasExplicitThis = true)]
  /// @brief Method ExtractColorArrayImpl, addr 0x6f31c5c, size 0x188, virtual false, abstract: false, final false
  inline void ExtractColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color> val);

  /// @brief Method ExtractColorArrayImpl_Injected, addr 0x6f31de4, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractFloatArray, addr 0x6f3265c, size 0x128, virtual false, abstract: false, final false
  inline void ExtractFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractFloatArray", HasExplicitThis = true)]
  /// @brief Method ExtractFloatArrayImpl, addr 0x6f318a4, size 0x188, virtual false, abstract: false, final false
  inline void ExtractFloatArrayImpl(int32_t name, ::ArrayW<float_t> val);

  /// @brief Method ExtractFloatArrayImpl_Injected, addr 0x6f31a2c, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractMatrixArray, addr 0x6f329d4, size 0x128, virtual false, abstract: false, final false
  inline void ExtractMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractMatrixArray", HasExplicitThis = true)]
  /// @brief Method ExtractMatrixArrayImpl, addr 0x6f31e38, size 0x188, virtual false, abstract: false, final false
  inline void ExtractMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> val);

  /// @brief Method ExtractMatrixArrayImpl_Injected, addr 0x6f31fc0, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractVectorArray, addr 0x6f32784, size 0x128, virtual false, abstract: false, final false
  inline void ExtractVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractVectorArray", HasExplicitThis = true)]
  /// @brief Method ExtractVectorArrayImpl, addr 0x6f31a80, size 0x188, virtual false, abstract: false, final false
  inline void ExtractVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> val);

  /// @brief Method ExtractVectorArrayImpl_Injected, addr 0x6f31c08, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method FindPass, addr 0x6f2dbc0, size 0x19c, virtual false, abstract: false, final false
  inline int32_t FindPass(::StringW passName);

  /// @brief Method FindPass_Injected, addr 0x6f2dd5c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetBuffer, addr 0x6f335b0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBuffer(::StringW name);

  /// [NativeName("GetBufferFromScript")]
  /// @brief Method GetBufferImpl, addr 0x6f3045c, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBufferImpl(int32_t name);

  /// @brief Method GetBufferImpl_Injected, addr 0x6f30524, size 0x54, virtual false, abstract: false, final false
  static inline void GetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetColor, addr 0x6f334d0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW name);

  /// @brief Method GetColor, addr 0x6f2b3e0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x6f3364c, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArray(::StringW name);

  /// @brief Method GetColorArray, addr 0x6f3366c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArray(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x6f33794, size 0x30, virtual false, abstract: false, final false
  inline void GetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArray, addr 0x6f337c4, size 0x4, virtual false, abstract: false, final false
  inline void GetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetColorArrayCount", HasExplicitThis = true)]
  /// @brief Method GetColorArrayCountImpl, addr 0x6f316ac, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetColorArrayCountImpl(int32_t name);

  /// @brief Method GetColorArrayCountImpl_Injected, addr 0x6f31764, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetColorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetColorArray", HasExplicitThis = true)]
  /// @brief Method GetColorArrayImpl, addr 0x6f310e4, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArrayImpl(int32_t name);

  /// @brief Method GetColorArrayImpl_Injected, addr 0x6f31278, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetColorFromScript")]
  /// @brief Method GetColorImpl, addr 0x6f30034, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetColorImpl_Injected, addr 0x6f30108, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetConstantBuffer, addr 0x6f335d0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBuffer(::StringW name);

  /// [NativeName("GetConstantBufferFromScript")]
  /// @brief Method GetConstantBufferImpl, addr 0x6f30578, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBufferImpl(int32_t name);

  /// @brief Method GetConstantBufferImpl_Injected, addr 0x6f30640, size 0x54, virtual false, abstract: false, final false
  static inline void GetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetDefaultLineMaterial, addr 0x6f2ae6c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultLineMaterial();

  /// @brief Method GetDefaultLineMaterial_Injected, addr 0x6f2afa8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultLineMaterial_Injected();

  /// @brief Method GetDefaultMaterial, addr 0x6f2aba4, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial();

  /// @brief Method GetDefaultMaterial_Injected, addr 0x6f2ace0, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultMaterial_Injected();

  /// @brief Method GetDefaultParticleMaterial, addr 0x6f2ad08, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultParticleMaterial();

  /// @brief Method GetDefaultParticleMaterial_Injected, addr 0x6f2ae44, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultParticleMaterial_Injected();

  /// [FreeFunction("MaterialScripting::GetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method GetEnabledKeywords, addr 0x6f2ce6c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6f2cf14, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetFirstPropertyNameIdByAttributeFromScript")]
  /// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x6f2b328, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFirstPropertyNameIdByAttribute_Injected, addr 0x6f2b7d8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFirstPropertyNameIdByAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFloat, addr 0x6f33488, size 0x20, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat, addr 0x6f334a8, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x6f335f0, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArray(::StringW name);

  /// @brief Method GetFloatArray, addr 0x6f33610, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArray(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x6f33760, size 0x30, virtual false, abstract: false, final false
  inline void GetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArray, addr 0x6f33790, size 0x4, virtual false, abstract: false, final false
  inline void GetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetFloatArrayCount", HasExplicitThis = true)]
  /// @brief Method GetFloatArrayCountImpl, addr 0x6f314b4, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFloatArrayCountImpl(int32_t name);

  /// @brief Method GetFloatArrayCountImpl_Injected, addr 0x6f3156c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFloatArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetFloatArray", HasExplicitThis = true)]
  /// @brief Method GetFloatArrayImpl, addr 0x6f30d14, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArrayImpl(int32_t name);

  /// @brief Method GetFloatArrayImpl_Injected, addr 0x6f30ea8, size 0x54, virtual false, abstract: false, final false
  static inline void GetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetFloatFromScript")]
  /// @brief Method GetFloatImpl, addr 0x6f2ff38, size 0xb8, virtual false, abstract: false, final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetFloatImpl_Injected, addr 0x6f2fff0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInt, addr 0x6f33424, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW name);

  /// @brief Method GetInt, addr 0x6f33460, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetInt(int32_t nameID);

  /// [NativeName("GetIntFromScript")]
  /// @brief Method GetIntImpl, addr 0x6f2fe3c, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetIntImpl(int32_t name);

  /// @brief Method GetIntImpl_Injected, addr 0x6f2fef4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInteger, addr 0x6f334ac, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger, addr 0x6f334cc, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t nameID);

  /// @brief Method GetMatrix, addr 0x6f33514, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(::StringW name);

  /// @brief Method GetMatrix, addr 0x6f33560, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x6f33704, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArray(::StringW name);

  /// @brief Method GetMatrixArray, addr 0x6f33724, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArray(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x6f337fc, size 0x30, virtual false, abstract: false, final false
  inline void GetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArray, addr 0x6f3382c, size 0x4, virtual false, abstract: false, final false
  inline void GetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetMatrixArrayCount", HasExplicitThis = true)]
  /// @brief Method GetMatrixArrayCountImpl, addr 0x6f317a8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetMatrixArrayCountImpl_Injected, addr 0x6f31860, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMatrixArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetMatrixArray", HasExplicitThis = true)]
  /// @brief Method GetMatrixArrayImpl, addr 0x6f312cc, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArrayImpl(int32_t name);

  /// @brief Method GetMatrixArrayImpl_Injected, addr 0x6f31460, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetMatrixFromScript")]
  /// @brief Method GetMatrixImpl, addr 0x6f3015c, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetMatrixImpl_Injected, addr 0x6f30244, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPassName, addr 0x6f2da04, size 0x168, virtual false, abstract: false, final false
  inline ::StringW GetPassName(int32_t pass);

  /// @brief Method GetPassName_Injected, addr 0x6f2db6c, size 0x54, virtual false, abstract: false, final false
  static inline void GetPassName_Injected(::System::IntPtr _unity_self, int32_t pass, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("MaterialScripting::GetPropertyCount", HasExplicitThis = true)]
  /// @brief Method GetPropertyCount, addr 0x6f2eb4c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyCount_Injected, addr 0x6f2ebf4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPropertyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyNames, addr 0x6f338ec, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyNames(::UnityEngine::MaterialPropertyType type);

  /// [FreeFunction("MaterialScripting::GetPropertyNames", HasExplicitThis = true)]
  /// @brief Method GetPropertyNamesImpl, addr 0x6f2ea50, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyNamesImpl(int32_t propertyType);

  /// @brief Method GetPropertyNamesImpl_Injected, addr 0x6f2eb08, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyNamesImpl_Injected(::System::IntPtr _unity_self, int32_t propertyType);

  /// [FreeFunction("MaterialScripting::GetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method GetShaderKeywords, addr 0x6f2e868, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6f2e910, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("MaterialScripting::GetShaderPassEnabled", HasExplicitThis = true)]
  /// @brief Method GetShaderPassEnabled, addr 0x6f2d820, size 0x1a0, virtual false, abstract: false, final false
  inline bool GetShaderPassEnabled(::StringW passName);

  /// @brief Method GetShaderPassEnabled_Injected, addr 0x6f2d9c0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetTag, addr 0x6f2e330, size 0x68, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks);

  /// @brief Method GetTag, addr 0x6f2e324, size 0xc, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue);

  /// [NativeName("GetTag")]
  /// @brief Method GetTagImpl, addr 0x6f2e004, size 0x2b4, virtual false, abstract: false, final false
  inline ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue);

  /// @brief Method GetTagImpl_Injected, addr 0x6f2e2b8, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTagImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, bool currentSubShaderOnly,
                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> defaultValue, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetTexture, addr 0x6f33590, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW name);

  /// @brief Method GetTexture, addr 0x6f2b508, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t nameID);

  /// [NativeName("GetTextureFromScript")]
  /// @brief Method GetTextureImpl, addr 0x6f30298, size 0x180, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t name);

  /// @brief Method GetTextureImpl_Injected, addr 0x6f30418, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetTextureOffset, addr 0x6f338a0, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(::StringW name);

  /// @brief Method GetTextureOffset, addr 0x6f2b61c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNameIDs", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNameIDs, addr 0x6f2edf8, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTexturePropertyNameIDs();

  /// @brief Method GetTexturePropertyNameIDs, addr 0x6f2f210, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDs(::System::Collections::Generic::List_1<int32_t>* outNames);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNameIDsInternal", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNameIDsInternal, addr 0x6f2f0c0, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDsInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal_Injected, addr 0x6f2f178, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDs_Injected, addr 0x6f2ef80, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNames", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNames, addr 0x6f2ed14, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetTexturePropertyNames();

  /// @brief Method GetTexturePropertyNames, addr 0x6f2f1bc, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNames(::System::Collections::Generic::List_1<::StringW>* outNames);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNamesInternal", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNamesInternal, addr 0x6f2efc4, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNamesInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNamesInternal_Injected, addr 0x6f2f07c, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNamesInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNames_Injected, addr 0x6f2edbc, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetTexturePropertyNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTextureScale, addr 0x6f338cc, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(::StringW name);

  /// @brief Method GetTextureScale, addr 0x6f2b740, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(int32_t nameID);

  /// [NativeName("GetTextureScaleAndOffsetFromScript")]
  /// @brief Method GetTextureScaleAndOffsetImpl, addr 0x6f32014, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);

  /// @brief Method GetTextureScaleAndOffsetImpl_Injected, addr 0x6f320e8, size 0x54, virtual false, abstract: false, final false
  static inline void GetTextureScaleAndOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetVector, addr 0x6f334f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(::StringW name);

  /// @brief Method GetVector, addr 0x6f33510, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x6f336a8, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArray(::StringW name);

  /// @brief Method GetVectorArray, addr 0x6f336c8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArray(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x6f337c8, size 0x30, virtual false, abstract: false, final false
  inline void GetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArray, addr 0x6f337f8, size 0x4, virtual false, abstract: false, final false
  inline void GetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetVectorArrayCount", HasExplicitThis = true)]
  /// @brief Method GetVectorArrayCountImpl, addr 0x6f315b0, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetVectorArrayCountImpl(int32_t name);

  /// @brief Method GetVectorArrayCountImpl_Injected, addr 0x6f31668, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVectorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetVectorArray", HasExplicitThis = true)]
  /// @brief Method GetVectorArrayImpl, addr 0x6f30efc, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArrayImpl(int32_t name);

  /// @brief Method GetVectorArrayImpl_Injected, addr 0x6f31090, size 0x54, virtual false, abstract: false, final false
  static inline void GetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method HasBuffer, addr 0x6f2c01c, size 0x20, virtual false, abstract: false, final false
  inline bool HasBuffer(::StringW name);

  /// @brief Method HasBuffer, addr 0x6f2c03c, size 0x4, virtual false, abstract: false, final false
  inline bool HasBuffer(int32_t nameID);

  /// [NativeName("HasBufferFromScript")]
  /// @brief Method HasBufferImpl, addr 0x6f2bf20, size 0xb8, virtual false, abstract: false, final false
  inline bool HasBufferImpl(int32_t name);

  /// @brief Method HasBufferImpl_Injected, addr 0x6f2bfd8, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasColor, addr 0x6f2befc, size 0x20, virtual false, abstract: false, final false
  inline bool HasColor(::StringW name);

  /// @brief Method HasColor, addr 0x6f2bf1c, size 0x4, virtual false, abstract: false, final false
  inline bool HasColor(int32_t nameID);

  /// @brief Method HasConstantBuffer, addr 0x6f2c13c, size 0x20, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(::StringW name);

  /// @brief Method HasConstantBuffer, addr 0x6f2c15c, size 0x4, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(int32_t nameID);

  /// [NativeName("HasConstantBufferFromScript")]
  /// @brief Method HasConstantBufferImpl, addr 0x6f2c040, size 0xb8, virtual false, abstract: false, final false
  inline bool HasConstantBufferImpl(int32_t name);

  /// @brief Method HasConstantBufferImpl_Injected, addr 0x6f2c0f8, size 0x44, virtual false, abstract: false, final false
  static inline bool HasConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasFloat, addr 0x6f2ba34, size 0x20, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// @brief Method HasFloat, addr 0x6f2ba54, size 0x4, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// [NativeName("HasFloatFromScript")]
  /// @brief Method HasFloatImpl, addr 0x6f2b938, size 0xb8, virtual false, abstract: false, final false
  inline bool HasFloatImpl(int32_t name);

  /// @brief Method HasFloatImpl_Injected, addr 0x6f2b9f0, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInt, addr 0x6f2ba58, size 0x20, virtual false, abstract: false, final false
  inline bool HasInt(::StringW name);

  /// @brief Method HasInt, addr 0x6f2ba78, size 0x4, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// [NativeName("HasIntegerFromScript")]
  /// @brief Method HasIntImpl, addr 0x6f2ba7c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasIntImpl(int32_t name);

  /// @brief Method HasIntImpl_Injected, addr 0x6f2bb34, size 0x44, virtual false, abstract: false, final false
  static inline bool HasIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInteger, addr 0x6f2bb78, size 0x20, virtual false, abstract: false, final false
  inline bool HasInteger(::StringW name);

  /// @brief Method HasInteger, addr 0x6f2bb98, size 0x4, virtual false, abstract: false, final false
  inline bool HasInteger(int32_t nameID);

  /// @brief Method HasMatrix, addr 0x6f2bdb8, size 0x20, virtual false, abstract: false, final false
  inline bool HasMatrix(::StringW name);

  /// @brief Method HasMatrix, addr 0x6f2bdd8, size 0x4, virtual false, abstract: false, final false
  inline bool HasMatrix(int32_t nameID);

  /// [NativeName("HasMatrixFromScript")]
  /// @brief Method HasMatrixImpl, addr 0x6f2bcbc, size 0xb8, virtual false, abstract: false, final false
  inline bool HasMatrixImpl(int32_t name);

  /// @brief Method HasMatrixImpl_Injected, addr 0x6f2bd74, size 0x44, virtual false, abstract: false, final false
  static inline bool HasMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasProperty, addr 0x6f2b918, size 0x20, virtual false, abstract: false, final false
  inline bool HasProperty(::StringW name);

  /// [NativeName("HasPropertyFromScript")]
  /// @brief Method HasProperty, addr 0x6f2b81c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasProperty(int32_t nameID);

  /// @brief Method HasProperty_Injected, addr 0x6f2b8d4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasProperty_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasTexture, addr 0x6f2bc98, size 0x20, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// @brief Method HasTexture, addr 0x6f2bcb8, size 0x4, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// [NativeName("HasTextureFromScript")]
  /// @brief Method HasTextureImpl, addr 0x6f2bb9c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasTextureImpl(int32_t name);

  /// @brief Method HasTextureImpl_Injected, addr 0x6f2bc54, size 0x44, virtual false, abstract: false, final false
  static inline bool HasTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasVector, addr 0x6f2bed8, size 0x20, virtual false, abstract: false, final false
  inline bool HasVector(::StringW name);

  /// @brief Method HasVector, addr 0x6f2bef8, size 0x4, virtual false, abstract: false, final false
  inline bool HasVector(int32_t nameID);

  /// [NativeName("HasVectorFromScript")]
  /// @brief Method HasVectorImpl, addr 0x6f2bddc, size 0xb8, virtual false, abstract: false, final false
  inline bool HasVectorImpl(int32_t name);

  /// @brief Method HasVectorImpl_Injected, addr 0x6f2be94, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVectorImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method IsKeywordEnabled, addr 0x6f2c7cc, size 0x1a0, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6f2ce3c, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6f2c96c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("MaterialScripting::IsKeywordEnabled", HasExplicitThis = true)]
  /// @brief Method IsLocalKeywordEnabled, addr 0x6f2ccbc, size 0xb8, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6f2cd74, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("MaterialScripting::Lerp", HasExplicitThis = true)]
  /// [NativeThrows]
  /// @brief Method Lerp, addr 0x6f2e398, size 0x118, virtual false, abstract: false, final false
  inline void Lerp(::UnityEngine::Material* start, ::UnityEngine::Material* end, float_t t);

  /// @brief Method Lerp_Injected, addr 0x6f2e4b0, size 0x64, virtual false, abstract: false, final false
  static inline void Lerp_Injected(::System::IntPtr _unity_self, ::System::IntPtr start, ::System::IntPtr end, float_t t);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", true)]
  static inline ::UnityEngine::Material* New_ctor(::StringW contents);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader* shader);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material* source);

  /// @brief Method SetBuffer, addr 0x6f32d24, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x6f32d58, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBuffer, addr 0x6f32d54, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x6f32d88, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// [NativeName("SetBufferFromScript")]
  /// @brief Method SetBufferImpl, addr 0x6f2f96c, size 0xc8, virtual false, abstract: false, final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBufferImpl_Injected, addr 0x6f2fa34, size 0x54, virtual false, abstract: false, final false
  static inline void SetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetColor, addr 0x6f32b9c, size 0x50, virtual false, abstract: false, final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor, addr 0x6f2b48c, size 0x4, virtual false, abstract: false, final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetColorArray, addr 0x6f330d4, size 0x3c, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::ArrayW<::UnityEngine::Color> values);

  /// @brief Method SetColorArray, addr 0x6f32fa4, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray, addr 0x6f324e4, size 0xbc, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t name, ::ArrayW<::UnityEngine::Color> values, int32_t count);

  /// @brief Method SetColorArray, addr 0x6f33110, size 0x14, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::ArrayW<::UnityEngine::Color> values);

  /// @brief Method SetColorArray, addr 0x6f33044, size 0x90, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetColorArray", HasExplicitThis = true)]
  /// @brief Method SetColorArrayImpl, addr 0x6f309d4, size 0x144, virtual false, abstract: false, final false
  inline void SetColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color> values, int32_t count);

  /// @brief Method SetColorArrayImpl_Injected, addr 0x6f30b18, size 0x5c, virtual false, abstract: false, final false
  static inline void SetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [NativeName("SetColorFromScript")]
  /// @brief Method SetColorImpl, addr 0x6f2f494, size 0xd0, virtual false, abstract: false, final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl_Injected, addr 0x6f2f564, size 0x54, virtual false, abstract: false, final false
  static inline void SetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method SetConstantBuffer, addr 0x6f32d8c, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f32dd8, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f32dd4, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f32e20, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// [NativeName("SetConstantBufferFromScript")]
  /// @brief Method SetConstantBufferImpl, addr 0x6f2fba4, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl_Injected, addr 0x6f2fc84, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// [NativeName("SetConstantBufferFromScript")]
  /// @brief Method SetConstantGraphicsBufferImpl, addr 0x6f2fcf0, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl_Injected, addr 0x6f2fdd0, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// [FreeFunction("MaterialScripting::SetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method SetEnabledKeywords, addr 0x6f2cf50, size 0xb8, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6f2d008, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetFloat, addr 0x6f32b34, size 0x30, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x6f32b64, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetFloatArray, addr 0x6f32f54, size 0x3c, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray, addr 0x6f32e24, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray, addr 0x6f3236c, size 0xbc, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetFloatArray, addr 0x6f32f90, size 0x14, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray, addr 0x6f32ec4, size 0x90, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetFloatArray", HasExplicitThis = true)]
  /// @brief Method SetFloatArrayImpl, addr 0x6f30694, size 0x144, virtual false, abstract: false, final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetFloatArrayImpl_Injected, addr 0x6f307d8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [NativeName("SetFloatFromScript")]
  /// @brief Method SetFloatImpl, addr 0x6f2f378, size 0xc8, virtual false, abstract: false, final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetFloatImpl_Injected, addr 0x6f2f440, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name, float_t value);

  /// [NativeName("SetBufferFromScript")]
  /// @brief Method SetGraphicsBufferImpl, addr 0x6f2fa88, size 0xc8, virtual false, abstract: false, final false
  inline void SetGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGraphicsBufferImpl_Injected, addr 0x6f2fb50, size 0x54, virtual false, abstract: false, final false
  static inline void SetGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetInt, addr 0x6f32afc, size 0x30, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt, addr 0x6f32b2c, size 0x8, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// [NativeName("SetIntFromScript")]
  /// @brief Method SetIntImpl, addr 0x6f2f264, size 0xc0, virtual false, abstract: false, final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetIntImpl_Injected, addr 0x6f2f324, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name, int32_t value);

  /// @brief Method SetInteger, addr 0x6f32b68, size 0x30, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger, addr 0x6f32b98, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetKeyword, addr 0x6f2ce10, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// [FreeFunction("MaterialScripting::SetKeyword", HasExplicitThis = true)]
  /// @brief Method SetLocalKeyword, addr 0x6f2cba8, size 0xc0, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6f2cc68, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6f32c40, size 0x4c, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix, addr 0x6f32c8c, size 0x2c, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixArray, addr 0x6f333d4, size 0x3c, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6f332a4, size 0xa0, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray, addr 0x6f325a0, size 0xbc, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetMatrixArray, addr 0x6f33410, size 0x14, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6f33344, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetMatrixArray", HasExplicitThis = true)]
  /// @brief Method SetMatrixArrayImpl, addr 0x6f30b74, size 0x144, virtual false, abstract: false, final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl_Injected, addr 0x6f30cb8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [NativeName("SetMatrixFromScript")]
  /// @brief Method SetMatrixImpl, addr 0x6f2f5b8, size 0xc0, virtual false, abstract: false, final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixImpl_Injected, addr 0x6f2f678, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method SetOverrideTag, addr 0x6f2dda0, size 0x210, virtual false, abstract: false, final false
  inline void SetOverrideTag(::StringW tag, ::StringW val);

  /// @brief Method SetOverrideTag_Injected, addr 0x6f2dfb0, size 0x54, virtual false, abstract: false, final false
  static inline void SetOverrideTag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val);

  /// [FreeFunction("MaterialScripting::SetPass", HasExplicitThis = true)]
  /// @brief Method SetPass, addr 0x6f2e514, size 0xb8, virtual false, abstract: false, final false
  inline bool SetPass(int32_t pass);

  /// @brief Method SetPass_Injected, addr 0x6f2e5cc, size 0x44, virtual false, abstract: false, final false
  static inline bool SetPass_Injected(::System::IntPtr _unity_self, int32_t pass);

  /// [NativeName("SetRenderTextureFromScript")]
  /// @brief Method SetRenderTextureImpl, addr 0x6f2f810, size 0x100, virtual false, abstract: false, final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTextureImpl_Injected, addr 0x6f2f910, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRenderTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// [FreeFunction("MaterialScripting::SetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method SetShaderKeywords, addr 0x6f2e94c, size 0xb8, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6f2ea04, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> names);

  /// [FreeFunction("MaterialScripting::SetShaderPassEnabled", HasExplicitThis = true)]
  /// @brief Method SetShaderPassEnabled, addr 0x6f2d630, size 0x19c, virtual false, abstract: false, final false
  inline void SetShaderPassEnabled(::StringW passName, bool enabled);

  /// @brief Method SetShaderPassEnabled_Injected, addr 0x6f2d7cc, size 0x54, virtual false, abstract: false, final false
  static inline void SetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName, bool enabled);

  /// @brief Method SetTexture, addr 0x6f32ce8, size 0x38, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f32cb8, size 0x30, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture, addr 0x6f32d20, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f2b594, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// [NativeName("SetTextureFromScript")]
  /// @brief Method SetTextureImpl, addr 0x6f2f6cc, size 0xf0, virtual false, abstract: false, final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl_Injected, addr 0x6f2f7bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetTextureOffset, addr 0x6f33830, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureOffset(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffset, addr 0x6f2b6c4, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureOffset(int32_t nameID, ::UnityEngine::Vector2 value);

  /// [NativeName("SetTextureOffsetFromScript")]
  /// @brief Method SetTextureOffsetImpl, addr 0x6f3213c, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureOffsetImpl(int32_t name, ::UnityEngine::Vector2 offset);

  /// @brief Method SetTextureOffsetImpl_Injected, addr 0x6f32200, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector2 const> offset);

  /// @brief Method SetTextureScale, addr 0x6f33868, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureScale(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale, addr 0x6f2b7d4, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureScale(int32_t nameID, ::UnityEngine::Vector2 value);

  /// [NativeName("SetTextureScaleFromScript")]
  /// @brief Method SetTextureScaleImpl, addr 0x6f32254, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureScaleImpl(int32_t name, ::UnityEngine::Vector2 scale);

  /// @brief Method SetTextureScaleImpl_Injected, addr 0x6f32318, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureScaleImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector2 const> scale);

  /// @brief Method SetVector, addr 0x6f32bec, size 0x50, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector, addr 0x6f32c3c, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorArray, addr 0x6f33254, size 0x3c, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6f33124, size 0xa0, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray, addr 0x6f32428, size 0xbc, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetVectorArray, addr 0x6f33290, size 0x14, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6f331c4, size 0x90, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetVectorArray", HasExplicitThis = true)]
  /// @brief Method SetVectorArrayImpl, addr 0x6f30834, size 0x144, virtual false, abstract: false, final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetVectorArrayImpl_Injected, addr 0x6f30978, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// [Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", true)]
  /// @brief Method .ctor, addr 0x6f2a7ec, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW contents);

  /// @brief Method .ctor, addr 0x6f2aa84, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f2ab14, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* source);

  static inline int32_t getStaticF_k_ColorId();

  static inline int32_t getStaticF_k_MainTexId();

  /// @brief Method get_color, addr 0x6f2b2b0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_doubleSidedGI, addr 0x6f2d234, size 0xa8, virtual false, abstract: false, final false
  inline bool get_doubleSidedGI();

  /// @brief Method get_doubleSidedGI_Injected, addr 0x6f2d2dc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_doubleSidedGI_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableInstancing, addr 0x6f18e54, size 0xa8, virtual false, abstract: false, final false
  inline bool get_enableInstancing();

  /// @brief Method get_enableInstancing_Injected, addr 0x6f2d414, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableInstancing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledKeywords, addr 0x6f2d04c, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> get_enabledKeywords();

  /// @brief Method get_globalIlluminationFlags, addr 0x6f2d054, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags();

  /// @brief Method get_globalIlluminationFlags_Injected, addr 0x6f2d0fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mainTexture, addr 0x6f2b490, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_mainTextureOffset, addr 0x6f2b598, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureOffset();

  /// @brief Method get_mainTextureScale, addr 0x6f2b6c8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureScale();

  /// [NativeName("GetShader()->GetPassCount")]
  /// @brief Method get_passCount, addr 0x6f2d54c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6f2d5f4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetCustomRenderQueue")]
  /// @brief Method get_rawRenderQueue, addr 0x6f2c340, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_rawRenderQueue();

  /// @brief Method get_rawRenderQueue_Injected, addr 0x6f2c3e8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_rawRenderQueue_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetActualRenderQueue")]
  /// @brief Method get_renderQueue, addr 0x6f2c160, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6f2c208, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shader, addr 0x6f2afd0, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_shaderKeywords, addr 0x6f2ea48, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_shaderKeywords();

  /// @brief Method get_shader_Injected, addr 0x6f2b148, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_shader_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_k_ColorId(int32_t value);

  static inline void setStaticF_k_MainTexId(int32_t value);

  /// @brief Method set_color, addr 0x6f2b3e4, size 0xa8, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_doubleSidedGI, addr 0x6f2d318, size 0xb8, virtual false, abstract: false, final false
  inline void set_doubleSidedGI(bool value);

  /// @brief Method set_doubleSidedGI_Injected, addr 0x6f2d3d0, size 0x44, virtual false, abstract: false, final false
  static inline void set_doubleSidedGI_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enableInstancing, addr 0x6f2d450, size 0xb8, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_enableInstancing_Injected, addr 0x6f2d508, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableInstancing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enabledKeywords, addr 0x6f2d050, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> value);

  /// @brief Method set_globalIlluminationFlags, addr 0x6f2d138, size 0xb8, virtual false, abstract: false, final false
  inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_globalIlluminationFlags_Injected, addr 0x6f2d1f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_globalIlluminationFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_mainTexture, addr 0x6f2b50c, size 0x88, virtual false, abstract: false, final false
  inline void set_mainTexture(::UnityEngine::Texture* value);

  /// @brief Method set_mainTextureOffset, addr 0x6f2b634, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_mainTextureScale, addr 0x6f2b744, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureScale(::UnityEngine::Vector2 value);

  /// [NativeName("SetCustomRenderQueue")]
  /// @brief Method set_renderQueue, addr 0x6f2c244, size 0xb8, virtual false, abstract: false, final false
  inline void set_renderQueue(int32_t value);

  /// @brief Method set_renderQueue_Injected, addr 0x6f2c2fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderQueue_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shader, addr 0x6f2b184, size 0xe8, virtual false, abstract: false, final false
  inline void set_shader(::UnityEngine::Shader* value);

  /// @brief Method set_shaderKeywords, addr 0x6f2ea4c, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW> value);

  /// @brief Method set_shader_Injected, addr 0x6f2b26c, size 0x44, virtual false, abstract: false, final false
  static inline void set_shader_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Material();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Material(Material&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Material(Material const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Material) == 0x18, "Size mismatch!");

} // namespace UnityEngine
