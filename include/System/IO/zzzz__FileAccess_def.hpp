#pragma once
// IWYU pragma private; include "System/IO/FileAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileAccess)
// Forward declare root types
namespace System::IO {
struct FileAccess;
}
// Write type traits
MARK_VAL_T(::System::IO::FileAccess);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.FileAccess
struct CORDL_TYPE FileAccess {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileAccess_Unwrapped
  enum struct __FileAccess_Unwrapped : int32_t {
    __E_Read = static_cast<int32_t>(0x1),
    __E_Write = static_cast<int32_t>(0x2),
    __E_ReadWrite = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileAccess_Unwrapped() const noexcept {
    return static_cast<__FileAccess_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileAccess();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileAccess(int32_t value__) noexcept;

  /// @brief Field Read value: I32(1)
  static ::System::IO::FileAccess const Read;

  /// @brief Field ReadWrite value: I32(3)
  static ::System::IO::FileAccess const ReadWrite;

  /// @brief Field Write value: I32(2)
  static ::System::IO::FileAccess const Write;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileAccess, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileAccess, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileAccess, "System.IO", "FileAccess");
