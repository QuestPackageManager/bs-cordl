#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/Request.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__AttemptData_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__FailureHandlingMethod_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.add_onRequestStateUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(
    ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*)>(
    &::OculusStudios::GraphQL::ClientInterface::Request::add_onRequestStateUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d7e5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "add_onRequestStateUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.remove_onRequestStateUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(
    ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*)>(
    &::OculusStudios::GraphQL::ClientInterface::Request::remove_onRequestStateUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d7e680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "remove_onRequestStateUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.get_cancellationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationToken (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::get_cancellationToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d7e740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "get_cancellationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.get_requestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::get_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "get_requestId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.get_requestState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::RequestState (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::get_requestState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "get_requestState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.get_attemptsPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::get_attemptsPerformed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d7e774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "get_attemptsPerformed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.get_attempts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* (
    ::OculusStudios::GraphQL::ClientInterface::Request::*)()>(&::OculusStudios::GraphQL::ClientInterface::Request::get_attempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "get_attempts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(
    bool, ::OculusStudios::GraphQL::ClientInterface::RequestType)>(&::OculusStudios::GraphQL::ClientInterface::Request::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d7e7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.GetTimeoutMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::GetTimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e90c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.GetFailureHandlingMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod (
    ::OculusStudios::GraphQL::ClientInterface::Request::*)()>(&::OculusStudios::GraphQL::ClientInterface::Request::GetFailureHandlingMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7e914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.GetLastException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::GetLastException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d7e91c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.ResetStateForUserInitiatedRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::ResetStateForUserInitiatedRetry)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5d7e9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "ResetStateForUserInitiatedRetry",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.SetRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(int64_t)>(
    &::OculusStudios::GraphQL::ClientInterface::Request::SetRequestId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d7ed88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "SetRequestId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.SetRequestState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(
    ::OculusStudios::GraphQL::ClientInterface::RequestState)>(&::OculusStudios::GraphQL::ClientInterface::Request::SetRequestState)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d7edec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "SetRequestState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.RegisterRawResponseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::Request::RegisterRawResponseData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d7f024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "RegisterRawResponseData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.RegisterException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(::System::Exception*)>(
    &::OculusStudios::GraphQL::ClientInterface::Request::RegisterException)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d7f0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "RegisterException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.OnRequestStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)(
    ::OculusStudios::GraphQL::ClientInterface::RequestState)>(&::OculusStudios::GraphQL::ClientInterface::Request::OnRequestStateChanged)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d7eef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "OnRequestStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.PerformRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::PerformRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.SupportsClientMutationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::SupportsClientMutationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.GetCodeGenInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* (
    ::OculusStudios::GraphQL::ClientInterface::Request::*)()>(&::OculusStudios::GraphQL::ClientInterface::Request::GetCodeGenInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d7f1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Request.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Request::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::Request::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d7f21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                               "Cancel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*&
OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_onRequestStateUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestStateUpdated;
}
constexpr ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* const&
OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_onRequestStateUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestStateUpdated;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set_onRequestStateUpdated(
    ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRequestStateUpdated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_forceRequestWhenOffline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceRequestWhenOffline;
}
constexpr bool const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_forceRequestWhenOffline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceRequestWhenOffline;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set_forceRequestWhenOffline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceRequestWhenOffline = value;
}
constexpr ::StringW& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_clientMutationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientMutationId;
}
constexpr ::StringW const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_clientMutationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientMutationId;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set_clientMutationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientMutationId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_requestType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestType;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_requestType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestType;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set_requestType(::OculusStudios::GraphQL::ClientInterface::RequestType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestType = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__requestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr int64_t const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__requestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set__requestId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId = value;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__requestState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestState;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__requestState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestState;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set__requestState(::OculusStudios::GraphQL::ClientInterface::RequestState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestState = value;
}
constexpr ::System::Threading::CancellationTokenSource*& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>*& OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__attempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attempts;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* const&
OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_get__attempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attempts;
}
constexpr void
OculusStudios::GraphQL::ClientInterface::Request::__cordl_internal_set__attempts(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attempts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::ClientInterface::Request::add_onRequestStateUpdated(
    ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "add_onRequestStateUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::remove_onRequestStateUpdated(
    ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "remove_onRequestStateUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::CancellationToken OculusStudios::GraphQL::ClientInterface::Request::get_cancellationToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "get_cancellationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken, false>(this, ___internal_method);
}
inline int64_t OculusStudios::GraphQL::ClientInterface::Request::get_requestId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "get_requestId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::Request::get_requestState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "get_requestState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::RequestState, false>(this, ___internal_method);
}
inline int32_t OculusStudios::GraphQL::ClientInterface::Request::get_attemptsPerformed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "get_attemptsPerformed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* OculusStudios::GraphQL::ClientInterface::Request::get_attempts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "get_attempts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>*, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::_ctor(bool forceRequestWhenOffline, ::OculusStudios::GraphQL::ClientInterface::RequestType requestType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceRequestWhenOffline, requestType);
}
inline int32_t OculusStudios::GraphQL::ClientInterface::Request::GetTimeoutMs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod OculusStudios::GraphQL::ClientInterface::Request::GetFailureHandlingMethod() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod, false>(this, ___internal_method);
}
inline ::System::Exception* OculusStudios::GraphQL::ClientInterface::Request::GetLastException() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::ResetStateForUserInitiatedRetry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "ResetStateForUserInitiatedRetry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::SetRequestId(int64_t newRequestId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "SetRequestId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRequestId);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::SetRequestState(::OculusStudios::GraphQL::ClientInterface::RequestState requestState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "SetRequestState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestState);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::RegisterRawResponseData(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "RegisterRawResponseData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::RegisterException(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "RegisterException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::OnRequestStateChanged(::OculusStudios::GraphQL::ClientInterface::RequestState requestState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), "OnRequestStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestState);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::PerformRequest() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OculusStudios::GraphQL::ClientInterface::Request::SupportsClientMutationId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* OculusStudios::GraphQL::ClientInterface::Request::GetCodeGenInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::Request::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::Request*>::get(),
                                                                             "Cancel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::Request* OculusStudios::GraphQL::ClientInterface::Request::New_ctor(bool forceRequestWhenOffline,
                                                                                                                      ::OculusStudios::GraphQL::ClientInterface::RequestType requestType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::ClientInterface::Request*>(forceRequestWhenOffline, requestType));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::GraphQL::ClientInterface::Request::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::GraphQL::ClientInterface::Request::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::Request::Request() {}
