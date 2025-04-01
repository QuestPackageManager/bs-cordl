#pragma once
// IWYU pragma private; include "System/Net/WebReadStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebReadStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct WebReadStream__ReadAsync_d__28;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebReadStream;
}
namespace System::Net {
struct WebReadStream__ReadAsync_d__28;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebReadStream);
MARK_VAL_T(::System::Net::WebReadStream__ReadAsync_d__28);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebReadStream/<ReadAsync>d__28
struct CORDL_TYPE WebReadStream__ReadAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43dcd74, size 0x5c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43dd338, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebReadStream__ReadAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebReadStream*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebReadStream__ReadAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Net::WebReadStream* __4__this,
                                           ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                           ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                           ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebReadStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x38, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field size, offset: 0x3c, size: 0x4, def value: None
  int32_t size;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, size) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream__ReadAsync_d__28, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebReadStream__ReadAsync_d__28, 0x60>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.IO.Stream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebReadStream
class CORDL_TYPE WebReadStream : public ::System::IO::Stream {
public:
  // Declarations
  using _ReadAsync_d__28 = ::System::Net::WebReadStream__ReadAsync_d__28;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_InnerStream)) ::System::IO::Stream* InnerStream;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Operation)) ::System::Net::WebOperation* Operation;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field <InnerStream>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__InnerStream_k__BackingField, put = __cordl_internal_set__InnerStream_k__BackingField)) ::System::IO::Stream* _InnerStream_k__BackingField;

  /// @brief Field <Operation>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Operation_k__BackingField, put = __cordl_internal_set__Operation_k__BackingField)) ::System::Net::WebOperation* _Operation_k__BackingField;

  /// @brief Field disposed, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Method BeginRead, addr 0x43dc82c, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method Dispose, addr 0x43dcd28, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x43dc9ec, size 0x120, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* r);

  /// @brief Method FinishReading, addr 0x43dcc24, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Flush, addr 0x43dc434, size 0x38, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetException, addr 0x43dc46c, size 0x168, virtual false, abstract: false, final false
  inline ::System::Exception* GetException(::System::Exception* e);

  static inline ::System::Net::WebReadStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream);

  /// @brief Method ProcessReadAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Read, addr 0x43dc5d4, size 0x258, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ReadAsync, addr 0x43dcb0c, size 0x118, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x43dc3c4, size 0x38, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x43dc38c, size 0x38, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x43dc3fc, size 0x38, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::System::IO::Stream* const& __cordl_internal_get__InnerStream_k__BackingField() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__InnerStream_k__BackingField();

  constexpr ::System::Net::WebOperation* const& __cordl_internal_get__Operation_k__BackingField() const;

  constexpr ::System::Net::WebOperation*& __cordl_internal_get__Operation_k__BackingField();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr void __cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__Operation_k__BackingField(::System::Net::WebOperation* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  /// @brief Method .ctor, addr 0x43dc25c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream);

  /// @brief Method get_CanRead, addr 0x43dc37c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x43dc374, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x43dc384, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_InnerStream, addr 0x43dc254, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_InnerStream();

  /// @brief Method get_Length, addr 0x43dc2cc, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Operation, addr 0x43dc24c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebOperation* get_Operation();

  /// @brief Method get_Position, addr 0x43dc304, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x43dc33c, size 0x38, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebReadStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebReadStream(WebReadStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebReadStream(WebReadStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9750 };

  /// @brief Field <Operation>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebOperation* ____Operation_k__BackingField;

  /// @brief Field <InnerStream>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ____InnerStream_k__BackingField;

  /// @brief Field disposed, offset: 0x38, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebReadStream, ____Operation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream, ____InnerStream_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream, ___disposed) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebReadStream, 0x40>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebReadStream*, "System.Net", "WebReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebReadStream__ReadAsync_d__28, "System.Net", "WebReadStream/<ReadAsync>d__28");
