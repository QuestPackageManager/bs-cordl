#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONNodeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNodeType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::JSONNodeType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.JSONNodeType
struct CORDL_TYPE JSONNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JSONNodeType_Unwrapped
  enum struct __JSONNodeType_Unwrapped : int32_t {
    __E_Array = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
    __E_String = static_cast<int32_t>(0x3),
    __E_Number = static_cast<int32_t>(0x4),
    __E_NullValue = static_cast<int32_t>(0x5),
    __E_Boolean = static_cast<int32_t>(0x6),
    __E_None = static_cast<int32_t>(0x7),
    __E_Custom = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JSONNodeType_Unwrapped() const noexcept {
    return static_cast<__JSONNodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JSONNodeType(int32_t value__) noexcept;

  /// @brief Field Array value: I32(1)
  static ::HoudiniEngineUnity::JSONNodeType const Array;

  /// @brief Field Boolean value: I32(6)
  static ::HoudiniEngineUnity::JSONNodeType const Boolean;

  /// @brief Field Custom value: I32(255)
  static ::HoudiniEngineUnity::JSONNodeType const Custom;

  /// @brief Field None value: I32(7)
  static ::HoudiniEngineUnity::JSONNodeType const None;

  /// @brief Field NullValue value: I32(5)
  static ::HoudiniEngineUnity::JSONNodeType const NullValue;

  /// @brief Field Number value: I32(4)
  static ::HoudiniEngineUnity::JSONNodeType const Number;

  /// @brief Field Object value: I32(2)
  static ::HoudiniEngineUnity::JSONNodeType const Object;

  /// @brief Field String value: I32(3)
  static ::HoudiniEngineUnity::JSONNodeType const String;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11845 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNodeType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNodeType, "HoudiniEngineUnity", "JSONNodeType");
