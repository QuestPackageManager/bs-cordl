#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppAgeCategory)
// Forward declare root types
namespace Oculus::Platform {
struct AppAgeCategory;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AppAgeCategory);
// Type: Oculus.Platform::AppAgeCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::AppAgeCategory
struct CORDL_TYPE AppAgeCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppAgeCategory_Unwrapped
  enum struct __AppAgeCategory_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Ch = static_cast<int32_t>(0x1),
    __E_Nch = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppAgeCategory_Unwrapped() const noexcept {
    return static_cast<__AppAgeCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppAgeCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppAgeCategory(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ch value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::AppAgeCategory const Ch;

  /// @brief Field Nch value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::AppAgeCategory const Nch;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::AppAgeCategory const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AppAgeCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::AppAgeCategory, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AppAgeCategory, "Oculus.Platform", "AppAgeCategory");
