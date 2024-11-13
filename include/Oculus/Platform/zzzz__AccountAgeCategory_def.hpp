#pragma once
// IWYU pragma private; include "Oculus/Platform/AccountAgeCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountAgeCategory)
// Forward declare root types
namespace Oculus::Platform {
struct AccountAgeCategory;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AccountAgeCategory);
// Type: Oculus.Platform::AccountAgeCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::AccountAgeCategory
struct CORDL_TYPE AccountAgeCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AccountAgeCategory_Unwrapped
  enum struct __AccountAgeCategory_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Ch = static_cast<int32_t>(0x1),
    __E_Tn = static_cast<int32_t>(0x2),
    __E_Ad = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AccountAgeCategory_Unwrapped() const noexcept {
    return static_cast<__AccountAgeCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountAgeCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AccountAgeCategory(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ad value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::AccountAgeCategory const Ad;

  /// @brief Field Ch value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::AccountAgeCategory const Ch;

  /// @brief Field Tn value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::AccountAgeCategory const Tn;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::AccountAgeCategory const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15271 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AccountAgeCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::AccountAgeCategory, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AccountAgeCategory, "Oculus.Platform", "AccountAgeCategory");
