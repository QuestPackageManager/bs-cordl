#pragma once
// IWYU pragma private; include "System/Net/WebResponseStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__ReadState_def.hpp"
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebResponseStream)
namespace System::IO {
class MemoryStream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct ReadState;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebReadStream;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
struct WebResponseStream__InitReadAsync_d__52;
}
namespace System::Net {
struct WebResponseStream__ReadAllAsyncInner_d__47;
}
namespace System::Net {
struct WebResponseStream__ReadAllAsync_d__48;
}
namespace System::Net {
struct WebResponseStream__ReadAsync_d__40;
}
namespace System::Net {
class WebResponseStream___c__DisplayClass41_0;
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
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
class WebResponseStream___c__DisplayClass41_0;
}
namespace System::Net {
struct WebResponseStream__InitReadAsync_d__52;
}
namespace System::Net {
struct WebResponseStream__ReadAllAsyncInner_d__47;
}
namespace System::Net {
struct WebResponseStream__ReadAllAsync_d__48;
}
namespace System::Net {
struct WebResponseStream__ReadAsync_d__40;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebResponseStream);
MARK_REF_PTR_T(::System::Net::WebResponseStream___c__DisplayClass41_0);
MARK_VAL_T(::System::Net::WebResponseStream__InitReadAsync_d__52);
MARK_VAL_T(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47);
MARK_VAL_T(::System::Net::WebResponseStream__ReadAllAsync_d__48);
MARK_VAL_T(::System::Net::WebResponseStream__ReadAsync_d__40);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebResponseStream/<ReadAsync>d__40
struct CORDL_TYPE WebResponseStream__ReadAsync_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e7180, size 0x958, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e7ad8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream__ReadAsync_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None
  // }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_nbytes_5__3", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_throwMe_5__4", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr WebResponseStream__ReadAsync_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                               ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                               ::System::Net::WebResponseStream* __4__this, ::System::Net::WebCompletionSource* _completion_5__2, int32_t _nbytes_5__3,
                                               ::System::Exception* _throwMe_5__4, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1,
                                               ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field <completion>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* _completion_5__2;

  /// @brief Field <nbytes>5__3, offset: 0x48, size: 0x4, def value: None
  int32_t _nbytes_5__3;

  /// @brief Field <throwMe>5__4, offset: 0x50, size: 0x8, def value: None
  ::System::Exception* _throwMe_5__4;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  /// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, _completion_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, _nbytes_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, _throwMe_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAsync_d__40, __u__2) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream__ReadAsync_d__40, 0x78>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebResponseStream/<>c__DisplayClass41_0
class CORDL_TYPE WebResponseStream___c__DisplayClass41_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::WebResponseStream* __4__this;

  /// @brief Field buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field size, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  static inline ::System::Net::WebResponseStream___c__DisplayClass41_0* New_ctor();

  /// @brief Method <ProcessRead>b__0, addr 0x43e7b54, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* _ProcessRead_b__0(::System::Threading::CancellationToken ct);

  /// @brief Method <ProcessRead>b__1, addr 0x43e7b90, size 0x3c, virtual false, abstract: false, final false
  inline void _ProcessRead_b__1();

  /// @brief Method <ProcessRead>b__2, addr 0x43e7bcc, size 0x20, virtual false, abstract: false, final false
  inline bool _ProcessRead_b__2();

  constexpr ::System::Net::WebResponseStream* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Net::WebResponseStream*& __cordl_internal_get___4__this();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set___4__this(::System::Net::WebResponseStream* value);

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x43e5e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream___c__DisplayClass41_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebResponseStream___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebResponseStream___c__DisplayClass41_0(WebResponseStream___c__DisplayClass41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebResponseStream___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebResponseStream___c__DisplayClass41_0(WebResponseStream___c__DisplayClass41_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9761 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::System::Net::WebResponseStream* _____4__this;

  /// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field offset, offset: 0x20, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field size, offset: 0x24, size: 0x4, def value: None
  int32_t ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, ___buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, ___size) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream___c__DisplayClass41_0, 0x28>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebResponseStream/<ReadAllAsyncInner>d__47
struct CORDL_TYPE WebResponseStream__ReadAllAsyncInner_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e7bec, size 0x5d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e81bc, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream__ReadAllAsyncInner_d__47();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam {
  // name: "_maximumSize_5__2", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_ms_5__3", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name:
  // "_buffer_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr WebResponseStream__ReadAllAsyncInner_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
                                                       ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebResponseStream* __4__this, int64_t _maximumSize_5__2,
                                                       ::System::IO::MemoryStream* _ms_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field <maximumSize>5__2, offset: 0x30, size: 0x8, def value: None
  int64_t _maximumSize_5__2;

  /// @brief Field <ms>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::IO::MemoryStream* _ms_5__3;

  /// @brief Field <buffer>5__4, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, _maximumSize_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, _ms_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, _buffer_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebResponseStream/<ReadAllAsync>d__48
struct CORDL_TYPE WebResponseStream__ReadAllAsync_d__48 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e8238, size 0x9ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e8be4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream__ReadAllAsync_d__48();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "resending", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutCts_5__3", ty:
  // "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__4", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
  constexpr WebResponseStream__ReadAllAsync_d__48(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream* __4__this,
                                                  ::System::Threading::CancellationToken cancellationToken, bool resending, ::System::Net::WebCompletionSource* _completion_5__2,
                                                  ::System::Threading::CancellationTokenSource* _timeoutCts_5__3, ::System::Threading::Tasks::Task* _timeoutTask_5__4,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field resending, offset: 0x30, size: 0x1, def value: None
  bool resending;

  /// @brief Field <completion>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* _completion_5__2;

  /// @brief Field <timeoutCts>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _timeoutCts_5__3;

  /// @brief Field <timeoutTask>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, resending) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, _completion_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, _timeoutCts_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, _timeoutTask_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__ReadAllAsync_d__48, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream__ReadAllAsync_d__48, 0x70>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.ReadState, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebResponseStream/<InitReadAsync>d__52
struct CORDL_TYPE WebResponseStream__InitReadAsync_d__52 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43e8c4c, size 0x6ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43e9338, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream__InitReadAsync_d__52();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty:
  // "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name: "_state_5__3", ty: "::System::Net::ReadState", modifiers: "", def_value: None }, CppParam { name:
  // "_position_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr WebResponseStream__InitReadAsync_d__52(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream* __4__this,
                                                   ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferOffsetSize* _buffer_5__2, ::System::Net::ReadState _state_5__3,
                                                   int32_t _position_5__4, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9764 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <buffer>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* _buffer_5__2;

  /// @brief Field <state>5__3, offset: 0x38, size: 0x4, def value: None
  ::System::Net::ReadState _state_5__3;

  /// @brief Field <position>5__4, offset: 0x3c, size: 0x4, def value: None
  int32_t _position_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, _buffer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, _state_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, _position_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream__InitReadAsync_d__52, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream__InitReadAsync_d__52, 0x50>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.HttpStatusCode, System.Net.WebConnectionStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebResponseStream
class CORDL_TYPE WebResponseStream : public ::System::Net::WebConnectionStream {
public:
  // Declarations
  using _InitReadAsync_d__52 = ::System::Net::WebResponseStream__InitReadAsync_d__52;

  using _ReadAllAsyncInner_d__47 = ::System::Net::WebResponseStream__ReadAllAsyncInner_d__47;

  using _ReadAllAsync_d__48 = ::System::Net::WebResponseStream__ReadAllAsync_d__48;

  using _ReadAsync_d__40 = ::System::Net::WebResponseStream__ReadAsync_d__40;

  using __c__DisplayClass41_0 = ::System::Net::WebResponseStream___c__DisplayClass41_0;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_ChunkedRead, put = set_ChunkedRead)) bool ChunkedRead;

  __declspec(property(get = get_ExpectContent)) bool ExpectContent;

  __declspec(property(get = get_Headers, put = set_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_KeepAlive, put = set_KeepAlive)) bool KeepAlive;

  __declspec(property(get = get_RequestStream)) ::System::Net::WebRequestStream* RequestStream;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) ::System::Net::HttpStatusCode StatusCode;

  __declspec(property(get = get_StatusDescription, put = set_StatusDescription)) ::StringW StatusDescription;

  __declspec(property(get = get_Version, put = set_Version)) ::System::Version* Version;

  /// @brief Field <ChunkedRead>k__BackingField, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__ChunkedRead_k__BackingField, put = __cordl_internal_set__ChunkedRead_k__BackingField)) bool _ChunkedRead_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField, put = __cordl_internal_set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection* _Headers_k__BackingField;

  /// @brief Field <KeepAlive>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__KeepAlive_k__BackingField, put = __cordl_internal_set__KeepAlive_k__BackingField)) bool _KeepAlive_k__BackingField;

  /// @brief Field <RequestStream>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestStream_k__BackingField,
                      put = __cordl_internal_set__RequestStream_k__BackingField)) ::System::Net::WebRequestStream* _RequestStream_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField)) ::System::Net::HttpStatusCode _StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__StatusDescription_k__BackingField, put = __cordl_internal_set__StatusDescription_k__BackingField)) ::StringW _StatusDescription_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__Version_k__BackingField, put = __cordl_internal_set__Version_k__BackingField)) ::System::Version* _Version_k__BackingField;

  /// @brief Field bufferedEntireContent, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_bufferedEntireContent, put = __cordl_internal_set_bufferedEntireContent)) bool bufferedEntireContent;

  /// @brief Field innerStream, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_innerStream, put = __cordl_internal_set_innerStream)) ::System::Net::WebReadStream* innerStream;

  /// @brief Field locker, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_locker, put = __cordl_internal_set_locker)) ::System::Object* locker;

  /// @brief Field nestedRead, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_nestedRead, put = __cordl_internal_set_nestedRead)) int32_t nestedRead;

  /// @brief Field nextReadCalled, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_nextReadCalled, put = __cordl_internal_set_nextReadCalled)) bool nextReadCalled;

  /// @brief Field pendingRead, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_pendingRead, put = __cordl_internal_set_pendingRead)) ::System::Net::WebCompletionSource* pendingRead;

  /// @brief Field read_eof, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_read_eof, put = __cordl_internal_set_read_eof)) bool read_eof;

  /// @brief Method Close_internal, addr 0x43e6700, size 0x88, virtual true, abstract: false, final false
  inline void Close_internal(::ByRef<bool> disposed);

  /// @brief Method GetReadException, addr 0x43e6788, size 0x290, virtual false, abstract: false, final false
  inline ::System::Net::WebException* GetReadException(::System::Net::WebExceptionStatus status, ::System::Exception* error, ::StringW where);

  /// @brief Method GetResponse, addr 0x43e6a18, size 0x768, virtual false, abstract: false, final false
  inline bool GetResponse(::System::Net::BufferOffsetSize* buffer, ::ByRef<int32_t> pos, ::ByRef<::System::Net::ReadState> state);

  /// @brief Method InitReadAsync, addr 0x43e1068, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitReadAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Initialize, addr 0x43e5f84, size 0x50c, virtual false, abstract: false, final false
  inline void Initialize(::System::Net::BufferOffsetSize* buffer);

  static inline ::System::Net::WebResponseStream* New_ctor(::System::Net::WebRequestStream* request);

  /// @brief Method ProcessRead, addr 0x43e5b90, size 0x28c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAllAsync, addr 0x43e6580, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadAllAsync(bool resending, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAllAsyncInner, addr 0x43e6490, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ReadAllAsyncInner(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x43e5a70, size 0x120, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryReadFromBufferedContent, addr 0x43e5e24, size 0xcc, virtual true, abstract: false, final false
  inline bool TryReadFromBufferedContent(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::ByRef<int32_t> result);

  /// @brief Method WriteAsync, addr 0x43e6664, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  constexpr bool const& __cordl_internal_get__ChunkedRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ChunkedRead_k__BackingField();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__Headers_k__BackingField();

  constexpr bool const& __cordl_internal_get__KeepAlive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__KeepAlive_k__BackingField();

  constexpr ::System::Net::WebRequestStream* const& __cordl_internal_get__RequestStream_k__BackingField() const;

  constexpr ::System::Net::WebRequestStream*& __cordl_internal_get__RequestStream_k__BackingField();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__StatusDescription_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StatusDescription_k__BackingField();

  constexpr ::System::Version* const& __cordl_internal_get__Version_k__BackingField() const;

  constexpr ::System::Version*& __cordl_internal_get__Version_k__BackingField();

  constexpr bool const& __cordl_internal_get_bufferedEntireContent() const;

  constexpr bool& __cordl_internal_get_bufferedEntireContent();

  constexpr ::System::Net::WebReadStream* const& __cordl_internal_get_innerStream() const;

  constexpr ::System::Net::WebReadStream*& __cordl_internal_get_innerStream();

  constexpr ::System::Object* const& __cordl_internal_get_locker() const;

  constexpr ::System::Object*& __cordl_internal_get_locker();

  constexpr int32_t const& __cordl_internal_get_nestedRead() const;

  constexpr int32_t& __cordl_internal_get_nestedRead();

  constexpr bool const& __cordl_internal_get_nextReadCalled() const;

  constexpr bool& __cordl_internal_get_nextReadCalled();

  constexpr ::System::Net::WebCompletionSource* const& __cordl_internal_get_pendingRead() const;

  constexpr ::System::Net::WebCompletionSource*& __cordl_internal_get_pendingRead();

  constexpr bool const& __cordl_internal_get_read_eof() const;

  constexpr bool& __cordl_internal_get_read_eof();

  constexpr void __cordl_internal_set__ChunkedRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set__KeepAlive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RequestStream_k__BackingField(::System::Net::WebRequestStream* value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value);

  constexpr void __cordl_internal_set__StatusDescription_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Version_k__BackingField(::System::Version* value);

  constexpr void __cordl_internal_set_bufferedEntireContent(bool value);

  constexpr void __cordl_internal_set_innerStream(::System::Net::WebReadStream* value);

  constexpr void __cordl_internal_set_locker(::System::Object* value);

  constexpr void __cordl_internal_set_nestedRead(int32_t value);

  constexpr void __cordl_internal_set_nextReadCalled(bool value);

  constexpr void __cordl_internal_set_pendingRead(::System::Net::WebCompletionSource* value);

  constexpr void __cordl_internal_set_read_eof(bool value);

  /// @brief Method .ctor, addr 0x43e0fec, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebRequestStream* request);

  /// @brief Method get_CanRead, addr 0x43e5a4c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x43e5a54, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_ChunkedRead, addr 0x43e5a5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ChunkedRead();

  /// @brief Method get_ExpectContent, addr 0x43e5ef0, size 0x94, virtual false, abstract: false, final false
  inline bool get_ExpectContent();

  /// @brief Method get_Headers, addr 0x43e59f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_KeepAlive, addr 0x43e5a38, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeepAlive();

  /// @brief Method get_RequestStream, addr 0x43e59f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebRequestStream* get_RequestStream();

  /// @brief Method get_StatusCode, addr 0x43e5a08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method get_StatusDescription, addr 0x43e5a18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StatusDescription();

  /// @brief Method get_Version, addr 0x43e5a28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_Version();

  /// @brief Method set_ChunkedRead, addr 0x43e5a64, size 0xc, virtual false, abstract: false, final false
  inline void set_ChunkedRead(bool value);

  /// @brief Method set_Headers, addr 0x43e5a00, size 0x8, virtual false, abstract: false, final false
  inline void set_Headers(::System::Net::WebHeaderCollection* value);

  /// @brief Method set_KeepAlive, addr 0x43e5a40, size 0xc, virtual false, abstract: false, final false
  inline void set_KeepAlive(bool value);

  /// @brief Method set_StatusCode, addr 0x43e5a10, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(::System::Net::HttpStatusCode value);

  /// @brief Method set_StatusDescription, addr 0x43e5a20, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusDescription(::StringW value);

  /// @brief Method set_Version, addr 0x43e5a30, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(::System::Version* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebResponseStream(WebResponseStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebResponseStream(WebResponseStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9765 };

  /// @brief Field innerStream, offset: 0x58, size: 0x8, def value: None
  ::System::Net::WebReadStream* ___innerStream;

  /// @brief Field nextReadCalled, offset: 0x60, size: 0x1, def value: None
  bool ___nextReadCalled;

  /// @brief Field bufferedEntireContent, offset: 0x61, size: 0x1, def value: None
  bool ___bufferedEntireContent;

  /// @brief Field pendingRead, offset: 0x68, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* ___pendingRead;

  /// @brief Field locker, offset: 0x70, size: 0x8, def value: None
  ::System::Object* ___locker;

  /// @brief Field nestedRead, offset: 0x78, size: 0x4, def value: None
  int32_t ___nestedRead;

  /// @brief Field read_eof, offset: 0x7c, size: 0x1, def value: None
  bool ___read_eof;

  /// @brief Field <RequestStream>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Net::WebRequestStream* ____RequestStream_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____Headers_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x90, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ____StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____StatusDescription_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Version* ____Version_k__BackingField;

  /// @brief Field <KeepAlive>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____KeepAlive_k__BackingField;

  /// @brief Field <ChunkedRead>k__BackingField, offset: 0xa9, size: 0x1, def value: None
  bool ____ChunkedRead_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream, ___innerStream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___nextReadCalled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___bufferedEntireContent) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___pendingRead) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___locker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___nestedRead) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___read_eof) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____RequestStream_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____Headers_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____StatusCode_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____StatusDescription_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____Version_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____KeepAlive_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____ChunkedRead_k__BackingField) == 0xa9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream, 0xb0>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream*, "System.Net", "WebResponseStream");
NEED_NO_BOX(::System::Net::WebResponseStream___c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream___c__DisplayClass41_0*, "System.Net", "WebResponseStream/<>c__DisplayClass41_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream__InitReadAsync_d__52, "System.Net", "WebResponseStream/<InitReadAsync>d__52");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream__ReadAllAsyncInner_d__47, "System.Net", "WebResponseStream/<ReadAllAsyncInner>d__47");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream__ReadAllAsync_d__48, "System.Net", "WebResponseStream/<ReadAllAsync>d__48");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream__ReadAsync_d__40, "System.Net", "WebResponseStream/<ReadAsync>d__40");
