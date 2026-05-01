#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/MockGraphQLClientProvider.hpp"
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__MockGraphQLClientProvider_def.hpp"
#include "BeatSaber/GraphQL/zzzz__BSClientProviderInitializationState_def.hpp"
#include "BeatSaber/GraphQL/zzzz__IGraphQLClientProvider_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.get_initializationState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GraphQL::BSClientProviderInitializationState (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)()>(
    &::BeatSaber::GraphQL::MockGraphQLClientProvider::get_initializationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(),
                                                                               "get_initializationState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.get_graphQLClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)()>(
    &::BeatSaber::GraphQL::MockGraphQLClientProvider::get_graphQLClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x320096c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(),
                                                                               "get_graphQLClient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.add_initializationDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(::System::Action*)>(
    &::BeatSaber::GraphQL::MockGraphQLClientProvider::add_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3200974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "add_initializationDidFinishEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.remove_initializationDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(::System::Action*)>(
    &::BeatSaber::GraphQL::MockGraphQLClientProvider::remove_initializationDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3200a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "remove_initializationDidFinishEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.add_globalRequestSucceededEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(
    ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::MockGraphQLClientProvider::add_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3200acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "add_globalRequestSucceededEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.remove_globalRequestSucceededEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(
    ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::MockGraphQLClientProvider::remove_globalRequestSucceededEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3200b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "remove_globalRequestSucceededEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.add_globalRequestFailureEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(
    ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::MockGraphQLClientProvider::add_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3200c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "add_globalRequestFailureEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.remove_globalRequestFailureEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(
    ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(&::BeatSaber::GraphQL::MockGraphQLClientProvider::remove_globalRequestFailureEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3200d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "remove_globalRequestFailureEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*)>(&::BeatSaber::GraphQL::MockGraphQLClientProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(::System::Threading::CancellationToken)>(&::BeatSaber::GraphQL::MockGraphQLClientProvider::InitializeAsync)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3200dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::MockGraphQLClientProvider._InitializeAsync_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::MockGraphQLClientProvider::*)(::System::Threading::Tasks::Task_1<bool>*)>(
    &::BeatSaber::GraphQL::MockGraphQLClientProvider::_InitializeAsync_b__18_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3200f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "<InitializeAsync>b__18_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<bool>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_InitializeState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitializeState;
}
constexpr ::BeatSaber::GraphQL::BSClientProviderInitializationState const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_InitializeState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitializeState;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set_InitializeState(::BeatSaber::GraphQL::BSClientProviderInitializationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitializeState = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_InitializeTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitializeTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_InitializeTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitializeTaskSource;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set_InitializeTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InitializeTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_ThrowOnInitialize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ThrowOnInitialize;
}
constexpr ::System::Exception* const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_ThrowOnInitialize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ThrowOnInitialize;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set_ThrowOnInitialize(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ThrowOnInitialize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get__graphQLClient_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClient_k__BackingField;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get__graphQLClient_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClient_k__BackingField;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set__graphQLClient_k__BackingField(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClient_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_initializationDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializationDidFinishEvent;
}
constexpr ::System::Action* const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_initializationDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializationDidFinishEvent;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set_initializationDidFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initializationDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_globalRequestSucceededEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestSucceededEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_globalRequestSucceededEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestSucceededEvent;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalRequestSucceededEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_globalRequestFailureEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestFailureEvent;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_get_globalRequestFailureEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalRequestFailureEvent;
}
constexpr void BeatSaber::GraphQL::MockGraphQLClientProvider::__cordl_internal_set_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalRequestFailureEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::GraphQL::BSClientProviderInitializationState BeatSaber::GraphQL::MockGraphQLClientProvider::get_initializationState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(),
                                                                             "get_initializationState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GraphQL::BSClientProviderInitializationState, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* BeatSaber::GraphQL::MockGraphQLClientProvider::get_graphQLClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(),
                                                                             "get_graphQLClient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::add_initializationDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "add_initializationDidFinishEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::remove_initializationDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "remove_initializationDidFinishEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::add_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "add_globalRequestSucceededEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::remove_globalRequestSucceededEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "remove_globalRequestSucceededEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::add_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "add_globalRequestFailureEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::remove_globalRequestFailureEvent(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "remove_globalRequestFailureEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::_ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* graphQLClient) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphQLClient);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::MockGraphQLClientProvider::InitializeAsync(::System::Threading::CancellationToken ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, ctx);
}
inline void BeatSaber::GraphQL::MockGraphQLClientProvider::_InitializeAsync_b__18_0(::System::Threading::Tasks::Task_1<bool>* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClientProvider*>::get(), "<InitializeAsync>b__18_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline ::BeatSaber::GraphQL::MockGraphQLClientProvider* BeatSaber::GraphQL::MockGraphQLClientProvider::New_ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* graphQLClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::MockGraphQLClientProvider*>(graphQLClient));
}
/// @brief Convert operator to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr BeatSaber::GraphQL::MockGraphQLClientProvider::operator ::BeatSaber::GraphQL::IGraphQLClientProvider*() noexcept {
  return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::GraphQL::IGraphQLClientProvider"
constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* BeatSaber::GraphQL::MockGraphQLClientProvider::i___BeatSaber__GraphQL__IGraphQLClientProvider() noexcept {
  return static_cast<::BeatSaber::GraphQL::IGraphQLClientProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::MockGraphQLClientProvider::MockGraphQLClientProvider() {}
