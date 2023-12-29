#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmanagedMemoryStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::Runtime::InteropServices {
class SafeBuffer;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::IO {
struct FileAccess;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
// Forward declare root types
namespace System::IO {
class UnmanagedMemoryStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::UnmanagedMemoryStream);
// Type: System.IO::UnmanagedMemoryStream
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3607)), TypeDefinitionIndex(TypeDefinitionIndex(3554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3576))
// CS Name: ::System.IO::UnmanagedMemoryStream*
class CORDL_TYPE UnmanagedMemoryStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::System::Runtime::InteropServices::SafeBuffer* _buffer;

  /// @brief Field _mem, offset 0x30, size 0x8
  __declspec(property(get = __get__mem, put = __set__mem))::cordl_internals::Ptr<uint8_t> _mem;

  /// @brief Field _length, offset 0x38, size 0x8
  __declspec(property(get = __get__length, put = __set__length)) int64_t _length;

  /// @brief Field _capacity, offset 0x40, size 0x8
  __declspec(property(get = __get__capacity, put = __set__capacity)) int64_t _capacity;

  /// @brief Field _position, offset 0x48, size 0x8
  __declspec(property(get = __get__position, put = __set__position)) int64_t _position;

  /// @brief Field _offset, offset 0x50, size 0x8
  __declspec(property(get = __get__offset, put = __set__offset)) int64_t _offset;

  /// @brief Field _access, offset 0x58, size 0x4
  __declspec(property(get = __get__access, put = __set__access))::System::IO::FileAccess _access;

  /// @brief Field _isOpen, offset 0x5c, size 0x1
  __declspec(property(get = __get__isOpen, put = __set__isOpen)) bool _isOpen;

  /// @brief Field _lastReadTask, offset 0x60, size 0x8
  __declspec(property(get = __get__lastReadTask, put = __set__lastReadTask))::System::Threading::Tasks::Task_1<int32_t>* _lastReadTask;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_PositionPointer))::cordl_internals::Ptr<uint8_t> PositionPointer;

  constexpr ::System::Runtime::InteropServices::SafeBuffer*& __get__buffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::InteropServices::SafeBuffer*> const& __get__buffer() const;

  constexpr void __set__buffer(::System::Runtime::InteropServices::SafeBuffer* value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get__mem();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get__mem() const;

  constexpr void __set__mem(::cordl_internals::Ptr<uint8_t> value);

  constexpr int64_t& __get__length();

  constexpr int64_t const& __get__length() const;

  constexpr void __set__length(int64_t value);

  constexpr int64_t& __get__capacity();

  constexpr int64_t const& __get__capacity() const;

  constexpr void __set__capacity(int64_t value);

  constexpr int64_t& __get__position();

  constexpr int64_t const& __get__position() const;

  constexpr void __set__position(int64_t value);

  constexpr int64_t& __get__offset();

  constexpr int64_t const& __get__offset() const;

  constexpr void __set__offset(int64_t value);

  constexpr ::System::IO::FileAccess& __get__access();

  constexpr ::System::IO::FileAccess const& __get__access() const;

  constexpr void __set__access(::System::IO::FileAccess value);

  constexpr bool& __get__isOpen();

  constexpr bool const& __get__isOpen() const;

  constexpr void __set__isOpen(bool value);

  constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __get__lastReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> const& __get__lastReadTask() const;

  constexpr void __set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  static inline ::System::IO::UnmanagedMemoryStream* New_ctor();

  /// @brief Method .ctor addr 0x23a667c size 0x64 virtual false final false
  inline void _ctor();

  static inline ::System::IO::UnmanagedMemoryStream* New_ctor(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access);

  /// @brief Method .ctor addr 0x23abb30 size 0x90 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access);

  /// @brief Method Initialize addr 0x23a66e0 size 0x208 virtual false final false
  inline void Initialize(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access);

  /// @brief Method get_CanRead addr 0x23abbc0 size 0x1c virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x23abbdc size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x23abbe4 size 0x1c virtual true final false
  inline bool get_CanWrite();

  /// @brief Method Dispose addr 0x23a6f0c size 0x14 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureNotClosed addr 0x23abc00 size 0x34 virtual false final false
  inline void EnsureNotClosed();

  /// @brief Method EnsureReadable addr 0x23abc34 size 0x3c virtual false final false
  inline void EnsureReadable();

  /// @brief Method EnsureWriteable addr 0x23abc70 size 0x3c virtual false final false
  inline void EnsureWriteable();

  /// @brief Method Flush addr 0x23abcac size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x23abcb0 size 0x174 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_Length addr 0x23abe24 size 0x1c virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x23abe40 size 0x48 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x23abe88 size 0xa8 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method get_PositionPointer addr 0x23abf30 size 0xc0 virtual false final false
  inline ::cordl_internals::Ptr<uint8_t> get_PositionPointer();

  /// @brief Method Read addr 0x23abff0 size 0x1c0 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Read addr 0x23ac1b0 size 0xe4 virtual true final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadCore addr 0x23a68ec size 0x22c virtual false final false
  inline int32_t ReadCore(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadAsync addr 0x23ac294 size 0x310 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync addr 0x23ac5a4 size 0x294 virtual true final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte addr 0x23ac838 size 0x160 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Seek addr 0x23ac998 size 0x110 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin loc);

  /// @brief Method SetLength addr 0x23acaa8 size 0x190 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method Write addr 0x23acc38 size 0x1ec virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x23ace24 size 0xe4 virtual true final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteCore addr 0x23a6b1c size 0x2fc virtual false final false
  inline void WriteCore(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync addr 0x23acf08 size 0x2c0 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x23ad1c8 size 0x214 virtual true final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte addr 0x23ad3dc size 0x228 virtual true final false
  inline void WriteByte(uint8_t value);

  // Ctor Parameters [CppParam { name: "", ty: "UnmanagedMemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmanagedMemoryStream(UnmanagedMemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmanagedMemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmanagedMemoryStream(UnmanagedMemoryStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmanagedMemoryStream();

public:
  /// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::InteropServices::SafeBuffer* ____buffer;

  /// @brief Field _mem, offset: 0x30, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ____mem;

  /// @brief Field _length, offset: 0x38, size: 0x8, def value: None
  int64_t ____length;

  /// @brief Field _capacity, offset: 0x40, size: 0x8, def value: None
  int64_t ____capacity;

  /// @brief Field _position, offset: 0x48, size: 0x8, def value: None
  int64_t ____position;

  /// @brief Field _offset, offset: 0x50, size: 0x8, def value: None
  int64_t ____offset;

  /// @brief Field _access, offset: 0x58, size: 0x4, def value: None
  ::System::IO::FileAccess ____access;

  /// @brief Field _isOpen, offset: 0x5c, size: 0x1, def value: None
  bool ____isOpen;

  /// @brief Field _lastReadTask, offset: 0x60, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<int32_t>* ____lastReadTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::UnmanagedMemoryStream, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____mem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____length) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____capacity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____position) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____offset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____access) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____isOpen) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::UnmanagedMemoryStream, ____lastReadTask) == 0x60, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::UnmanagedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::UnmanagedMemoryStream*, "System.IO", "UnmanagedMemoryStream");
