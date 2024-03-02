#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONContainerType)
// Forward declare root types
namespace OVRSimpleJSON {
struct JSONContainerType;
}
// Write type traits
MARK_VAL_T(::OVRSimpleJSON::JSONContainerType);
// Type: OVRSimpleJSON::JSONContainerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: true
// CS Name: ::OVRSimpleJSON::JSONContainerType
struct CORDL_TYPE JSONContainerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JSONContainerType_Unwrapped
  enum struct __JSONContainerType_Unwrapped : int32_t {
    __E_Array = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JSONContainerType_Unwrapped() const noexcept {
    return static_cast<__JSONContainerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONContainerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JSONContainerType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Array value: static_cast<int32_t>(0x0)
  static ::OVRSimpleJSON::JSONContainerType const Array;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::OVRSimpleJSON::JSONContainerType const Object;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONContainerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONContainerType, value__) == 0x0, "Offset mismatch!");

} // namespace OVRSimpleJSON
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONContainerType, "OVRSimpleJSON", "JSONContainerType");
