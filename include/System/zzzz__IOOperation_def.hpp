#pragma once
// IWYU pragma private; include "System/IOOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IOOperation)
// Forward declare root types
namespace System {
struct IOOperation;
}
// Write type traits
MARK_VAL_T(::System::IOOperation);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.IOOperation
struct CORDL_TYPE IOOperation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IOOperation_Unwrapped
  enum struct __IOOperation_Unwrapped : int32_t {
    __E_Read = static_cast<int32_t>(0x1),
    __E_Write = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IOOperation_Unwrapped() const noexcept {
    return static_cast<__IOOperation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IOOperation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IOOperation(int32_t value__) noexcept;

  /// @brief Field Read value: I32(1)
  static ::System::IOOperation const Read;

  /// @brief Field Write value: I32(2)
  static ::System::IOOperation const Write;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9211 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IOOperation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IOOperation, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::IOOperation, "System", "IOOperation");
