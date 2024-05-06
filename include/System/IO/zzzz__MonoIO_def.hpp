#pragma once
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
  static __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle)) void* InvalidHandle;

  /// @brief Field dump_handles, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_dump_handles, put = setStaticF_dump_handles)) bool dump_handles;

  /// @brief Method Cancel, addr 0x28c33a4, size 0x128, virtual false, abstract: false, final false
  static inline bool Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Cancel_internal, addr 0x28c33a0, size 0x4, virtual false, abstract: false, final false
  static inline bool Cancel_internal(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Close, addr 0x28c34cc, size 0x4, virtual false, abstract: false, final false
  static inline bool Close(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method CreatePipe, addr 0x28c3b18, size 0x4, virtual false, abstract: false, final false
  static inline bool CreatePipe(ByRef<void*> read_handle, ByRef<void*> write_handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method DumpHandles, addr 0x28c31cc, size 0x4, virtual false, abstract: false, final false
  static inline void DumpHandles();

  /// @brief Method DuplicateHandle, addr 0x28c3b1c, size 0x4, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(void* source_process_handle, void* source_handle, void* target_process_handle, ByRef<void*> target_handle, int32_t access, int32_t inherit, int32_t options,
                                     ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetCurrentDirectory, addr 0x28c31d0, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentDirectory(ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetException, addr 0x28c2980, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::System::IO::MonoIOError error);

  /// @brief Method GetException, addr 0x28c2ab0, size 0x71c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::StringW path, ::System::IO::MonoIOError error);

  /// @brief Method GetFileType, addr 0x28c31d4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IO::MonoFileType GetFileType(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetFileType, addr 0x28c31d8, size 0x128, virtual false, abstract: false, final false
  static inline ::System::IO::MonoFileType GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength, addr 0x28c38ac, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetLength(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength, addr 0x28c38b0, size 0x128, virtual false, abstract: false, final false
  static inline int64_t GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open, addr 0x28c3304, size 0x9c, virtual false, abstract: false, final false
  static inline void* Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                           ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open, addr 0x28c3300, size 0x4, virtual false, abstract: false, final false
  static inline void* Open(::cordl_internals::Ptr<char16_t> filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                           ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read, addr 0x28c34d0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Read(void* handle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read, addr 0x28c34d4, size 0x148, virtual false, abstract: false, final false
  static inline int32_t Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count,
                             ByRef<::System::IO::MonoIOError> error);

  /// @brief Method RemapPath, addr 0x28c3b30, size 0x4, virtual false, abstract: false, final false
  static inline bool RemapPath(::StringW path, ByRef<::StringW> newPath);

  /// @brief Method Seek, addr 0x28c3768, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Seek(void* handle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Seek, addr 0x28c376c, size 0x140, virtual false, abstract: false, final false
  static inline int64_t Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength, addr 0x28c39d8, size 0x4, virtual false, abstract: false, final false
  static inline bool SetLength(void* handle, int64_t length, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength, addr 0x28c39dc, size 0x130, virtual false, abstract: false, final false
  static inline bool SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write, addr 0x28c361c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Write(void* handle, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> src, int32_t src_offset, int32_t count, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write, addr 0x28c3620, size 0x148, virtual false, abstract: false, final false
  static inline int32_t Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count,
                              ByRef<::System::IO::MonoIOError> error);

  static inline void* getStaticF_InvalidHandle();

  static inline bool getStaticF_dump_handles();

  /// @brief Method get_AltDirectorySeparatorChar, addr 0x28c3b28, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_AltDirectorySeparatorChar();

  /// @brief Method get_ConsoleError, addr 0x28c3b14, size 0x4, virtual false, abstract: false, final false
  static inline void* get_ConsoleError();

  /// @brief Method get_ConsoleInput, addr 0x28c3b10, size 0x4, virtual false, abstract: false, final false
  static inline void* get_ConsoleInput();

  /// @brief Method get_ConsoleOutput, addr 0x28c3b0c, size 0x4, virtual false, abstract: false, final false
  static inline void* get_ConsoleOutput();

  /// @brief Method get_DirectorySeparatorChar, addr 0x28c3b24, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_DirectorySeparatorChar();

  /// @brief Method get_PathSeparator, addr 0x28c3b2c, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_PathSeparator();

  /// @brief Method get_VolumeSeparatorChar, addr 0x28c3b20, size 0x4, virtual false, abstract: false, final false
  static inline char16_t get_VolumeSeparatorChar();

  static inline void setStaticF_InvalidHandle(void* value);

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
