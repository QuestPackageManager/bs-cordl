#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatformExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformExtensions)
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
namespace OculusStudios::Platform::Oculus {
template <typename T> struct OculusPlatformExtensions__WaitAsync_d__0_1;
}
namespace OculusStudios::Platform::Oculus {
template <typename T> struct OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1;
}
namespace OculusStudios::Platform::Oculus {
template <typename T> class OculusPlatformExtensions___c__DisplayClass0_0_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace OculusStudios::Platform::Oculus {
class OculusPlatformExtensions;
}
namespace OculusStudios::Platform::Oculus {
template <typename T> class OculusPlatformExtensions___c__DisplayClass0_0_1;
}
namespace OculusStudios::Platform::Oculus {
template <typename T> struct OculusPlatformExtensions__WaitAsync_d__0_1;
}
namespace OculusStudios::Platform::Oculus {
template <typename T> struct OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::OculusPlatformExtensions);
MARK_GEN_REF_PTR_T(::OculusStudios::Platform::Oculus::OculusPlatformExtensions___c__DisplayClass0_0_1);
MARK_GEN_VAL_T(::OculusStudios::Platform::Oculus::OculusPlatformExtensions__WaitAsync_d__0_1);
MARK_GEN_VAL_T(::OculusStudios::Platform::Oculus::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1);
// Dependencies System.Object, System.Threading.CancellationToken
namespace OculusStudios::Platform::Oculus {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.OculusPlatformExtensions/<>c__DisplayClass0_0`1<T>
class CORDL_TYPE OculusPlatformExtensions___c__DisplayClass0_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field cancellationToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>* tcs;

  static inline ::OculusStudios::Platform::Oculus::OculusPlatformExtensions___c__DisplayClass0_0_1<T>* New_ctor();

  /// @brief Method <WaitAsync>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _WaitAsync_b__0(::Oculus::Platform::Message_1<T>* result);

  /// @brief Method <WaitAsync>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _WaitAsync_b__1();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformExtensions___c__DisplayClass0_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformExtensions___c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformExtensions___c__DisplayClass0_0_1(OculusPlatformExtensions___c__DisplayClass0_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformExtensions___c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformExtensions___c__DisplayClass0_0_1(OculusPlatformExtensions___c__DisplayClass0_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21910 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>* ___tcs;

  /// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter,
// System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace OculusStudios::Platform::Oculus {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.OculusPlatformExtensions/<WaitAsync>d__0`1<T>
struct CORDL_TYPE OculusPlatformExtensions__WaitAsync_d__0_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformExtensions__WaitAsync_d__0_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "oculusRequest", ty: "::Oculus::Platform::Request_1<T>*", modifiers: "", def_value: None }, CppParam {
  // name: "__7__wrap1", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::Oculus::Platform::Message_1<T>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr OculusPlatformExtensions__WaitAsync_d__0_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*> __t__builder,
                                                       ::System::Threading::CancellationToken cancellationToken, ::Oculus::Platform::Request_1<T>* oculusRequest,
                                                       ::System::Threading::CancellationTokenRegistration __7__wrap1, ::System::Object* __7__wrap2, int32_t __7__wrap3,
                                                       ::Oculus::Platform::Message_1<T>* __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> __u__1,
                                                       ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21911 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field oculusRequest, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::Request_1<T>* oculusRequest;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::System::Object* __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x50, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x58, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<T>* __7__wrap4;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> __u__1;

  /// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.TimeSpan
namespace OculusStudios::Platform::Oculus {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.OculusPlatformExtensions/<WaitWithTimeoutAsync>d__1`1<T>
struct CORDL_TYPE OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: None }, CppParam { name: "timeout", ty: "::System::TimeSpan",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "oculusRequest", ty:
  // "::Oculus::Platform::Request_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value:
  // None }, CppParam { name: "_combinedTokenSource_5__3", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*> __t__builder,
                                                                  ::System::TimeSpan timeout, ::System::Threading::CancellationToken cancellationToken, ::Oculus::Platform::Request_1<T>* oculusRequest,
                                                                  ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__2,
                                                                  ::System::Threading::CancellationTokenSource* _combinedTokenSource_5__3,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21912 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*> __t__builder;

  /// @brief Field timeout, offset: 0x20, size: 0x8, def value: None
  ::System::TimeSpan timeout;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field oculusRequest, offset: 0x30, size: 0x8, def value: None
  ::Oculus::Platform::Request_1<T>* oculusRequest;

  /// @brief Field <timeoutTokenSource>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__2;

  /// @brief Field <combinedTokenSource>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _combinedTokenSource_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.OculusPlatformExtensions
class CORDL_TYPE OculusPlatformExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using _WaitAsync_d__0_1 = ::OculusStudios::Platform::Oculus::OculusPlatformExtensions__WaitAsync_d__0_1<T>;

  template <typename T> using _WaitWithTimeoutAsync_d__1_1 = ::OculusStudios::Platform::Oculus::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>;

  template <typename T> using __c__DisplayClass0_0_1 = ::OculusStudios::Platform::Oculus::OculusPlatformExtensions___c__DisplayClass0_0_1<T>;

  /// @brief Method GetAwaiter, addr 0x5d844d0, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> GetAwaiter(::Oculus::Platform::Request* oculusRequest);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> GetAwaiter(::Oculus::Platform::Request_1<T>* oculusRequest);

  /// @brief Method WaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<T>*>* WaitAsync(::Oculus::Platform::Request_1<T>* oculusRequest,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitWithTimeoutAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<T>*>* WaitWithTimeoutAsync(::Oculus::Platform::Request_1<T>* oculusRequest, ::System::TimeSpan timeout,
                                                                                                            ::System::Threading::CancellationToken cancellationToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformExtensions(OculusPlatformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformExtensions(OculusPlatformExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::OculusPlatformExtensions, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
NEED_NO_BOX(::OculusStudios::Platform::Oculus::OculusPlatformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::OculusPlatformExtensions*, "OculusStudios.Platform.Oculus", "OculusPlatformExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::Platform::Oculus::OculusPlatformExtensions___c__DisplayClass0_0_1, "OculusStudios.Platform.Oculus",
                                     "OculusPlatformExtensions/<>c__DisplayClass0_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::Platform::Oculus::OculusPlatformExtensions__WaitAsync_d__0_1, "OculusStudios.Platform.Oculus", "OculusPlatformExtensions/<WaitAsync>d__0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::Platform::Oculus::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1, "OculusStudios.Platform.Oculus",
                                      "OculusPlatformExtensions/<WaitWithTimeoutAsync>d__1`1");
