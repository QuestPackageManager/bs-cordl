#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NullValueHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct NullValueHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::NullValueHandling);
// Type: Newtonsoft.Json::NullValueHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11736))
// CS Name: ::Newtonsoft.Json::NullValueHandling
struct CORDL_TYPE NullValueHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NullValueHandling_Unwrapped
  enum struct __NullValueHandling_Unwrapped : int32_t {
    __E_Include = static_cast<int32_t>(0x0),
    __E_Ignore = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NullValueHandling_Unwrapped() const noexcept {
    return static_cast<__NullValueHandling_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NullValueHandling(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NullValueHandling();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Include value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::NullValueHandling const Include;

  /// @brief Field Ignore value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::NullValueHandling const Ignore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::NullValueHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::NullValueHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::NullValueHandling, "Newtonsoft.Json", "NullValueHandling");
