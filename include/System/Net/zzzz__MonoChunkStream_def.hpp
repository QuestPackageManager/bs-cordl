#pragma once
// IWYU pragma private; include "System/Net/MonoChunkStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
struct MonoChunkStream__FinishReading_d__8;
}
namespace System::Net {
struct MonoChunkStream__ProcessReadAsync_d__7;
}
namespace System::Net {
class WebHeaderCollection;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
class MonoChunkStream;
}
namespace System::Net {
struct MonoChunkStream__FinishReading_d__8;
}
namespace System::Net {
struct MonoChunkStream__ProcessReadAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::MonoChunkStream);
MARK_VAL_T(::System::Net::MonoChunkStream__FinishReading_d__8);
MARK_VAL_T(::System::Net::MonoChunkStream__ProcessReadAsync_d__7);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.MonoChunkStream/<ProcessReadAsync>d__7
struct CORDL_TYPE MonoChunkStream__ProcessReadAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x611e108, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x611e548, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoChunkStream__ProcessReadAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_moreBytes_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr MonoChunkStream__ProcessReadAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                   ::System::Threading::CancellationToken cancellationToken, ::System::Net::MonoChunkStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                                                   int32_t offset, int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> _moreBytes_5__2,
                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11589 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::MonoChunkStream* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x38, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field size, offset: 0x3c, size: 0x4, def value: None
  int32_t size;

  /// @brief Field <moreBytes>5__2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _moreBytes_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, size) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, _moreBytes_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::MonoChunkStream__ProcessReadAsync_d__7, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.MonoChunkStream/<FinishReading>d__8
struct CORDL_TYPE MonoChunkStream__FinishReading_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x611e5c8, size 0x490, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x611ea58, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoChunkStream__FinishReading_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr MonoChunkStream__FinishReading_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::MonoChunkStream* __4__this,
                                                ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2,
                                                ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11590 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::MonoChunkStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <buffer>5__2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, _buffer_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream__FinishReading_d__8, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::MonoChunkStream__FinishReading_d__8, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.MonoChunkStream
class CORDL_TYPE MonoChunkStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using _FinishReading_d__8 = ::System::Net::MonoChunkStream__FinishReading_d__8;

  using _ProcessReadAsync_d__7 = ::System::Net::MonoChunkStream__ProcessReadAsync_d__7;

  __declspec(property(get = get_Decoder)) ::System::Net::MonoChunkParser* Decoder;

  /// @brief Field <Decoder>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Decoder_k__BackingField, put = __cordl_internal_set__Decoder_k__BackingField)) ::System::Net::MonoChunkParser* _Decoder_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField, put = __cordl_internal_set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection* _Headers_k__BackingField;

  /// @brief Method FinishReading, addr 0x611dfe0, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::MonoChunkStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::WebHeaderCollection* headers);

  /// @brief Method ProcessReadAsync, addr 0x611ded0, size 0x110, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ThrowExpectingChunkTrailer, addr 0x611e0a8, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowExpectingChunkTrailer();

  constexpr ::System::Net::MonoChunkParser* const& __cordl_internal_get__Decoder_k__BackingField() const;

  constexpr ::System::Net::MonoChunkParser*& __cordl_internal_get__Decoder_k__BackingField();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__Headers_k__BackingField();

  constexpr void __cordl_internal_set__Decoder_k__BackingField(::System::Net::MonoChunkParser* value);

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value);

  /// @brief Method <>n__0, addr 0x611e100, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* __n__0(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x611de40, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::WebHeaderCollection* headers);

  /// @brief Method get_Decoder, addr 0x611de38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::MonoChunkParser* get_Decoder();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoChunkStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoChunkStream(MonoChunkStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoChunkStream(MonoChunkStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11591 };

  /// @brief Field <Headers>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____Headers_k__BackingField;

  /// @brief Field <Decoder>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Net::MonoChunkParser* ____Decoder_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::MonoChunkStream, ____Headers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream, ____Decoder_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::MonoChunkStream, 0x50>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::MonoChunkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkStream*, "System.Net", "MonoChunkStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkStream__FinishReading_d__8, "System.Net", "MonoChunkStream/<FinishReading>d__8");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkStream__ProcessReadAsync_d__7, "System.Net", "MonoChunkStream/<ProcessReadAsync>d__7");
