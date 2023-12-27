#pragma once
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
// Type: System.IO::MonoIOError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3631))
// CS Name: ::System.IO::MonoIOError
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MonoIOError(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoIOError();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ERROR_SUCCESS value: static_cast<int32_t>(0x0)
  static ::System::IO::MonoIOError const ERROR_SUCCESS;

  /// @brief Field ERROR_FILE_NOT_FOUND value: static_cast<int32_t>(0x2)
  static ::System::IO::MonoIOError const ERROR_FILE_NOT_FOUND;

  /// @brief Field ERROR_PATH_NOT_FOUND value: static_cast<int32_t>(0x3)
  static ::System::IO::MonoIOError const ERROR_PATH_NOT_FOUND;

  /// @brief Field ERROR_TOO_MANY_OPEN_FILES value: static_cast<int32_t>(0x4)
  static ::System::IO::MonoIOError const ERROR_TOO_MANY_OPEN_FILES;

  /// @brief Field ERROR_ACCESS_DENIED value: static_cast<int32_t>(0x5)
  static ::System::IO::MonoIOError const ERROR_ACCESS_DENIED;

  /// @brief Field ERROR_INVALID_HANDLE value: static_cast<int32_t>(0x6)
  static ::System::IO::MonoIOError const ERROR_INVALID_HANDLE;

  /// @brief Field ERROR_INVALID_DRIVE value: static_cast<int32_t>(0xf)
  static ::System::IO::MonoIOError const ERROR_INVALID_DRIVE;

  /// @brief Field ERROR_NOT_SAME_DEVICE value: static_cast<int32_t>(0x11)
  static ::System::IO::MonoIOError const ERROR_NOT_SAME_DEVICE;

  /// @brief Field ERROR_NO_MORE_FILES value: static_cast<int32_t>(0x12)
  static ::System::IO::MonoIOError const ERROR_NO_MORE_FILES;

  /// @brief Field ERROR_NOT_READY value: static_cast<int32_t>(0x15)
  static ::System::IO::MonoIOError const ERROR_NOT_READY;

  /// @brief Field ERROR_WRITE_FAULT value: static_cast<int32_t>(0x1d)
  static ::System::IO::MonoIOError const ERROR_WRITE_FAULT;

  /// @brief Field ERROR_READ_FAULT value: static_cast<int32_t>(0x1e)
  static ::System::IO::MonoIOError const ERROR_READ_FAULT;

  /// @brief Field ERROR_GEN_FAILURE value: static_cast<int32_t>(0x1f)
  static ::System::IO::MonoIOError const ERROR_GEN_FAILURE;

  /// @brief Field ERROR_SHARING_VIOLATION value: static_cast<int32_t>(0x20)
  static ::System::IO::MonoIOError const ERROR_SHARING_VIOLATION;

  /// @brief Field ERROR_LOCK_VIOLATION value: static_cast<int32_t>(0x21)
  static ::System::IO::MonoIOError const ERROR_LOCK_VIOLATION;

  /// @brief Field ERROR_HANDLE_DISK_FULL value: static_cast<int32_t>(0x27)
  static ::System::IO::MonoIOError const ERROR_HANDLE_DISK_FULL;

  /// @brief Field ERROR_NOT_SUPPORTED value: static_cast<int32_t>(0x32)
  static ::System::IO::MonoIOError const ERROR_NOT_SUPPORTED;

  /// @brief Field ERROR_FILE_EXISTS value: static_cast<int32_t>(0x50)
  static ::System::IO::MonoIOError const ERROR_FILE_EXISTS;

  /// @brief Field ERROR_CANNOT_MAKE value: static_cast<int32_t>(0x52)
  static ::System::IO::MonoIOError const ERROR_CANNOT_MAKE;

  /// @brief Field ERROR_INVALID_PARAMETER value: static_cast<int32_t>(0x57)
  static ::System::IO::MonoIOError const ERROR_INVALID_PARAMETER;

  /// @brief Field ERROR_BROKEN_PIPE value: static_cast<int32_t>(0x6d)
  static ::System::IO::MonoIOError const ERROR_BROKEN_PIPE;

  /// @brief Field ERROR_INVALID_NAME value: static_cast<int32_t>(0x7b)
  static ::System::IO::MonoIOError const ERROR_INVALID_NAME;

  /// @brief Field ERROR_DIR_NOT_EMPTY value: static_cast<int32_t>(0x91)
  static ::System::IO::MonoIOError const ERROR_DIR_NOT_EMPTY;

  /// @brief Field ERROR_ALREADY_EXISTS value: static_cast<int32_t>(0xb7)
  static ::System::IO::MonoIOError const ERROR_ALREADY_EXISTS;

  /// @brief Field ERROR_FILENAME_EXCED_RANGE value: static_cast<int32_t>(0xce)
  static ::System::IO::MonoIOError const ERROR_FILENAME_EXCED_RANGE;

  /// @brief Field ERROR_DIRECTORY value: static_cast<int32_t>(0x10b)
  static ::System::IO::MonoIOError const ERROR_DIRECTORY;

  /// @brief Field ERROR_ENCRYPTION_FAILED value: static_cast<int32_t>(0x1770)
  static ::System::IO::MonoIOError const ERROR_ENCRYPTION_FAILED;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIOError, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIOError, "System.IO", "MonoIOError");
