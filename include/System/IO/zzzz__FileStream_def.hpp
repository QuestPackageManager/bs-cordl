#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileStream)
namespace System::IO {
struct FileAccess;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
namespace System::IO {
struct FileShare;
}
namespace System {
class IAsyncResult;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
class __FileStream__WriteDelegate;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
struct FileOptions;
}
namespace System::IO {
class __FileStream__ReadDelegate;
}
// Forward declare root types
namespace System::IO {
class FileStream;
}
namespace System::IO {
class __FileStream__ReadDelegate;
}
namespace System::IO {
class __FileStream__WriteDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileStream);
MARK_REF_PTR_T(::System::IO::__FileStream__ReadDelegate);
MARK_REF_PTR_T(::System::IO::__FileStream__WriteDelegate);
// Type: ::ReadDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3625))
// CS Name: ::FileStream::ReadDelegate*
class CORDL_TYPE __FileStream__ReadDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::IO::__FileStream__ReadDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x253f968 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x254152c size 0x14 virtual true final false
  inline int32_t Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginInvoke addr 0x253fa40 size 0xa8 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x253fc4c size 0x28 virtual true final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__FileStream__ReadDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileStream__ReadDelegate(__FileStream__ReadDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileStream__ReadDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileStream__ReadDelegate(__FileStream__ReadDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStream__ReadDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__FileStream__ReadDelegate, 0x80>, "Size mismatch!");

} // namespace System::IO
// Type: ::WriteDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3626))
// CS Name: ::FileStream::WriteDelegate*
class CORDL_TYPE __FileStream__WriteDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::IO::__FileStream__WriteDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x25405e8 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2541540 size 0x14 virtual true final false
  inline void Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginInvoke addr 0x25406c0 size 0xa8 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x25408d0 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__FileStream__WriteDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileStream__WriteDelegate(__FileStream__WriteDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileStream__WriteDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileStream__WriteDelegate(__FileStream__WriteDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStream__WriteDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__FileStream__WriteDelegate, 0x80>, "Size mismatch!");

} // namespace System::IO
// Type: System.IO::FileStream
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3559)), TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3627))
// CS Name: ::System.IO::FileStream*
class CORDL_TYPE FileStream : public ::System::IO::Stream {
public:
  // Declarations
  using WriteDelegate = ::System::IO::__FileStream__WriteDelegate;

  using ReadDelegate = ::System::IO::__FileStream__ReadDelegate;

  /// @brief Field buf, offset 0x28, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field safeHandle, offset 0x38, size 0x8
  __declspec(property(get = __get_safeHandle, put = __set_safeHandle))::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle;

  /// @brief Field isExposed, offset 0x40, size 0x1
  __declspec(property(get = __get_isExposed, put = __set_isExposed)) bool isExposed;

  /// @brief Field append_startpos, offset 0x48, size 0x8
  __declspec(property(get = __get_append_startpos, put = __set_append_startpos)) int64_t append_startpos;

  /// @brief Field access, offset 0x50, size 0x4
  __declspec(property(get = __get_access, put = __set_access))::System::IO::FileAccess access;

  /// @brief Field owner, offset 0x54, size 0x1
  __declspec(property(get = __get_owner, put = __set_owner)) bool owner;

  /// @brief Field async, offset 0x55, size 0x1
  __declspec(property(get = __get_async, put = __set_async)) bool async;

  /// @brief Field canseek, offset 0x56, size 0x1
  __declspec(property(get = __get_canseek, put = __set_canseek)) bool canseek;

  /// @brief Field anonymous, offset 0x57, size 0x1
  __declspec(property(get = __get_anonymous, put = __set_anonymous)) bool anonymous;

  /// @brief Field buf_dirty, offset 0x58, size 0x1
  __declspec(property(get = __get_buf_dirty, put = __set_buf_dirty)) bool buf_dirty;

  /// @brief Field buf_size, offset 0x5c, size 0x4
  __declspec(property(get = __get_buf_size, put = __set_buf_size)) int32_t buf_size;

  /// @brief Field buf_length, offset 0x60, size 0x4
  __declspec(property(get = __get_buf_length, put = __set_buf_length)) int32_t buf_length;

  /// @brief Field buf_offset, offset 0x64, size 0x4
  __declspec(property(get = __get_buf_offset, put = __set_buf_offset)) int32_t buf_offset;

  /// @brief Field buf_start, offset 0x68, size 0x8
  __declspec(property(get = __get_buf_start, put = __set_buf_start)) int64_t buf_start;

  /// @brief Field buf_recycle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_buf_recycle, put = setStaticF_buf_recycle))::ArrayW<uint8_t, ::Array<uint8_t>*> buf_recycle;

  /// @brief Field buf_recycle_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_buf_recycle_lock, put = setStaticF_buf_recycle_lock))::System::Object* buf_recycle_lock;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_SafeFileHandle))::Microsoft::Win32::SafeHandles::SafeFileHandle* SafeFileHandle;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle*& __get_safeHandle();

  constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeFileHandle*> const& __get_safeHandle() const;

  constexpr void __set_safeHandle(::Microsoft::Win32::SafeHandles::SafeFileHandle* value);

  constexpr bool& __get_isExposed();

  constexpr bool const& __get_isExposed() const;

  constexpr void __set_isExposed(bool value);

  constexpr int64_t& __get_append_startpos();

  constexpr int64_t const& __get_append_startpos() const;

  constexpr void __set_append_startpos(int64_t value);

  constexpr ::System::IO::FileAccess& __get_access();

  constexpr ::System::IO::FileAccess const& __get_access() const;

  constexpr void __set_access(::System::IO::FileAccess value);

  constexpr bool& __get_owner();

  constexpr bool const& __get_owner() const;

  constexpr void __set_owner(bool value);

  constexpr bool& __get_async();

  constexpr bool const& __get_async() const;

  constexpr void __set_async(bool value);

  constexpr bool& __get_canseek();

  constexpr bool const& __get_canseek() const;

  constexpr void __set_canseek(bool value);

  constexpr bool& __get_anonymous();

  constexpr bool const& __get_anonymous() const;

  constexpr void __set_anonymous(bool value);

  constexpr bool& __get_buf_dirty();

  constexpr bool const& __get_buf_dirty() const;

  constexpr void __set_buf_dirty(bool value);

  constexpr int32_t& __get_buf_size();

  constexpr int32_t const& __get_buf_size() const;

  constexpr void __set_buf_size(int32_t value);

  constexpr int32_t& __get_buf_length();

  constexpr int32_t const& __get_buf_length() const;

  constexpr void __set_buf_length(int32_t value);

  constexpr int32_t& __get_buf_offset();

  constexpr int32_t const& __get_buf_offset() const;

  constexpr void __set_buf_offset(int32_t value);

  constexpr int64_t& __get_buf_start();

  constexpr int64_t const& __get_buf_start() const;

  constexpr void __set_buf_start(int64_t value);

  static inline void setStaticF_buf_recycle(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_buf_recycle();

  static inline void setStaticF_buf_recycle_lock(::System::Object* value);

  static inline ::System::Object* getStaticF_buf_recycle_lock();

  static inline ::System::IO::FileStream* New_ctor(void* handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize);

  /// @brief Method .ctor addr 0x253c3a8 size 0x10 virtual false final false
  inline void _ctor(void* handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize);

  static inline ::System::IO::FileStream* New_ctor(void* handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);

  /// @brief Method .ctor addr 0x253c3b8 size 0x1ac virtual false final false
  inline void _ctor(void* handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode);

  /// @brief Method .ctor addr 0x253c84c size 0x34 virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access);

  /// @brief Method .ctor addr 0x253cfac size 0x2c virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  /// @brief Method .ctor addr 0x253cff0 size 0x24 virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize);

  /// @brief Method .ctor addr 0x253d014 size 0x20 virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync);

  /// @brief Method .ctor addr 0x253d034 size 0x28 virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                                   ::System::IO::FileOptions options);

  /// @brief Method .ctor addr 0x253d05c size 0x20 virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, ::System::IO::FileOptions options);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync,
                                                   bool anonymous);

  /// @brief Method .ctor addr 0x253cfd8 size 0x18 virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous);

  static inline ::System::IO::FileStream* New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous,
                                                   ::System::IO::FileOptions options);

  /// @brief Method .ctor addr 0x253c880 size 0x72c virtual false final false
  inline void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous, ::System::IO::FileOptions options);

  /// @brief Method Init addr 0x253c564 size 0x2e8 virtual false final false
  inline void Init(::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);

  /// @brief Method get_CanRead addr 0x253e88c size 0x14 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite addr 0x253e8a0 size 0x14 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek addr 0x253e8b4 size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_Length addr 0x253e8bc size 0x164 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x253eb58 size 0x170 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x253ecc8 size 0x90 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method get_SafeFileHandle addr 0x253ed58 size 0x3c virtual true final false
  inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* get_SafeFileHandle();

  /// @brief Method ExposeHandle addr 0x253e724 size 0x28 virtual false final false
  inline void ExposeHandle();

  /// @brief Method ReadByte addr 0x253ef0c size 0x148 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method WriteByte addr 0x253f1ac size 0x15c virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Read addr 0x253f308 size 0x268 virtual true final false
  inline int32_t Read(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> array, int32_t offset, int32_t count);

  /// @brief Method ReadInternal addr 0x253f570 size 0x9c virtual false final false
  inline int32_t ReadInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t offset, int32_t count);

  /// @brief Method BeginRead addr 0x253f6c4 size 0x2a4 virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject);

  /// @brief Method EndRead addr 0x253fae8 size 0x164 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method Write addr 0x253fc74 size 0x23c virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteInternal addr 0x253feb0 size 0x1b4 virtual false final false
  inline void WriteInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t offset, int32_t count);

  /// @brief Method BeginWrite addr 0x2540224 size 0x2ec virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject);

  /// @brief Method EndWrite addr 0x2540768 size 0x168 virtual true final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Seek addr 0x25408dc size 0x268 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x2540b44 size 0x214 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method Flush addr 0x2540e88 size 0x78 virtual true final false
  inline void Flush();

  /// @brief Method Finalize addr 0x2540f00 size 0xa4 virtual true final false
  inline void Finalize();

  /// @brief Method Dispose addr 0x2540fa4 size 0x334 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method FlushAsync addr 0x25412dc size 0x88 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync addr 0x2541364 size 0x4 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x2541368 size 0x4 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadSegment addr 0x253f60c size 0xb8 virtual false final false
  inline int32_t ReadSegment(::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count);

  /// @brief Method WriteSegment addr 0x25401ac size 0x78 virtual false final false
  inline int32_t WriteSegment(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count);

  /// @brief Method FlushBuffer addr 0x253ed94 size 0x178 virtual false final false
  inline void FlushBuffer();

  /// @brief Method FlushBufferIfDirty addr 0x253ea20 size 0x10 virtual false final false
  inline void FlushBufferIfDirty();

  /// @brief Method RefillBuffer addr 0x253f17c size 0x30 virtual false final false
  inline void RefillBuffer();

  /// @brief Method ReadData addr 0x253f054 size 0x128 virtual false final false
  inline int32_t ReadData(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t count);

  /// @brief Method InitBuffer addr 0x253e498 size 0x28c virtual false final false
  inline void InitBuffer(int32_t size, bool isZeroSize);

  /// @brief Method GetSecureFileName addr 0x253dbdc size 0x78 virtual false final false
  inline ::StringW GetSecureFileName(::StringW filename);

  /// @brief Method GetSecureFileName addr 0x253d6d0 size 0xa8 virtual false final false
  inline ::StringW GetSecureFileName(::StringW filename, bool full);

  // Ctor Parameters [CppParam { name: "", ty: "FileStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStream(FileStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStream(FileStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStream();

public:
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
static_assert(::cordl_internals::size_check_v<::System::IO::FileStream, 0x70>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStream*, "System.IO", "FileStream");
NEED_NO_BOX(::System::IO::__FileStream__ReadDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__FileStream__ReadDelegate*, "System.IO", "FileStream/ReadDelegate");
NEED_NO_BOX(::System::IO::__FileStream__WriteDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__FileStream__WriteDelegate*, "System.IO", "FileStream/WriteDelegate");
