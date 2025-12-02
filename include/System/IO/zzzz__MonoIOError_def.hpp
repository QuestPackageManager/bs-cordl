#pragma once
// IWYU pragma private; include "System/IO/MonoIOError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoIOError)
// Forward declare root types
namespace System::IO {
struct MonoIOError;
}
// Write type traits
MARK_VAL_T(::System::IO::MonoIOError);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.MonoIOError
struct CORDL_TYPE MonoIOError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MonoIOError_Unwrapped
  enum struct __MonoIOError_Unwrapped : int32_t {
    __E_ERROR_SUCCESS = static_cast<int32_t>(0x0),
    __E_ERROR_FILE_NOT_FOUND = static_cast<int32_t>(0x2),
    __E_ERROR_PATH_NOT_FOUND = static_cast<int32_t>(0x3),
    __E_ERROR_TOO_MANY_OPEN_FILES = static_cast<int32_t>(0x4),
    __E_ERROR_ACCESS_DENIED = static_cast<int32_t>(0x5),
    __E_ERROR_INVALID_HANDLE = static_cast<int32_t>(0x6),
    __E_ERROR_INVALID_DRIVE = static_cast<int32_t>(0xf),
    __E_ERROR_NOT_SAME_DEVICE = static_cast<int32_t>(0x11),
    __E_ERROR_NO_MORE_FILES = static_cast<int32_t>(0x12),
    __E_ERROR_NOT_READY = static_cast<int32_t>(0x15),
    __E_ERROR_WRITE_FAULT = static_cast<int32_t>(0x1d),
    __E_ERROR_READ_FAULT = static_cast<int32_t>(0x1e),
    __E_ERROR_GEN_FAILURE = static_cast<int32_t>(0x1f),
    __E_ERROR_SHARING_VIOLATION = static_cast<int32_t>(0x20),
    __E_ERROR_LOCK_VIOLATION = static_cast<int32_t>(0x21),
    __E_ERROR_HANDLE_DISK_FULL = static_cast<int32_t>(0x27),
    __E_ERROR_NOT_SUPPORTED = static_cast<int32_t>(0x32),
    __E_ERROR_FILE_EXISTS = static_cast<int32_t>(0x50),
    __E_ERROR_CANNOT_MAKE = static_cast<int32_t>(0x52),
    __E_ERROR_INVALID_PARAMETER = static_cast<int32_t>(0x57),
    __E_ERROR_BROKEN_PIPE = static_cast<int32_t>(0x6d),
    __E_ERROR_INVALID_NAME = static_cast<int32_t>(0x7b),
    __E_ERROR_DIR_NOT_EMPTY = static_cast<int32_t>(0x91),
    __E_ERROR_ALREADY_EXISTS = static_cast<int32_t>(0xb7),
    __E_ERROR_FILENAME_EXCED_RANGE = static_cast<int32_t>(0xce),
    __E_ERROR_DIRECTORY = static_cast<int32_t>(0x10b),
    __E_ERROR_ENCRYPTION_FAILED = static_cast<int32_t>(0x1770),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MonoIOError_Unwrapped() const noexcept {
    return static_cast<__MonoIOError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoIOError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MonoIOError(int32_t value__) noexcept;

  /// @brief Field ERROR_ACCESS_DENIED value: I32(5)
  static ::System::IO::MonoIOError const ERROR_ACCESS_DENIED;

  /// @brief Field ERROR_ALREADY_EXISTS value: I32(183)
  static ::System::IO::MonoIOError const ERROR_ALREADY_EXISTS;

  /// @brief Field ERROR_BROKEN_PIPE value: I32(109)
  static ::System::IO::MonoIOError const ERROR_BROKEN_PIPE;

  /// @brief Field ERROR_CANNOT_MAKE value: I32(82)
  static ::System::IO::MonoIOError const ERROR_CANNOT_MAKE;

  /// @brief Field ERROR_DIRECTORY value: I32(267)
  static ::System::IO::MonoIOError const ERROR_DIRECTORY;

  /// @brief Field ERROR_DIR_NOT_EMPTY value: I32(145)
  static ::System::IO::MonoIOError const ERROR_DIR_NOT_EMPTY;

  /// @brief Field ERROR_ENCRYPTION_FAILED value: I32(6000)
  static ::System::IO::MonoIOError const ERROR_ENCRYPTION_FAILED;

  /// @brief Field ERROR_FILENAME_EXCED_RANGE value: I32(206)
  static ::System::IO::MonoIOError const ERROR_FILENAME_EXCED_RANGE;

  /// @brief Field ERROR_FILE_EXISTS value: I32(80)
  static ::System::IO::MonoIOError const ERROR_FILE_EXISTS;

  /// @brief Field ERROR_FILE_NOT_FOUND value: I32(2)
  static ::System::IO::MonoIOError const ERROR_FILE_NOT_FOUND;

  /// @brief Field ERROR_GEN_FAILURE value: I32(31)
  static ::System::IO::MonoIOError const ERROR_GEN_FAILURE;

  /// @brief Field ERROR_HANDLE_DISK_FULL value: I32(39)
  static ::System::IO::MonoIOError const ERROR_HANDLE_DISK_FULL;

  /// @brief Field ERROR_INVALID_DRIVE value: I32(15)
  static ::System::IO::MonoIOError const ERROR_INVALID_DRIVE;

  /// @brief Field ERROR_INVALID_HANDLE value: I32(6)
  static ::System::IO::MonoIOError const ERROR_INVALID_HANDLE;

  /// @brief Field ERROR_INVALID_NAME value: I32(123)
  static ::System::IO::MonoIOError const ERROR_INVALID_NAME;

  /// @brief Field ERROR_INVALID_PARAMETER value: I32(87)
  static ::System::IO::MonoIOError const ERROR_INVALID_PARAMETER;

  /// @brief Field ERROR_LOCK_VIOLATION value: I32(33)
  static ::System::IO::MonoIOError const ERROR_LOCK_VIOLATION;

  /// @brief Field ERROR_NOT_READY value: I32(21)
  static ::System::IO::MonoIOError const ERROR_NOT_READY;

  /// @brief Field ERROR_NOT_SAME_DEVICE value: I32(17)
  static ::System::IO::MonoIOError const ERROR_NOT_SAME_DEVICE;

  /// @brief Field ERROR_NOT_SUPPORTED value: I32(50)
  static ::System::IO::MonoIOError const ERROR_NOT_SUPPORTED;

  /// @brief Field ERROR_NO_MORE_FILES value: I32(18)
  static ::System::IO::MonoIOError const ERROR_NO_MORE_FILES;

  /// @brief Field ERROR_PATH_NOT_FOUND value: I32(3)
  static ::System::IO::MonoIOError const ERROR_PATH_NOT_FOUND;

  /// @brief Field ERROR_READ_FAULT value: I32(30)
  static ::System::IO::MonoIOError const ERROR_READ_FAULT;

  /// @brief Field ERROR_SHARING_VIOLATION value: I32(32)
  static ::System::IO::MonoIOError const ERROR_SHARING_VIOLATION;

  /// @brief Field ERROR_SUCCESS value: I32(0)
  static ::System::IO::MonoIOError const ERROR_SUCCESS;

  /// @brief Field ERROR_TOO_MANY_OPEN_FILES value: I32(4)
  static ::System::IO::MonoIOError const ERROR_TOO_MANY_OPEN_FILES;

  /// @brief Field ERROR_WRITE_FAULT value: I32(29)
  static ::System::IO::MonoIOError const ERROR_WRITE_FAULT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3915 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::MonoIOError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::MonoIOError, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIOError, "System.IO", "MonoIOError");
