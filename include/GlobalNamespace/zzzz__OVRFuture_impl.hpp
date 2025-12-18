#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFuture.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFuture_def.hpp"
#include "GlobalNamespace/zzzz__OVRFuture_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRFuture__When_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFuture__When_d__0::*)()>(&::GlobalNamespace::OVRFuture__When_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d42b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture__When_d__0>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture__When_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFuture__When_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRFuture__When_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d42de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture__When_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRFuture__When_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture__When_d__0>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFuture__When_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture__When_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRFuture__When_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRFuture__When_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "future", ty: "uint64_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRFuture__When_d__0::OVRFuture__When_d__0(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder, uint64_t future,
                                                                        ::System::Threading::CancellationToken cancellationToken,
                                                                        ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->future = future;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFuture__When_d__0::OVRFuture__When_d__0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRFuture.When
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(uint64_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OVRFuture::When)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d427d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture*>::get(), "When", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture._When_g__LogIfNotSuccess_0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(::GlobalNamespace::OVRPlugin_Result, ::StringW)>(
    &::GlobalNamespace::OVRFuture::_When_g__LogIfNotSuccess_0_0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d42898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture*>::get(), "<When>g__LogIfNotSuccess|0_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture._When_g__CheckCancellationAndThrow_0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OVRFuture::_When_g__CheckCancellationAndThrow_0_1)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d429a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture*>::get(), "<When>g__CheckCancellationAndThrow|0_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRFuture::When(uint64_t future, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture*>::get(), "When", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>, false>(nullptr, ___internal_method, future, cancellationToken);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRFuture::_When_g__LogIfNotSuccess_0_0(::GlobalNamespace::OVRPlugin_Result value, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture*>::get(), "<When>g__LogIfNotSuccess|0_0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result, false>(nullptr, ___internal_method, value, msg);
}
inline void GlobalNamespace::OVRFuture::_When_g__CheckCancellationAndThrow_0_1(uint64_t futureToCancel, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFuture*>::get(), "<When>g__CheckCancellationAndThrow|0_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, futureToCancel, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFuture::OVRFuture() {}
