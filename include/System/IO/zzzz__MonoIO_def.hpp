#pragma once
// IWYU pragma private; include "System/IO/MonoIO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.IO::MonoIO
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::MonoIO*
class CORDL_TYPE MonoIO : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvalidHandle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle))::System::IntPtr InvalidHandle;

  /// @brief Field dump_handles, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_dump_handles, put = setStaticF_dump_handles)) bool dump_handles;

  /// @brief Method Cancel, addr 0x28f2444, size 0x128, virtual false, abstract: false, final false
  static inline bool Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Cancel_internal, addr 0x28f2440, size 0x4, virtual false, abstract: false, final false
  static inline bool Cancel_internal(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Close, addr 0x28f256c, size 0x4, virtual false, abstract: false, final false
  static inline bool Close(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method CreatePipe, addr 0x28f2bb8, size 0x4, virtual false, abstract: false, final false
  static inline bool CreatePipe(ByRef<::System::IntPtr> read_handle, ByRef<::System::IntPtr> write_handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method DumpHandles, addr 0x28f226c, size 0x4, virtual false, abstract: false, final false
  static inline void DumpHandles();

  /// @brief Method DuplicateHandle, addr 0x28f2bbc, size 0x4, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle, ByRef<::System::IntPtr> target_handle,
                                     int32_t access, int32_t inherit, int32_t options, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetCurrentDirectory, addr 0x28f2270, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentDirectory(ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetException, addr 0x28f1a20, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::System::IO::MonoIOError error);

  /// @brief Method GetException, addr 0x28f1b50, size 0x71c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::StringW path, ::System::IO::MonoIOError error);

  /// @brief Method GetFileType, addr 0x28f2274, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IO::MonoFileType GetFileType(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetFileType, addr 0x28f2278, size 0x128, virtual false, abstract: false, final false
  static inline ::System::IO::MonoFileType GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength, addr 0x28f294c, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetLength(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength, addr 0x28f2950, size 0x128, virtual false, abstract: false, final false
  static inline int64_t GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open, addr 0x28f23a4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                                      ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open, addr 0x28f23a0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr Open(::cordl_internals::Ptr<char16_t> filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share,
                                      ::System::IO::FileOptions options, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read, addr 0x28f2570, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Read(::System::IntPtr handle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read, addr 0x28f2574, size 0x148, virtual false, abstract: false, final false
  static inline int32_t Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count,
                             ByRef<::System::IO::MonoIOError> error);

  /// @brief Method RemapPath, addr 0x28f2bd0, size 0x4, virtual false, abstract: false, final false
  static inline bool RemapPath(::StringW path, ByRef<::StringW> newPath);

  /// @brief Method Seek, addr 0x28f2808, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Seek(::System::IntPtr handle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Seek, addr 0x28f280c, size 0x140, virtual false, abstract: false, final false
  static inline int64_t Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength, addr 0x28f2a78, size 0x4, virtual false, abstract: false, final false
  static inline bool SetLength(::System::IntPtr handle, int64_t length, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength, addr 0x28f2a7c, size 0x130, virtual false, abstract: false, final false
  static inline bool SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write, addr 0x28f26bc, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Write(::System::IntPtr handle, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> src, int32_t src_offset, int32_t count, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write, addr 0x28f26c0, size 0x148, virtual false, abstract: false, final false
  static inline int32_t Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count,
                              ByRef<::System::IO::MonoIOError> error);

  static inline ::System::IntPtr getStaticF_InvalidHandle();

  static inline bool getStaticF_dump_handles();

  /// @brief Method get_AltDirectorySeparatorChar, addr 0x28f2bc8, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_AltDirectorySeparatorChar();

  /// @brief Method get_ConsoleError, addr 0x28f2bb4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_ConsoleError();

  /// @brief Method get_ConsoleInput, addr 0x28f2bb0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_ConsoleInput();

  /// @brief Method get_ConsoleOutput, addr 0x28f2bac, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_ConsoleOutput();

  /// @brief Method get_DirectorySeparatorChar, addr 0x28f2bc4, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_DirectorySeparatorChar();

  /// @brief Method get_PathSeparator, addr 0x28f2bcc, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_PathSeparator();

  /// @brief Method get_VolumeSeparatorChar, addr 0x28f2bc0, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIO, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::MonoIO);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIO*, "System.IO", "MonoIO");
