#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
MARK_REF_PTR_T(::UnityEngine::Shader);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_disableBatching)) ::UnityEngine::DisableBatchingType  disableBatching;

 __declspec(property(get=get_isSupported)) bool  isSupported;

 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

 __declspec(property(get=get_maximumLOD, put=set_maximumLOD)) int32_t  maximumLOD;

 __declspec(property(get=get_passCount)) int32_t  passCount;

 __declspec(property(get=get_renderQueue)) int32_t  renderQueue;

 __declspec(property(get=get_subshaderCount)) int32_t  subshaderCount;

/// @brief Method CheckPropertyIndex, addr 0x68ccf6c, size 0x70, virtual false, abstract: false, final false
static inline void CheckPropertyIndex(::UnityEngine::Shader*  s, int32_t  propertyIndex) ;

/// @brief Method DisableKeyword, addr 0x68c8680, size 0x44, virtual false, abstract: false, final false
static inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x68c8164, size 0x124, virtual false, abstract: false, final false
static inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeywordFast, addr 0x68c84ac, size 0x40, virtual false, abstract: false, final false
static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method DisableKeywordFast_Injected, addr 0x68c84ec, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeywordFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0x68c8288, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method EnableKeyword, addr 0x68c863c, size 0x44, virtual false, abstract: false, final false
static inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x68c8004, size 0x124, virtual false, abstract: false, final false
static inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeywordFast, addr 0x68c8430, size 0x40, virtual false, abstract: false, final false
static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method EnableKeywordFast_Injected, addr 0x68c8470, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeywordFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0x68c8128, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method ExtractGlobalFloatArray, addr 0x68cae90, size 0x13c, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArray(int32_t  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method ExtractGlobalFloatArrayImpl, addr 0x68ca818, size 0x128, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArrayImpl(int32_t  name, ::ByRef<::ArrayW<float_t,::Array<float_t>*>>  val) ;

/// @brief Method ExtractGlobalFloatArrayImpl_Injected, addr 0x68ca940, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  val) ;

/// @brief Method ExtractGlobalMatrixArray, addr 0x68cb108, size 0x13c, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArray(int32_t  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x68caaf0, size 0x128, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArrayImpl(int32_t  name, ::ByRef<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>  val) ;

/// @brief Method ExtractGlobalMatrixArrayImpl_Injected, addr 0x68cac18, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  val) ;

/// @brief Method ExtractGlobalVectorArray, addr 0x68cafcc, size 0x13c, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArray(int32_t  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method ExtractGlobalVectorArrayImpl, addr 0x68ca984, size 0x128, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArrayImpl(int32_t  name, ::ByRef<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>  val) ;

/// @brief Method ExtractGlobalVectorArrayImpl_Injected, addr 0x68caaac, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  val) ;

/// @brief Method Find, addr 0x68c75f4, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> Find(::StringW  name) ;

/// @brief Method FindBuiltin, addr 0x68c7664, size 0x274, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW  name) ;

/// @brief Method FindBuiltin_Injected, addr 0x68c78d8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FindBuiltin_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method FindPassTagValue, addr 0x68c90dc, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t  passIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindPassTagValue, addr 0x68c91f8, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t  subshaderIndex, int32_t  passIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindPropertyIndex, addr 0x68cd098, size 0x174, virtual false, abstract: false, final false
inline int32_t FindPropertyIndex(::StringW  propertyName) ;

/// @brief Method FindPropertyIndex_Injected, addr 0x68cd20c, size 0x44, virtual false, abstract: false, final false
static inline int32_t FindPropertyIndex_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  propertyName) ;

/// @brief Method FindSubshaderTagValue, addr 0x68c936c, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t  subshaderIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindTextureStack, addr 0x68cd6b0, size 0xa8, virtual false, abstract: false, final false
inline bool FindTextureStack(int32_t  propertyIndex, ::ByRef<::StringW>  stackName, ::ByRef<int32_t>  layerIndex) ;

/// @brief Method FindTextureStackImpl, addr 0x68ccda8, size 0x168, virtual false, abstract: false, final false
static inline bool FindTextureStackImpl(::UnityEngine::Shader*  s, int32_t  propertyIdx, ::ByRef<::StringW>  stackName, ::ByRef<int32_t>  layerIndex) ;

/// @brief Method FindTextureStackImpl_Injected, addr 0x68ccf10, size 0x5c, virtual false, abstract: false, final false
static inline bool FindTextureStackImpl_Injected(::System::IntPtr  s, int32_t  propertyIdx, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  stackName, ::ByRef<int32_t>  layerIndex) ;

/// @brief Method GetAllGlobalKeywords, addr 0x68c7f00, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords() ;

/// @brief Method GetDependency, addr 0x68c8bb4, size 0x298, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW  name) ;

/// @brief Method GetDependency_Injected, addr 0x68c8e4c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetEnabledGlobalKeywords, addr 0x68c7eb0, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords() ;

/// @brief Method GetGlobalColor, addr 0x68cbed0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalColor(::StringW  name) ;

/// @brief Method GetGlobalColor, addr 0x68cbee0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalColor(int32_t  nameID) ;

/// @brief Method GetGlobalFloat, addr 0x68cbdc4, size 0x40, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(::StringW  name) ;

/// @brief Method GetGlobalFloat, addr 0x68cbe04, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(int32_t  nameID) ;

/// @brief Method GetGlobalFloatArray, addr 0x68cbfe4, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetGlobalFloatArray(::StringW  name) ;

/// @brief Method GetGlobalFloatArray, addr 0x68cbff4, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetGlobalFloatArray(int32_t  nameID) ;

/// @brief Method GetGlobalFloatArray, addr 0x68cc11c, size 0x18, virtual false, abstract: false, final false
static inline void GetGlobalFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method GetGlobalFloatArray, addr 0x68cc134, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method GetGlobalFloatArrayCountImpl, addr 0x68ca764, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalFloatArrayCountImpl(int32_t  name) ;

/// @brief Method GetGlobalFloatArrayImpl, addr 0x68ca344, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalFloatArrayImpl_Injected, addr 0x68ca460, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalFloatArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetGlobalFloatImpl, addr 0x68c9cd0, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetGlobalFloatImpl(int32_t  name) ;

/// @brief Method GetGlobalInt, addr 0x68cbd10, size 0x5c, virtual false, abstract: false, final false
static inline int32_t GetGlobalInt(::StringW  name) ;

/// @brief Method GetGlobalInt, addr 0x68cbd6c, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetGlobalInt(int32_t  nameID) ;

/// @brief Method GetGlobalIntImpl, addr 0x68c9c94, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalIntImpl(int32_t  name) ;

/// @brief Method GetGlobalInteger, addr 0x68cbe40, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetGlobalInteger(::StringW  name) ;

/// @brief Method GetGlobalInteger, addr 0x68cbe80, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalInteger(int32_t  nameID) ;

/// @brief Method GetGlobalMatrix, addr 0x68cbee4, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW  name) ;

/// @brief Method GetGlobalMatrix, addr 0x68cbf5c, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t  nameID) ;

/// @brief Method GetGlobalMatrixArray, addr 0x68cc0b4, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW  name) ;

/// @brief Method GetGlobalMatrixArray, addr 0x68cc0c4, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t  nameID) ;

/// @brief Method GetGlobalMatrixArray, addr 0x68cc154, size 0x18, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method GetGlobalMatrixArray, addr 0x68cc16c, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x68ca7dc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixArrayImpl, addr 0x68ca604, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixArrayImpl_Injected, addr 0x68ca720, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetGlobalMatrixImpl, addr 0x68c9da8, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixImpl_Injected, addr 0x68c9e14, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalMatrixImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetGlobalTexture, addr 0x68cbfd0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW  name) ;

/// @brief Method GetGlobalTexture, addr 0x68cbfe0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t  nameID) ;

/// @brief Method GetGlobalTextureImpl, addr 0x68c9e58, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t  name) ;

/// @brief Method GetGlobalTextureImpl_Injected, addr 0x68c9f78, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t  name) ;

/// @brief Method GetGlobalVector, addr 0x68cbebc, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW  name) ;

/// @brief Method GetGlobalVector, addr 0x68cbecc, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t  nameID) ;

/// @brief Method GetGlobalVectorArray, addr 0x68cc04c, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW  name) ;

/// @brief Method GetGlobalVectorArray, addr 0x68cc05c, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t  nameID) ;

/// @brief Method GetGlobalVectorArray, addr 0x68cc138, size 0x18, virtual false, abstract: false, final false
static inline void GetGlobalVectorArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method GetGlobalVectorArray, addr 0x68cc150, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method GetGlobalVectorArrayCountImpl, addr 0x68ca7a0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalVectorArrayCountImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorArrayImpl, addr 0x68ca4a4, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorArrayImpl_Injected, addr 0x68ca5c0, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalVectorArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetGlobalVectorImpl, addr 0x68c9d0c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorImpl_Injected, addr 0x68c9d64, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalVectorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPassCountInSubshader, addr 0x68c9008, size 0x90, virtual false, abstract: false, final false
inline int32_t GetPassCountInSubshader(int32_t  subshaderIndex) ;

/// @brief Method GetPassCountInSubshader_Injected, addr 0x68c9098, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPassCountInSubshader_Injected(::System::IntPtr  _unity_self, int32_t  subshaderIndex) ;

/// @brief Method GetPropertyAttributes, addr 0x68cd318, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetPropertyAttributes(int32_t  propertyIndex) ;

/// @brief Method GetPropertyAttributes, addr 0x68cc7f8, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyAttributes_Injected, addr 0x68cc8ac, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetPropertyAttributes_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyCount, addr 0x68ccfdc, size 0x80, virtual false, abstract: false, final false
inline int32_t GetPropertyCount() ;

/// @brief Method GetPropertyCount_Injected, addr 0x68cd05c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetPropertyCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPropertyDefaultFloatValue, addr 0x68cd340, size 0x94, virtual false, abstract: false, final false
inline float_t GetPropertyDefaultFloatValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue, addr 0x68cd500, size 0x90, virtual false, abstract: false, final false
inline int32_t GetPropertyDefaultIntValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue, addr 0x68cc8f0, size 0xb4, virtual false, abstract: false, final false
static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue_Injected, addr 0x68cc9a4, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPropertyDefaultIntValue_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultValue, addr 0x68cc9e8, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultValue_Injected, addr 0x68ccab8, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyDefaultValue_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPropertyDefaultVectorValue, addr 0x68cd3d4, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription, addr 0x68cd2c8, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetPropertyDescription(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription, addr 0x68cc55c, size 0x150, virtual false, abstract: false, final false
static inline ::StringW GetPropertyDescription(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription_Injected, addr 0x68cc6ac, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyDescription_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPropertyFlags, addr 0x68cd2f0, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t  propertyIndex) ;

/// @brief Method GetPropertyFlags, addr 0x68cc700, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyFlags_Injected, addr 0x68cc7b4, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyName, addr 0x68cd250, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetPropertyName(int32_t  propertyIndex) ;

/// @brief Method GetPropertyName, addr 0x68cc1c8, size 0x150, virtual false, abstract: false, final false
static inline ::StringW GetPropertyName(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId, addr 0x68cd278, size 0x28, virtual false, abstract: false, final false
inline int32_t GetPropertyNameId(int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId, addr 0x68cc36c, size 0xb4, virtual false, abstract: false, final false
static inline int32_t GetPropertyNameId(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId_Injected, addr 0x68cc420, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPropertyNameId_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyName_Injected, addr 0x68cc318, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyName_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPropertyRangeLimits, addr 0x68cd464, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName, addr 0x68cd620, size 0x90, virtual false, abstract: false, final false
inline ::StringW GetPropertyTextureDefaultName(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName, addr 0x68ccc04, size 0x150, virtual false, abstract: false, final false
static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName_Injected, addr 0x68ccd54, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyTextureDefaultName_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPropertyTextureDimension, addr 0x68cd590, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDimension, addr 0x68ccb0c, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDimension_Injected, addr 0x68ccbc0, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyType, addr 0x68cd2a0, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t  propertyIndex) ;

/// @brief Method GetPropertyType, addr 0x68cc464, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyType_Injected, addr 0x68cc518, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method IDToTag, addr 0x68c8a68, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW IDToTag(int32_t  name) ;

/// @brief Method IDToTag_Injected, addr 0x68c8b34, size 0x44, virtual false, abstract: false, final false
static inline void IDToTag_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method Internal_FindPassTagValue, addr 0x68c9160, size 0x98, virtual false, abstract: false, final false
inline int32_t Internal_FindPassTagValue(int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindPassTagValueInSubShader, addr 0x68c92c4, size 0xa8, virtual false, abstract: false, final false
inline int32_t Internal_FindPassTagValueInSubShader(int32_t  subShaderIndex, int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindPassTagValueInSubShader_Injected, addr 0x68c9530, size 0x5c, virtual false, abstract: false, final false
static inline int32_t Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr  _unity_self, int32_t  subShaderIndex, int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindPassTagValue_Injected, addr 0x68c94dc, size 0x54, virtual false, abstract: false, final false
static inline int32_t Internal_FindPassTagValue_Injected(::System::IntPtr  _unity_self, int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindSubshaderTagValue, addr 0x68c9444, size 0x98, virtual false, abstract: false, final false
inline int32_t Internal_FindSubshaderTagValue(int32_t  subShaderIndex, int32_t  tagName) ;

/// @brief Method Internal_FindSubshaderTagValue_Injected, addr 0x68c958c, size 0x54, virtual false, abstract: false, final false
static inline int32_t Internal_FindSubshaderTagValue_Injected(::System::IntPtr  _unity_self, int32_t  subShaderIndex, int32_t  tagName) ;

/// @brief Method IsKeywordEnabled, addr 0x68c8718, size 0x48, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method IsKeywordEnabled, addr 0x68c82c4, size 0x130, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled(::StringW  keyword) ;

/// @brief Method IsKeywordEnabledFast, addr 0x68c85bc, size 0x44, virtual false, abstract: false, final false
static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method IsKeywordEnabledFast_Injected, addr 0x68c8600, size 0x3c, virtual false, abstract: false, final false
static inline bool IsKeywordEnabledFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method IsKeywordEnabled_Injected, addr 0x68c83f4, size 0x3c, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

static inline ::UnityEngine::Shader* New_ctor() ;

/// @brief Method PropertyToID, addr 0x68c3d40, size 0x12c, virtual false, abstract: false, final false
static inline int32_t PropertyToID(::StringW  name) ;

/// @brief Method PropertyToID_Injected, addr 0x68c8b78, size 0x3c, virtual false, abstract: false, final false
static inline int32_t PropertyToID_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method SetGlobalBuffer, addr 0x68cb588, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x68cb628, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x68cb5d8, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x68cb678, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBufferImpl, addr 0x68c9950, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBufferImpl_Injected, addr 0x68c99a0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalColor, addr 0x68cb43c, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0x68cb47c, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x68cb6c8, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x68cb798, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x68cb730, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x68cb800, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferImpl, addr 0x68c9a78, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0x68c9ae0, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl_Injected(int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x68c9b3c, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0x68c9ba4, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalFloat, addr 0x68cb2d0, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0x68cb320, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0x68cba28, size 0x24, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x68cb908, size 0x98, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x68cac5c, size 0xbc, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArray, addr 0x68cba4c, size 0x14, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  nameID, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x68cb9a0, size 0x88, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArrayImpl, addr 0x68c9fb4, size 0xdc, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0x68ca090, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatImpl, addr 0x68c9624, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetGlobalGraphicsBufferImpl, addr 0x68c99e4, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalGraphicsBufferImpl_Injected, addr 0x68c9a34, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalInt, addr 0x68cb244, size 0x48, virtual false, abstract: false, final false
static inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInt, addr 0x68cb28c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalIntImpl, addr 0x68c95e0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalIntImpl(int32_t  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x68cb36c, size 0x48, virtual false, abstract: false, final false
static inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x68cb3b4, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalMatrix, addr 0x68cb480, size 0x64, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0x68cb4e4, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0x68cbcd8, size 0x24, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x68cbbb8, size 0x98, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x68cadd4, size 0xbc, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArray, addr 0x68cbcfc, size 0x14, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x68cbc50, size 0x88, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArrayImpl, addr 0x68ca214, size 0xdc, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0x68ca2f0, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixImpl, addr 0x68c9708, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixImpl_Injected, addr 0x68c974c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x68cb868, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructure(::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  value) ;

/// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0x68cb8b8, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructure(int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  value) ;

/// @brief Method SetGlobalRayTracingAccelerationStructureImpl, addr 0x68c9c00, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructureImpl(int32_t  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method SetGlobalRayTracingAccelerationStructureImpl_Injected, addr 0x68c9c50, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t  name, ::System::IntPtr  accelerationStructure) ;

/// @brief Method SetGlobalRenderTextureImpl, addr 0x68c9864, size 0x98, virtual false, abstract: false, final false
static inline void SetGlobalRenderTextureImpl(int32_t  name, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalRenderTextureImpl_Injected, addr 0x68c98fc, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalRenderTextureImpl_Injected(int32_t  name, ::System::IntPtr  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x68cb55c, size 0x28, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x68cb540, size 0x18, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTexture, addr 0x68cb584, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x68cb558, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl, addr 0x68c9790, size 0x90, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl_Injected, addr 0x68c9820, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalVector, addr 0x68cb3f8, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0x68cb438, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0x68cbb80, size 0x24, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x68cba60, size 0x98, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x68cad18, size 0xbc, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArray, addr 0x68cbba4, size 0x14, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x68cbaf8, size 0x88, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArrayImpl, addr 0x68ca0e4, size 0xdc, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0x68ca1c0, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorImpl, addr 0x68c9670, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorImpl_Injected, addr 0x68c96c4, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector4>  value) ;

/// @brief Method SetKeyword, addr 0x68c86c4, size 0x54, virtual false, abstract: false, final false
static inline void SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeywordFast, addr 0x68c8528, size 0x50, virtual false, abstract: false, final false
static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword, bool  value) ;

/// @brief Method SetKeywordFast_Injected, addr 0x68c8578, size 0x44, virtual false, abstract: false, final false
static inline void SetKeywordFast_Injected(::ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method TagToID, addr 0x68c8900, size 0x12c, virtual false, abstract: false, final false
static inline int32_t TagToID(::StringW  name) ;

/// @brief Method TagToID_Injected, addr 0x68c8a2c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t TagToID_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method WarmupAllShaders, addr 0x68c88d8, size 0x28, virtual false, abstract: false, final false
static inline void WarmupAllShaders() ;

/// @brief Method .ctor, addr 0x68cc170, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_disableBatching, addr 0x68c881c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::DisableBatchingType get_disableBatching() ;

/// @brief Method get_disableBatching_Injected, addr 0x68c889c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::DisableBatchingType get_disableBatching_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enabledGlobalKeywords, addr 0x68c7e88, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords() ;

/// @brief Method get_globalKeywords, addr 0x68c7ed8, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords() ;

/// @brief Method get_globalMaximumLOD, addr 0x68c7b08, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_globalMaximumLOD() ;

/// @brief Method get_globalRenderPipeline, addr 0x68c7c28, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW get_globalRenderPipeline() ;

/// @brief Method get_globalRenderPipeline_Injected, addr 0x68c7cec, size 0x3c, virtual false, abstract: false, final false
static inline void get_globalRenderPipeline_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_globalShaderHardwareTier, addr 0x68c7510, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier() ;

/// @brief Method get_isSupported, addr 0x68c7b6c, size 0x80, virtual false, abstract: false, final false
inline bool get_isSupported() ;

/// @brief Method get_isSupported_Injected, addr 0x68c7bec, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isSupported_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_keywordSpace, addr 0x68c7f28, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0x68c7fc0, size 0x44, virtual false, abstract: false, final false
static inline void get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method get_maximumChunksOverride, addr 0x68c7914, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maximumChunksOverride() ;

/// @brief Method get_maximumLOD, addr 0x68c7978, size 0x80, virtual false, abstract: false, final false
inline int32_t get_maximumLOD() ;

/// @brief Method get_maximumLOD_Injected, addr 0x68c79f8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_maximumLOD_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_passCount, addr 0x68c8e90, size 0x80, virtual false, abstract: false, final false
inline int32_t get_passCount() ;

/// @brief Method get_passCount_Injected, addr 0x68c8f10, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_passCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_renderQueue, addr 0x68c8760, size 0x80, virtual false, abstract: false, final false
inline int32_t get_renderQueue() ;

/// @brief Method get_renderQueue_Injected, addr 0x68c87e0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_renderQueue_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_subshaderCount, addr 0x68c8f4c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_subshaderCount() ;

/// @brief Method get_subshaderCount_Injected, addr 0x68c8fcc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_subshaderCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_globalMaximumLOD, addr 0x68c7b30, size 0x3c, virtual false, abstract: false, final false
static inline void set_globalMaximumLOD(int32_t  value) ;

/// @brief Method set_globalRenderPipeline, addr 0x68c7d28, size 0x124, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline(::StringW  value) ;

/// @brief Method set_globalRenderPipeline_Injected, addr 0x68c7e4c, size 0x3c, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_globalShaderHardwareTier, addr 0x68c757c, size 0x78, virtual false, abstract: false, final false
static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier  value) ;

/// @brief Method set_maximumChunksOverride, addr 0x68c793c, size 0x3c, virtual false, abstract: false, final false
static inline void set_maximumChunksOverride(int32_t  value) ;

/// @brief Method set_maximumLOD, addr 0x68c7a34, size 0x90, virtual false, abstract: false, final false
inline void set_maximumLOD(int32_t  value) ;

/// @brief Method set_maximumLOD_Injected, addr 0x68c7ac4, size 0x44, virtual false, abstract: false, final false
static inline void set_maximumLOD_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shader(Shader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shader(Shader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Shader, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
