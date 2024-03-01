#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::DefaultValueHandling);
// Type: Newtonsoft.Json::DefaultValueHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::DefaultValueHandling
struct CORDL_TYPE DefaultValueHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DefaultValueHandling_Unwrapped
  enum struct __DefaultValueHandling_Unwrapped : int32_t {
    __E_Include = static_cast<int32_t>(0x0),
    __E_Ignore = static_cast<int32_t>(0x1),
    __E_Populate = static_cast<int32_t>(0x2),
    __E_IgnoreAndPopulate = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DefaultValueHandling_Unwrapped() const noexcept {
    return static_cast<__DefaultValueHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultValueHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ignore value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::DefaultValueHandling const Ignore;

  /// @brief Field IgnoreAndPopulate value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::DefaultValueHandling const IgnoreAndPopulate;

  /// @brief Field Include value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::DefaultValueHandling const Include;

  /// @brief Field Populate value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::DefaultValueHandling const Populate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DefaultValueHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::DefaultValueHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DefaultValueHandling, "Newtonsoft.Json", "DefaultValueHandling");
