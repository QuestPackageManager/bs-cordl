#pragma once
// IWYU pragma private; include "System/Handles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Handles)
// Forward declare root types
namespace System {
struct Handles;
}
// Write type traits
MARK_VAL_T(::System::Handles);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Handles
struct CORDL_TYPE Handles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Handles_Unwrapped
  enum struct __Handles_Unwrapped : int32_t {
    __E_STD_INPUT = static_cast<int32_t>(0xfffffff6),
    __E_STD_OUTPUT = static_cast<int32_t>(0xfffffff5),
    __E_STD_ERROR = static_cast<int32_t>(0xfffffff4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Handles_Unwrapped() const noexcept {
    return static_cast<__Handles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Handles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Handles(int32_t value__) noexcept;

  /// @brief Field STD_ERROR value: I32(-12)
  static ::System::Handles const STD_ERROR;

  /// @brief Field STD_INPUT value: I32(-10)
  static ::System::Handles const STD_INPUT;

  /// @brief Field STD_OUTPUT value: I32(-11)
  static ::System::Handles const STD_OUTPUT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Handles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Handles, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Handles, "System", "Handles");
