#pragma once
// IWYU pragma private; include "System/IO/SeekOrigin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SeekOrigin)
// Forward declare root types
namespace System::IO {
struct SeekOrigin;
}
// Write type traits
MARK_VAL_T(::System::IO::SeekOrigin);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.SeekOrigin
struct CORDL_TYPE SeekOrigin {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SeekOrigin_Unwrapped
  enum struct __SeekOrigin_Unwrapped : int32_t {
    __E_Begin = static_cast<int32_t>(0x0),
    __E_Current = static_cast<int32_t>(0x1),
    __E_End = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SeekOrigin_Unwrapped() const noexcept {
    return static_cast<__SeekOrigin_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SeekOrigin();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SeekOrigin(int32_t value__) noexcept;

  /// @brief Field Begin value: I32(0)
  static ::System::IO::SeekOrigin const Begin;

  /// @brief Field Current value: I32(1)
  static ::System::IO::SeekOrigin const Current;

  /// @brief Field End value: I32(2)
  static ::System::IO::SeekOrigin const End;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::SeekOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::SeekOrigin, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SeekOrigin, "System.IO", "SeekOrigin");
