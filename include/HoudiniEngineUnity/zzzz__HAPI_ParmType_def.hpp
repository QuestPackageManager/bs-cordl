#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ParmType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ParmType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ParmType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ParmType
struct CORDL_TYPE HAPI_ParmType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_ParmType_Unwrapped
  enum struct __HAPI_ParmType_Unwrapped : int32_t {
    __E_HAPI_PARMTYPE_INT = static_cast<int32_t>(0x0),
    __E_HAPI_PARMTYPE_MULTIPARMLIST = static_cast<int32_t>(0x1),
    __E_HAPI_PARMTYPE_TOGGLE = static_cast<int32_t>(0x2),
    __E_HAPI_PARMTYPE_BUTTON = static_cast<int32_t>(0x3),
    __E_HAPI_PARMTYPE_FLOAT = static_cast<int32_t>(0x4),
    __E_HAPI_PARMTYPE_COLOR = static_cast<int32_t>(0x5),
    __E_HAPI_PARMTYPE_STRING = static_cast<int32_t>(0x6),
    __E_HAPI_PARMTYPE_PATH_FILE = static_cast<int32_t>(0x7),
    __E_HAPI_PARMTYPE_PATH_FILE_GEO = static_cast<int32_t>(0x8),
    __E_HAPI_PARMTYPE_PATH_FILE_IMAGE = static_cast<int32_t>(0x9),
    __E_HAPI_PARMTYPE_NODE = static_cast<int32_t>(0xa),
    __E_HAPI_PARMTYPE_FOLDERLIST = static_cast<int32_t>(0xb),
    __E_HAPI_PARMTYPE_FOLDERLIST_RADIO = static_cast<int32_t>(0xc),
    __E_HAPI_PARMTYPE_FOLDER = static_cast<int32_t>(0xd),
    __E_HAPI_PARMTYPE_LABEL = static_cast<int32_t>(0xe),
    __E_HAPI_PARMTYPE_SEPARATOR = static_cast<int32_t>(0xf),
    __E_HAPI_PARMTYPE_PATH_FILE_DIR = static_cast<int32_t>(0x10),
    __E_HAPI_PARMTYPE_MAX = static_cast<int32_t>(0x11),
    __E_HAPI_PARMTYPE_INT_START = static_cast<int32_t>(0x0),
    __E_HAPI_PARMTYPE_INT_END = static_cast<int32_t>(0x3),
    __E_HAPI_PARMTYPE_FLOAT_START = static_cast<int32_t>(0x4),
    __E_HAPI_PARMTYPE_FLOAT_END = static_cast<int32_t>(0x5),
    __E_HAPI_PARMTYPE_STRING_START = static_cast<int32_t>(0x6),
    __E_HAPI_PARMTYPE_STRING_END = static_cast<int32_t>(0xa),
    __E_HAPI_PARMTYPE_PATH_START = static_cast<int32_t>(0x7),
    __E_HAPI_PARMTYPE_PATH_END = static_cast<int32_t>(0x9),
    __E_HAPI_PARMTYPE_NODE_START = static_cast<int32_t>(0xa),
    __E_HAPI_PARMTYPE_NODE_END = static_cast<int32_t>(0xa),
    __E_HAPI_PARMTYPE_CONTAINER_START = static_cast<int32_t>(0xb),
    __E_HAPI_PARMTYPE_CONTAINER_END = static_cast<int32_t>(0xc),
    __E_HAPI_PARMTYPE_NONVALUE_START = static_cast<int32_t>(0xd),
    __E_HAPI_PARMTYPE_NONVALUE_END = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_ParmType_Unwrapped() const noexcept {
    return static_cast<__HAPI_ParmType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ParmType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ParmType(int32_t value__) noexcept;

  /// @brief Field HAPI_PARMTYPE_BUTTON value: I32(3)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_BUTTON;

  /// @brief Field HAPI_PARMTYPE_COLOR value: I32(5)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_COLOR;

  /// @brief Field HAPI_PARMTYPE_CONTAINER_END value: I32(12)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_CONTAINER_END;

  /// @brief Field HAPI_PARMTYPE_CONTAINER_START value: I32(11)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_CONTAINER_START;

  /// @brief Field HAPI_PARMTYPE_FLOAT value: I32(4)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT;

  /// @brief Field HAPI_PARMTYPE_FLOAT_END value: I32(5)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT_END;

  /// @brief Field HAPI_PARMTYPE_FLOAT_START value: I32(4)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT_START;

  /// @brief Field HAPI_PARMTYPE_FOLDER value: I32(13)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDER;

  /// @brief Field HAPI_PARMTYPE_FOLDERLIST value: I32(11)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDERLIST;

  /// @brief Field HAPI_PARMTYPE_FOLDERLIST_RADIO value: I32(12)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDERLIST_RADIO;

  /// @brief Field HAPI_PARMTYPE_INT value: I32(0)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT;

  /// @brief Field HAPI_PARMTYPE_INT_END value: I32(3)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT_END;

  /// @brief Field HAPI_PARMTYPE_INT_START value: I32(0)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT_START;

  /// @brief Field HAPI_PARMTYPE_LABEL value: I32(14)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_LABEL;

  /// @brief Field HAPI_PARMTYPE_MAX value: I32(17)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_MAX;

  /// @brief Field HAPI_PARMTYPE_MULTIPARMLIST value: I32(1)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_MULTIPARMLIST;

  /// @brief Field HAPI_PARMTYPE_NODE value: I32(10)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE;

  /// @brief Field HAPI_PARMTYPE_NODE_END value: I32(10)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE_END;

  /// @brief Field HAPI_PARMTYPE_NODE_START value: I32(10)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE_START;

  /// @brief Field HAPI_PARMTYPE_NONVALUE_END value: I32(15)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NONVALUE_END;

  /// @brief Field HAPI_PARMTYPE_NONVALUE_START value: I32(13)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NONVALUE_START;

  /// @brief Field HAPI_PARMTYPE_PATH_END value: I32(9)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_END;

  /// @brief Field HAPI_PARMTYPE_PATH_FILE value: I32(7)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE;

  /// @brief Field HAPI_PARMTYPE_PATH_FILE_DIR value: I32(16)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_DIR;

  /// @brief Field HAPI_PARMTYPE_PATH_FILE_GEO value: I32(8)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_GEO;

  /// @brief Field HAPI_PARMTYPE_PATH_FILE_IMAGE value: I32(9)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_IMAGE;

  /// @brief Field HAPI_PARMTYPE_PATH_START value: I32(7)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_START;

  /// @brief Field HAPI_PARMTYPE_SEPARATOR value: I32(15)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_SEPARATOR;

  /// @brief Field HAPI_PARMTYPE_STRING value: I32(6)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING;

  /// @brief Field HAPI_PARMTYPE_STRING_END value: I32(10)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING_END;

  /// @brief Field HAPI_PARMTYPE_STRING_START value: I32(6)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING_START;

  /// @brief Field HAPI_PARMTYPE_TOGGLE value: I32(2)
  static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_TOGGLE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmType, "HoudiniEngineUnity", "HAPI_ParmType");
