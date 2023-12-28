#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAccessor)
namespace OVRSimpleJSON {
class JSONNode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace GlobalNamespace {
struct OVRGLTFType;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAccessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAccessor);
// Type: ::OVRGLTFAccessor
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7551)), TypeDefinitionIndex(TypeDefinitionIndex(7552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7553))
// CS Name: ::OVRGLTFAccessor*
class CORDL_TYPE OVRGLTFAccessor : public ::System::Object {
public:
  // Declarations
  /// @brief Field byteOffset, offset 0x10, size 0x4
  __declspec(property(get = __get_byteOffset, put = __set_byteOffset)) int32_t byteOffset;

  /// @brief Field byteLength, offset 0x14, size 0x4
  __declspec(property(get = __get_byteLength, put = __set_byteLength)) int32_t byteLength;

  /// @brief Field byteStride, offset 0x18, size 0x4
  __declspec(property(get = __get_byteStride, put = __set_byteStride)) int32_t byteStride;

  /// @brief Field bufferId, offset 0x1c, size 0x4
  __declspec(property(get = __get_bufferId, put = __set_bufferId)) int32_t bufferId;

  /// @brief Field bufferLength, offset 0x20, size 0x4
  __declspec(property(get = __get_bufferLength, put = __set_bufferLength)) int32_t bufferLength;

  /// @brief Field additionalOffset, offset 0x24, size 0x4
  __declspec(property(get = __get_additionalOffset, put = __set_additionalOffset)) int32_t additionalOffset;

  /// @brief Field dataType, offset 0x28, size 0x4
  __declspec(property(get = __get_dataType, put = __set_dataType))::GlobalNamespace::OVRGLTFType dataType;

  /// @brief Field componentType, offset 0x2c, size 0x4
  __declspec(property(get = __get_componentType, put = __set_componentType))::GlobalNamespace::OVRGLTFComponentType componentType;

  /// @brief Field dataCount, offset 0x30, size 0x4
  __declspec(property(get = __get_dataCount, put = __set_dataCount)) int32_t dataCount;

  constexpr int32_t& __get_byteOffset();

  constexpr int32_t const& __get_byteOffset() const;

  constexpr void __set_byteOffset(int32_t value);

  constexpr int32_t& __get_byteLength();

  constexpr int32_t const& __get_byteLength() const;

  constexpr void __set_byteLength(int32_t value);

  constexpr int32_t& __get_byteStride();

  constexpr int32_t const& __get_byteStride() const;

  constexpr void __set_byteStride(int32_t value);

  constexpr int32_t& __get_bufferId();

  constexpr int32_t const& __get_bufferId() const;

  constexpr void __set_bufferId(int32_t value);

  constexpr int32_t& __get_bufferLength();

  constexpr int32_t const& __get_bufferLength() const;

  constexpr void __set_bufferLength(int32_t value);

  constexpr int32_t& __get_additionalOffset();

  constexpr int32_t const& __get_additionalOffset() const;

  constexpr void __set_additionalOffset(int32_t value);

  constexpr ::GlobalNamespace::OVRGLTFType& __get_dataType();

  constexpr ::GlobalNamespace::OVRGLTFType const& __get_dataType() const;

  constexpr void __set_dataType(::GlobalNamespace::OVRGLTFType value);

  constexpr ::GlobalNamespace::OVRGLTFComponentType& __get_componentType();

  constexpr ::GlobalNamespace::OVRGLTFComponentType const& __get_componentType() const;

  constexpr void __set_componentType(::GlobalNamespace::OVRGLTFComponentType value);

  constexpr int32_t& __get_dataCount();

  constexpr int32_t const& __get_dataCount() const;

  constexpr void __set_dataCount(int32_t value);

  static inline ::GlobalNamespace::OVRGLTFAccessor* New_ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly);

  /// @brief Method .ctor addr 0x271d820 size 0x340 virtual false final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly);

  /// @brief Method GetDataCount addr 0x271dcc4 size 0x8 virtual false final false
  inline int32_t GetDataCount();

  /// @brief Method ToOVRType addr 0x271db60 size 0x164 virtual false final false
  static inline ::GlobalNamespace::OVRGLTFType ToOVRType(::StringW type);

  /// @brief Method ReadAsInt addr 0x271dccc size 0x214 virtual false final false
  inline void ReadAsInt(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> data, int32_t offset);

  /// @brief Method ReadAsFloat addr 0x271e0f8 size 0x210 virtual false final false
  inline void ReadAsFloat(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<float_t, ::Array<float_t>*>> data, int32_t offset);

  /// @brief Method ReadAsVector2 addr 0x271e370 size 0x25c virtual false final false
  inline void ReadAsVector2(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> data, int32_t offset);

  /// @brief Method ReadAsVector3 addr 0x271e5cc size 0x398 virtual false final false
  inline void ReadAsVector3(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> data, int32_t offset,
                            ::UnityEngine::Vector3 conversionScale);

  /// @brief Method ReadAsVector4 addr 0x271e964 size 0x3f4 virtual false final false
  inline void ReadAsVector4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> data, int32_t offset,
                            ::UnityEngine::Vector4 conversionScale);

  /// @brief Method ReadAsColor addr 0x271ed58 size 0x488 virtual false final false
  inline void ReadAsColor(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> data, int32_t offset);

  /// @brief Method ReadAsMatrix4x4 addr 0x271f208 size 0x36c virtual false final false
  inline void ReadAsMatrix4x4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> data, int32_t offset,
                              ::UnityEngine::Vector3 conversionScale);

  /// @brief Method ReadAsTexture addr 0x271f574 size 0x110 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsTexture(::GlobalNamespace::OVRBinaryChunk chunk);

  /// @brief Method ReadAsBoneWeights addr 0x271f684 size 0x398 virtual false final false
  inline void ReadAsBoneWeights(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> data, int32_t offset);

  /// @brief Method GetStrideForType addr 0x271dee0 size 0x28 virtual false final false
  inline int32_t GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method GetMaxValueForType addr 0x271f1e0 size 0x28 virtual false final false
  inline float_t GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method ReadElementAsUint addr 0x271df08 size 0x1f0 virtual false final false
  inline uint32_t ReadElementAsUint(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index, ::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method ReadElementAsFloat addr 0x271e308 size 0x68 virtual false final false
  inline float_t ReadElementAsFloat(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFAccessor(OVRGLTFAccessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFAccessor(OVRGLTFAccessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAccessor();

public:
  /// @brief Field byteOffset, offset: 0x10, size: 0x4, def value: None
  int32_t ___byteOffset;

  /// @brief Field byteLength, offset: 0x14, size: 0x4, def value: None
  int32_t ___byteLength;

  /// @brief Field byteStride, offset: 0x18, size: 0x4, def value: None
  int32_t ___byteStride;

  /// @brief Field bufferId, offset: 0x1c, size: 0x4, def value: None
  int32_t ___bufferId;

  /// @brief Field bufferLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___bufferLength;

  /// @brief Field additionalOffset, offset: 0x24, size: 0x4, def value: None
  int32_t ___additionalOffset;

  /// @brief Field dataType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRGLTFType ___dataType;

  /// @brief Field componentType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRGLTFComponentType ___componentType;

  /// @brief Field dataCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___dataCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAccessor, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAccessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor*, "", "OVRGLTFAccessor");
