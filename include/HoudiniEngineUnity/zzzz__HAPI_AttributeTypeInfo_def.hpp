#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AttributeTypeInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeTypeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AttributeTypeInfo);
// Type: HoudiniEngineUnity::HAPI_AttributeTypeInfo
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_AttributeTypeInfo
struct CORDL_TYPE HAPI_AttributeTypeInfo {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_AttributeTypeInfo_Unwrapped
  enum struct __HAPI_AttributeTypeInfo_Unwrapped : int32_t {
    __E_HAPI_ATTRIBUTE_TYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_ATTRIBUTE_TYPE_NONE = static_cast<int32_t>(0x0),
    __E_HAPI_ATTRIBUTE_TYPE_POINT = static_cast<int32_t>(0x1),
    __E_HAPI_ATTRIBUTE_TYPE_HPOINT = static_cast<int32_t>(0x2),
    __E_HAPI_ATTRIBUTE_TYPE_VECTOR = static_cast<int32_t>(0x3),
    __E_HAPI_ATTRIBUTE_TYPE_NORMAL = static_cast<int32_t>(0x4),
    __E_HAPI_ATTRIBUTE_TYPE_COLOR = static_cast<int32_t>(0x5),
    __E_HAPI_ATTRIBUTE_TYPE_QUATERNION = static_cast<int32_t>(0x6),
    __E_HAPI_ATTRIBUTE_TYPE_MATRIX3 = static_cast<int32_t>(0x7),
    __E_HAPI_ATTRIBUTE_TYPE_MATRIX = static_cast<int32_t>(0x8),
    __E_HAPI_ATTRIBUTE_TYPE_ST = static_cast<int32_t>(0x9),
    __E_HAPI_ATTRIBUTE_TYPE_HIDDEN = static_cast<int32_t>(0xa),
    __E_HAPI_ATTRIBUTE_TYPE_BOX2 = static_cast<int32_t>(0xb),
    __E_HAPI_ATTRIBUTE_TYPE_BOX = static_cast<int32_t>(0xc),
    __E_HAPI_ATTRIBUTE_TYPE_TEXTURE = static_cast<int32_t>(0xd),
    __E_HAPI_ATTRIBUTE_TYPE_MAX = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_AttributeTypeInfo_Unwrapped() const noexcept {
    return static_cast<__HAPI_AttributeTypeInfo_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_AttributeTypeInfo();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_AttributeTypeInfo(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_BOX value: static_cast<int32_t>(0xc)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_BOX;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_BOX2 value: static_cast<int32_t>(0xb)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_BOX2;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_COLOR value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_COLOR;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_HIDDEN value: static_cast<int32_t>(0xa)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_HIDDEN;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_HPOINT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_HPOINT;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_INVALID value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_INVALID;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_MATRIX value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_MATRIX;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_MATRIX3 value: static_cast<int32_t>(0x7)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_MATRIX3;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_MAX value: static_cast<int32_t>(0xe)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_MAX;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_NONE;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_NORMAL value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_NORMAL;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_POINT value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_POINT;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_QUATERNION value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_QUATERNION;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_ST value: static_cast<int32_t>(0x9)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_ST;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_TEXTURE value: static_cast<int32_t>(0xd)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_TEXTURE;

  /// @brief Field HAPI_ATTRIBUTE_TYPE_VECTOR value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_VECTOR;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AttributeTypeInfo, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeTypeInfo, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeTypeInfo, "HoudiniEngineUnity", "HAPI_AttributeTypeInfo");
