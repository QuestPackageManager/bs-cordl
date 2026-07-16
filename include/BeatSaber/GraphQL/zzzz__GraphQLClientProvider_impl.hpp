#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProvider.hpp"
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProvider_def.hpp"
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientEvents_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProvider_def.hpp"
#include "BeatSaber/GraphQL/zzzz__IGraphQLClientProvider_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider_Settings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider_Settings::*)(::StringW, bool)>(&::BeatSaber::GraphQL::GraphQLClientProvider_Settings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3295004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_endpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_endpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_set_endpoint(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endpoint = value;
}
constexpr bool& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_autoInitialize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoInitialize;
}
constexpr bool const& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_autoInitialize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoInitialize;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_set_autoInitialize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoInitialize = value;
}
inline void BeatSaber::GraphQL::GraphQLClientProvider_Settings::_ctor(::StringW endpoint, bool autoInitialize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, autoInitialize);
}
inline ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* BeatSaber::GraphQL::GraphQLClientProvider_Settings::New_ctor(::StringW endpoint, bool autoInitialize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>(endpoint, autoInitialize));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings::GraphQLClientProvider_Settings() {}
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::*)()>(
    &::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x92c;
  constexpr static std::size_t addrs = 0x3295010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x329593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GraphQL::GraphQLClientProvider*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_appVersion_5__2", ty:
// "::System::Version*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::GraphQLClientProvider__InitializationTask_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::GraphQL::GraphQLClientProvider* __4__this, ::System::Threading::CancellationToken ctx,
    ::System::Version* _appVersion_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->ctx = ctx;
  this->_appVersion_5__2 = _appVersion_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::GraphQLClientProvider__InitializationTask_d__24() {}
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::*)()>(
    &::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x32959a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3295ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GraphQL::GraphQLClientProvider*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::GraphQLClientProvider__InitializeAsync_d__23(int32_t __1__state,
                                                                                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                           ::BeatSaber::GraphQL::GraphQLClientProvider* __4__this,
                                                                                                                           ::System::Threading::CancellationToken ctx,
                                                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->ctx = ctx;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::GraphQLClientProvider__InitializeAsync_d__23() {}
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.add_initializationDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::add_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32946b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "add_initializationDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.remove_initializationDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::remove_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3294764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "remove_initializationDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.add_globalRequestSucceededEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3294810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                { "add_globalRequestSucceededEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.remove_globalRequestSucceededEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32948d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                { "remove_globalRequestSucceededEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.add_globalRequestFailureEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3294990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                             { "add_globalRequestFailureEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.remove_globalRequestFailureEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3294a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                { "remove_globalRequestFailureEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.get_graphQLClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::get_graphQLClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3294b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "get_graphQLClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.get_initializationState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GraphQL::BSClientProviderInitializationState (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::get_initializationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3294b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "get_initializationState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.set_initializationState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::BeatSaber::GraphQL::BSClientProviderInitializationState)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::set_initializationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3294b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                             { "set_initializationState", {}, { ::i2c::type_of<::BeatSaber::GraphQL::BSClientProviderInitializationState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3294b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Threading::CancellationToken)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::InitializeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3294bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "InitializeAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.InitializationTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Threading::CancellationToken)>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::InitializationTask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3294c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "InitializationTask", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::Initialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3294d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3294e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::Tick)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3294eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider._Initialize_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(
    &::BeatSaber::GraphQL::GraphQLClientProvider::_Initialize_b__25_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3294fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "<Initialize>b__25_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__settings(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::System::Action*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_initializationDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializationDidFinishEvent;
}
constexpr ::System::Action* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_initializationDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializationDidFinishEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set_initializationDidFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initializationDidFinishEvent = value;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestSucceededEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestSucceededEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestSucceededEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestSucceededEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalRequestSucceededEvent = value;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestFailureEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestFailureEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestFailureEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestFailureEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalRequestFailureEvent = value;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientEvents*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClientEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClientEvents;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientEvents* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClientEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClientEvents;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__graphQLClientEvents(::BeatSaber::GraphQL::GraphQLClientEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphQLClientEvents = value;
}
constexpr ::System::Threading::CancellationTokenSource*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationCancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationCancellationToken;
}
constexpr ::System::Threading::CancellationTokenSource* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationCancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationCancellationToken;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__initializationCancellationToken(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationCancellationToken = value;
}
constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationState_k__BackingField;
}
constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationState_k__BackingField;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__initializationState_k__BackingField(::BeatSaber::GraphQL::BSClientProviderInitializationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationState_k__BackingField = value;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClient;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClient;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphQLClient = value;
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationTask = value;
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::add_initializationDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "add_initializationDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::remove_initializationDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "remove_initializationDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                           { "add_globalRequestSucceededEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                              { "remove_globalRequestSucceededEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                           { "add_globalRequestFailureEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                              { "remove_globalRequestFailureEvent", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* BeatSaber::GraphQL::GraphQLClientProvider::get_graphQLClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "get_graphQLClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState BeatSaber::GraphQL::GraphQLClientProvider::get_initializationState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "get_initializationState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GraphQL::BSClientProviderInitializationState>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::set_initializationState(::BeatSaber::GraphQL::BSClientProviderInitializationState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(),
                                                           { "set_initializationState", {}, { ::i2c::type_of<::BeatSaber::GraphQL::BSClientProviderInitializationState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLClientProvider::InitializeAsync(::System::Threading::CancellationToken ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "InitializeAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, ctx);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLClientProvider::InitializationTask(::System::Threading::CancellationToken ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "InitializationTask", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, ctx);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLClientProvider::_Initialize_b__25_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProvider*>(), { "<Initialize>b__25_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLClientProvider* BeatSaber::GraphQL::GraphQLClientProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::GraphQLClientProvider*>());
}
/// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr BeatSaber::GraphQL::GraphQLClientProvider::operator ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept {
  return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* BeatSaber::GraphQL::GraphQLClientProvider::i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept {
  return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::GraphQL::GraphQLClientProvider::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::GraphQL::GraphQLClientProvider::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::GraphQL::GraphQLClientProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::GraphQL::GraphQLClientProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr BeatSaber::GraphQL::GraphQLClientProvider::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* BeatSaber::GraphQL::GraphQLClientProvider::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider::GraphQLClientProvider() {}
