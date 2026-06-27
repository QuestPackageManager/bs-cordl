#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/IGraphQLClientProvider.hpp"
#include "BeatSaber/GraphQL/zzzz__IGraphQLClientProvider_def.hpp"
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.get_initializationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GraphQL::BSClientProviderInitializationState (::BeatSaber::GraphQL::IGraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::IGraphQLClientProvider::get_initializationState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.get_graphQLClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* (::BeatSaber::GraphQL::IGraphQLClientProvider::*)()>(&::BeatSaber::GraphQL::IGraphQLClientProvider::get_graphQLClient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.InitializeAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Threading::CancellationToken)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::InitializeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.add_initializationDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Action*)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::add_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.remove_initializationDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Action*)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::remove_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.add_globalRequestSucceededEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::add_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.remove_globalRequestSucceededEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::remove_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.add_globalRequestFailureEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::add_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::IGraphQLClientProvider.remove_globalRequestFailureEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::IGraphQLClientProvider::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::IGraphQLClientProvider::remove_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState BeatSaber::GraphQL::IGraphQLClientProvider::get_initializationState()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            0
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::GraphQL::BSClientProviderInitializationState, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* BeatSaber::GraphQL::IGraphQLClientProvider::get_graphQLClient()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            1
                        )));
return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::IGraphQLClientProvider::InitializeAsync(::System::Threading::CancellationToken  ctx)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            2
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ctx);
}
inline void BeatSaber::GraphQL::IGraphQLClientProvider::add_initializationDidFinishEvent(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            3
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::IGraphQLClientProvider::remove_initializationDidFinishEvent(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::IGraphQLClientProvider::add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            5
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::IGraphQLClientProvider::remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            6
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::IGraphQLClientProvider::add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            7
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::IGraphQLClientProvider::remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::IGraphQLClientProvider*>::get(),
                            8
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
