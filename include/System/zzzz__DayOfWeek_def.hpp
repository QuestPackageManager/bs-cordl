#pragma once
// IWYU pragma private; include "System/DayOfWeek.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DayOfWeek)
// Forward declare root types
namespace System {
struct DayOfWeek;
}
// Write type traits
MARK_VAL_T(::System::DayOfWeek);
// Type: System::DayOfWeek
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::DayOfWeek
struct CORDL_TYPE DayOfWeek {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DayOfWeek_Unwrapped
  enum struct __DayOfWeek_Unwrapped : int32_t {
    __E_Sunday = static_cast<int32_t>(0x0),
    __E_Monday = static_cast<int32_t>(0x1),
    __E_Tuesday = static_cast<int32_t>(0x2),
    __E_Wednesday = static_cast<int32_t>(0x3),
    __E_Thursday = static_cast<int32_t>(0x4),
    __E_Friday = static_cast<int32_t>(0x5),
    __E_Saturday = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DayOfWeek_Unwrapped() const noexcept {
    return static_cast<__DayOfWeek_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DayOfWeek();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DayOfWeek(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Friday value: static_cast<int32_t>(0x5)
  static ::System::DayOfWeek const Friday;

  /// @brief Field Monday value: static_cast<int32_t>(0x1)
  static ::System::DayOfWeek const Monday;

  /// @brief Field Saturday value: static_cast<int32_t>(0x6)
  static ::System::DayOfWeek const Saturday;

  /// @brief Field Sunday value: static_cast<int32_t>(0x0)
  static ::System::DayOfWeek const Sunday;

  /// @brief Field Thursday value: static_cast<int32_t>(0x4)
  static ::System::DayOfWeek const Thursday;

  /// @brief Field Tuesday value: static_cast<int32_t>(0x2)
  static ::System::DayOfWeek const Tuesday;

  /// @brief Field Wednesday value: static_cast<int32_t>(0x3)
  static ::System::DayOfWeek const Wednesday;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DayOfWeek, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::DayOfWeek, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DayOfWeek, "System", "DayOfWeek");
