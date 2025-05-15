#pragma once
// IWYU pragma private; include "System/Net/WebRequestStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestStream)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct WebRequestStream__FinishWriting_d__31;
}
namespace System::Net {
struct WebRequestStream__Initialize_d__36;
}
namespace System::Net {
struct WebRequestStream__ProcessWrite_d__34;
}
namespace System::Net {
struct WebRequestStream__SetHeadersAsync_d__37;
}
namespace System::Net {
struct WebRequestStream__WriteAsyncInner_d__33;
}
namespace System::Net {
struct WebRequestStream__WriteChunkTrailer_d__40;
}
namespace System::Net {
struct WebRequestStream__WriteChunkTrailer_inner_d__39;
}
namespace System::Net {
struct WebRequestStream__WriteRequestAsync_d__38;
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
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
struct WebRequestStream__FinishWriting_d__31;
}
namespace System::Net {
struct WebRequestStream__Initialize_d__36;
}
namespace System::Net {
struct WebRequestStream__ProcessWrite_d__34;
}
namespace System::Net {
struct WebRequestStream__SetHeadersAsync_d__37;
}
namespace System::Net {
struct WebRequestStream__WriteAsyncInner_d__33;
}
namespace System::Net {
struct WebRequestStream__WriteChunkTrailer_d__40;
}
namespace System::Net {
struct WebRequestStream__WriteChunkTrailer_inner_d__39;
}
namespace System::Net {
struct WebRequestStream__WriteRequestAsync_d__38;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebRequestStream);
MARK_VAL_T(::System::Net::WebRequestStream__FinishWriting_d__31);
MARK_VAL_T(::System::Net::WebRequestStream__Initialize_d__36);
MARK_VAL_T(::System::Net::WebRequestStream__ProcessWrite_d__34);
MARK_VAL_T(::System::Net::WebRequestStream__SetHeadersAsync_d__37);
MARK_VAL_T(::System::Net::WebRequestStream__WriteAsyncInner_d__33);
MARK_VAL_T(::System::Net::WebRequestStream__WriteChunkTrailer_d__40);
MARK_VAL_T(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39);
MARK_VAL_T(::System::Net::WebRequestStream__WriteRequestAsync_d__38);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<FinishWriting>d__31
struct CORDL_TYPE WebRequestStream__FinishWriting_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e309c, size 0x328, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e33c4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__FinishWriting_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__FinishWriting_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                  ::System::Threading::CancellationToken cancellationToken,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9751 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__FinishWriting_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__FinishWriting_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__FinishWriting_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__FinishWriting_d__31, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__FinishWriting_d__31, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__FinishWriting_d__31, 0x40>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<WriteAsyncInner>d__33
struct CORDL_TYPE WebRequestStream__WriteAsyncInner_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e342c, size 0x500, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e392c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__WriteAsyncInner_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "completion", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__WriteAsyncInner_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Net::WebCompletionSource* completion, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9752 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field size, offset: 0x34, size: 0x4, def value: None
  int32_t size;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field completion, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* completion;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, size) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, completion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteAsyncInner_d__33, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__WriteAsyncInner_d__33, 0x60>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<ProcessWrite>d__34
struct CORDL_TYPE WebRequestStream__ProcessWrite_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e3994, size 0x580, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e3f14, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__ProcessWrite_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__ProcessWrite_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                 ::System::Threading::CancellationToken cancellationToken, int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9753 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field size, offset: 0x30, size: 0x4, def value: None
  int32_t size;

  /// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x40, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__ProcessWrite_d__34, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__ProcessWrite_d__34, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<Initialize>d__36
struct CORDL_TYPE WebRequestStream__Initialize_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e3f7c, size 0x364, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e42e0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__Initialize_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__Initialize_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                               ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9754 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__Initialize_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__Initialize_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__Initialize_d__36, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__Initialize_d__36, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__Initialize_d__36, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__Initialize_d__36, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__Initialize_d__36, 0x48>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<SetHeadersAsync>d__37
struct CORDL_TYPE WebRequestStream__SetHeadersAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e4348, size 0x6e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e4a2c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__SetHeadersAsync_d__37();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "setInternalLength", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__SetHeadersAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                    ::System::Threading::CancellationToken cancellationToken, bool setInternalLength,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field setInternalLength, offset: 0x30, size: 0x1, def value: None
  bool setInternalLength;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__SetHeadersAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__SetHeadersAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__SetHeadersAsync_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__SetHeadersAsync_d__37, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__SetHeadersAsync_d__37, setInternalLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__SetHeadersAsync_d__37, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__SetHeadersAsync_d__37, 0x48>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<WriteRequestAsync>d__38
struct CORDL_TYPE WebRequestStream__WriteRequestAsync_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e4a94, size 0x51c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e4fb0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__WriteRequestAsync_d__38();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty:
  // "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__WriteRequestAsync_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferOffsetSize* _buffer_5__2,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <buffer>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* _buffer_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, _buffer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteRequestAsync_d__38, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__WriteRequestAsync_d__38, 0x50>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<WriteChunkTrailer_inner>d__39
struct CORDL_TYPE WebRequestStream__WriteChunkTrailer_inner_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e5018, size 0x27c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e5294, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__WriteChunkTrailer_inner_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__WriteChunkTrailer_inner_d__39(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                            ::System::Threading::CancellationToken cancellationToken,
                                                            ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, 0x40>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<WriteChunkTrailer>d__40
struct CORDL_TYPE WebRequestStream__WriteChunkTrailer_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e52fc, size 0x704, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e5a00, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream__WriteChunkTrailer_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value:
  // None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__3", ty:
  // "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebRequestStream__WriteChunkTrailer_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this,
                                                      ::System::Threading::CancellationTokenSource* _cts_5__2, ::System::Threading::Tasks::Task* _timeoutTask_5__3,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9758 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebRequestStream* __4__this;

  /// @brief Field <cts>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _cts_5__2;

  /// @brief Field <timeoutTask>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, _cts_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, _timeoutTask_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream__WriteChunkTrailer_d__40, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.WebConnectionStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestStream
class CORDL_TYPE WebRequestStream : public ::System::Net::WebConnectionStream {
public:
  // Declarations
  using _FinishWriting_d__31 = ::System::Net::WebRequestStream__FinishWriting_d__31;

  using _Initialize_d__36 = ::System::Net::WebRequestStream__Initialize_d__36;

  using _ProcessWrite_d__34 = ::System::Net::WebRequestStream__ProcessWrite_d__34;

  using _SetHeadersAsync_d__37 = ::System::Net::WebRequestStream__SetHeadersAsync_d__37;

  using _WriteAsyncInner_d__33 = ::System::Net::WebRequestStream__WriteAsyncInner_d__33;

  using _WriteChunkTrailer_d__40 = ::System::Net::WebRequestStream__WriteChunkTrailer_d__40;

  using _WriteChunkTrailer_inner_d__39 = ::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39;

  using _WriteRequestAsync_d__38 = ::System::Net::WebRequestStream__WriteRequestAsync_d__38;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_HasWriteBuffer)) bool HasWriteBuffer;

  __declspec(property(get = get_InnerStream)) ::System::IO::Stream* InnerStream;

  __declspec(property(get = get_KeepAlive)) bool KeepAlive;

  __declspec(property(get = get_WriteBufferLength)) int32_t WriteBufferLength;

  /// @brief Field <InnerStream>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__InnerStream_k__BackingField, put = __cordl_internal_set__InnerStream_k__BackingField)) ::System::IO::Stream* _InnerStream_k__BackingField;

  /// @brief Field <KeepAlive>k__BackingField, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__KeepAlive_k__BackingField, put = __cordl_internal_set__KeepAlive_k__BackingField)) bool _KeepAlive_k__BackingField;

  /// @brief Field allowBuffering, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_allowBuffering, put = __cordl_internal_set_allowBuffering)) bool allowBuffering;

  /// @brief Field chunkTrailerWritten, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkTrailerWritten, put = __cordl_internal_set_chunkTrailerWritten)) int32_t chunkTrailerWritten;

  /// @brief Field completeRequestWritten, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_completeRequestWritten, put = __cordl_internal_set_completeRequestWritten)) int32_t completeRequestWritten;

  /// @brief Field crlf, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_crlf, put = setStaticF_crlf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> crlf;

  /// @brief Field headers, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::ArrayW<uint8_t, ::Array<uint8_t>*> headers;

  /// @brief Field headersSent, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_headersSent, put = __cordl_internal_set_headersSent)) bool headersSent;

  /// @brief Field pendingWrite, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_pendingWrite, put = __cordl_internal_set_pendingWrite)) ::System::Net::WebCompletionSource* pendingWrite;

  /// @brief Field requestWritten, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_requestWritten, put = __cordl_internal_set_requestWritten)) bool requestWritten;

  /// @brief Field sendChunked, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_sendChunked, put = __cordl_internal_set_sendChunked)) bool sendChunked;

  /// @brief Field totalWritten, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_totalWritten, put = __cordl_internal_set_totalWritten)) int64_t totalWritten;

  /// @brief Field writeBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_writeBuffer, put = __cordl_internal_set_writeBuffer)) ::System::IO::MemoryStream* writeBuffer;

  /// @brief Method CheckWriteOverflow, addr 0x43e29b8, size 0x98, virtual false, abstract: false, final false
  inline void CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size);

  /// @brief Method Close_internal, addr 0x43e2e90, size 0x178, virtual true, abstract: false, final false
  inline void Close_internal(::ByRef<bool> disposed);

  /// @brief Method FinishWriting, addr 0x43e2494, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FinishWriting(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetWriteBuffer, addr 0x43e23c0, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Net::BufferOffsetSize* GetWriteBuffer();

  /// @brief Method Initialize, addr 0x43e0f90, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Initialize(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method KillBuffer, addr 0x43e2a50, size 0x8, virtual false, abstract: false, final false
  inline void KillBuffer();

  static inline ::System::Net::WebRequestStream* New_ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream,
                                                          ::System::Net::WebConnectionTunnel* tunnel);

  /// @brief Method ProcessWrite, addr 0x43e28c0, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ProcessWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x43e2da8, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetHeadersAsync, addr 0x43e2a58, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SetHeadersAsync(bool setInternalLength, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryReadFromBufferedContent, addr 0x43e2e58, size 0x38, virtual true, abstract: false, final false
  inline bool TryReadFromBufferedContent(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::ByRef<int32_t> result);

  /// @brief Method WriteAsync, addr 0x43e2564, size 0x260, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsyncInner, addr 0x43e27c4, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsyncInner(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::WebCompletionSource* completion,
                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteChunkTrailer, addr 0x43e2cdc, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteChunkTrailer();

  /// @brief Method WriteChunkTrailer_inner, addr 0x43e2c0c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteChunkTrailer_inner(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteRequestAsync, addr 0x43e2b38, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteRequestAsync(::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::IO::Stream* const& __cordl_internal_get__InnerStream_k__BackingField() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__InnerStream_k__BackingField();

  constexpr bool const& __cordl_internal_get__KeepAlive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__KeepAlive_k__BackingField();

  constexpr bool const& __cordl_internal_get_allowBuffering() const;

  constexpr bool& __cordl_internal_get_allowBuffering();

  constexpr int32_t const& __cordl_internal_get_chunkTrailerWritten() const;

  constexpr int32_t& __cordl_internal_get_chunkTrailerWritten();

  constexpr int32_t const& __cordl_internal_get_completeRequestWritten() const;

  constexpr int32_t& __cordl_internal_get_completeRequestWritten();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_headers() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_headers();

  constexpr bool const& __cordl_internal_get_headersSent() const;

  constexpr bool& __cordl_internal_get_headersSent();

  constexpr ::System::Net::WebCompletionSource* const& __cordl_internal_get_pendingWrite() const;

  constexpr ::System::Net::WebCompletionSource*& __cordl_internal_get_pendingWrite();

  constexpr bool const& __cordl_internal_get_requestWritten() const;

  constexpr bool& __cordl_internal_get_requestWritten();

  constexpr bool const& __cordl_internal_get_sendChunked() const;

  constexpr bool& __cordl_internal_get_sendChunked();

  constexpr int64_t const& __cordl_internal_get_totalWritten() const;

  constexpr int64_t& __cordl_internal_get_totalWritten();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_writeBuffer() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_writeBuffer();

  constexpr void __cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__KeepAlive_k__BackingField(bool value);

  constexpr void __cordl_internal_set_allowBuffering(bool value);

  constexpr void __cordl_internal_set_chunkTrailerWritten(int32_t value);

  constexpr void __cordl_internal_set_completeRequestWritten(int32_t value);

  constexpr void __cordl_internal_set_headers(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_headersSent(bool value);

  constexpr void __cordl_internal_set_pendingWrite(::System::Net::WebCompletionSource* value);

  constexpr void __cordl_internal_set_requestWritten(bool value);

  constexpr void __cordl_internal_set_sendChunked(bool value);

  constexpr void __cordl_internal_set_totalWritten(int64_t value);

  constexpr void __cordl_internal_set_writeBuffer(::System::IO::MemoryStream* value);

  /// @brief Method .ctor, addr 0x43dcb2c, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream, ::System::Net::WebConnectionTunnel* tunnel);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_crlf();

  /// @brief Method get_CanRead, addr 0x43e2338, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x43e2340, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_HasWriteBuffer, addr 0x43e2348, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasWriteBuffer();

  /// @brief Method get_InnerStream, addr 0x43e2328, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_InnerStream();

  /// @brief Method get_KeepAlive, addr 0x43e2330, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeepAlive();

  /// @brief Method get_WriteBufferLength, addr 0x43e237c, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_WriteBufferLength();

  static inline void setStaticF_crlf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestStream(WebRequestStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestStream(WebRequestStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9759 };

  /// @brief Field writeBuffer, offset: 0x58, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___writeBuffer;

  /// @brief Field requestWritten, offset: 0x60, size: 0x1, def value: None
  bool ___requestWritten;

  /// @brief Field allowBuffering, offset: 0x61, size: 0x1, def value: None
  bool ___allowBuffering;

  /// @brief Field sendChunked, offset: 0x62, size: 0x1, def value: None
  bool ___sendChunked;

  /// @brief Field pendingWrite, offset: 0x68, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* ___pendingWrite;

  /// @brief Field totalWritten, offset: 0x70, size: 0x8, def value: None
  int64_t ___totalWritten;

  /// @brief Field headers, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___headers;

  /// @brief Field headersSent, offset: 0x80, size: 0x1, def value: None
  bool ___headersSent;

  /// @brief Field completeRequestWritten, offset: 0x84, size: 0x4, def value: None
  int32_t ___completeRequestWritten;

  /// @brief Field chunkTrailerWritten, offset: 0x88, size: 0x4, def value: None
  int32_t ___chunkTrailerWritten;

  /// @brief Field <InnerStream>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::IO::Stream* ____InnerStream_k__BackingField;

  /// @brief Field <KeepAlive>k__BackingField, offset: 0x98, size: 0x1, def value: None
  bool ____KeepAlive_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream, ___writeBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___requestWritten) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___allowBuffering) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___sendChunked) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___pendingWrite) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___totalWritten) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___headers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___headersSent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___completeRequestWritten) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___chunkTrailerWritten) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ____InnerStream_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ____KeepAlive_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream, 0xa0>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebRequestStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream*, "System.Net", "WebRequestStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__FinishWriting_d__31, "System.Net", "WebRequestStream/<FinishWriting>d__31");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__Initialize_d__36, "System.Net", "WebRequestStream/<Initialize>d__36");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__ProcessWrite_d__34, "System.Net", "WebRequestStream/<ProcessWrite>d__34");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__SetHeadersAsync_d__37, "System.Net", "WebRequestStream/<SetHeadersAsync>d__37");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__WriteAsyncInner_d__33, "System.Net", "WebRequestStream/<WriteAsyncInner>d__33");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__WriteChunkTrailer_d__40, "System.Net", "WebRequestStream/<WriteChunkTrailer>d__40");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39, "System.Net", "WebRequestStream/<WriteChunkTrailer_inner>d__39");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream__WriteRequestAsync_d__38, "System.Net", "WebRequestStream/<WriteRequestAsync>d__38");
