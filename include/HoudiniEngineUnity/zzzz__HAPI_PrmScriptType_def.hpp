#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PrmScriptType.hpp"
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
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_PrmScriptType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PrmScriptType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PrmScriptType(int32_t value__) noexcept;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_ANGLE value: I32(2)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ANGLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_BUTTON value: I32(9)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_BUTTON;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP value: I32(40)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_COLOR value: I32(19)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_COLOR;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_COLOR4 value: I32(20)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_COLOR4;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_DATA value: I32(36)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DATA;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_DIR value: I32(18)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DIR;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_DIRECTORY value: I32(5)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DIRECTORY;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FILE value: I32(4)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FILE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT value: I32(1)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG value: I32(34)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX value: I32(37)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GEOMETRY value: I32(7)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GEOMETRY;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA value: I32(27)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUP value: I32(1003)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUP;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE value: I32(1001)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPRADIO value: I32(1000)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPRADIO;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE value: I32(1002)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_ICONSTRIP value: I32(41)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ICONSTRIP;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_IMAGE value: I32(6)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_IMAGE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT value: I32(0)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR2 value: I32(13)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR2;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR3 value: I32(14)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR3;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR4 value: I32(15)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR4;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_LOG value: I32(35)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_LOG;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_MINMAX value: I32(38)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_MINMAX;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_STARTEND value: I32(39)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_STARTEND;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT value: I32(28)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_LABEL value: I32(29)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_LABEL;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OBJECT value: I32(23)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OBJECT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OBJECTLIST value: I32(24)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OBJECTLIST;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OPLIST value: I32(22)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OPLIST;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_OPPATH value: I32(21)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OPPATH;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_ORDINAL value: I32(31)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ORDINAL;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RAMP_FLT value: I32(32)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RAMP_FLT;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RAMP_RGB value: I32(33)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RAMP_RGB;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RENDER value: I32(25)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RENDER;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_RGBAMASK value: I32(30)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RGBAMASK;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_SEPARATOR value: I32(26)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_SEPARATOR;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_STRING value: I32(3)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_STRING;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_TOGGLE value: I32(8)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_TOGGLE;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_UV value: I32(16)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_UV;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_UVW value: I32(17)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_UVW;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR2 value: I32(10)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR2;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR3 value: I32(11)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR3;

  /// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR4 value: I32(12)
  static ::HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_PrmScriptType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PrmScriptType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PrmScriptType, "HoudiniEngineUnity", "HAPI_PrmScriptType");
