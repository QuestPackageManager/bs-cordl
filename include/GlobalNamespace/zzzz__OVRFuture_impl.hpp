#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRFuture.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFuture__When_d__0::*)()>(&::GlobalNamespace::OVRFuture__When_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5ef102c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture__When_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture__When_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFuture__When_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRFuture__When_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ef12a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture__When_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRFuture__When_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture__When_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRFuture__When_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture__When_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRFuture__When_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRFuture__When_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(uint64_t, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OVRFuture::When)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ef0c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture*>(), { "When", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture._When_g__LogIfNotSuccess_0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(::GlobalNamespace::OVRPlugin_Result, ::StringW)>(
    &::GlobalNamespace::OVRFuture::_When_g__LogIfNotSuccess_0_0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ef0d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                                                             { "<When>g__LogIfNotSuccess|0_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture._When_g__CheckCancellationAndThrow_0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OVRFuture::_When_g__CheckCancellationAndThrow_0_1)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ef0e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                                                { "<When>g__CheckCancellationAndThrow|0_1", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRFuture::When(uint64_t future, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture*>(), { "When", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(nullptr, ___internal_method, future, cancellationToken);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRFuture::_When_g__LogIfNotSuccess_0_0(::GlobalNamespace::OVRPlugin_Result value, ::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                                                           { "<When>g__LogIfNotSuccess|0_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(nullptr, ___internal_method, value, msg);
}
inline void GlobalNamespace::OVRFuture::_When_g__CheckCancellationAndThrow_0_1(uint64_t futureToCancel, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                                              { "<When>g__CheckCancellationAndThrow|0_1", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, futureToCancel, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFuture::OVRFuture() {}
