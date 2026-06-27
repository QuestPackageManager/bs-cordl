#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLDummyClientProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLDummyClientProvider_def.hpp"
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_def.hpp"
#include "BeatSaber/GraphQL/zzzz__DummyGraphQLClient_def.hpp"
#include "BeatSaber/GraphQL/zzzz__IGraphQLClientProvider_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.get_initializationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GraphQL::BSClientProviderInitializationState (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::get_initializationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3201054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "get_initializationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.get_graphQLClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::get_graphQLClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x320105c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "get_graphQLClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.add_initializationDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Action*)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::add_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3201064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "add_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.remove_initializationDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Action*)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::remove_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3201110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "remove_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.add_globalRequestSucceededEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::add_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32011bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "add_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.remove_globalRequestSucceededEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::remove_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x320127c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "remove_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.add_globalRequestFailureEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::add_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x320133c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "add_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.remove_globalRequestFailureEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::remove_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32013fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "remove_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.BeatSaber_GraphQL_IGraphQLClientProvider_InitializeAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)(::System::Threading::CancellationToken)>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::BeatSaber_GraphQL_IGraphQLClientProvider_InitializeAsync)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x32014bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "BeatSaber.GraphQL.IGraphQLClientProvider.InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.Zenject_IInitializable_Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::Zenject_IInitializable_Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x320162c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "Zenject.IInitializable.Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3201630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLDummyClientProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLDummyClientProvider::*)()>(&::BeatSaber::GraphQL::GraphQLDummyClientProvider::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3201634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get_initializationDidFinishEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializationDidFinishEvent;
}
constexpr ::System::Action* const& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get_initializationDidFinishEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializationDidFinishEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_set_initializationDidFinishEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initializationDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get_globalRequestSucceededEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestSucceededEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get_globalRequestSucceededEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestSucceededEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalRequestSucceededEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get_globalRequestFailureEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestFailureEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get_globalRequestFailureEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRequestFailureEvent;
}
constexpr void BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalRequestFailureEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GraphQL::DummyGraphQLClient*& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get__graphQLClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClient;
}
constexpr ::BeatSaber::GraphQL::DummyGraphQLClient* const& BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_get__graphQLClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClient;
}
constexpr void BeatSaber::GraphQL::GraphQLDummyClientProvider::__cordl_internal_set__graphQLClient(::BeatSaber::GraphQL::DummyGraphQLClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState BeatSaber::GraphQL::GraphQLDummyClientProvider::get_initializationState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "get_initializationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::GraphQL::BSClientProviderInitializationState, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* BeatSaber::GraphQL::GraphQLDummyClientProvider::get_graphQLClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "get_graphQLClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::add_initializationDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "add_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::remove_initializationDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "remove_initializationDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "add_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "remove_globalRequestSucceededEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "add_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "remove_globalRequestFailureEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::GraphQLDummyClientProvider::BeatSaber_GraphQL_IGraphQLClientProvider_InitializeAsync(::System::Threading::CancellationToken  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "BeatSaber.GraphQL.IGraphQLClientProvider.InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ctx);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::Zenject_IInitializable_Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "Zenject.IInitializable.Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLDummyClientProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLDummyClientProvider* BeatSaber::GraphQL::GraphQLDummyClientProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::GraphQLDummyClientProvider*>());
}
/// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr  BeatSaber::GraphQL::GraphQLDummyClientProvider::operator ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept {
return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* BeatSaber::GraphQL::GraphQLDummyClientProvider::i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept {
return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  BeatSaber::GraphQL::GraphQLDummyClientProvider::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::GraphQL::GraphQLDummyClientProvider::i___Zenject__IInitializable() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  BeatSaber::GraphQL::GraphQLDummyClientProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::GraphQL::GraphQLDummyClientProvider::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLDummyClientProvider::GraphQLDummyClientProvider()   {
}
