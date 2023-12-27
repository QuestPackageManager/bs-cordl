#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStream)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::IO {
struct __BufferedStream___FlushAsyncInternal_d__38;
}
namespace System::IO {
class __BufferedStream____c;
}
namespace System::IO {
struct __BufferedStream___FlushWriteAsync_d__42;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
struct __BufferedStream___WriteToUnderlyingStreamAsync_d__63;
}
namespace System::IO {
class Stream;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::IO {
struct __BufferedStream___DisposeAsync_d__34;
}
namespace System::IO {
struct __BufferedStream___CopyToAsyncCore_d__71;
}
namespace System::IO {
struct __BufferedStream___ReadFromUnderlyingStreamAsync_d__51;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncValueTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncValueTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::IO {
class BufferedStream;
}
namespace System::IO {
class __BufferedStream____c;
}
namespace System::IO {
struct __BufferedStream___CopyToAsyncCore_d__71;
}
namespace System::IO {
struct __BufferedStream___DisposeAsync_d__34;
}
namespace System::IO {
struct __BufferedStream___FlushAsyncInternal_d__38;
}
namespace System::IO {
struct __BufferedStream___FlushWriteAsync_d__42;
}
namespace System::IO {
struct __BufferedStream___ReadFromUnderlyingStreamAsync_d__51;
}
namespace System::IO {
struct __BufferedStream___WriteToUnderlyingStreamAsync_d__63;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::BufferedStream);
MARK_REF_PTR_T(::System::IO::__BufferedStream____c);
MARK_VAL_T(::System::IO::__BufferedStream___CopyToAsyncCore_d__71);
MARK_VAL_T(::System::IO::__BufferedStream___DisposeAsync_d__34);
MARK_VAL_T(::System::IO::__BufferedStream___FlushAsyncInternal_d__38);
MARK_VAL_T(::System::IO::__BufferedStream___FlushWriteAsync_d__42);
MARK_VAL_T(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51);
MARK_VAL_T(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3601))
// CS Name: ::BufferedStream::<>c*
class CORDL_TYPE __BufferedStream____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::IO::__BufferedStream____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_1<::System::Threading::SemaphoreSlim*>* __9__10_0;

  static inline void setStaticF___9(::System::IO::__BufferedStream____c* value);

  static inline ::System::IO::__BufferedStream____c* getStaticF___9();

  static inline void setStaticF___9__10_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value);

  static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__10_0();

  static inline ::System::IO::__BufferedStream____c* New_ctor();

  /// @brief Method .ctor addr 0x2530b54 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0 addr 0x2530b5c size 0x64 virtual false final false
  inline ::System::Threading::SemaphoreSlim* _LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0();

  // Ctor Parameters [CppParam { name: "", ty: "__BufferedStream____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BufferedStream____c(__BufferedStream____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BufferedStream____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BufferedStream____c(__BufferedStream____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream____c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Type: ::<DisposeAsync>d__34
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3361)), TypeDefinitionIndex(TypeDefinitionIndex(3357)), TypeDefinitionIndex(TypeDefinitionIndex(3395))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3602))
// CS Name: ::BufferedStream::<DisposeAsync>d__34
struct CORDL_TYPE __BufferedStream___DisposeAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2530bc0 size 0x5d0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x25311fc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___DisposeAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                  ::System::Object* __7__wrap1, int32_t __7__wrap2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___DisposeAsync_d__34();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Object* __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x4, def value: None
  int32_t __7__wrap2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___DisposeAsync_d__34, 0x60>, "Size mismatch!");

} // namespace System::IO
// Type: ::<FlushAsyncInternal>d__38
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3395))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3603))
// CS Name: ::BufferedStream::<FlushAsyncInternal>d__38
struct CORDL_TYPE __BufferedStream___FlushAsyncInternal_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2531208 size 0x548 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2531750 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_sem_5__2", ty: "::System::Threading::SemaphoreSlim*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___FlushAsyncInternal_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim* _sem_5__2,
                                                        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___FlushAsyncInternal_d__38();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <sem>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* _sem_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___FlushAsyncInternal_d__38, 0x48>, "Size mismatch!");

} // namespace System::IO
// Type: ::<FlushWriteAsync>d__42
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3361))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3604)) CS Name: ::BufferedStream::<FlushWriteAsync>d__42
struct CORDL_TYPE __BufferedStream___FlushWriteAsync_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x253175c size 0x47c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2531bd8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___FlushWriteAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                     ::System::Threading::CancellationToken cancellationToken,
                                                     ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___FlushWriteAsync_d__42();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___FlushWriteAsync_d__42, 0x50>, "Size mismatch!");

} // namespace System::IO
// Type: ::<ReadFromUnderlyingStreamAsync>d__51
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3363), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3363)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2437), inst: 741 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3358)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3358), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2437))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(3605)) CS Name: ::BufferedStream::<ReadFromUnderlyingStreamAsync>d__51
struct CORDL_TYPE __BufferedStream___ReadFromUnderlyingStreamAsync_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2531be4 size 0x854 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2532438 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __BufferedStream___ReadFromUnderlyingStreamAsync_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder,
                                                                   ::System::Threading::Tasks::Task* semaphoreLockTask, ::System::IO::BufferedStream* __4__this, ::System::Memory_1<uint8_t> buffer,
                                                                   int32_t bytesAlreadySatisfied, ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, int32_t __7__wrap1,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___ReadFromUnderlyingStreamAsync_d__51();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field semaphoreLockTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* semaphoreLockTask;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field buffer, offset: 0x38, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> buffer;

  /// @brief Field bytesAlreadySatisfied, offset: 0x48, size: 0x4, def value: None
  int32_t bytesAlreadySatisfied;

  /// @brief Field cancellationToken, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>7__wrap1, offset: 0x68, size: 0x4, def value: None
  int32_t __7__wrap1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, 0x80>, "Size mismatch!");

} // namespace System::IO
// Type: ::<WriteToUnderlyingStreamAsync>d__63
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2463), inst: 741 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3361)), TypeDefinitionIndex(TypeDefinitionIndex(2463)), TypeDefinitionIndex(TypeDefinitionIndex(2677))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(3606)) CS Name: ::BufferedStream::<WriteToUnderlyingStreamAsync>d__63
struct CORDL_TYPE __BufferedStream___WriteToUnderlyingStreamAsync_d__63 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2532490 size 0xfd8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2533468 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::System::ReadOnlyMemory_1<uint8_t>",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___WriteToUnderlyingStreamAsync_d__63(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::System::Threading::Tasks::Task* semaphoreLockTask, ::System::IO::BufferedStream* __4__this,
                                                                  ::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___WriteToUnderlyingStreamAsync_d__63();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field semaphoreLockTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* semaphoreLockTask;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x10, def value: None
  ::System::ReadOnlyMemory_1<uint8_t> buffer;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, 0x68>, "Size mismatch!");

} // namespace System::IO
// Type: ::<CopyToAsyncCore>d__71
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3361)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3395))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3607)) CS Name: ::BufferedStream::<CopyToAsyncCore>d__71
struct CORDL_TYPE __BufferedStream___CopyToAsyncCore_d__71 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2533474 size 0x6f8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2533b6c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None
  // }, CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___CopyToAsyncCore_d__71(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                     ::System::IO::Stream* destination, ::System::Threading::CancellationToken cancellationToken, int32_t bufferSize,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___CopyToAsyncCore_d__71();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field destination, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* destination;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field bufferSize, offset: 0x38, size: 0x4, def value: None
  int32_t bufferSize;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___CopyToAsyncCore_d__71, 0x60>, "Size mismatch!");

} // namespace System::IO
// Type: System.IO::BufferedStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3608))
// CS Name: ::System.IO::BufferedStream*
class CORDL_TYPE BufferedStream : public ::System::IO::Stream {
public:
  // Declarations
  using _CopyToAsyncCore_d__71 = ::System::IO::__BufferedStream___CopyToAsyncCore_d__71;

  using _WriteToUnderlyingStreamAsync_d__63 = ::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63;

  using _ReadFromUnderlyingStreamAsync_d__51 = ::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51;

  using _FlushWriteAsync_d__42 = ::System::IO::__BufferedStream___FlushWriteAsync_d__42;

  using _FlushAsyncInternal_d__38 = ::System::IO::__BufferedStream___FlushAsyncInternal_d__38;

  using _DisposeAsync_d__34 = ::System::IO::__BufferedStream___DisposeAsync_d__34;

  using __c = ::System::IO::__BufferedStream____c;

  /// @brief Field _stream, offset 0x28, size 0x8
  __declspec(property(get = __get__stream, put = __set__stream))::System::IO::Stream* _stream;

  /// @brief Field _buffer, offset 0x30, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _bufferSize, offset 0x38, size 0x4
  __declspec(property(get = __get__bufferSize, put = __set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _readPos, offset 0x3c, size 0x4
  __declspec(property(get = __get__readPos, put = __set__readPos)) int32_t _readPos;

  /// @brief Field _readLen, offset 0x40, size 0x4
  __declspec(property(get = __get__readLen, put = __set__readLen)) int32_t _readLen;

  /// @brief Field _writePos, offset 0x44, size 0x4
  __declspec(property(get = __get__writePos, put = __set__writePos)) int32_t _writePos;

  /// @brief Field _lastSyncCompletedReadTask, offset 0x48, size 0x8
  __declspec(property(get = __get__lastSyncCompletedReadTask, put = __set__lastSyncCompletedReadTask))::System::Threading::Tasks::Task_1<int32_t>* _lastSyncCompletedReadTask;

  /// @brief Field _asyncActiveSemaphore, offset 0x50, size 0x8
  __declspec(property(get = __get__asyncActiveSemaphore, put = __set__asyncActiveSemaphore))::System::Threading::SemaphoreSlim* _asyncActiveSemaphore;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__stream() const;

  constexpr void __set__stream(::System::IO::Stream* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__bufferSize();

  constexpr int32_t const& __get__bufferSize() const;

  constexpr void __set__bufferSize(int32_t value);

  constexpr int32_t& __get__readPos();

  constexpr int32_t const& __get__readPos() const;

  constexpr void __set__readPos(int32_t value);

  constexpr int32_t& __get__readLen();

  constexpr int32_t const& __get__readLen() const;

  constexpr void __set__readLen(int32_t value);

  constexpr int32_t& __get__writePos();

  constexpr int32_t const& __get__writePos() const;

  constexpr void __set__writePos(int32_t value);

  constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __get__lastSyncCompletedReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> const& __get__lastSyncCompletedReadTask() const;

  constexpr void __set__lastSyncCompletedReadTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__asyncActiveSemaphore();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__asyncActiveSemaphore() const;

  constexpr void __set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim* value);

  /// @brief Method LazyEnsureAsyncActiveSemaphoreInitialized addr 0x250fd10 size 0xf8 virtual false final false
  inline ::System::Threading::SemaphoreSlim* LazyEnsureAsyncActiveSemaphoreInitialized();

  static inline ::System::IO::BufferedStream* New_ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor addr 0x250fe08 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* stream);

  static inline ::System::IO::BufferedStream* New_ctor(::System::IO::Stream* stream, int32_t bufferSize);

  /// @brief Method .ctor addr 0x250fe10 size 0x1dc virtual false final false
  inline void _ctor(::System::IO::Stream* stream, int32_t bufferSize);

  /// @brief Method EnsureNotClosed addr 0x250ffec size 0x64 virtual false final false
  inline void EnsureNotClosed();

  /// @brief Method EnsureCanSeek addr 0x2510050 size 0x74 virtual false final false
  inline void EnsureCanSeek();

  /// @brief Method EnsureCanRead addr 0x25100c4 size 0x74 virtual false final false
  inline void EnsureCanRead();

  /// @brief Method EnsureCanWrite addr 0x2510138 size 0x74 virtual false final false
  inline void EnsureCanWrite();

  /// @brief Method EnsureShadowBufferAllocated addr 0x25101ac size 0xd4 virtual false final false
  inline void EnsureShadowBufferAllocated();

  /// @brief Method EnsureBufferAllocated addr 0x2510280 size 0x58 virtual false final false
  inline void EnsureBufferAllocated();

  /// @brief Method get_CanRead addr 0x25102d8 size 0x18 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite addr 0x25102f0 size 0x18 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek addr 0x2510308 size 0x18 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_Length addr 0x2510320 size 0x3c virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x25103ac size 0x4c virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x25103f8 size 0xc4 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method DisposeAsync addr 0x25104bc size 0xac virtual true final false
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method Dispose addr 0x2510568 size 0x15c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush addr 0x25106c4 size 0xbc virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x25107c4 size 0xa0 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlushAsyncInternal addr 0x2510864 size 0xdc virtual false final false
  inline ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlushRead addr 0x2510780 size 0x44 virtual false final false
  inline void FlushRead();

  /// @brief Method ClearReadBufferBeforeWrite addr 0x2510940 size 0x94 virtual false final false
  inline void ClearReadBufferBeforeWrite();

  /// @brief Method FlushWrite addr 0x251035c size 0x50 virtual false final false
  inline void FlushWrite();

  /// @brief Method FlushWriteAsync addr 0x25109d4 size 0xdc virtual false final false
  inline ::System::Threading::Tasks::Task* FlushWriteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadFromBuffer addr 0x2510ab0 size 0x64 virtual false final false
  inline int32_t ReadFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method ReadFromBuffer addr 0x2510b14 size 0x140 virtual false final false
  inline int32_t ReadFromBuffer(::System::Span_1<uint8_t> destination);

  /// @brief Method ReadFromBuffer addr 0x2510c54 size 0x9c virtual false final false
  inline int32_t ReadFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ByRef<::System::Exception*> error);

  /// @brief Method Read addr 0x2510cf0 size 0x224 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Read addr 0x2510f14 size 0x164 virtual true final false
  inline int32_t Read(::System::Span_1<uint8_t> destination);

  /// @brief Method LastSyncCompletedReadTask addr 0x2511078 size 0xb0 virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* LastSyncCompletedReadTask(int32_t val);

  /// @brief Method ReadAsync addr 0x2511128 size 0x3c8 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync addr 0x251160c size 0x29c virtual true final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadFromUnderlyingStreamAsync addr 0x25114f0 size 0x11c virtual false final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadFromUnderlyingStreamAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                                        int32_t bytesAlreadySatisfied, ::System::Threading::Tasks::Task* semaphoreLockTask);

  /// @brief Method BeginRead addr 0x25118a8 size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead addr 0x251195c size 0x48 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method ReadByte addr 0x25119a4 size 0x50 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method ReadByteSlow addr 0x25119f4 size 0x90 virtual false final false
  inline int32_t ReadByteSlow();

  /// @brief Method WriteToBuffer addr 0x2511a84 size 0xdc virtual false final false
  inline void WriteToBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> array, ByRef<int32_t> offset, ByRef<int32_t> count);

  /// @brief Method WriteToBuffer addr 0x2511b60 size 0x19c virtual false final false
  inline int32_t WriteToBuffer(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method Write addr 0x2511cfc size 0x30c virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x2512008 size 0x2d0 virtual true final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync addr 0x25122d8 size 0x1d4 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x25124ac size 0x214 virtual true final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteToUnderlyingStreamAsync addr 0x25126c0 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task* WriteToUnderlyingStreamAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                        ::System::Threading::Tasks::Task* semaphoreLockTask);

  /// @brief Method BeginWrite addr 0x25127bc size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x2512870 size 0xc virtual true final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method WriteByte addr 0x251287c size 0x8c virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Seek addr 0x2512908 size 0x128 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x2512a30 size 0xc4 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method CopyTo addr 0x2512af4 size 0x8c virtual true final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync addr 0x2512b80 size 0xc0 virtual true final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CopyToAsyncCore addr 0x2512c40 size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task* CopyToAsyncCore(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedStream(BufferedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedStream(BufferedStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedStream();

public:
  /// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _bufferSize, offset: 0x38, size: 0x4, def value: None
  int32_t ____bufferSize;

  /// @brief Field _readPos, offset: 0x3c, size: 0x4, def value: None
  int32_t ____readPos;

  /// @brief Field _readLen, offset: 0x40, size: 0x4, def value: None
  int32_t ____readLen;

  /// @brief Field _writePos, offset: 0x44, size: 0x4, def value: None
  int32_t ____writePos;

  /// @brief Field _lastSyncCompletedReadTask, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<int32_t>* ____lastSyncCompletedReadTask;

  /// @brief Field _asyncActiveSemaphore, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____asyncActiveSemaphore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::BufferedStream, 0x58>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::BufferedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BufferedStream*, "System.IO", "BufferedStream");
NEED_NO_BOX(::System::IO::__BufferedStream____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream____c*, "System.IO", "BufferedStream/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, "System.IO", "BufferedStream/<CopyToAsyncCore>d__71");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___DisposeAsync_d__34, "System.IO", "BufferedStream/<DisposeAsync>d__34");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, "System.IO", "BufferedStream/<FlushAsyncInternal>d__38");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___FlushWriteAsync_d__42, "System.IO", "BufferedStream/<FlushWriteAsync>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, "System.IO", "BufferedStream/<ReadFromUnderlyingStreamAsync>d__51");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, "System.IO", "BufferedStream/<WriteToUnderlyingStreamAsync>d__63");
