#pragma once
// IWYU pragma private; include "System/IO/FileStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileStream)
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
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
class FileStream_ReadDelegate;
}
namespace System::IO {
class FileStream_WriteDelegate;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO {
class FileStream;
}
namespace System::IO {
class FileStream_ReadDelegate;
}
namespace System::IO {
class FileStream_WriteDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileStream);
MARK_REF_PTR_T(::System::IO::FileStream_ReadDelegate);
MARK_REF_PTR_T(::System::IO::FileStream_WriteDelegate);
// Dependencies System.MulticastDelegate
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileStream/ReadDelegate
class CORDL_TYPE FileStream_ReadDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3d7dd40, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3d7dde8, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3d7dd2c, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  static inline ::System::IO::FileStream_ReadDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3d7dc8c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStream_ReadDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileStream_ReadDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStream_ReadDelegate(FileStream_ReadDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStream_ReadDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStream_ReadDelegate(FileStream_ReadDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileStream_ReadDelegate, 0x80>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.MulticastDelegate
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileStream/WriteDelegate
class CORDL_TYPE FileStream_WriteDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3d7dec4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3d7df6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3d7deb0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  static inline ::System::IO::FileStream_WriteDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3d7de10, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStream_WriteDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileStream_WriteDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStream_WriteDelegate(FileStream_WriteDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStream_WriteDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStream_WriteDelegate(FileStream_WriteDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileStream_WriteDelegate, 0x80>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.IO.FileAccess, System.IO.Stream
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileStream
class CORDL_TYPE FileStream : public ::System::IO::Stream {
public:
  // Declarations
  using ReadDelegate = ::System::IO::FileStream_ReadDelegate;

  using WriteDelegate = ::System::IO::FileStream_WriteDelegate;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_SafeFileHandle)) ::Microsoft::Win32::SafeHandles::SafeFileHandle* SafeFileHandle;

  /// @brief Field access, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_access, put = __cordl_internal_set_access)) ::System::IO::FileAccess access;

  /// @brief Field anonymous, offset 0x57, size 0x1
  __declspec(property(get = __cordl_internal_get_anonymous, put = __cordl_internal_set_anonymous)) bool anonymous;

  /// @brief Field append_startpos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_append_startpos, put = __cordl_internal_set_append_startpos)) int64_t append_startpos;

  /// @brief Field async, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_async, put = __cordl_internal_set_async)) bool async;

  /// @brief Field buf, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf_dirty, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_buf_dirty, put = __cordl_internal_set_buf_dirty)) bool buf_dirty;

  /// @brief Field buf_length, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_buf_length, put = __cordl_internal_set_buf_length)) int32_t buf_length;

  /// @brief Field buf_offset, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_buf_offset, put = __cordl_internal_set_buf_offset)) int32_t buf_offset;

  /// @brief Field buf_recycle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buf_recycle, put = setStaticF_buf_recycle)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf_recycle;

  /// @brief Field buf_recycle_lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buf_recycle_lock, put = setStaticF_buf_recycle_lock)) ::System::Object* buf_recycle_lock;

  /// @brief Field buf_size, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_buf_size, put = __cordl_internal_set_buf_size)) int32_t buf_size;

  /// @brief Field buf_start, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_buf_start, put = __cordl_internal_set_buf_start)) int64_t buf_start;

  /// @brief Field canseek, offset 0x56, size 0x1
  __declspec(property(get = __cordl_internal_get_canseek, put = __cordl_internal_set_canseek)) bool canseek;

  /// @brief Field isExposed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isExposed, put = __cordl_internal_set_isExposed)) bool isExposed;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field owner, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) bool owner;

  /// @brief Field safeHandle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_safeHandle, put = __cordl_internal_set_safeHandle)) ::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle;

  /// @brief Method BeginRead, addr 0x3d7c648, size 0x294, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject);

  /// @brief Method BeginWrite, addr 0x3d7cea0, size 0x2d4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject);

  /// @brief Method Dispose, addr 0x3d7d854, size 0x33c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x3d7c8dc, size 0x160, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x3d7d174, size 0x160, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method ExposeHandle, addr 0x3d7b924, size 0x28, virtual false, abstract: false, final false
  inline void ExposeHandle();

  /// @brief Method Finalize, addr 0x3d7d7b0, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Flush, addr 0x3d7d73c, size 0x74, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x3d7db90, size 0x84, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlushBuffer, addr 0x3d7bd30, size 0x18c, virtual false, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method FlushBufferIfDirty, addr 0x3d7bae8, size 0x10, virtual false, abstract: false, final false
  inline void FlushBufferIfDirty();

  /// @brief Method GetSecureFileName, addr 0x3d7b624, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GetSecureFileName(::StringW filename);

  /// @brief Method GetSecureFileName, addr 0x3d7b574, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW GetSecureFileName(::StringW filename, bool full);

  /// @brief Method Init, addr 0x3d7aa84, size 0x2e4, virtual false, abstract: false, final false
  inline void Init(::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);

  /// @brief Method InitBuffer, addr 0x3d7b6a0, size 0x284, virtual false, abstract: false, final false
  inline void InitBuffer(int32_t size, bool isZeroSize);

  static inline ::System::IO::FileStream* New_ctor(::Microsoft::Win32::SafeHandles::SafeFileHandle* handle, ::System::IO::FileAccess access);

  static inline ::System::IO::FileStream* New_ctor(::Microsoft::Win32::SafeHandles::SafeFileHandle* handle, ::System::IO::FileAccess access, int32_t bufferSize, bool isAsync);

  static inline ::System::IO::FileStream* New_ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize);

  static inline ::System::IO::FileStream* New_ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous,
                                                   ::System::IO::FileOptions options);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync,
                                                   bool anonymous);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                                   ::System::IO::FileOptions options);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync);

  /// @brief Method Read, addr 0x3d7c2a8, size 0x24c, virtual true, abstract: false, final false
  inline int32_t Read(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> array, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x3d7dc14, size 0x4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte, addr 0x3d7bebc, size 0x140, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadData, addr 0x3d7bffc, size 0x128, virtual false, abstract: false, final false
  inline int32_t ReadData(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t count);

  /// @brief Method ReadInternal, addr 0x3d7c4f4, size 0x9c, virtual false, abstract: false, final false
  inline int32_t ReadInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t offset, int32_t count);

  /// @brief Method ReadSegment, addr 0x3d7c590, size 0xb8, virtual false, abstract: false, final false
  inline int32_t ReadSegment(::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count);

  /// @brief Method RefillBuffer, addr 0x3d7c124, size 0x30, virtual false, abstract: false, final false
  inline void RefillBuffer();

  /// @brief Method Seek, addr 0x3d7d2d4, size 0x25c, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x3d7d530, size 0x20c, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x3d7ca3c, size 0x224, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteAsync, addr 0x3d7dc18, size 0x4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte, addr 0x3d7c154, size 0x154, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteInternal, addr 0x3d7cc60, size 0x1c8, virtual false, abstract: false, final false
  inline void WriteInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t offset, int32_t count);

  /// @brief Method WriteSegment, addr 0x3d7ce28, size 0x78, virtual false, abstract: false, final false
  inline int32_t WriteSegment(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count);

  constexpr ::System::IO::FileAccess const& __cordl_internal_get_access() const;

  constexpr ::System::IO::FileAccess& __cordl_internal_get_access();

  constexpr bool const& __cordl_internal_get_anonymous() const;

  constexpr bool& __cordl_internal_get_anonymous();

  constexpr int64_t const& __cordl_internal_get_append_startpos() const;

  constexpr int64_t& __cordl_internal_get_append_startpos();

  constexpr bool const& __cordl_internal_get_async() const;

  constexpr bool& __cordl_internal_get_async();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr bool const& __cordl_internal_get_buf_dirty() const;

  constexpr bool& __cordl_internal_get_buf_dirty();

  constexpr int32_t const& __cordl_internal_get_buf_length() const;

  constexpr int32_t& __cordl_internal_get_buf_length();

  constexpr int32_t const& __cordl_internal_get_buf_offset() const;

  constexpr int32_t& __cordl_internal_get_buf_offset();

  constexpr int32_t const& __cordl_internal_get_buf_size() const;

  constexpr int32_t& __cordl_internal_get_buf_size();

  constexpr int64_t const& __cordl_internal_get_buf_start() const;

  constexpr int64_t& __cordl_internal_get_buf_start();

  constexpr bool const& __cordl_internal_get_canseek() const;

  constexpr bool& __cordl_internal_get_canseek();

  constexpr bool const& __cordl_internal_get_isExposed() const;

  constexpr bool& __cordl_internal_get_isExposed();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr bool const& __cordl_internal_get_owner() const;

  constexpr bool& __cordl_internal_get_owner();

  constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle* const& __cordl_internal_get_safeHandle() const;

  constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle*& __cordl_internal_get_safeHandle();

  constexpr void __cordl_internal_set_access(::System::IO::FileAccess value);

  constexpr void __cordl_internal_set_anonymous(bool value);

  constexpr void __cordl_internal_set_append_startpos(int64_t value);

  constexpr void __cordl_internal_set_async(bool value);

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_buf_dirty(bool value);

  constexpr void __cordl_internal_set_buf_length(int32_t value);

  constexpr void __cordl_internal_set_buf_offset(int32_t value);

  constexpr void __cordl_internal_set_buf_size(int32_t value);

  constexpr void __cordl_internal_set_buf_start(int64_t value);

  constexpr void __cordl_internal_set_canseek(bool value);

  constexpr void __cordl_internal_set_isExposed(bool value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_owner(bool value);

  constexpr void __cordl_internal_set_safeHandle(::Microsoft::Win32::SafeHandles::SafeFileHandle* value);

  /// @brief Method .ctor, addr 0x3d7b4ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Microsoft::Win32::SafeHandles::SafeFileHandle* handle, ::System::IO::FileAccess access);

  /// @brief Method .ctor, addr 0x3d7b4b8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Microsoft::Win32::SafeHandles::SafeFileHandle* handle, ::System::IO::FileAccess access, int32_t bufferSize, bool isAsync);

  /// @brief Method .ctor, addr 0x3d7a8d4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x3d7a8e4, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);

  /// @brief Method .ctor, addr 0x3d7ad68, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access);

  /// @brief Method .ctor, addr 0x3d673e8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  /// @brief Method .ctor, addr 0x3d66e84, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x3d7adac, size 0x700, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous, ::System::IO::FileOptions options);

  /// @brief Method .ctor, addr 0x3d7ad94, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous);

  /// @brief Method .ctor, addr 0x3d6a5fc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, ::System::IO::FileOptions options);

  /// @brief Method .ctor, addr 0x3d69a08, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_buf_recycle();

  static inline ::System::Object* getStaticF_buf_recycle_lock();

  /// @brief Method get_CanRead, addr 0x3d7b94c, size 0x14, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x3d7b974, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x3d7b960, size 0x14, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x3d7b984, size 0x164, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Name, addr 0x3d7b97c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Position, addr 0x3d7baf8, size 0x170, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_SafeFileHandle, addr 0x3d7bcf4, size 0x3c, virtual true, abstract: false, final false
  inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* get_SafeFileHandle();

  static inline void setStaticF_buf_recycle(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_buf_recycle_lock(::System::Object* value);

  /// @brief Method set_Position, addr 0x3d7bc68, size 0x8c, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStream(FileStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStream(FileStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3633 };

  /// @brief Field buf, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field safeHandle, offset: 0x38, size: 0x8, def value: None
  ::Microsoft::Win32::SafeHandles::SafeFileHandle* ___safeHandle;

  /// @brief Field isExposed, offset: 0x40, size: 0x1, def value: None
  bool ___isExposed;

  /// @brief Field append_startpos, offset: 0x48, size: 0x8, def value: None
  int64_t ___append_startpos;

  /// @brief Field access, offset: 0x50, size: 0x4, def value: None
  ::System::IO::FileAccess ___access;

  /// @brief Field owner, offset: 0x54, size: 0x1, def value: None
  bool ___owner;

  /// @brief Field async, offset: 0x55, size: 0x1, def value: None
  bool ___async;

  /// @brief Field canseek, offset: 0x56, size: 0x1, def value: None
  bool ___canseek;

  /// @brief Field anonymous, offset: 0x57, size: 0x1, def value: None
  bool ___anonymous;

  /// @brief Field buf_dirty, offset: 0x58, size: 0x1, def value: None
  bool ___buf_dirty;

  /// @brief Field buf_size, offset: 0x5c, size: 0x4, def value: None
  int32_t ___buf_size;

  /// @brief Field buf_length, offset: 0x60, size: 0x4, def value: None
  int32_t ___buf_length;

  /// @brief Field buf_offset, offset: 0x64, size: 0x4, def value: None
  int32_t ___buf_offset;

  /// @brief Field buf_start, offset: 0x68, size: 0x8, def value: None
  int64_t ___buf_start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileStream, ___buf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___safeHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___isExposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___append_startpos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___access) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___owner) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___async) == 0x55, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___canseek) == 0x56, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___anonymous) == 0x57, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___buf_dirty) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___buf_size) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___buf_length) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___buf_offset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStream, ___buf_start) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileStream, 0x70>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStream*, "System.IO", "FileStream");
NEED_NO_BOX(::System::IO::FileStream_ReadDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStream_ReadDelegate*, "System.IO", "FileStream/ReadDelegate");
NEED_NO_BOX(::System::IO::FileStream_WriteDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStream_WriteDelegate*, "System.IO", "FileStream/WriteDelegate");
