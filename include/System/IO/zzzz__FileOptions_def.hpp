#pragma once
// IWYU pragma private; include "System/IO/FileOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileOptions)
// Forward declare root types
namespace System::IO {
struct FileOptions;
}
// Write type traits
MARK_VAL_T(::System::IO::FileOptions);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.FileOptions
struct CORDL_TYPE FileOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileOptions_Unwrapped
  enum struct __FileOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WriteThrough = static_cast<int32_t>(0x80000000),
    __E_Asynchronous = static_cast<int32_t>(0x40000000),
    __E_RandomAccess = static_cast<int32_t>(0x10000000),
    __E_DeleteOnClose = static_cast<int32_t>(0x4000000),
    __E_SequentialScan = static_cast<int32_t>(0x8000000),
    __E_Encrypted = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileOptions_Unwrapped() const noexcept {
    return static_cast<__FileOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileOptions(int32_t value__) noexcept;

  /// @brief Field Asynchronous value: I32(1073741824)
  static ::System::IO::FileOptions const Asynchronous;

  /// @brief Field DeleteOnClose value: I32(67108864)
  static ::System::IO::FileOptions const DeleteOnClose;

  /// @brief Field Encrypted value: I32(16384)
  static ::System::IO::FileOptions const Encrypted;

  /// @brief Field None value: I32(0)
  static ::System::IO::FileOptions const None;

  /// @brief Field RandomAccess value: I32(268435456)
  static ::System::IO::FileOptions const RandomAccess;

  /// @brief Field SequentialScan value: I32(134217728)
  static ::System::IO::FileOptions const SequentialScan;

  /// @brief Field WriteThrough value: I32(-2147483648)
  static ::System::IO::FileOptions const WriteThrough;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileOptions, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileOptions, "System.IO", "FileOptions");
