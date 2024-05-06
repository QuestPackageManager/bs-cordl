#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_AttributeOwner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AttributeOwner)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AttributeOwner);
// Type: HoudiniEngineUnity::HAPI_AttributeOwner
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_AttributeOwner
struct CORDL_TYPE HAPI_AttributeOwner {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_AttributeOwner_Unwrapped
  enum struct __HAPI_AttributeOwner_Unwrapped : int32_t {
    __E_HAPI_ATTROWNER_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_ATTROWNER_VERTEX = static_cast<int32_t>(0x0),
    __E_HAPI_ATTROWNER_POINT = static_cast<int32_t>(0x1),
    __E_HAPI_ATTROWNER_PRIM = static_cast<int32_t>(0x2),
    __E_HAPI_ATTROWNER_DETAIL = static_cast<int32_t>(0x3),
    __E_HAPI_ATTROWNER_MAX = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_AttributeOwner_Unwrapped() const noexcept {
    return static_cast<__HAPI_AttributeOwner_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_AttributeOwner();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_AttributeOwner(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_ATTROWNER_DETAIL value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_DETAIL;

  /// @brief Field HAPI_ATTROWNER_INVALID value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_INVALID;

  /// @brief Field HAPI_ATTROWNER_MAX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_MAX;

  /// @brief Field HAPI_ATTROWNER_POINT value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_POINT;

  /// @brief Field HAPI_ATTROWNER_PRIM value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_PRIM;

  /// @brief Field HAPI_ATTROWNER_VERTEX value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_VERTEX;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AttributeOwner, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeOwner, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeOwner, "HoudiniEngineUnity", "HAPI_AttributeOwner");
