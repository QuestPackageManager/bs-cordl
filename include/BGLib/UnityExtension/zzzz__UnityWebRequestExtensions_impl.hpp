#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/UnityWebRequestExtensions.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_impl.hpp"
#include "BGLib/UnityExtension/zzzz__UnityWebRequestExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__UnityWebRequestExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::*)()>(
    &::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x108709c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1087750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_cancellationTokenRegistration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty:
// "::UnityEngine::Networking::__UnityWebRequest__Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::__UnityWebRequestExtensions___SendWebRequestAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::__UnityWebRequest__Result> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* request,
    ::System::Threading::CancellationTokenRegistration _cancellationTokenRegistration_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> __u__1, ::System::Object* __7__wrap2, int32_t __7__wrap3,
    ::UnityEngine::Networking::__UnityWebRequest__Result __7__wrap4, ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->request = request;
  this->_cancellationTokenRegistration_5__2 = _cancellationTokenRegistration_5__2;
  this->__u__1 = __u__1;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__7__wrap4 = __7__wrap4;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0::__UnityWebRequestExtensions___SendWebRequestAsync_d__0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::*)()>(
    &::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1087094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0._GetAwaiter_g__SetResult_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::_GetAwaiter_g__SetResult_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x10877a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0*>::get(), "<GetAwaiter>g__SetResult|0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__cordl_internal_get_webRequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webRequestOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const&
BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__cordl_internal_get_webRequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webRequestOperation;
}
constexpr void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__cordl_internal_set_webRequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webRequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*&
BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*> const&
BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__cordl_internal_set_tcs(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0* BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0*>());
}
inline void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::_GetAwaiter_g__SetResult_0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0*>::get(), "<GetAwaiter>g__SetResult|0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0::__UnityWebRequestExtensions____c__DisplayClass1_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions.SendWebRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Networking::__UnityWebRequest__Result>* (*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Threading::CancellationToken)>(
        &::BGLib::UnityExtension::UnityWebRequestExtensions::SendWebRequestAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1086f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::UnityWebRequestExtensions*>::get(), "SendWebRequestAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> (*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::BGLib::UnityExtension::UnityWebRequestExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1086c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::UnityWebRequestExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Networking::__UnityWebRequest__Result>*
BGLib::UnityExtension::UnityWebRequestExtensions::SendWebRequestAsync(::UnityEngine::Networking::UnityWebRequest* request, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::UnityWebRequestExtensions*>::get(), "SendWebRequestAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Networking::__UnityWebRequest__Result>*, false>(nullptr, ___internal_method, request, cancellationToken);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>
BGLib::UnityExtension::UnityWebRequestExtensions::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* webRequestOperation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::UnityWebRequestExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>, false>(nullptr, ___internal_method,
                                                                                                                                                              webRequestOperation);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::UnityWebRequestExtensions::UnityWebRequestExtensions() {}
