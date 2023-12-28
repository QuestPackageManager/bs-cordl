#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Forward declare root types
namespace System::IO {
class MemoryStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::MemoryStream);
// Type: System.IO::MemoryStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3566))
// CS Name: ::System.IO::MemoryStream*
class CORDL_TYPE MemoryStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _origin, offset 0x30, size 0x4
  __declspec(property(get = __get__origin, put = __set__origin)) int32_t _origin;

  /// @brief Field _position, offset 0x34, size 0x4
  __declspec(property(get = __get__position, put = __set__position)) int32_t _position;

  /// @brief Field _length, offset 0x38, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) int32_t _length;

  /// @brief Field _capacity, offset 0x3c, size 0x4
  __declspec(property(get = __get__capacity, put = __set__capacity)) int32_t _capacity;

  /// @brief Field _expandable, offset 0x40, size 0x1
  __declspec(property(get = __get__expandable, put = __set__expandable)) bool _expandable;

  /// @brief Field _writable, offset 0x41, size 0x1
  __declspec(property(get = __get__writable, put = __set__writable)) bool _writable;

  /// @brief Field _exposable, offset 0x42, size 0x1
  __declspec(property(get = __get__exposable, put = __set__exposable)) bool _exposable;

  /// @brief Field _isOpen, offset 0x43, size 0x1
  __declspec(property(get = __get__isOpen, put = __set__isOpen)) bool _isOpen;

  /// @brief Field _lastReadTask, offset 0x48, size 0x8
  __declspec(property(get = __get__lastReadTask, put = __set__lastReadTask))::System::Threading::Tasks::Task_1<int32_t>* _lastReadTask;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__origin();

  constexpr int32_t const& __get__origin() const;

  constexpr void __set__origin(int32_t value);

  constexpr int32_t& __get__position();

  constexpr int32_t const& __get__position() const;

  constexpr void __set__position(int32_t value);

  constexpr int32_t& __get__length();

  constexpr int32_t const& __get__length() const;

  constexpr void __set__length(int32_t value);

  constexpr int32_t& __get__capacity();

  constexpr int32_t const& __get__capacity() const;

  constexpr void __set__capacity(int32_t value);

  constexpr bool& __get__expandable();

  constexpr bool const& __get__expandable() const;

  constexpr void __set__expandable(bool value);

  constexpr bool& __get__writable();

  constexpr bool const& __get__writable() const;

  constexpr void __set__writable(bool value);

  constexpr bool& __get__exposable();

  constexpr bool const& __get__exposable() const;

  constexpr void __set__exposable(bool value);

  constexpr bool& __get__isOpen();

  constexpr bool const& __get__isOpen() const;

  constexpr void __set__isOpen(bool value);

  constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __get__lastReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> const& __get__lastReadTask() const;

  constexpr void __set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  static inline ::System::IO::MemoryStream* New_ctor();

  /// @brief Method .ctor addr 0x24fcd30 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::IO::MemoryStream* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x24fcd38 size 0x160 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor addr 0x24fce98 size 0x8 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool writable);

  /// @brief Method .ctor addr 0x24fcea0 size 0xf0 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool writable);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method .ctor addr 0x24fcf90 size 0xc virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable);

  /// @brief Method .ctor addr 0x24fd174 size 0xc virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);

  /// @brief Method .ctor addr 0x24fcf9c size 0x1d8 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);

  /// @brief Method get_CanRead addr 0x24fd180 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x24fd188 size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x24fd190 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method EnsureNotClosed addr 0x24fd198 size 0x34 virtual false final false
  inline void EnsureNotClosed();

  /// @brief Method EnsureWriteable addr 0x24fd1cc size 0x3c virtual false final false
  inline void EnsureWriteable();

  /// @brief Method Dispose addr 0x24fd208 size 0x1c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureCapacity addr 0x24fd224 size 0xb0 virtual false final false
  inline bool EnsureCapacity(int32_t value);

  /// @brief Method Flush addr 0x24fd2d4 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x24fd2d8 size 0x174 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetBuffer addr 0x24fd44c size 0x64 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer();

  /// @brief Method InternalGetBuffer addr 0x24fd4b0 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetBuffer();

  /// @brief Method InternalGetPosition addr 0x24fd4b8 size 0x8 virtual false final false
  inline int32_t InternalGetPosition();

  /// @brief Method InternalReadInt32 addr 0x24fd4c0 size 0xb8 virtual false final false
  inline int32_t InternalReadInt32();

  /// @brief Method InternalEmulateRead addr 0x24fd578 size 0x3c virtual false final false
  inline int32_t InternalEmulateRead(int32_t count);

  /// @brief Method get_Capacity addr 0x24fd5b4 size 0x20 virtual true final false
  inline int32_t get_Capacity();

  /// @brief Method set_Capacity addr 0x24fd5d4 size 0x180 virtual true final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Length addr 0x24fd754 size 0x24 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x24fd778 size 0x20 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x24fd798 size 0xd0 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Read addr 0x24fd868 size 0x1f4 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Read addr 0x24fda5c size 0x1fc virtual true final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadAsync addr 0x24fdc58 size 0x368 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync addr 0x24fdfc0 size 0x2dc virtual true final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte addr 0x24fe29c size 0x58 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method CopyTo addr 0x24fe2f4 size 0x150 virtual true final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync addr 0x24fe684 size 0x328 virtual true final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek addr 0x24fe9ac size 0x158 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin loc);

  /// @brief Method SetLength addr 0x24feb04 size 0xe0 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method ToArray addr 0x24febe4 size 0xdc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToArray();

  /// @brief Method Write addr 0x24fecc0 size 0x298 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x24fef58 size 0x254 virtual true final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync addr 0x24ff1ac size 0x308 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x24ff4b4 size 0x25c virtual true final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte addr 0x24ff710 size 0xbc virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteTo addr 0x24ff7cc size 0xa4 virtual true final false
  inline void WriteTo(::System::IO::Stream* stream);

  // Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryStream(MemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryStream(MemoryStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryStream();

public:
  /// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _origin, offset: 0x30, size: 0x4, def value: None
  int32_t ____origin;

  /// @brief Field _position, offset: 0x34, size: 0x4, def value: None
  int32_t ____position;

  /// @brief Field _length, offset: 0x38, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _capacity, offset: 0x3c, size: 0x4, def value: None
  int32_t ____capacity;

  /// @brief Field _expandable, offset: 0x40, size: 0x1, def value: None
  bool ____expandable;

  /// @brief Field _writable, offset: 0x41, size: 0x1, def value: None
  bool ____writable;

  /// @brief Field _exposable, offset: 0x42, size: 0x1, def value: None
  bool ____exposable;

  /// @brief Field _isOpen, offset: 0x43, size: 0x1, def value: None
  bool ____isOpen;

  /// @brief Field _lastReadTask, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<int32_t>* ____lastReadTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MemoryStream, 0x50>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::MemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MemoryStream*, "System.IO", "MemoryStream");
