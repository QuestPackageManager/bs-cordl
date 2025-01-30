#pragma once
// IWYU pragma private; include "System/Net/BufferedReadStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedReadStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
struct BufferedReadStream__ProcessReadAsync_d__2;
}
namespace System::Net {
class WebOperation;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
class BufferedReadStream;
}
namespace System::Net {
struct BufferedReadStream__ProcessReadAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::BufferedReadStream);
MARK_VAL_T(::System::Net::BufferedReadStream__ProcessReadAsync_d__2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.BufferedReadStream/<ProcessReadAsync>d__2
struct CORDL_TYPE BufferedReadStream__ProcessReadAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x44bdd88, size 0x328, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x44be0b0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedReadStream__ProcessReadAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::BufferedReadStream*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr BufferedReadStream__ProcessReadAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferedReadStream* __4__this, int32_t size,
                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::BufferedReadStream* __4__this;

  /// @brief Field size, offset: 0x30, size: 0x4, def value: None
  int32_t size;

  /// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x40, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::BufferedReadStream__ProcessReadAsync_d__2, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.BufferedReadStream
class CORDL_TYPE BufferedReadStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using _ProcessReadAsync_d__2 = ::System::Net::BufferedReadStream__ProcessReadAsync_d__2;

  /// @brief Field readBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_readBuffer, put = __cordl_internal_set_readBuffer)) ::System::Net::BufferOffsetSize* readBuffer;

  static inline ::System::Net::BufferedReadStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::BufferOffsetSize* readBuffer);

  /// @brief Method ProcessReadAsync, addr 0x44bdbd8, size 0x120, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryReadFromBuffer, addr 0x44bdcf8, size 0x90, virtual false, abstract: false, final false
  inline bool TryReadFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::ByRef<int32_t> result);

  constexpr ::System::Net::BufferOffsetSize* const& __cordl_internal_get_readBuffer() const;

  constexpr ::System::Net::BufferOffsetSize*& __cordl_internal_get_readBuffer();

  constexpr void __cordl_internal_set_readBuffer(::System::Net::BufferOffsetSize* value);

  /// @brief Method .ctor, addr 0x44bdbb0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::BufferOffsetSize* readBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedReadStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedReadStream(BufferedReadStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedReadStream(BufferedReadStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9671 };

  /// @brief Field readBuffer, offset: 0x40, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* ___readBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::BufferedReadStream, ___readBuffer) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::BufferedReadStream, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::BufferedReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferedReadStream*, "System.Net", "BufferedReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferedReadStream__ProcessReadAsync_d__2, "System.Net", "BufferedReadStream/<ProcessReadAsync>d__2");
