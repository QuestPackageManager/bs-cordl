#pragma once
// IWYU pragma private; include "System/DateTimeKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeKind)
// Forward declare root types
namespace System {
struct DateTimeKind;
}
// Write type traits
MARK_VAL_T(::System::DateTimeKind);
// Type: System::DateTimeKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::DateTimeKind
struct CORDL_TYPE DateTimeKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeKind_Unwrapped
  enum struct __DateTimeKind_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Utc = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeKind_Unwrapped() const noexcept {
    return static_cast<__DateTimeKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Local value: static_cast<int32_t>(0x2)
  static ::System::DateTimeKind const Local;

  /// @brief Field Unspecified value: static_cast<int32_t>(0x0)
  static ::System::DateTimeKind const Unspecified;

  /// @brief Field Utc value: static_cast<int32_t>(0x1)
  static ::System::DateTimeKind const Utc;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2371 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::DateTimeKind, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeKind, "System", "DateTimeKind");
