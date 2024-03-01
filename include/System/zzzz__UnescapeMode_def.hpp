#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnescapeMode)
// Forward declare root types
namespace System {
struct UnescapeMode;
}
// Write type traits
MARK_VAL_T(::System::UnescapeMode);
// Type: System::UnescapeMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::UnescapeMode
struct CORDL_TYPE UnescapeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnescapeMode_Unwrapped
  enum struct __UnescapeMode_Unwrapped : int32_t {
    __E_CopyOnly = static_cast<int32_t>(0x0),
    __E_Escape = static_cast<int32_t>(0x1),
    __E_Unescape = static_cast<int32_t>(0x2),
    __E_EscapeUnescape = static_cast<int32_t>(0x3),
    __E_V1ToStringFlag = static_cast<int32_t>(0x4),
    __E_UnescapeAll = static_cast<int32_t>(0x8),
    __E_UnescapeAllOrThrow = static_cast<int32_t>(0x18),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnescapeMode_Unwrapped() const noexcept {
    return static_cast<__UnescapeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__UnescapeMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnescapeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnescapeMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CopyOnly value: static_cast<int32_t>(0x0)
  static ::System::UnescapeMode const CopyOnly;

  /// @brief Field Escape value: static_cast<int32_t>(0x1)
  static ::System::UnescapeMode const Escape;

  /// @brief Field EscapeUnescape value: static_cast<int32_t>(0x3)
  static ::System::UnescapeMode const EscapeUnescape;

  /// @brief Field Unescape value: static_cast<int32_t>(0x2)
  static ::System::UnescapeMode const Unescape;

  /// @brief Field UnescapeAll value: static_cast<int32_t>(0x8)
  static ::System::UnescapeMode const UnescapeAll;

  /// @brief Field UnescapeAllOrThrow value: static_cast<int32_t>(0x18)
  static ::System::UnescapeMode const UnescapeAllOrThrow;

  /// @brief Field V1ToStringFlag value: static_cast<int32_t>(0x4)
  static ::System::UnescapeMode const V1ToStringFlag;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UnescapeMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::UnescapeMode, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UnescapeMode, "System", "UnescapeMode");
