#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncProtocolRequest)
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
struct __AsyncProtocolRequest___InnerRead_d__25;
}
namespace Mono::Net::Security {
struct __AsyncProtocolRequest___ProcessOperation_d__24;
}
namespace Mono::Net::Security {
struct __AsyncProtocolRequest___StartOperation_d__23;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace Mono::Net::Security {
struct __AsyncProtocolRequest___InnerRead_d__25;
}
namespace Mono::Net::Security {
struct __AsyncProtocolRequest___ProcessOperation_d__24;
}
namespace Mono::Net::Security {
struct __AsyncProtocolRequest___StartOperation_d__23;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncProtocolRequest);
MARK_VAL_T(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25);
MARK_VAL_T(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24);
MARK_VAL_T(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23);
// Type: ::<StartOperation>d__23
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// CS Name: ::AsyncProtocolRequest::<StartOperation>d__23
struct CORDL_TYPE __AsyncProtocolRequest___StartOperation_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c853ec, size 0x358, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c85784, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncProtocolRequest___StartOperation_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncProtocolRequest___StartOperation_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*> __t__builder,
                                                          ::Mono::Net::Security::AsyncProtocolRequest* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                          ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, 0x40>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, __u__1) == 0x30, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<ProcessOperation>d__24
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// CS Name: ::AsyncProtocolRequest::<ProcessOperation>d__24
struct CORDL_TYPE __AsyncProtocolRequest___ProcessOperation_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c857dc, size 0x494, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c85ee8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncProtocolRequest___ProcessOperation_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None }, CppParam { name: "_status_5__2", ty:
  // "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: None }, CppParam { name: "_newStatus_5__3", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncProtocolRequest___ProcessOperation_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::System::Threading::CancellationToken cancellationToken, ::Mono::Net::Security::AsyncProtocolRequest* __4__this,
                                                            ::Mono::Net::Security::AsyncOperationStatus _status_5__2, ::Mono::Net::Security::AsyncOperationStatus _newStatus_5__3,
                                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>> __u__1,
                                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* __4__this;

  /// @brief Field <status>5__2, offset: 0x30, size: 0x4, def value: None
  ::Mono::Net::Security::AsyncOperationStatus _status_5__2;

  /// @brief Field <newStatus>5__3, offset: 0x34, size: 0x4, def value: None
  ::Mono::Net::Security::AsyncOperationStatus _newStatus_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, 0x58>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, _status_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, _newStatus_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, __u__2) == 0x48, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<InnerRead>d__25
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// CS Name: ::AsyncProtocolRequest::<InnerRead>d__25
struct CORDL_TYPE __AsyncProtocolRequest___InnerRead_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c85ef4, size 0x350, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c86360, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncProtocolRequest___InnerRead_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "_totalRead_5__2", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_requestedSize_5__3", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __AsyncProtocolRequest___InnerRead_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> __t__builder,
                                                     ::Mono::Net::Security::AsyncProtocolRequest* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                     ::System::Nullable_1<int32_t> _totalRead_5__2, int32_t _requestedSize_5__3,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <totalRead>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> _totalRead_5__2;

  /// @brief Field <requestedSize>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t _requestedSize_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, 0x50>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, _totalRead_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, _requestedSize_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, __u__1) == 0x40, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: Mono.Net.Security::AsyncProtocolRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// CS Name: ::Mono.Net.Security::AsyncProtocolRequest*
class CORDL_TYPE AsyncProtocolRequest : public ::System::Object {
public:
  // Declarations
  using _InnerRead_d__25 = ::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25;

  using _ProcessOperation_d__24 = ::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24;

  using _StartOperation_d__23 = ::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Parent))::Mono::Net::Security::MobileAuthenticatedStream* Parent;

  /// @brief Field RequestedSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_RequestedSize, put = __cordl_internal_set_RequestedSize)) int32_t RequestedSize;

  __declspec(property(get = get_RunSynchronously)) bool RunSynchronously;

  /// @brief Field Started, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Started, put = __cordl_internal_set_Started)) int32_t Started;

  __declspec(property(get = get_UserResult, put = set_UserResult)) int32_t UserResult;

  /// @brief Field WriteRequested, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_WriteRequested, put = __cordl_internal_set_WriteRequested)) int32_t WriteRequested;

  /// @brief Field <Parent>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Parent_k__BackingField, put = __cordl_internal_set__Parent_k__BackingField))::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField;

  /// @brief Field <RunSynchronously>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__RunSynchronously_k__BackingField, put = __cordl_internal_set__RunSynchronously_k__BackingField)) bool _RunSynchronously_k__BackingField;

  /// @brief Field <UserResult>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__UserResult_k__BackingField, put = __cordl_internal_set__UserResult_k__BackingField)) int32_t _UserResult_k__BackingField;

  /// @brief Field locker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_locker, put = __cordl_internal_set_locker))::System::Object* locker;

  /// @brief Method InnerRead, addr 0x2c85290, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* InnerRead(::System::Threading::CancellationToken cancellationToken);

  static inline ::Mono::Net::Security::AsyncProtocolRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);

  /// @brief Method ProcessOperation, addr 0x2c851b0, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ProcessOperation(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RequestRead, addr 0x2c84fe8, size 0xc4, virtual false, abstract: false, final false
  inline void RequestRead(int32_t size);

  /// @brief Method RequestWrite, addr 0x2c850ac, size 0xc, virtual false, abstract: false, final false
  inline void RequestWrite();

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status);

  /// @brief Method StartOperation, addr 0x2c850b8, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* StartOperation(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ToString, addr 0x2c85394, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_RequestedSize() const;

  constexpr int32_t& __cordl_internal_get_RequestedSize();

  constexpr int32_t const& __cordl_internal_get_Started() const;

  constexpr int32_t& __cordl_internal_get_Started();

  constexpr int32_t const& __cordl_internal_get_WriteRequested() const;

  constexpr int32_t& __cordl_internal_get_WriteRequested();

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __cordl_internal_get__Parent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileAuthenticatedStream*> const& __cordl_internal_get__Parent_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__RunSynchronously_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RunSynchronously_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UserResult_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UserResult_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_locker() const;

  constexpr void __cordl_internal_set_RequestedSize(int32_t value);

  constexpr void __cordl_internal_set_Started(int32_t value);

  constexpr void __cordl_internal_set_WriteRequested(int32_t value);

  constexpr void __cordl_internal_set__Parent_k__BackingField(::Mono::Net::Security::MobileAuthenticatedStream* value);

  constexpr void __cordl_internal_set__RunSynchronously_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UserResult_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_locker(::System::Object* value);

  /// @brief Method .ctor, addr 0x2c84f60, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);

  /// @brief Method get_Name, addr 0x2c84f2c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Parent, addr 0x2c84f1c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::MobileAuthenticatedStream* get_Parent();

  /// @brief Method get_RunSynchronously, addr 0x2c84f24, size 0x8, virtual false, abstract: false, final false
  inline bool get_RunSynchronously();

  /// @brief Method get_UserResult, addr 0x2c84f50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_UserResult();

  /// @brief Method set_UserResult, addr 0x2c84f58, size 0x8, virtual false, abstract: false, final false
  inline void set_UserResult(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncProtocolRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncProtocolRequest(AsyncProtocolRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncProtocolRequest(AsyncProtocolRequest const&) = delete;

  /// @brief Field <Parent>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* ____Parent_k__BackingField;

  /// @brief Field <RunSynchronously>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____RunSynchronously_k__BackingField;

  /// @brief Field <UserResult>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____UserResult_k__BackingField;

  /// @brief Field Started, offset: 0x20, size: 0x4, def value: None
  int32_t ___Started;

  /// @brief Field RequestedSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___RequestedSize;

  /// @brief Field WriteRequested, offset: 0x28, size: 0x4, def value: None
  int32_t ___WriteRequested;

  /// @brief Field locker, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___locker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncProtocolRequest, 0x38>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ____Parent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ____RunSynchronously_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ____UserResult_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___Started) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___RequestedSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___WriteRequested) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___locker) == 0x30, "Offset mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncProtocolRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncProtocolRequest*, "Mono.Net.Security", "AsyncProtocolRequest");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25, "Mono.Net.Security", "AsyncProtocolRequest/<InnerRead>d__25");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24, "Mono.Net.Security", "AsyncProtocolRequest/<ProcessOperation>d__24");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23, "Mono.Net.Security", "AsyncProtocolRequest/<StartOperation>d__23");
