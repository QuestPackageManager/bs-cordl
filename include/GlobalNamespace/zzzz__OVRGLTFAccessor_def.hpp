#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAccessor)
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
namespace GlobalNamespace {
struct OVRGLTFType;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAccessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAccessor);
// Dependencies OVRGLTFComponentType, OVRGLTFType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFAccessor
class CORDL_TYPE OVRGLTFAccessor : public ::System::Object {
public:
  // Declarations
  /// @brief Field additionalOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_additionalOffset, put = __cordl_internal_set_additionalOffset)) int32_t additionalOffset;

  /// @brief Field bufferId, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferId, put = __cordl_internal_set_bufferId)) int32_t bufferId;

  /// @brief Field bufferLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferLength, put = __cordl_internal_set_bufferLength)) int32_t bufferLength;

  /// @brief Field byteLength, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_byteLength, put = __cordl_internal_set_byteLength)) int32_t byteLength;

  /// @brief Field byteOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_byteOffset, put = __cordl_internal_set_byteOffset)) int32_t byteOffset;

  /// @brief Field byteStride, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_byteStride, put = __cordl_internal_set_byteStride)) int32_t byteStride;

  /// @brief Field componentType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_componentType, put = __cordl_internal_set_componentType)) ::GlobalNamespace::OVRGLTFComponentType componentType;

  /// @brief Field dataCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dataCount, put = __cordl_internal_set_dataCount)) int32_t dataCount;

  /// @brief Field dataType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) ::GlobalNamespace::OVRGLTFType dataType;

  /// @brief Method GetDataCount, addr 0x3fa5c58, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetDataCount();

  /// @brief Method GetMaxValueForType, addr 0x3fa713c, size 0x28, virtual false, abstract: false, final false
  inline float_t GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method GetStrideForType, addr 0x3fa5e7c, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type);

  static inline ::GlobalNamespace::OVRGLTFAccessor* New_ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly);

  /// @brief Method ReadAsBoneWeights, addr 0x3fa75c4, size 0x3c0, virtual false, abstract: false, final false
  inline void ReadAsBoneWeights(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> data, int32_t offset);

  /// @brief Method ReadAsColor, addr 0x3fa6cb0, size 0x48c, virtual false, abstract: false, final false
  inline void ReadAsColor(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> data, int32_t offset);

  /// @brief Method ReadAsFloat, addr 0x3fa6050, size 0x21c, virtual false, abstract: false, final false
  inline void ReadAsFloat(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> data, int32_t offset);

  /// @brief Method ReadAsInt, addr 0x3fa5c60, size 0x21c, virtual false, abstract: false, final false
  inline void ReadAsInt(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> data, int32_t offset);

  /// @brief Method ReadAsMatrix4x4, addr 0x3fa7164, size 0x350, virtual false, abstract: false, final false
  inline void ReadAsMatrix4x4(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> data, int32_t offset,
                              ::UnityEngine::Vector3 conversionScale);

  /// @brief Method ReadAsTexture, addr 0x3fa74b4, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsTexture(::GlobalNamespace::OVRBinaryChunk chunk);

  /// @brief Method ReadAsVector2, addr 0x3fa627c, size 0x26c, virtual false, abstract: false, final false
  inline void ReadAsVector2(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> data, int32_t offset);

  /// @brief Method ReadAsVector3, addr 0x3fa64e8, size 0x3b4, virtual false, abstract: false, final false
  inline void ReadAsVector3(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> data, int32_t offset,
                            ::UnityEngine::Vector3 conversionScale);

  /// @brief Method ReadAsVector4, addr 0x3fa689c, size 0x414, virtual false, abstract: false, final false
  inline void ReadAsVector4(::GlobalNamespace::OVRBinaryChunk chunk, ::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> data, int32_t offset,
                            ::UnityEngine::Vector4 conversionScale);

  /// @brief Method ReadElementAsFloat, addr 0x3fa626c, size 0x10, virtual false, abstract: false, final false
  inline float_t ReadElementAsFloat(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index);

  /// @brief Method ReadElementAsUint, addr 0x3fa5ea4, size 0x1ac, virtual false, abstract: false, final false
  inline uint32_t ReadElementAsUint(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index, ::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method ToOVRType, addr 0x3fa5af4, size 0x164, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRGLTFType ToOVRType(::StringW type);

  constexpr int32_t const& __cordl_internal_get_additionalOffset() const;

  constexpr int32_t& __cordl_internal_get_additionalOffset();

  constexpr int32_t const& __cordl_internal_get_bufferId() const;

  constexpr int32_t& __cordl_internal_get_bufferId();

  constexpr int32_t const& __cordl_internal_get_bufferLength() const;

  constexpr int32_t& __cordl_internal_get_bufferLength();

  constexpr int32_t const& __cordl_internal_get_byteLength() const;

  constexpr int32_t& __cordl_internal_get_byteLength();

  constexpr int32_t const& __cordl_internal_get_byteOffset() const;

  constexpr int32_t& __cordl_internal_get_byteOffset();

  constexpr int32_t const& __cordl_internal_get_byteStride() const;

  constexpr int32_t& __cordl_internal_get_byteStride();

  constexpr ::GlobalNamespace::OVRGLTFComponentType const& __cordl_internal_get_componentType() const;

  constexpr ::GlobalNamespace::OVRGLTFComponentType& __cordl_internal_get_componentType();

  constexpr int32_t const& __cordl_internal_get_dataCount() const;

  constexpr int32_t& __cordl_internal_get_dataCount();

  constexpr ::GlobalNamespace::OVRGLTFType const& __cordl_internal_get_dataType() const;

  constexpr ::GlobalNamespace::OVRGLTFType& __cordl_internal_get_dataType();

  constexpr void __cordl_internal_set_additionalOffset(int32_t value);

  constexpr void __cordl_internal_set_bufferId(int32_t value);

  constexpr void __cordl_internal_set_bufferLength(int32_t value);

  constexpr void __cordl_internal_set_byteLength(int32_t value);

  constexpr void __cordl_internal_set_byteOffset(int32_t value);

  constexpr void __cordl_internal_set_byteStride(int32_t value);

  constexpr void __cordl_internal_set_componentType(::GlobalNamespace::OVRGLTFComponentType value);

  constexpr void __cordl_internal_set_dataCount(int32_t value);

  constexpr void __cordl_internal_set_dataType(::GlobalNamespace::OVRGLTFType value);

  /// @brief Method .ctor, addr 0x3fa57b4, size 0x340, virtual false, abstract: false, final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAccessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFAccessor(OVRGLTFAccessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFAccessor(OVRGLTFAccessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7869 };

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
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___byteOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___byteLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___byteStride) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___bufferId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___bufferLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___additionalOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___dataType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___componentType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ___dataCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAccessor, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAccessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor*, "", "OVRGLTFAccessor");
