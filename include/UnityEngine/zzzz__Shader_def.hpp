#pragma once
// IWYU pragma private; include "UnityEngine\Shader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
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
MARK_REF_T(::UnityEngine::Shader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Shader*, "UnityEngine", "Shader");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_disableBatching)) ::UnityEngine::DisableBatchingType disableBatching;

  __declspec(property(get = get_isSupported)) bool isSupported;

  __declspec(property(get = get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace keywordSpace;

  __declspec(property(get = get_maximumLOD, put = set_maximumLOD)) int32_t maximumLOD;

  __declspec(property(get = get_passCount)) int32_t passCount;

  __declspec(property(get = get_renderQueue)) int32_t renderQueue;

  __declspec(property(get = get_subshaderCount)) int32_t subshaderCount;

  /// @brief Method CheckPropertyIndex, addr 0x6a973a8, size 0x70, virtual false, abstract: false, final false
  static inline void CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex);

  /// @brief Method DisableKeyword, addr 0x6a925a0, size 0x124, virtual false, abstract: false, final false
  static inline void DisableKeyword(::StringW keyword);

  /// @brief Method DisableKeyword, addr 0x6a92abc, size 0x44, virtual false, abstract: false, final false
  static inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeywordFast, addr 0x6a928e8, size 0x40, virtual false, abstract: false, final false
  static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableKeywordFast_Injected, addr 0x6a92928, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword_Injected, addr 0x6a926c4, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EnableKeyword, addr 0x6a92440, size 0x124, virtual false, abstract: false, final false
  static inline void EnableKeyword(::StringW keyword);

  /// @brief Method EnableKeyword, addr 0x6a92a78, size 0x44, virtual false, abstract: false, final false
  static inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeywordFast, addr 0x6a9286c, size 0x40, virtual false, abstract: false, final false
  static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableKeywordFast_Injected, addr 0x6a928ac, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword_Injected, addr 0x6a92564, size 0x3c, virtual false, abstract: false, final false
  static inline void EnableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method ExtractGlobalFloatArray, addr 0x6a952cc, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method ExtractGlobalFloatArrayImpl, addr 0x6a94c54, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl(int32_t name, ::by_ref<::ArrayW<float_t>> val);

  /// @brief Method ExtractGlobalFloatArrayImpl_Injected, addr 0x6a94d7c, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalMatrixArray, addr 0x6a95544, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x6a94f2c, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>> val);

  /// @brief Method ExtractGlobalMatrixArrayImpl_Injected, addr 0x6a95054, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method ExtractGlobalVectorArray, addr 0x6a95408, size 0x13c, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method ExtractGlobalVectorArrayImpl, addr 0x6a94dc0, size 0x128, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl(int32_t name, ::by_ref<::ArrayW<::UnityEngine::Vector4>> val);

  /// @brief Method ExtractGlobalVectorArrayImpl_Injected, addr 0x6a94ee8, size 0x44, virtual false, abstract: false, final false
  static inline void ExtractGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> val);

  /// @brief Method Find, addr 0x6a91a30, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> Find(::StringW name);

  /// @brief Method FindBuiltin, addr 0x6a91aa0, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW name);

  /// @brief Method FindBuiltin_Injected, addr 0x6a91d14, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindBuiltin_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method FindPassTagValue, addr 0x6a93518, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPassTagValue, addr 0x6a93634, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindPropertyIndex, addr 0x6a974d4, size 0x174, virtual false, abstract: false, final false
  inline int32_t FindPropertyIndex(::StringW propertyName);

  /// @brief Method FindPropertyIndex_Injected, addr 0x6a97648, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindPropertyIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName);

  /// @brief Method FindSubshaderTagValue, addr 0x6a937a8, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName);

  /// @brief Method FindTextureStack, addr 0x6a97aec, size 0xa8, virtual false, abstract: false, final false
  inline bool FindTextureStack(int32_t propertyIndex, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl, addr 0x6a971e4, size 0x168, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ::by_ref<::StringW> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method FindTextureStackImpl_Injected, addr 0x6a9734c, size 0x5c, virtual false, abstract: false, final false
  static inline bool FindTextureStackImpl_Injected(::System::IntPtr s, int32_t propertyIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> stackName, ::by_ref<int32_t> layerIndex);

  /// @brief Method GetAllGlobalKeywords, addr 0x6a9233c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetAllGlobalKeywords();

  /// @brief Method GetDependency, addr 0x6a92ff0, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW name);

  /// @brief Method GetDependency_Injected, addr 0x6a93288, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetEnabledGlobalKeywords, addr 0x6a922ec, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetEnabledGlobalKeywords();

  /// @brief Method GetGlobalColor, addr 0x6a9630c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(::StringW name);

  /// @brief Method GetGlobalColor, addr 0x6a9631c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetGlobalColor(int32_t nameID);

  /// @brief Method GetGlobalFloat, addr 0x6a96200, size 0x40, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(::StringW name);

  /// @brief Method GetGlobalFloat, addr 0x6a96240, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloat(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x6a96420, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArray(::StringW name);

  /// @brief Method GetGlobalFloatArray, addr 0x6a96430, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArray(int32_t nameID);

  /// @brief Method GetGlobalFloatArray, addr 0x6a96558, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArray, addr 0x6a96570, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method GetGlobalFloatArrayCountImpl, addr 0x6a94ba0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalFloatArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl, addr 0x6a94780, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> GetGlobalFloatArrayImpl(int32_t name);

  /// @brief Method GetGlobalFloatArrayImpl_Injected, addr 0x6a9489c, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalFloatImpl, addr 0x6a9410c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGlobalFloatImpl(int32_t name);

  /// @brief Method GetGlobalInt, addr 0x6a9614c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(::StringW name);

  /// @brief Method GetGlobalInt, addr 0x6a961a8, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInt(int32_t nameID);

  /// @brief Method GetGlobalIntImpl, addr 0x6a940d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalIntImpl(int32_t name);

  /// @brief Method GetGlobalInteger, addr 0x6a9627c, size 0x40, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(::StringW name);

  /// @brief Method GetGlobalInteger, addr 0x6a962bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalInteger(int32_t nameID);

  /// @brief Method GetGlobalMatrix, addr 0x6a96320, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name);

  /// @brief Method GetGlobalMatrix, addr 0x6a96398, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a964f0, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(::StringW name);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a96500, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(int32_t nameID);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a96590, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArray, addr 0x6a965a8, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x6a94c18, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl, addr 0x6a94a40, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArrayImpl(int32_t name);

  /// @brief Method GetGlobalMatrixArrayImpl_Injected, addr 0x6a94b5c, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalMatrixImpl, addr 0x6a941e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name);

  /// @brief Method GetGlobalMatrixImpl_Injected, addr 0x6a94250, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetGlobalTexture, addr 0x6a9640c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW name);

  /// @brief Method GetGlobalTexture, addr 0x6a9641c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t nameID);

  /// @brief Method GetGlobalTextureImpl, addr 0x6a94294, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t name);

  /// @brief Method GetGlobalTextureImpl_Injected, addr 0x6a943b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t name);

  /// @brief Method GetGlobalVector, addr 0x6a962f8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW name);

  /// @brief Method GetGlobalVector, addr 0x6a96308, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x6a96488, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(::StringW name);

  /// @brief Method GetGlobalVectorArray, addr 0x6a96498, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(int32_t nameID);

  /// @brief Method GetGlobalVectorArray, addr 0x6a96574, size 0x18, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArray, addr 0x6a9658c, size 0x4, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method GetGlobalVectorArrayCountImpl, addr 0x6a94bdc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetGlobalVectorArrayCountImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl, addr 0x6a948e0, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArrayImpl(int32_t name);

  /// @brief Method GetGlobalVectorArrayImpl_Injected, addr 0x6a949fc, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetGlobalVectorImpl, addr 0x6a94148, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name);

  /// @brief Method GetGlobalVectorImpl_Injected, addr 0x6a941a0, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPassCountInSubshader, addr 0x6a93444, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPassCountInSubshader(int32_t subshaderIndex);

  /// @brief Method GetPassCountInSubshader_Injected, addr 0x6a934d4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPassCountInSubshader_Injected(::System::IntPtr _unity_self, int32_t subshaderIndex);

  /// @brief Method GetPropertyAttributes, addr 0x6a97754, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetPropertyAttributes(int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes, addr 0x6a96c34, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyAttributes_Injected, addr 0x6a96ce8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPropertyAttributes_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyCount, addr 0x6a97418, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPropertyCount();

  /// @brief Method GetPropertyCount_Injected, addr 0x6a97498, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPropertyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyDefaultFloatValue, addr 0x6a9777c, size 0x94, virtual false, abstract: false, final false
  inline float_t GetPropertyDefaultFloatValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x6a9793c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetPropertyDefaultIntValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue, addr 0x6a96d2c, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultIntValue_Injected, addr 0x6a96de0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyDefaultIntValue_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue, addr 0x6a96e24, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDefaultValue_Injected, addr 0x6a96ef4, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDefaultValue_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPropertyDefaultVectorValue, addr 0x6a97810, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x6a97704, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyDescription(int32_t propertyIndex);

  /// @brief Method GetPropertyDescription, addr 0x6a96998, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyDescription_Injected, addr 0x6a96ae8, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyDescription_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyFlags, addr 0x6a9772c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex);

  /// @brief Method GetPropertyFlags, addr 0x6a96b3c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyFlags_Injected, addr 0x6a96bf0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x6a9768c, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(int32_t propertyIndex);

  /// @brief Method GetPropertyName, addr 0x6a96604, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x6a976b4, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetPropertyNameId(int32_t propertyIndex);

  /// @brief Method GetPropertyNameId, addr 0x6a967a8, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyNameId_Injected, addr 0x6a9685c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPropertyNameId_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyName_Injected, addr 0x6a96754, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyRangeLimits, addr 0x6a978a0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x6a97a5c, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName, addr 0x6a97040, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDefaultName_Injected, addr 0x6a97190, size 0x54, virtual false, abstract: false, final false
  static inline void GetPropertyTextureDefaultName_Injected(::System::IntPtr shader, int32_t propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetPropertyTextureDimension, addr 0x6a979cc, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension, addr 0x6a96f48, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyTextureDimension_Injected, addr 0x6a96ffc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x6a976dc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex);

  /// @brief Method GetPropertyType, addr 0x6a968a0, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex);

  /// @brief Method GetPropertyType_Injected, addr 0x6a96954, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_Injected(::System::IntPtr shader, int32_t propertyIndex);

  /// @brief Method IDToTag, addr 0x6a92ea4, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW IDToTag(int32_t name);

  /// @brief Method IDToTag_Injected, addr 0x6a92f70, size 0x44, virtual false, abstract: false, final false
  static inline void IDToTag_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method Internal_FindPassTagValue, addr 0x6a9359c, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader, addr 0x6a93700, size 0xa8, virtual false, abstract: false, final false
  inline int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValueInSubShader_Injected, addr 0x6a9396c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindPassTagValue_Injected, addr 0x6a93918, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindPassTagValue_Injected(::System::IntPtr _unity_self, int32_t passIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue, addr 0x6a93880, size 0x98, virtual false, abstract: false, final false
  inline int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName);

  /// @brief Method Internal_FindSubshaderTagValue_Injected, addr 0x6a939c8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_FindSubshaderTagValue_Injected(::System::IntPtr _unity_self, int32_t subShaderIndex, int32_t tagName);

  /// @brief Method IsKeywordEnabled, addr 0x6a92700, size 0x130, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::StringW keyword);

  /// @brief Method IsKeywordEnabled, addr 0x6a92b54, size 0x48, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabledFast, addr 0x6a929f8, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method IsKeywordEnabledFast_Injected, addr 0x6a92a3c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabledFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method IsKeywordEnabled_Injected, addr 0x6a92830, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsKeywordEnabled_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  static inline ::UnityEngine::Shader* New_ctor();

  /// @brief Method PropertyToID, addr 0x6a8e0c0, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID(::StringW name);

  /// @brief Method PropertyToID_Injected, addr 0x6a92fb4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PropertyToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method SetGlobalBuffer, addr 0x6a959c4, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6a95a64, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6a95a14, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6a95ab4, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBufferImpl, addr 0x6a93d8c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferImpl_Injected, addr 0x6a93ddc, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalColor, addr 0x6a95878, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x6a958b8, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a95b04, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a95bd4, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a95b6c, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6a95c3c, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl, addr 0x6a93eb4, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0x6a93f1c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x6a93f78, size 0x68, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0x6a93fe0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetGlobalFloat, addr 0x6a9570c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x6a9575c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x6a95e64, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6a95d44, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x6a95098, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetGlobalFloatArray, addr 0x6a95e88, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6a95ddc, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArrayImpl, addr 0x6a943f0, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count);

  /// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0x6a944cc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalFloatImpl, addr 0x6a93a60, size 0x4c, virtual false, abstract: false, final false
  static inline void SetGlobalFloatImpl(int32_t name, float_t value);

  /// @brief Method SetGlobalGraphicsBufferImpl, addr 0x6a93e20, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferImpl_Injected, addr 0x6a93e70, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalInt, addr 0x6a95680, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x6a956c8, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalIntImpl, addr 0x6a93a1c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalIntImpl(int32_t name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6a957a8, size 0x48, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6a957f0, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x6a958bc, size 0x64, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x6a95920, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a96114, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a95ff4, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a95210, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a96138, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6a9608c, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArrayImpl, addr 0x6a94650, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4> values, int32_t count);

  /// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0x6a9472c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalMatrixImpl, addr 0x6a93b44, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixImpl_Injected, addr 0x6a93b88, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x6a95ca4, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(::StringW name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x6a95cf4, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructure(int32_t nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl, addr 0x6a9403c, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl(int32_t name, ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method SetGlobalRayTracingAccelerationStructureImpl_Injected, addr 0x6a9408c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t name, ::System::IntPtr accelerationStructure);

  /// @brief Method SetGlobalRenderTextureImpl, addr 0x6a93ca0, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalRenderTextureImpl_Injected, addr 0x6a93d38, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalRenderTextureImpl_Injected(int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6a95998, size 0x28, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6a9597c, size 0x18, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTexture, addr 0x6a959c0, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6a95994, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl, addr 0x6a93bcc, size 0x90, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetGlobalTextureImpl_Injected, addr 0x6a93c5c, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalTextureImpl_Injected(int32_t name, ::System::IntPtr value);

  /// @brief Method SetGlobalVector, addr 0x6a95834, size 0x40, virtual false, abstract: false, final false
  static inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x6a95874, size 0x4, virtual false, abstract: false, final false
  static inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x6a95fbc, size 0x24, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6a95e9c, size 0x98, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x6a95154, size 0xbc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetGlobalVectorArray, addr 0x6a95fe0, size 0x14, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6a95f34, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArrayImpl, addr 0x6a94520, size 0xdc, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4> values, int32_t count);

  /// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0x6a945fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetGlobalVectorImpl, addr 0x6a93aac, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorImpl_Injected, addr 0x6a93b00, size 0x44, virtual false, abstract: false, final false
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ::by_ref<::UnityEngine::Vector4> value);

  /// @brief Method SetKeyword, addr 0x6a92b00, size 0x54, virtual false, abstract: false, final false
  static inline void SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetKeywordFast, addr 0x6a92964, size 0x50, virtual false, abstract: false, final false
  static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetKeywordFast_Injected, addr 0x6a929b4, size 0x44, virtual false, abstract: false, final false
  static inline void SetKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method TagToID, addr 0x6a92d3c, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t TagToID(::StringW name);

  /// @brief Method TagToID_Injected, addr 0x6a92e68, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TagToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method WarmupAllShaders, addr 0x6a92d14, size 0x28, virtual false, abstract: false, final false
  static inline void WarmupAllShaders();

  /// @brief Method .ctor, addr 0x6a965ac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disableBatching, addr 0x6a92c58, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DisableBatchingType get_disableBatching();

  /// @brief Method get_disableBatching_Injected, addr 0x6a92cd8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DisableBatchingType get_disableBatching_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabledGlobalKeywords, addr 0x6a922c4, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_enabledGlobalKeywords();

  /// @brief Method get_globalKeywords, addr 0x6a92314, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_globalKeywords();

  /// @brief Method get_globalMaximumLOD, addr 0x6a91f44, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_globalMaximumLOD();

  /// @brief Method get_globalRenderPipeline, addr 0x6a92064, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_globalRenderPipeline();

  /// @brief Method get_globalRenderPipeline_Injected, addr 0x6a92128, size 0x3c, virtual false, abstract: false, final false
  static inline void get_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_globalShaderHardwareTier, addr 0x6a9194c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier();

  /// @brief Method get_isSupported, addr 0x6a91fa8, size 0x80, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_isSupported_Injected, addr 0x6a92028, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isSupported_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keywordSpace, addr 0x6a92364, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace();

  /// @brief Method get_keywordSpace_Injected, addr 0x6a923fc, size 0x44, virtual false, abstract: false, final false
  static inline void get_keywordSpace_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace> ret);

  /// @brief Method get_maximumChunksOverride, addr 0x6a91d50, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maximumChunksOverride();

  /// @brief Method get_maximumLOD, addr 0x6a91db4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_maximumLOD();

  /// @brief Method get_maximumLOD_Injected, addr 0x6a91e34, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maximumLOD_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_passCount, addr 0x6a932cc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_passCount();

  /// @brief Method get_passCount_Injected, addr 0x6a9334c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_passCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderQueue, addr 0x6a92b9c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_renderQueue();

  /// @brief Method get_renderQueue_Injected, addr 0x6a92c1c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_renderQueue_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_subshaderCount, addr 0x6a93388, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subshaderCount();

  /// @brief Method get_subshaderCount_Injected, addr 0x6a93408, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subshaderCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_globalMaximumLOD, addr 0x6a91f6c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalMaximumLOD(int32_t value);

  /// @brief Method set_globalRenderPipeline, addr 0x6a92164, size 0x124, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline(::StringW value);

  /// @brief Method set_globalRenderPipeline_Injected, addr 0x6a92288, size 0x3c, virtual false, abstract: false, final false
  static inline void set_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_globalShaderHardwareTier, addr 0x6a919b8, size 0x78, virtual false, abstract: false, final false
  static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value);

  /// @brief Method set_maximumChunksOverride, addr 0x6a91d78, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maximumChunksOverride(int32_t value);

  /// @brief Method set_maximumLOD, addr 0x6a91e70, size 0x90, virtual false, abstract: false, final false
  inline void set_maximumLOD(int32_t value);

  /// @brief Method set_maximumLOD_Injected, addr 0x6a91f00, size 0x44, virtual false, abstract: false, final false
  static inline void set_maximumLOD_Injected(::System::IntPtr _unity_self, int32_t value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Shader) == 0x18, "Size mismatch!");

} // namespace UnityEngine
