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

  /// @brief Method ComputeCRC, addr 0x6f2db50, size 0xa8, virtual false, abstract: false, final false
  inline int32_t ComputeCRC();

  /// @brief Method ComputeCRC_Injected, addr 0x6f2dbf8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ComputeCRC_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("MaterialScripting::CopyMatchingPropertiesFrom", HasExplicitThis = true)]
  /// @brief Method CopyMatchingPropertiesFromMaterial, addr 0x6f2d65c, size 0xe8, virtual false, abstract: false, final false
  inline void CopyMatchingPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyMatchingPropertiesFromMaterial_Injected, addr 0x6f2d744, size 0x44, virtual false, abstract: false, final false
  static inline void CopyMatchingPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// [FreeFunction("MaterialScripting::CopyPropertiesFrom", HasExplicitThis = true)]
  /// @brief Method CopyPropertiesFromMaterial, addr 0x6f2d530, size 0xe8, virtual false, abstract: false, final false
  inline void CopyPropertiesFromMaterial(::UnityEngine::Material* mat);

  /// @brief Method CopyPropertiesFromMaterial_Injected, addr 0x6f2d618, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPropertiesFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr mat);

  /// [Obsolete("Creating materials from shader source string will be removed in the future. Use Shader assets instead.", true)]
  /// @brief Method Create, addr 0x6f296b8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Create(::StringW scriptContents);

  /// [FreeFunction("MaterialScripting::CreateWithMaterial")]
  /// @brief Method CreateWithMaterial, addr 0x6f29884, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithMaterial(/* [Writable] */ ::UnityEngine::Material* self, /* [NotNull] */ ::UnityEngine::Material* source);

  /// @brief Method CreateWithMaterial_Injected, addr 0x6f29960, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithMaterial_Injected(/* [Writable] */ ::UnityEngine::Material* self, ::System::IntPtr source);

  /// [FreeFunction("MaterialScripting::CreateWithShader")]
  /// @brief Method CreateWithShader, addr 0x6f29764, size 0xdc, virtual false, abstract: false, final false
  static inline void CreateWithShader(/* [Writable] */ ::UnityEngine::Material* self, /* [NotNull] */ ::UnityEngine::Shader* shader);

  /// @brief Method CreateWithShader_Injected, addr 0x6f29840, size 0x44, virtual false, abstract: false, final false
  static inline void CreateWithShader_Injected(/* [Writable] */ ::UnityEngine::Material* self, ::System::IntPtr shader);

  /// @brief Method DisableKeyword, addr 0x6f2b518, size 0x190, virtual false, abstract: false, final false
  inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6f2bd04, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6f2b6a8, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("MaterialScripting::DisableKeyword", HasExplicitThis = true)]
  /// @brief Method DisableLocalKeyword, addr 0x6f2b9cc, size 0xb8, virtual false, abstract: false, final false
  inline void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableLocalKeyword_Injected, addr 0x6f2ba84, size 0x44, virtual false, abstract: false, final false
  static inline void DisableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6f2b344, size 0x190, virtual false, abstract: false, final false
  inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6f2bcd8, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6f2b4d4, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("MaterialScripting::EnableKeyword", HasExplicitThis = true)]
  /// @brief Method EnableLocalKeyword, addr 0x6f2b8d0, size 0xb8, virtual false, abstract: false, final false
  inline void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableLocalKeyword_Injected, addr 0x6f2b988, size 0x44, virtual false, abstract: false, final false
  static inline void EnableLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method ExtractColorArray, addr 0x6f317cc, size 0x128, virtual false, abstract: false, final false
  inline void ExtractColorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractColorArray", HasExplicitThis = true)]
  /// @brief Method ExtractColorArrayImpl, addr 0x6f30b7c, size 0x188, virtual false, abstract: false, final false
  inline void ExtractColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color> val);

  /// @brief Method ExtractColorArrayImpl_Injected, addr 0x6f30d04, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractFloatArray, addr 0x6f3157c, size 0x128, virtual false, abstract: false, final false
  inline void ExtractFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractFloatArray", HasExplicitThis = true)]
  /// @brief Method ExtractFloatArrayImpl, addr 0x6f307c4, size 0x188, virtual false, abstract: false, final false
  inline void ExtractFloatArrayImpl(int32_t name, ::ArrayW<float_t> val);

  /// @brief Method ExtractFloatArrayImpl_Injected, addr 0x6f3094c, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractMatrixArray, addr 0x6f318f4, size 0x128, virtual false, abstract: false, final false
  inline void ExtractMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractMatrixArray", HasExplicitThis = true)]
  /// @brief Method ExtractMatrixArrayImpl, addr 0x6f30d58, size 0x188, virtual false, abstract: false, final false
  inline void ExtractMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> val);

  /// @brief Method ExtractMatrixArrayImpl_Injected, addr 0x6f30ee0, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractVectorArray, addr 0x6f316a4, size 0x128, virtual false, abstract: false, final false
  inline void ExtractVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction(Name = "MaterialScripting::ExtractVectorArray", HasExplicitThis = true)]
  /// @brief Method ExtractVectorArrayImpl, addr 0x6f309a0, size 0x188, virtual false, abstract: false, final false
  inline void ExtractVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> val);

  /// @brief Method ExtractVectorArrayImpl_Injected, addr 0x6f30b28, size 0x54, virtual false, abstract: false, final false
  static inline void ExtractVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method FindPass, addr 0x6f2cae0, size 0x19c, virtual false, abstract: false, final false
  inline int32_t FindPass(::StringW passName);

  /// @brief Method FindPass_Injected, addr 0x6f2cc7c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetBuffer, addr 0x6f324d0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBuffer(::StringW name);

  /// [NativeName("GetBufferFromScript")]
  /// @brief Method GetBufferImpl, addr 0x6f2f37c, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetBufferImpl(int32_t name);

  /// @brief Method GetBufferImpl_Injected, addr 0x6f2f444, size 0x54, virtual false, abstract: false, final false
  static inline void GetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetColor, addr 0x6f323f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW name);

  /// @brief Method GetColor, addr 0x6f2a300, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x6f3256c, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArray(::StringW name);

  /// @brief Method GetColorArray, addr 0x6f3258c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArray(int32_t nameID);

  /// @brief Method GetColorArray, addr 0x6f326b4, size 0x30, virtual false, abstract: false, final false
  inline void GetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method GetColorArray, addr 0x6f326e4, size 0x4, virtual false, abstract: false, final false
  inline void GetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetColorArrayCount", HasExplicitThis = true)]
  /// @brief Method GetColorArrayCountImpl, addr 0x6f305cc, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetColorArrayCountImpl(int32_t name);

  /// @brief Method GetColorArrayCountImpl_Injected, addr 0x6f30684, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetColorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetColorArray", HasExplicitThis = true)]
  /// @brief Method GetColorArrayImpl, addr 0x6f30004, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetColorArrayImpl(int32_t name);

  /// @brief Method GetColorArrayImpl_Injected, addr 0x6f30198, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetColorFromScript")]
  /// @brief Method GetColorImpl, addr 0x6f2ef54, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetColorImpl_Injected, addr 0x6f2f028, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetConstantBuffer, addr 0x6f324f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBuffer(::StringW name);

  /// [NativeName("GetConstantBufferFromScript")]
  /// @brief Method GetConstantBufferImpl, addr 0x6f2f498, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle GetConstantBufferImpl(int32_t name);

  /// @brief Method GetConstantBufferImpl_Injected, addr 0x6f2f560, size 0x54, virtual false, abstract: false, final false
  static inline void GetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret);

  /// @brief Method GetDefaultLineMaterial, addr 0x6f29d8c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultLineMaterial();

  /// @brief Method GetDefaultLineMaterial_Injected, addr 0x6f29ec8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultLineMaterial_Injected();

  /// @brief Method GetDefaultMaterial, addr 0x6f29ac4, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial();

  /// @brief Method GetDefaultMaterial_Injected, addr 0x6f29c00, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultMaterial_Injected();

  /// @brief Method GetDefaultParticleMaterial, addr 0x6f29c28, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultParticleMaterial();

  /// @brief Method GetDefaultParticleMaterial_Injected, addr 0x6f29d64, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultParticleMaterial_Injected();

  /// [FreeFunction("MaterialScripting::GetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method GetEnabledKeywords, addr 0x6f2bd8c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords();

  /// @brief Method GetEnabledKeywords_Injected, addr 0x6f2be34, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetFirstPropertyNameIdByAttributeFromScript")]
  /// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x6f2a248, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFirstPropertyNameIdByAttribute_Injected, addr 0x6f2a6f8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFirstPropertyNameIdByAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShaderPropertyFlags attributeFlag);

  /// @brief Method GetFloat, addr 0x6f323a8, size 0x20, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat, addr 0x6f323c8, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x6f32510, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArray(::StringW name);

  /// @brief Method GetFloatArray, addr 0x6f32530, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArray(int32_t nameID);

  /// @brief Method GetFloatArray, addr 0x6f32680, size 0x30, virtual false, abstract: false, final false
  inline void GetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetFloatArray, addr 0x6f326b0, size 0x4, virtual false, abstract: false, final false
  inline void GetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetFloatArrayCount", HasExplicitThis = true)]
  /// @brief Method GetFloatArrayCountImpl, addr 0x6f303d4, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetFloatArrayCountImpl(int32_t name);

  /// @brief Method GetFloatArrayCountImpl_Injected, addr 0x6f3048c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFloatArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetFloatArray", HasExplicitThis = true)]
  /// @brief Method GetFloatArrayImpl, addr 0x6f2fc34, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetFloatArrayImpl(int32_t name);

  /// @brief Method GetFloatArrayImpl_Injected, addr 0x6f2fdc8, size 0x54, virtual false, abstract: false, final false
  static inline void GetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetFloatFromScript")]
  /// @brief Method GetFloatImpl, addr 0x6f2ee58, size 0xb8, virtual false, abstract: false, final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetFloatImpl_Injected, addr 0x6f2ef10, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInt, addr 0x6f32344, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW name);

  /// @brief Method GetInt, addr 0x6f32380, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetInt(int32_t nameID);

  /// [NativeName("GetIntFromScript")]
  /// @brief Method GetIntImpl, addr 0x6f2ed5c, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetIntImpl(int32_t name);

  /// @brief Method GetIntImpl_Injected, addr 0x6f2ee14, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetInteger, addr 0x6f323cc, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger, addr 0x6f323ec, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t nameID);

  /// @brief Method GetMatrix, addr 0x6f32434, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(::StringW name);

  /// @brief Method GetMatrix, addr 0x6f32480, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x6f32624, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArray(::StringW name);

  /// @brief Method GetMatrixArray, addr 0x6f32644, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArray(int32_t nameID);

  /// @brief Method GetMatrixArray, addr 0x6f3271c, size 0x30, virtual false, abstract: false, final false
  inline void GetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetMatrixArray, addr 0x6f3274c, size 0x4, virtual false, abstract: false, final false
  inline void GetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetMatrixArrayCount", HasExplicitThis = true)]
  /// @brief Method GetMatrixArrayCountImpl, addr 0x6f306c8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetMatrixArrayCountImpl_Injected, addr 0x6f30780, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMatrixArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetMatrixArray", HasExplicitThis = true)]
  /// @brief Method GetMatrixArrayImpl, addr 0x6f301ec, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> GetMatrixArrayImpl(int32_t name);

  /// @brief Method GetMatrixArrayImpl_Injected, addr 0x6f30380, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetMatrixFromScript")]
  /// @brief Method GetMatrixImpl, addr 0x6f2f07c, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetMatrixImpl_Injected, addr 0x6f2f164, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetPassName, addr 0x6f2c924, size 0x168, virtual false, abstract: false, final false
  inline ::StringW GetPassName(int32_t pass);

  /// @brief Method GetPassName_Injected, addr 0x6f2ca8c, size 0x54, virtual false, abstract: false, final false
  static inline void GetPassName_Injected(::System::IntPtr _unity_self, int32_t pass, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("MaterialScripting::GetPropertyCount", HasExplicitThis = true)]
  /// @brief Method GetPropertyCount, addr 0x6f2da6c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyCount_Injected, addr 0x6f2db14, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPropertyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyNames, addr 0x6f3280c, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyNames(::UnityEngine::MaterialPropertyType type);

  /// [FreeFunction("MaterialScripting::GetPropertyNames", HasExplicitThis = true)]
  /// @brief Method GetPropertyNamesImpl, addr 0x6f2d970, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyNamesImpl(int32_t propertyType);

  /// @brief Method GetPropertyNamesImpl_Injected, addr 0x6f2da28, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyNamesImpl_Injected(::System::IntPtr _unity_self, int32_t propertyType);

  /// [FreeFunction("MaterialScripting::GetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method GetShaderKeywords, addr 0x6f2d788, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetShaderKeywords();

  /// @brief Method GetShaderKeywords_Injected, addr 0x6f2d830, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetShaderKeywords_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("MaterialScripting::GetShaderPassEnabled", HasExplicitThis = true)]
  /// @brief Method GetShaderPassEnabled, addr 0x6f2c740, size 0x1a0, virtual false, abstract: false, final false
  inline bool GetShaderPassEnabled(::StringW passName);

  /// @brief Method GetShaderPassEnabled_Injected, addr 0x6f2c8e0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method GetTag, addr 0x6f2d250, size 0x68, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks);

  /// @brief Method GetTag, addr 0x6f2d244, size 0xc, virtual false, abstract: false, final false
  inline ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue);

  /// [NativeName("GetTag")]
  /// @brief Method GetTagImpl, addr 0x6f2cf24, size 0x2b4, virtual false, abstract: false, final false
  inline ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue);

  /// @brief Method GetTagImpl_Injected, addr 0x6f2d1d8, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTagImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, bool currentSubShaderOnly,
                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> defaultValue, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetTexture, addr 0x6f324b0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW name);

  /// @brief Method GetTexture, addr 0x6f2a428, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t nameID);

  /// [NativeName("GetTextureFromScript")]
  /// @brief Method GetTextureImpl, addr 0x6f2f1b8, size 0x180, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t name);

  /// @brief Method GetTextureImpl_Injected, addr 0x6f2f338, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetTextureOffset, addr 0x6f327c0, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(::StringW name);

  /// @brief Method GetTextureOffset, addr 0x6f2a53c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureOffset(int32_t nameID);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNameIDs", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNameIDs, addr 0x6f2dd18, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTexturePropertyNameIDs();

  /// @brief Method GetTexturePropertyNameIDs, addr 0x6f2e130, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDs(::System::Collections::Generic::List_1<int32_t>* outNames);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNameIDsInternal", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNameIDsInternal, addr 0x6f2dfe0, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNameIDsInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDsInternal_Injected, addr 0x6f2e098, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNameIDs_Injected, addr 0x6f2dea0, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNameIDs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNames", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNames, addr 0x6f2dc34, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetTexturePropertyNames();

  /// @brief Method GetTexturePropertyNames, addr 0x6f2e0dc, size 0x54, virtual false, abstract: false, final false
  inline void GetTexturePropertyNames(::System::Collections::Generic::List_1<::StringW>* outNames);

  /// [FreeFunction("MaterialScripting::GetTexturePropertyNamesInternal", HasExplicitThis = true)]
  /// @brief Method GetTexturePropertyNamesInternal, addr 0x6f2dee4, size 0xb8, virtual false, abstract: false, final false
  inline void GetTexturePropertyNamesInternal(::System::Object* outNames);

  /// @brief Method GetTexturePropertyNamesInternal_Injected, addr 0x6f2df9c, size 0x44, virtual false, abstract: false, final false
  static inline void GetTexturePropertyNamesInternal_Injected(::System::IntPtr _unity_self, ::System::Object* outNames);

  /// @brief Method GetTexturePropertyNames_Injected, addr 0x6f2dcdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetTexturePropertyNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTextureScale, addr 0x6f327ec, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(::StringW name);

  /// @brief Method GetTextureScale, addr 0x6f2a660, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureScale(int32_t nameID);

  /// [NativeName("GetTextureScaleAndOffsetFromScript")]
  /// @brief Method GetTextureScaleAndOffsetImpl, addr 0x6f30f34, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name);

  /// @brief Method GetTextureScaleAndOffsetImpl_Injected, addr 0x6f31008, size 0x54, virtual false, abstract: false, final false
  static inline void GetTextureScaleAndOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetVector, addr 0x6f32410, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(::StringW name);

  /// @brief Method GetVector, addr 0x6f32430, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x6f325c8, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArray(::StringW name);

  /// @brief Method GetVectorArray, addr 0x6f325e8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArray(int32_t nameID);

  /// @brief Method GetVectorArray, addr 0x6f326e8, size 0x30, virtual false, abstract: false, final false
  inline void GetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetVectorArray, addr 0x6f32718, size 0x4, virtual false, abstract: false, final false
  inline void GetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction(Name = "MaterialScripting::GetVectorArrayCount", HasExplicitThis = true)]
  /// @brief Method GetVectorArrayCountImpl, addr 0x6f304d0, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetVectorArrayCountImpl(int32_t name);

  /// @brief Method GetVectorArrayCountImpl_Injected, addr 0x6f30588, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVectorArrayCountImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// [FreeFunction(Name = "MaterialScripting::GetVectorArray", HasExplicitThis = true)]
  /// @brief Method GetVectorArrayImpl, addr 0x6f2fe1c, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> GetVectorArrayImpl(int32_t name);

  /// @brief Method GetVectorArrayImpl_Injected, addr 0x6f2ffb0, size 0x54, virtual false, abstract: false, final false
  static inline void GetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method HasBuffer, addr 0x6f2af3c, size 0x20, virtual false, abstract: false, final false
  inline bool HasBuffer(::StringW name);

  /// @brief Method HasBuffer, addr 0x6f2af5c, size 0x4, virtual false, abstract: false, final false
  inline bool HasBuffer(int32_t nameID);

  /// [NativeName("HasBufferFromScript")]
  /// @brief Method HasBufferImpl, addr 0x6f2ae40, size 0xb8, virtual false, abstract: false, final false
  inline bool HasBufferImpl(int32_t name);

  /// @brief Method HasBufferImpl_Injected, addr 0x6f2aef8, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasColor, addr 0x6f2ae1c, size 0x20, virtual false, abstract: false, final false
  inline bool HasColor(::StringW name);

  /// @brief Method HasColor, addr 0x6f2ae3c, size 0x4, virtual false, abstract: false, final false
  inline bool HasColor(int32_t nameID);

  /// @brief Method HasConstantBuffer, addr 0x6f2b05c, size 0x20, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(::StringW name);

  /// @brief Method HasConstantBuffer, addr 0x6f2b07c, size 0x4, virtual false, abstract: false, final false
  inline bool HasConstantBuffer(int32_t nameID);

  /// [NativeName("HasConstantBufferFromScript")]
  /// @brief Method HasConstantBufferImpl, addr 0x6f2af60, size 0xb8, virtual false, abstract: false, final false
  inline bool HasConstantBufferImpl(int32_t name);

  /// @brief Method HasConstantBufferImpl_Injected, addr 0x6f2b018, size 0x44, virtual false, abstract: false, final false
  static inline bool HasConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasFloat, addr 0x6f2a954, size 0x20, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// @brief Method HasFloat, addr 0x6f2a974, size 0x4, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// [NativeName("HasFloatFromScript")]
  /// @brief Method HasFloatImpl, addr 0x6f2a858, size 0xb8, virtual false, abstract: false, final false
  inline bool HasFloatImpl(int32_t name);

  /// @brief Method HasFloatImpl_Injected, addr 0x6f2a910, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInt, addr 0x6f2a978, size 0x20, virtual false, abstract: false, final false
  inline bool HasInt(::StringW name);

  /// @brief Method HasInt, addr 0x6f2a998, size 0x4, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// [NativeName("HasIntegerFromScript")]
  /// @brief Method HasIntImpl, addr 0x6f2a99c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasIntImpl(int32_t name);

  /// @brief Method HasIntImpl_Injected, addr 0x6f2aa54, size 0x44, virtual false, abstract: false, final false
  static inline bool HasIntImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasInteger, addr 0x6f2aa98, size 0x20, virtual false, abstract: false, final false
  inline bool HasInteger(::StringW name);

  /// @brief Method HasInteger, addr 0x6f2aab8, size 0x4, virtual false, abstract: false, final false
  inline bool HasInteger(int32_t nameID);

  /// @brief Method HasMatrix, addr 0x6f2acd8, size 0x20, virtual false, abstract: false, final false
  inline bool HasMatrix(::StringW name);

  /// @brief Method HasMatrix, addr 0x6f2acf8, size 0x4, virtual false, abstract: false, final false
  inline bool HasMatrix(int32_t nameID);

  /// [NativeName("HasMatrixFromScript")]
  /// @brief Method HasMatrixImpl, addr 0x6f2abdc, size 0xb8, virtual false, abstract: false, final false
  inline bool HasMatrixImpl(int32_t name);

  /// @brief Method HasMatrixImpl_Injected, addr 0x6f2ac94, size 0x44, virtual false, abstract: false, final false
  static inline bool HasMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasProperty, addr 0x6f2a838, size 0x20, virtual false, abstract: false, final false
  inline bool HasProperty(::StringW name);

  /// [NativeName("HasPropertyFromScript")]
  /// @brief Method HasProperty, addr 0x6f2a73c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasProperty(int32_t nameID);

  /// @brief Method HasProperty_Injected, addr 0x6f2a7f4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasProperty_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasTexture, addr 0x6f2abb8, size 0x20, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// @brief Method HasTexture, addr 0x6f2abd8, size 0x4, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// [NativeName("HasTextureFromScript")]
  /// @brief Method HasTextureImpl, addr 0x6f2aabc, size 0xb8, virtual false, abstract: false, final false
  inline bool HasTextureImpl(int32_t name);

  /// @brief Method HasTextureImpl_Injected, addr 0x6f2ab74, size 0x44, virtual false, abstract: false, final false
  static inline bool HasTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method HasVector, addr 0x6f2adf8, size 0x20, virtual false, abstract: false, final false
  inline bool HasVector(::StringW name);

  /// @brief Method HasVector, addr 0x6f2ae18, size 0x4, virtual false, abstract: false, final false
  inline bool HasVector(int32_t nameID);

  /// [NativeName("HasVectorFromScript")]
  /// @brief Method HasVectorImpl, addr 0x6f2acfc, size 0xb8, virtual false, abstract: false, final false
  inline bool HasVectorImpl(int32_t name);

  /// @brief Method HasVectorImpl_Injected, addr 0x6f2adb4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVectorImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method IsKeywordEnabled, addr 0x6f2b6ec, size 0x1a0, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6f2bd5c, size 0x30, virtual false, abstract: false, final false
  inline bool IsKeywordEnabled(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6f2b88c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("MaterialScripting::IsKeywordEnabled", HasExplicitThis = true)]
  /// @brief Method IsLocalKeywordEnabled, addr 0x6f2bbdc, size 0xb8, virtual false, abstract: false, final false
  inline bool IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method IsLocalKeywordEnabled_Injected, addr 0x6f2bc94, size 0x44, virtual false, abstract: false, final false
  static inline bool IsLocalKeywordEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("MaterialScripting::Lerp", HasExplicitThis = true)]
  /// [NativeThrows]
  /// @brief Method Lerp, addr 0x6f2d2b8, size 0x118, virtual false, abstract: false, final false
  inline void Lerp(::UnityEngine::Material* start, ::UnityEngine::Material* end, float_t t);

  /// @brief Method Lerp_Injected, addr 0x6f2d3d0, size 0x64, virtual false, abstract: false, final false
  static inline void Lerp_Injected(::System::IntPtr _unity_self, ::System::IntPtr start, ::System::IntPtr end, float_t t);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", true)]
  static inline ::UnityEngine::Material* New_ctor(::StringW contents);

  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader* shader);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material* source);

  /// @brief Method SetBuffer, addr 0x6f31c44, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x6f31c78, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetBuffer, addr 0x6f31c74, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBuffer, addr 0x6f31ca8, size 0x4, virtual false, abstract: false, final false
  inline void SetBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// [NativeName("SetBufferFromScript")]
  /// @brief Method SetBufferImpl, addr 0x6f2e88c, size 0xc8, virtual false, abstract: false, final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBufferImpl_Injected, addr 0x6f2e954, size 0x54, virtual false, abstract: false, final false
  static inline void SetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetColor, addr 0x6f31abc, size 0x50, virtual false, abstract: false, final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor, addr 0x6f2a3ac, size 0x4, virtual false, abstract: false, final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetColorArray, addr 0x6f31ff4, size 0x3c, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::ArrayW<::UnityEngine::Color> values);

  /// @brief Method SetColorArray, addr 0x6f31ec4, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// @brief Method SetColorArray, addr 0x6f31404, size 0xbc, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t name, ::ArrayW<::UnityEngine::Color> values, int32_t count);

  /// @brief Method SetColorArray, addr 0x6f32030, size 0x14, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::ArrayW<::UnityEngine::Color> values);

  /// @brief Method SetColorArray, addr 0x6f31f64, size 0x90, virtual false, abstract: false, final false
  inline void SetColorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Color>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetColorArray", HasExplicitThis = true)]
  /// @brief Method SetColorArrayImpl, addr 0x6f2f8f4, size 0x144, virtual false, abstract: false, final false
  inline void SetColorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Color> values, int32_t count);

  /// @brief Method SetColorArrayImpl_Injected, addr 0x6f2fa38, size 0x5c, virtual false, abstract: false, final false
  static inline void SetColorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [NativeName("SetColorFromScript")]
  /// @brief Method SetColorImpl, addr 0x6f2e3b4, size 0xd0, virtual false, abstract: false, final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl_Injected, addr 0x6f2e484, size 0x54, virtual false, abstract: false, final false
  static inline void SetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method SetConstantBuffer, addr 0x6f31cac, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f31cf8, size 0x48, virtual false, abstract: false, final false
  inline void SetConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f31cf4, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBuffer, addr 0x6f31d40, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// [NativeName("SetConstantBufferFromScript")]
  /// @brief Method SetConstantBufferImpl, addr 0x6f2eac4, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl_Injected, addr 0x6f2eba4, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// [NativeName("SetConstantBufferFromScript")]
  /// @brief Method SetConstantGraphicsBufferImpl, addr 0x6f2ec10, size 0xe0, virtual false, abstract: false, final false
  inline void SetConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantGraphicsBufferImpl_Injected, addr 0x6f2ecf0, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// [FreeFunction("MaterialScripting::SetEnabledKeywords", HasExplicitThis = true)]
  /// @brief Method SetEnabledKeywords, addr 0x6f2be70, size 0xb8, virtual false, abstract: false, final false
  inline void SetEnabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetEnabledKeywords_Injected, addr 0x6f2bf28, size 0x44, virtual false, abstract: false, final false
  static inline void SetEnabledKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Rendering::LocalKeyword> keywords);

  /// @brief Method SetFloat, addr 0x6f31a54, size 0x30, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x6f31a84, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetFloatArray, addr 0x6f31e74, size 0x3c, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray, addr 0x6f31d44, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray, addr 0x6f3128c, size 0xbc, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetFloatArray, addr 0x6f31eb0, size 0x14, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetFloatArray, addr 0x6f31de4, size 0x90, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetFloatArray", HasExplicitThis = true)]
  /// @brief Method SetFloatArrayImpl, addr 0x6f2f5b4, size 0x144, virtual false, abstract: false, final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetFloatArrayImpl_Injected, addr 0x6f2f6f8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [NativeName("SetFloatFromScript")]
  /// @brief Method SetFloatImpl, addr 0x6f2e298, size 0xc8, virtual false, abstract: false, final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetFloatImpl_Injected, addr 0x6f2e360, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name, float_t value);

  /// [NativeName("SetBufferFromScript")]
  /// @brief Method SetGraphicsBufferImpl, addr 0x6f2e9a8, size 0xc8, virtual false, abstract: false, final false
  inline void SetGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGraphicsBufferImpl_Injected, addr 0x6f2ea70, size 0x54, virtual false, abstract: false, final false
  static inline void SetGraphicsBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetInt, addr 0x6f31a1c, size 0x30, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt, addr 0x6f31a4c, size 0x8, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// [NativeName("SetIntFromScript")]
  /// @brief Method SetIntImpl, addr 0x6f2e184, size 0xc0, virtual false, abstract: false, final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetIntImpl_Injected, addr 0x6f2e244, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name, int32_t value);

  /// @brief Method SetInteger, addr 0x6f31a88, size 0x30, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger, addr 0x6f31ab8, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetKeyword, addr 0x6f2bd30, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// [FreeFunction("MaterialScripting::SetKeyword", HasExplicitThis = true)]
  /// @brief Method SetLocalKeyword, addr 0x6f2bac8, size 0xc0, virtual false, abstract: false, final false
  inline void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetLocalKeyword_Injected, addr 0x6f2bb88, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetMatrix, addr 0x6f31b60, size 0x4c, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix, addr 0x6f31bac, size 0x2c, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixArray, addr 0x6f322f4, size 0x3c, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6f321c4, size 0xa0, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetMatrixArray, addr 0x6f314c0, size 0xbc, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetMatrixArray, addr 0x6f32330, size 0x14, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetMatrixArray, addr 0x6f32264, size 0x90, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetMatrixArray", HasExplicitThis = true)]
  /// @brief Method SetMatrixArrayImpl, addr 0x6f2fa94, size 0x144, virtual false, abstract: false, final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl_Injected, addr 0x6f2fbd8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [NativeName("SetMatrixFromScript")]
  /// @brief Method SetMatrixImpl, addr 0x6f2e4d8, size 0xc0, virtual false, abstract: false, final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixImpl_Injected, addr 0x6f2e598, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method SetOverrideTag, addr 0x6f2ccc0, size 0x210, virtual false, abstract: false, final false
  inline void SetOverrideTag(::StringW tag, ::StringW val);

  /// @brief Method SetOverrideTag_Injected, addr 0x6f2ced0, size 0x54, virtual false, abstract: false, final false
  static inline void SetOverrideTag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tag, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val);

  /// [FreeFunction("MaterialScripting::SetPass", HasExplicitThis = true)]
  /// @brief Method SetPass, addr 0x6f2d434, size 0xb8, virtual false, abstract: false, final false
  inline bool SetPass(int32_t pass);

  /// @brief Method SetPass_Injected, addr 0x6f2d4ec, size 0x44, virtual false, abstract: false, final false
  static inline bool SetPass_Injected(::System::IntPtr _unity_self, int32_t pass);

  /// [NativeName("SetRenderTextureFromScript")]
  /// @brief Method SetRenderTextureImpl, addr 0x6f2e730, size 0x100, virtual false, abstract: false, final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTextureImpl_Injected, addr 0x6f2e830, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRenderTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// [FreeFunction("MaterialScripting::SetShaderKeywords", HasExplicitThis = true)]
  /// @brief Method SetShaderKeywords, addr 0x6f2d86c, size 0xb8, virtual false, abstract: false, final false
  inline void SetShaderKeywords(::ArrayW<::StringW> names);

  /// @brief Method SetShaderKeywords_Injected, addr 0x6f2d924, size 0x44, virtual false, abstract: false, final false
  static inline void SetShaderKeywords_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> names);

  /// [FreeFunction("MaterialScripting::SetShaderPassEnabled", HasExplicitThis = true)]
  /// @brief Method SetShaderPassEnabled, addr 0x6f2c550, size 0x19c, virtual false, abstract: false, final false
  inline void SetShaderPassEnabled(::StringW passName, bool enabled);

  /// @brief Method SetShaderPassEnabled_Injected, addr 0x6f2c6ec, size 0x54, virtual false, abstract: false, final false
  static inline void SetShaderPassEnabled_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName, bool enabled);

  /// @brief Method SetTexture, addr 0x6f31c08, size 0x38, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f31bd8, size 0x30, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture, addr 0x6f31c40, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x6f2a4b4, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// [NativeName("SetTextureFromScript")]
  /// @brief Method SetTextureImpl, addr 0x6f2e5ec, size 0xf0, virtual false, abstract: false, final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl_Injected, addr 0x6f2e6dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetTextureOffset, addr 0x6f32750, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureOffset(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureOffset, addr 0x6f2a5e4, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureOffset(int32_t nameID, ::UnityEngine::Vector2 value);

  /// [NativeName("SetTextureOffsetFromScript")]
  /// @brief Method SetTextureOffsetImpl, addr 0x6f3105c, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureOffsetImpl(int32_t name, ::UnityEngine::Vector2 offset);

  /// @brief Method SetTextureOffsetImpl_Injected, addr 0x6f31120, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureOffsetImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector2 const> offset);

  /// @brief Method SetTextureScale, addr 0x6f32788, size 0x38, virtual false, abstract: false, final false
  inline void SetTextureScale(::StringW name, ::UnityEngine::Vector2 value);

  /// @brief Method SetTextureScale, addr 0x6f2a6f4, size 0x4, virtual false, abstract: false, final false
  inline void SetTextureScale(int32_t nameID, ::UnityEngine::Vector2 value);

  /// [NativeName("SetTextureScaleFromScript")]
  /// @brief Method SetTextureScaleImpl, addr 0x6f31174, size 0xc4, virtual false, abstract: false, final false
  inline void SetTextureScaleImpl(int32_t name, ::UnityEngine::Vector2 scale);

  /// @brief Method SetTextureScaleImpl_Injected, addr 0x6f31238, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureScaleImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Vector2 const> scale);

  /// @brief Method SetVector, addr 0x6f31b0c, size 0x50, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector, addr 0x6f31b5c, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorArray, addr 0x6f32174, size 0x3c, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6f32044, size 0xa0, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetVectorArray, addr 0x6f31348, size 0xbc, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetVectorArray, addr 0x6f321b0, size 0x14, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetVectorArray, addr 0x6f320e4, size 0x90, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction(Name = "MaterialScripting::SetVectorArray", HasExplicitThis = true)]
  /// @brief Method SetVectorArrayImpl, addr 0x6f2f754, size 0x144, virtual false, abstract: false, final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetVectorArrayImpl_Injected, addr 0x6f2f898, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// [Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", true)]
  /// @brief Method .ctor, addr 0x6f2970c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW contents);

  /// @brief Method .ctor, addr 0x6f299a4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f29a34, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* source);

  static inline int32_t getStaticF_k_ColorId();

  static inline int32_t getStaticF_k_MainTexId();

  /// @brief Method get_color, addr 0x6f2a1d0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_doubleSidedGI, addr 0x6f2c154, size 0xa8, virtual false, abstract: false, final false
  inline bool get_doubleSidedGI();

  /// @brief Method get_doubleSidedGI_Injected, addr 0x6f2c1fc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_doubleSidedGI_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableInstancing, addr 0x6f17d74, size 0xa8, virtual false, abstract: false, final false
  inline bool get_enableInstancing();

  /// @brief Method get_enableInstancing_Injected, addr 0x6f2c334, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableInstancing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledKeywords, addr 0x6f2bf6c, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> get_enabledKeywords();

  /// @brief Method get_globalIlluminationFlags, addr 0x6f2bf74, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags();

  /// @brief Method get_globalIlluminationFlags_Injected, addr 0x6f2c01c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mainTexture, addr 0x6f2a3b0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_mainTextureOffset, addr 0x6f2a4b8, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureOffset();

  /// @brief Method get_mainTextureScale, addr 0x6f2a5e8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mainTextureScale();

  /// [NativeName("GetShader()->GetPassCount")]
  /// @brief Method get_passCount, addr 0x6f2c46c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6f2c514, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetCustomRenderQueue")]
  /// @brief Method get_rawRenderQueue, addr 0x6f2b260, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_rawRenderQueue();

  /// @brief Method get_rawRenderQueue_Injected, addr 0x6f2b308, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_rawRenderQueue_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetActualRenderQueue")]
  /// @brief Method get_renderQueue, addr 0x6f2b080, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6f2b128, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shader, addr 0x6f29ef0, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_shaderKeywords, addr 0x6f2d968, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_shaderKeywords();

  /// @brief Method get_shader_Injected, addr 0x6f2a068, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_shader_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_k_ColorId(int32_t value);

  static inline void setStaticF_k_MainTexId(int32_t value);

  /// @brief Method set_color, addr 0x6f2a304, size 0xa8, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_doubleSidedGI, addr 0x6f2c238, size 0xb8, virtual false, abstract: false, final false
  inline void set_doubleSidedGI(bool value);

  /// @brief Method set_doubleSidedGI_Injected, addr 0x6f2c2f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_doubleSidedGI_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enableInstancing, addr 0x6f2c370, size 0xb8, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_enableInstancing_Injected, addr 0x6f2c428, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableInstancing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enabledKeywords, addr 0x6f2bf70, size 0x4, virtual false, abstract: false, final false
  inline void set_enabledKeywords(::ArrayW<::UnityEngine::Rendering::LocalKeyword> value);

  /// @brief Method set_globalIlluminationFlags, addr 0x6f2c058, size 0xb8, virtual false, abstract: false, final false
  inline void set_globalIlluminationFlags(::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_globalIlluminationFlags_Injected, addr 0x6f2c110, size 0x44, virtual false, abstract: false, final false
  static inline void set_globalIlluminationFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::MaterialGlobalIlluminationFlags value);

  /// @brief Method set_mainTexture, addr 0x6f2a42c, size 0x88, virtual false, abstract: false, final false
  inline void set_mainTexture(::UnityEngine::Texture* value);

  /// @brief Method set_mainTextureOffset, addr 0x6f2a554, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_mainTextureScale, addr 0x6f2a664, size 0x90, virtual false, abstract: false, final false
  inline void set_mainTextureScale(::UnityEngine::Vector2 value);

  /// [NativeName("SetCustomRenderQueue")]
  /// @brief Method set_renderQueue, addr 0x6f2b164, size 0xb8, virtual false, abstract: false, final false
  inline void set_renderQueue(int32_t value);

  /// @brief Method set_renderQueue_Injected, addr 0x6f2b21c, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderQueue_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shader, addr 0x6f2a0a4, size 0xe8, virtual false, abstract: false, final false
  inline void set_shader(::UnityEngine::Shader* value);

  /// @brief Method set_shaderKeywords, addr 0x6f2d96c, size 0x4, virtual false, abstract: false, final false
  inline void set_shaderKeywords(::ArrayW<::StringW> value);

  /// @brief Method set_shader_Injected, addr 0x6f2a18c, size 0x44, virtual false, abstract: false, final false
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
