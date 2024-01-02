#pragma once
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
// Type: HoudiniEngineUnity::HAPI_NodeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9700))
// CS Name: ::HoudiniEngineUnity::HAPI_NodeType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_NodeType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_NodeType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_NODETYPE_ANY value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_ANY;

  /// @brief Field HAPI_NODETYPE_NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_NONE;

  /// @brief Field HAPI_NODETYPE_OBJ value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_OBJ;

  /// @brief Field HAPI_NODETYPE_SOP value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_SOP;

  /// @brief Field HAPI_NODETYPE_CHOP value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_CHOP;

  /// @brief Field HAPI_NODETYPE_ROP value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_ROP;

  /// @brief Field HAPI_NODETYPE_SHOP value: static_cast<int32_t>(0x10)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_SHOP;

  /// @brief Field HAPI_NODETYPE_COP value: static_cast<int32_t>(0x20)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_COP;

  /// @brief Field HAPI_NODETYPE_VOP value: static_cast<int32_t>(0x40)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_VOP;

  /// @brief Field HAPI_NODETYPE_DOP value: static_cast<int32_t>(0x80)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_DOP;

  /// @brief Field HAPI_NODETYPE_TOP value: static_cast<int32_t>(0x100)
  static ::HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_TOP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_NodeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeType, "HoudiniEngineUnity", "HAPI_NodeType");
