#pragma once
// IWYU pragma private; include "System/IO/MonoIO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoIO)
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileOptions;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct MonoFileType;
}
namespace System::IO {
struct MonoIOError;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::IO {
class MonoIO;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::MonoIO);
// Dependencies System.IntPtr, System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.MonoIO
class CORDL_TYPE MonoIO : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvalidHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle)) ::System::IntPtr InvalidHandle;

  /// @brief Field dump_handles, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_dump_handles, put = setStaticF_dump_handles)) bool dump_handles;

  /// @brief Method Cancel, addr 0x3d8095c, size 0x138, virtual false, abstract: false, final false
  static inline bool Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Cancel_internal, addr 0x3d80958, size 0x4, virtual false, abstract: false, final false
  static inline bool Cancel_internal(::System::IntPtr handle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Close, addr 0x3d80a94, size 0x4, virtual false, abstract: false, final false
  static inline bool Close(::System::IntPtr handle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method CreatePipe, addr 0x3d81130, size 0x4, virtual false, abstract: false, final false
  static inline bool CreatePipe(::ByRef<::System::IntPtr> read_handle, ::ByRef<::System::IntPtr> write_handle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method DumpHandles, addr 0x3d80774, size 0x4, virtual false, abstract: false, final false
  static inline void DumpHandles();

  /// @brief Method DuplicateHandle, addr 0x3d81134, size 0x4, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle, ::ByRef<::System::IntPtr> target_handle,
                                     int32_t access, int32_t inherit, int32_t options, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetCurrentDirectory, addr 0x3d80778, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentDirectory(::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetException, addr 0x3d7ff0c, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::System::IO::MonoIOError error);

  /// @brief Method GetException, addr 0x3d80030, size 0x744, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::StringW path, ::System::IO::MonoIOError error);

  /// @brief Method GetFileType, addr 0x3d8077c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IO::MonoFileType GetFileType(::System::IntPtr handle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetFileType, addr 0x3d80780, size 0x138, virtual false, abstract: false, final false
  static inline ::System::IO::MonoFileType GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength, addr 0x3d80ea4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetLength(::System::IntPtr handle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength, addr 0x3d80ea8, size 0x138, virtual false, abstract: false, final false
  static inline int64_t GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open, addr 0x3d808bc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                                      ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open, addr 0x3d808b8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr Open(::cordl_internals::Ptr<char16_t> filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share,
                                      ::System::IO::FileOptions options, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read, addr 0x3d80a98, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Read(::System::IntPtr handle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read, addr 0x3d80a9c, size 0x158, virtual false, abstract: false, final false
  static inline int32_t Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count,
                             ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method RemapPath, addr 0x3d81148, size 0x4, virtual false, abstract: false, final false
  static inline bool RemapPath(::StringW path, ::ByRef<::StringW> newPath);

  /// @brief Method Seek, addr 0x3d80d50, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Seek(::System::IntPtr handle, int64_t offset, ::System::IO::SeekOrigin origin, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Seek, addr 0x3d80d54, size 0x150, virtual false, abstract: false, final false
  static inline int64_t Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength, addr 0x3d80fe0, size 0x4, virtual false, abstract: false, final false
  static inline bool SetLength(::System::IntPtr handle, int64_t length, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength, addr 0x3d80fe4, size 0x140, virtual false, abstract: false, final false
  static inline bool SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write, addr 0x3d80bf4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Write(::System::IntPtr handle, ::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> src, int32_t src_offset, int32_t count, ::ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write, addr 0x3d80bf8, size 0x158, virtual false, abstract: false, final false
  static inline int32_t Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count,
                              ::ByRef<::System::IO::MonoIOError> error);

  static inline ::System::IntPtr getStaticF_InvalidHandle();

  static inline bool getStaticF_dump_handles();

  /// @brief Method get_AltDirectorySeparatorChar, addr 0x3d81140, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_AltDirectorySeparatorChar();

  /// @brief Method get_ConsoleError, addr 0x3d8112c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_ConsoleError();

  /// @brief Method get_ConsoleInput, addr 0x3d81128, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_ConsoleInput();

  /// @brief Method get_ConsoleOutput, addr 0x3d81124, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_ConsoleOutput();

  /// @brief Method get_DirectorySeparatorChar, addr 0x3d8113c, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_DirectorySeparatorChar();

  /// @brief Method get_PathSeparator, addr 0x3d81144, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_PathSeparator();

  /// @brief Method get_VolumeSeparatorChar, addr 0x3d81138, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_VolumeSeparatorChar();

  static inline void setStaticF_InvalidHandle(::System::IntPtr value);

  static inline void setStaticF_dump_handles(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoIO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoIO(MonoIO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoIO(MonoIO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIO, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::MonoIO);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIO*, "System.IO", "MonoIO");
