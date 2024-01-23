#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PrmScriptType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PrmScriptType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PrmScriptType);
// Type: HoudiniEngineUnity::HAPI_PrmScriptType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9697))
// CS Name: ::HoudiniEngineUnity::HAPI_PrmScriptType
struct CORDL_TYPE HAPI_PrmScriptType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_PrmScriptType_Unwrapped
  enum struct __HAPI_PrmScriptType_Unwrapped : int32_t {
    __E_HAPI_PRM_SCRIPT_TYPE_INT = static_cast<int32_t>(0x0),
    __E_HAPI_PRM_SCRIPT_TYPE_FLOAT = static_cast<int32_t>(0x1),
    __E_HAPI_PRM_SCRIPT_TYPE_ANGLE = static_cast<int32_t>(0x2),
    __E_HAPI_PRM_SCRIPT_TYPE_STRING = static_cast<int32_t>(0x3),
    __E_HAPI_PRM_SCRIPT_TYPE_FILE = static_cast<int32_t>(0x4),
    __E_HAPI_PRM_SCRIPT_TYPE_DIRECTORY = static_cast<int32_t>(0x5),
    __E_HAPI_PRM_SCRIPT_TYPE_IMAGE = static_cast<int32_t>(0x6),
    __E_HAPI_PRM_SCRIPT_TYPE_GEOMETRY = static_cast<int32_t>(0x7),
    __E_HAPI_PRM_SCRIPT_TYPE_TOGGLE = static_cast<int32_t>(0x8),
    __E_HAPI_PRM_SCRIPT_TYPE_BUTTON = static_cast<int32_t>(0x9),
    __E_HAPI_PRM_SCRIPT_TYPE_VECTOR2 = static_cast<int32_t>(0xa),
    __E_HAPI_PRM_SCRIPT_TYPE_VECTOR3 = static_cast<int32_t>(0xb),
    __E_HAPI_PRM_SCRIPT_TYPE_VECTOR4 = static_cast<int32_t>(0xc),
    __E_HAPI_PRM_SCRIPT_TYPE_INTVECTOR2 = static_cast<int32_t>(0xd),
    __E_HAPI_PRM_SCRIPT_TYPE_INTVECTOR3 = static_cast<int32_t>(0xe),
    __E_HAPI_PRM_SCRIPT_TYPE_INTVECTOR4 = static_cast<int32_t>(0xf),
    __E_HAPI_PRM_SCRIPT_TYPE_UV = static_cast<int32_t>(0x10),
    __E_HAPI_PRM_SCRIPT_TYPE_UVW = static_cast<int32_t>(0x11),
    __E_HAPI_PRM_SCRIPT_TYPE_DIR = static_cast<int32_t>(0x12),
    __E_HAPI_PRM_SCRIPT_TYPE_COLOR = static_cast<int32_t>(0x13),
    __E_HAPI_PRM_SCRIPT_TYPE_COLOR4 = static_cast<int32_t>(0x14),
    __E_HAPI_PRM_SCRIPT_TYPE_OPPATH = static_cast<int32_t>(0x15),
    __E_HAPI_PRM_SCRIPT_TYPE_OPLIST = static_cast<int32_t>(0x16),
    __E_HAPI_PRM_SCRIPT_TYPE_OBJECT = static_cast<int32_t>(0x17),
    __E_HAPI_PRM_SCRIPT_TYPE_OBJECTLIST = static_cast<int32_t>(0x18),
    __E_HAPI_PRM_SCRIPT_TYPE_RENDER = static_cast<int32_t>(0x19),
    __E_HAPI_PRM_SCRIPT_TYPE_SEPARATOR = static_cast<int32_t>(0x1a),
    __E_HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA = static_cast<int32_t>(0x1b),
    __E_HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT = static_cast<int32_t>(0x1c),
    __E_HAPI_PRM_SCRIPT_TYPE_LABEL = static_cast<int32_t>(0x1d),
    __E_HAPI_PRM_SCRIPT_TYPE_RGBAMASK = static_cast<int32_t>(0x1e),
    __E_HAPI_PRM_SCRIPT_TYPE_ORDINAL = static_cast<int32_t>(0x1f),
    __E_HAPI_PRM_SCRIPT_TYPE_RAMP_FLT = static_cast<int32_t>(0x20),
    __E_HAPI_PRM_SCRIPT_TYPE_RAMP_RGB = static_cast<int32_t>(0x21),
    __E_HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG = static_cast<int32_t>(0x22),
    __E_HAPI_PRM_SCRIPT_TYPE_INT_LOG = static_cast<int32_t>(0x23),
    __E_HAPI_PRM_SCRIPT_TYPE_DATA = static_cast<int32_t>(0x24),
    __E_HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX = static_cast<int32_t>(0x25),
    __E_HAPI_PRM_SCRIPT_TYPE_INT_MINMAX = static_cast<int32_t>(0x26),
    __E_HAPI_PRM_SCRIPT_TYPE_INT_STARTEND = static_cast<int32_t>(0x27),
    __E_HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP = static_cast<int32_t>(0x28),
    __E_HAPI_PRM_SCRIPT_TYPE_ICONSTRIP = static_cast<int32_t>(0x29),
    __E_HAPI_PRM_SCRIPT_TYPE_GROUPRADIO = static_cast<int32_t>(0x3e8),
    __E_HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE = static_cast<int32_t>(0x3e9),
    __E_HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE = static_cast<int32_t>(0x3ea),
    __E_HAPI_PRM_SCRIPT_TYPE_GROUP = static_cast<int32_t>(0x3eb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_PrmScriptType_Unwrapped() const noexcept {
    return static_cast<__HAPI_PrmScriptType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PrmScriptType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PrmScriptType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_ANGLE value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ANGLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_STRING value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_STRING;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FILE value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FILE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_DIRECTORY value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DIRECTORY;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_IMAGE value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_IMAGE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GEOMETRY value: static_cast<int32_t>(0x7)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GEOMETRY;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_TOGGLE value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_TOGGLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_BUTTON value: static_cast<int32_t>(0x9)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_BUTTON;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR2 value: static_cast<int32_t>(0xa)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR2;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR3 value: static_cast<int32_t>(0xb)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR3;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR4 value: static_cast<int32_t>(0xc)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR4;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR2 value: static_cast<int32_t>(0xd)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR2;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR3 value: static_cast<int32_t>(0xe)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR3;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR4 value: static_cast<int32_t>(0xf)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR4;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_UV value: static_cast<int32_t>(0x10)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_UV;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_UVW value: static_cast<int32_t>(0x11)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_UVW;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_DIR value: static_cast<int32_t>(0x12)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DIR;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_COLOR value: static_cast<int32_t>(0x13)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_COLOR;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_COLOR4 value: static_cast<int32_t>(0x14)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_COLOR4;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OPPATH value: static_cast<int32_t>(0x15)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OPPATH;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OPLIST value: static_cast<int32_t>(0x16)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OPLIST;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OBJECT value: static_cast<int32_t>(0x17)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OBJECT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OBJECTLIST value: static_cast<int32_t>(0x18)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OBJECTLIST;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RENDER value: static_cast<int32_t>(0x19)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RENDER;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_SEPARATOR value: static_cast<int32_t>(0x1a)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_SEPARATOR;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA value: static_cast<int32_t>(0x1b)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT value: static_cast<int32_t>(0x1c)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_LABEL value: static_cast<int32_t>(0x1d)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_LABEL;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RGBAMASK value: static_cast<int32_t>(0x1e)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RGBAMASK;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_ORDINAL value: static_cast<int32_t>(0x1f)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ORDINAL;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RAMP_FLT value: static_cast<int32_t>(0x20)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RAMP_FLT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RAMP_RGB value: static_cast<int32_t>(0x21)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RAMP_RGB;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG value: static_cast<int32_t>(0x22)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_LOG value: static_cast<int32_t>(0x23)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_LOG;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_DATA value: static_cast<int32_t>(0x24)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DATA;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX value: static_cast<int32_t>(0x25)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_MINMAX value: static_cast<int32_t>(0x26)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_MINMAX;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_STARTEND value: static_cast<int32_t>(0x27)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_STARTEND;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP value: static_cast<int32_t>(0x28)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_ICONSTRIP value: static_cast<int32_t>(0x29)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ICONSTRIP;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPRADIO value: static_cast<int32_t>(0x3e8)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPRADIO;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE value: static_cast<int32_t>(0x3e9)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE value: static_cast<int32_t>(0x3ea)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUP value: static_cast<int32_t>(0x3eb)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PrmScriptType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PrmScriptType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PrmScriptType, "HoudiniEngineUnity", "HAPI_PrmScriptType");
