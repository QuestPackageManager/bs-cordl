#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Stream_NullStream)
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::IO {
class Stream;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::IO {
class __Stream__NullStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__Stream__NullStream);
// Type: ::NullStream
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3612))
// CS Name: ::Stream::NullStream*
class CORDL_TYPE __Stream__NullStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field s_zeroTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_zeroTask, put = setStaticF_s_zeroTask))::System::Threading::Tasks::Task_1<int32_t>* s_zeroTask;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  static inline void setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  static inline ::System::Threading::Tasks::Task_1<int32_t>* getStaticF_s_zeroTask();

  static inline ::System::IO::__Stream__NullStream* New_ctor();

  /// @brief Method .ctor addr 0x25368f0 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method get_CanRead addr 0x2536af4 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite addr 0x2536afc size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek addr 0x2536b04 size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_Length addr 0x2536b0c size 0x8 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x2536b14 size 0x8 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x2536b1c size 0x4 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method CopyTo addr 0x2536b20 size 0x8 virtual true final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync addr 0x2536b28 size 0xe8 virtual true final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose addr 0x2536c10 size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush addr 0x2536c14 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x2536c18 size 0xc0 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BeginRead addr 0x2536cd8 size 0x8c virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead addr 0x2536d64 size 0xa4 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method BeginWrite addr 0x2536e08 size 0x8c virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x2536e94 size 0xa4 virtual true final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Read addr 0x2536f38 size 0x8 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Read addr 0x2536f40 size 0x8 virtual true final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadAsync addr 0x2536f48 size 0x58 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync addr 0x2536fa0 size 0x34 virtual true final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte addr 0x2536fd4 size 0x8 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Write addr 0x2536fdc size 0x4 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x2536fe0 size 0x4 virtual true final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync addr 0x2536fe4 size 0xc0 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x25370a4 size 0x94 virtual true final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte addr 0x2537138 size 0x4 virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Seek addr 0x253713c size 0x8 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x2537144 size 0x4 virtual true final false
  inline void SetLength(int64_t length);

  // Ctor Parameters [CppParam { name: "", ty: "__Stream__NullStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Stream__NullStream(__Stream__NullStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Stream__NullStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Stream__NullStream(__Stream__NullStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Stream__NullStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream__NullStream, 0x28>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__Stream__NullStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream__NullStream*, "System.IO", "Stream/NullStream");
