#pragma once
// IWYU pragma private; include "System/IO/MonoIOError.hpp"
#include "System/IO/zzzz__MonoIOError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoIOError::MonoIOError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::MonoIOError::MonoIOError()   {
}
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_SUCCESS{static_cast<int32_t>(0x0)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_FILE_NOT_FOUND{static_cast<int32_t>(0x2)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_PATH_NOT_FOUND{static_cast<int32_t>(0x3)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_TOO_MANY_OPEN_FILES{static_cast<int32_t>(0x4)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_ACCESS_DENIED{static_cast<int32_t>(0x5)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_INVALID_HANDLE{static_cast<int32_t>(0x6)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_INVALID_DRIVE{static_cast<int32_t>(0xf)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_NOT_SAME_DEVICE{static_cast<int32_t>(0x11)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_NO_MORE_FILES{static_cast<int32_t>(0x12)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_NOT_READY{static_cast<int32_t>(0x15)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_WRITE_FAULT{static_cast<int32_t>(0x1d)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_READ_FAULT{static_cast<int32_t>(0x1e)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_GEN_FAILURE{static_cast<int32_t>(0x1f)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_SHARING_VIOLATION{static_cast<int32_t>(0x20)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_LOCK_VIOLATION{static_cast<int32_t>(0x21)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_HANDLE_DISK_FULL{static_cast<int32_t>(0x27)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_NOT_SUPPORTED{static_cast<int32_t>(0x32)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_FILE_EXISTS{static_cast<int32_t>(0x50)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_CANNOT_MAKE{static_cast<int32_t>(0x52)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_INVALID_PARAMETER{static_cast<int32_t>(0x57)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_BROKEN_PIPE{static_cast<int32_t>(0x6d)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_INVALID_NAME{static_cast<int32_t>(0x7b)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_DIR_NOT_EMPTY{static_cast<int32_t>(0x91)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_ALREADY_EXISTS{static_cast<int32_t>(0xb7)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_FILENAME_EXCED_RANGE{static_cast<int32_t>(0xce)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_DIRECTORY{static_cast<int32_t>(0x10b)};
constexpr ::System::IO::MonoIOError  System::IO::MonoIOError::ERROR_ENCRYPTION_FAILED{static_cast<int32_t>(0x1770)};
