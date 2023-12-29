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
struct FileOptions;
}
namespace System::IO {
struct FileShare;
}
namespace System {
class Exception;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
struct MonoFileType;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct MonoIOError;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3618))
// CS Name: ::System.IO::MonoIO*
class CORDL_TYPE MonoIO : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvalidHandle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle)) void* InvalidHandle;

  /// @brief Field dump_handles, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_dump_handles, put = setStaticF_dump_handles)) bool dump_handles;

  static inline void setStaticF_InvalidHandle(void* value);

  static inline void* getStaticF_InvalidHandle();

  static inline void setStaticF_dump_handles(bool value);

  static inline bool getStaticF_dump_handles();

  /// @brief Method GetException addr 0x23e536c size 0x130 virtual false final false
  static inline ::System::Exception* GetException(::System::IO::MonoIOError error);

  /// @brief Method GetException addr 0x23e19c0 size 0x71c virtual false final false
  static inline ::System::Exception* GetException(::StringW path, ::System::IO::MonoIOError error);

  /// @brief Method GetCurrentDirectory addr 0x23e54a0 size 0x4 virtual false final false
  static inline ::StringW GetCurrentDirectory(ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetFileType addr 0x23e54a4 size 0x4 virtual false final false
  static inline ::System::IO::MonoFileType GetFileType(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetFileType addr 0x23e20dc size 0x128 virtual false final false
  static inline ::System::IO::MonoFileType GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open addr 0x23e54a8 size 0x4 virtual false final false
  static inline void* Open(::cordl_internals::Ptr<char16_t> filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                           ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Open addr 0x23e18ac size 0x9c virtual false final false
  static inline void* Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                           ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Cancel_internal addr 0x23e54ac size 0x4 virtual false final false
  static inline bool Cancel_internal(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Cancel addr 0x23e54b0 size 0x128 virtual false final false
  static inline bool Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Close addr 0x23e503c size 0x4 virtual false final false
  static inline bool Close(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read addr 0x23e55d8 size 0x4 virtual false final false
  static inline int32_t Read(void* handle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Read addr 0x23e50d0 size 0x148 virtual false final false
  static inline int32_t Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count,
                             ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write addr 0x23e55dc size 0x4 virtual false final false
  static inline int32_t Write(void* handle, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> src, int32_t src_offset, int32_t count, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Write addr 0x23e3dd0 size 0x148 virtual false final false
  static inline int32_t Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count,
                              ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Seek addr 0x23e55e0 size 0x4 virtual false final false
  static inline int64_t Seek(void* handle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method Seek addr 0x23e24b8 size 0x140 virtual false final false
  static inline int64_t Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength addr 0x23e55e4 size 0x4 virtual false final false
  static inline int64_t GetLength(void* handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method GetLength addr 0x23e279c size 0x128 virtual false final false
  static inline int64_t GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength addr 0x23e55e8 size 0x4 virtual false final false
  static inline bool SetLength(void* handle, int64_t length, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method SetLength addr 0x23e4abc size 0x130 virtual false final false
  static inline bool SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method get_ConsoleOutput addr 0x23e55ec size 0x4 virtual false final false
  static inline void* get_ConsoleOutput();

  /// @brief Method get_ConsoleInput addr 0x23e55f0 size 0x4 virtual false final false
  static inline void* get_ConsoleInput();

  /// @brief Method get_ConsoleError addr 0x23e55f4 size 0x4 virtual false final false
  static inline void* get_ConsoleError();

  /// @brief Method CreatePipe addr 0x23e55f8 size 0x4 virtual false final false
  static inline bool CreatePipe(ByRef<void*> read_handle, ByRef<void*> write_handle, ByRef<::System::IO::MonoIOError> error);

  /// @brief Method DuplicateHandle addr 0x23e55fc size 0x4 virtual false final false
  static inline bool DuplicateHandle(void* source_process_handle, void* source_handle, void* target_process_handle, ByRef<void*> target_handle, int32_t access, int32_t inherit, int32_t options,
                                     ByRef<::System::IO::MonoIOError> error);

  /// @brief Method get_VolumeSeparatorChar addr 0x23e5600 size 0x4 virtual false final false
  static inline char16_t get_VolumeSeparatorChar();

  /// @brief Method get_DirectorySeparatorChar addr 0x23e5604 size 0x4 virtual false final false
  static inline char16_t get_DirectorySeparatorChar();

  /// @brief Method get_AltDirectorySeparatorChar addr 0x23e5608 size 0x4 virtual false final false
  static inline char16_t get_AltDirectorySeparatorChar();

  /// @brief Method get_PathSeparator addr 0x23e560c size 0x4 virtual false final false
  static inline char16_t get_PathSeparator();

  /// @brief Method DumpHandles addr 0x23e549c size 0x4 virtual false final false
  static inline void DumpHandles();

  /// @brief Method RemapPath addr 0x23e5610 size 0x4 virtual false final false
  static inline bool RemapPath(::StringW path, ByRef<::StringW> newPath);

  // Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoIO(MonoIO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoIO(MonoIO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoIO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIO, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::MonoIO);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIO*, "System.IO", "MonoIO");
