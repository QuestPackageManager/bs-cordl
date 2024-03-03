#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Required)
// Forward declare root types
namespace Newtonsoft::Json {
struct Required;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Required);
// Type: Newtonsoft.Json::Required
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::Required
struct CORDL_TYPE Required {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Required_Unwrapped
  enum struct __Required_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_AllowNull = static_cast<int32_t>(0x1),
    __E_Always = static_cast<int32_t>(0x2),
    __E_DisallowNull = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Required_Unwrapped() const noexcept {
    return static_cast<__Required_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Required();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Required(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllowNull value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Required const AllowNull;

  /// @brief Field Always value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Required const Always;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Required const Default;

  /// @brief Field DisallowNull value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Required const DisallowNull;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Required, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Required, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Required, "Newtonsoft.Json", "Required");
