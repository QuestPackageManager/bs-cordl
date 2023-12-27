#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonContainerType)
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonContainerType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::JsonContainerType);
// Type: Newtonsoft.Json::JsonContainerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11806))
// CS Name: ::Newtonsoft.Json::JsonContainerType
struct CORDL_TYPE JsonContainerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonContainerType_Unwrapped
  enum struct __JsonContainerType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_Array = static_cast<int32_t>(0x2),
    __E_Constructor = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JsonContainerType_Unwrapped() const noexcept {
    return static_cast<__JsonContainerType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonContainerType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContainerType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::JsonContainerType const None;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::JsonContainerType const Object;

  /// @brief Field Array value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::JsonContainerType const Array;

  /// @brief Field Constructor value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::JsonContainerType const Constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonContainerType, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonContainerType, "Newtonsoft.Json", "JsonContainerType");
