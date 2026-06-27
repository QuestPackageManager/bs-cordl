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
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider_Settings::*)(::StringW, bool)>(&::BeatSaber::GraphQL::GraphQLClientProvider_Settings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3200164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_endpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpoint;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_endpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpoint;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_set_endpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_autoInitialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoInitialize;
}
constexpr bool const& BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_get_autoInitialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoInitialize;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider_Settings::__cordl_internal_set_autoInitialize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoInitialize = value;
}
inline void BeatSaber::GraphQL::GraphQLClientProvider_Settings::_ctor(::StringW  endpoint, bool  autoInitialize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endpoint, autoInitialize);
}
inline ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* BeatSaber::GraphQL::GraphQLClientProvider_Settings::New_ctor(::StringW  endpoint, bool  autoInitialize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>(endpoint, autoInitialize));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings::GraphQLClientProvider_Settings()   {
}
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x92c;
  constexpr static std::size_t addrs = 0x3200170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3200a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GraphQL::GraphQLClientProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_appVersion_5__2", ty: "::System::Version*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::GraphQLClientProvider__InitializationTask_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::GraphQL::GraphQLClientProvider*  __4__this, ::System::Threading::CancellationToken  ctx, ::System::Version*  _appVersion_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->ctx = ctx;
this->_appVersion_5__2 = _appVersion_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializationTask_d__24::GraphQLClientProvider__InitializationTask_d__24()   {
}
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3200b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3200d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GraphQL::GraphQLClientProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::GraphQLClientProvider__InitializeAsync_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::GraphQL::GraphQLClientProvider*  __4__this, ::System::Threading::CancellationToken  ctx, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->ctx = ctx;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider__InitializeAsync_d__23::GraphQLClientProvider__InitializeAsync_d__23()   {
}
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.add_initializationDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action*)>(&::BeatSaber::GraphQL::GraphQLClientProvider::add_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31ff818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "add_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.remove_initializationDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action*)>(&::BeatSaber::GraphQL::GraphQLClientProvider::remove_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31ff8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "remove_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.add_globalRequestSucceededEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31ff970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "add_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.remove_globalRequestSucceededEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31ffa30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "remove_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.add_globalRequestFailureEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31ffaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "add_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.remove_globalRequestFailureEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31ffbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "remove_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.get_graphQLClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::get_graphQLClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ffc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "get_graphQLClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.get_initializationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GraphQL::BSClientProviderInitializationState (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::get_initializationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ffc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "get_initializationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.set_initializationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::BeatSaber::GraphQL::BSClientProviderInitializationState)>(&::BeatSaber::GraphQL::GraphQLClientProvider::set_initializationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ffc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "set_initializationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GraphQL::BSClientProviderInitializationState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31ffc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.InitializeAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Threading::CancellationToken)>(&::BeatSaber::GraphQL::GraphQLClientProvider::InitializeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31ffd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.InitializationTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLClientProvider::*)(::System::Threading::CancellationToken)>(&::BeatSaber::GraphQL::GraphQLClientProvider::InitializationTask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31ffdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "InitializationTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::Initialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x31ffeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x31ffff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::Tick)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x320004c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProvider._Initialize_b__25_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLClientProvider::_Initialize_b__25_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3200130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "<Initialize>b__25_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__settings(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platform;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_initializationDidFinishEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializationDidFinishEvent;
}
constexpr ::System::Action* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_initializationDidFinishEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializationDidFinishEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set_initializationDidFinishEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initializationDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestSucceededEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestSucceededEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestSucceededEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestSucceededEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalRequestSucceededEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestFailureEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestFailureEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get_globalRequestFailureEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestFailureEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalRequestFailureEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GraphQL::GraphQLClientEvents*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClientEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClientEvents;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientEvents* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClientEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClientEvents;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__graphQLClientEvents(::BeatSaber::GraphQL::GraphQLClientEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClientEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationCancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationCancellationToken;
}
constexpr ::System::Threading::CancellationTokenSource* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationCancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationCancellationToken;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__initializationCancellationToken(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationCancellationToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationState_k__BackingField;
}
constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationState_k__BackingField;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__initializationState_k__BackingField(::BeatSaber::GraphQL::BSClientProviderInitializationState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializationState_k__BackingField = value;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClient;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__graphQLClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClient;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_get__initializationTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTask;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProvider::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::add_initializationDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "add_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::remove_initializationDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "remove_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "add_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "remove_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "add_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "remove_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* BeatSaber::GraphQL::GraphQLClientProvider::get_graphQLClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "get_graphQLClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*, false>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState BeatSaber::GraphQL::GraphQLClientProvider::get_initializationState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "get_initializationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::GraphQL::BSClientProviderInitializationState, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::set_initializationState(::BeatSaber::GraphQL::BSClientProviderInitializationState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "set_initializationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GraphQL::BSClientProviderInitializationState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLClientProvider::InitializeAsync(::System::Threading::CancellationToken  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ctx);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLClientProvider::InitializationTask(::System::Threading::CancellationToken  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "InitializationTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ctx);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProvider::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLClientProvider::_Initialize_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProvider*>::get(),
                        "<Initialize>b__25_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLClientProvider* BeatSaber::GraphQL::GraphQLClientProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::GraphQLClientProvider*>());
}
/// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr  BeatSaber::GraphQL::GraphQLClientProvider::operator ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept {
return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* BeatSaber::GraphQL::GraphQLClientProvider::i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept {
return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  BeatSaber::GraphQL::GraphQLClientProvider::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::GraphQL::GraphQLClientProvider::i___Zenject__IInitializable() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  BeatSaber::GraphQL::GraphQLClientProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::GraphQL::GraphQLClientProvider::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  BeatSaber::GraphQL::GraphQLClientProvider::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* BeatSaber::GraphQL::GraphQLClientProvider::i___Zenject__ITickable() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider::GraphQLClientProvider()   {
}
