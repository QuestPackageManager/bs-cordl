#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_NodeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_NodeType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_NodeType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_NodeType
struct CORDL_TYPE HAPI_NodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_NodeType_Unwrapped
  enum struct __HAPI_NodeType_Unwrapped : int32_t {
    __E_HAPI_NODETYPE_ANY = static_cast<int32_t>(0xffffffff),
    __E_HAPI_NODETYPE_NONE = static_cast<int32_t>(0x0),
    __E_HAPI_NODETYPE_OBJ = static_cast<int32_t>(0x1),
    __E_HAPI_NODETYPE_SOP = static_cast<int32_t>(0x2),
    __E_HAPI_NODETYPE_CHOP = static_cast<int32_t>(0x4),
    __E_HAPI_NODETYPE_ROP = static_cast<int32_t>(0x8),
    __E_HAPI_NODETYPE_SHOP = static_cast<int32_t>(0x10),
    __E_HAPI_NODETYPE_COP = static_cast<int32_t>(0x20),
    __E_HAPI_NODETYPE_VOP = static_cast<int32_t>(0x40),
    __E_HAPI_NODETYPE_DOP = static_cast<int32_t>(0x80),
    __E_HAPI_NODETYPE_TOP = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_NodeType_Unwrapped() const noexcept {
    return static_cast<__HAPI_NodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_NodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_NodeType(int32_t value__) noexcept;

  /// @brief Field HAPI_NODETYPE_ANY value: I32(-1)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_ANY;

  /// @brief Field HAPI_NODETYPE_CHOP value: I32(4)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_CHOP;

  /// @brief Field HAPI_NODETYPE_COP value: I32(32)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_COP;

  /// @brief Field HAPI_NODETYPE_DOP value: I32(128)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_DOP;

  /// @brief Field HAPI_NODETYPE_NONE value: I32(0)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_NONE;

  /// @brief Field HAPI_NODETYPE_OBJ value: I32(1)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_OBJ;

  /// @brief Field HAPI_NODETYPE_ROP value: I32(8)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_ROP;

  /// @brief Field HAPI_NODETYPE_SHOP value: I32(16)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_SHOP;

  /// @brief Field HAPI_NODETYPE_SOP value: I32(2)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_SOP;

  /// @brief Field HAPI_NODETYPE_TOP value: I32(256)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_TOP;

  /// @brief Field HAPI_NODETYPE_VOP value: I32(64)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_VOP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_NodeType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeType, "HoudiniEngineUnity", "HAPI_NodeType");
