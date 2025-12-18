#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLClient.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__EmptyResponseObject_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClientEvents_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IMutationRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IQueryRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*)>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)(float_t)>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.Query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>* (
    ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)(::OculusStudios::GraphQL::ClientInterface::IQueryRequest*)>(&::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Query)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d7e228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.Mutate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>* (
    ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)(::OculusStudios::GraphQL::ClientInterface::IMutationRequest*)>(&::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Mutate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d7e2e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.ResetRequestForUserInitiatedRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)(::OculusStudios::GraphQL::ClientInterface::Request*)>(
        &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::ResetRequestForUserInitiatedRetryAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.PauseRequestQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::PauseRequestQueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.ResumeRequestQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::ResumeRequestQueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.OnApplicationSuspended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::OnApplicationSuspended)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.OnApplicationResumed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::OnApplicationResumed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.SetApplicationOnline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::SetApplicationOnline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient.SetApplicationOffline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IGraphQLClient::SetApplicationOffline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 14));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Initialize(::StringW endpoint, ::StringW accessToken,
                                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                                                                                ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endpoint, accessToken, customAppHeaders, logger);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Update(float_t deltaTime) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>*
OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>*, false>(this, ___internal_method, request);
}
template <typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 3)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TDomainModel>*, false>(this, ___internal_method, request);
}
template <typename TDomainModel, typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 4)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TViewModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TViewModel>*, false>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>*
OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>*, false>(this, ___internal_method, request);
}
template <typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 6)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TDomainModel>*, false>(this, ___internal_method, request);
}
template <typename TDomainModel, typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* OculusStudios::GraphQL::ClientInterface::IGraphQLClient::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 7)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TViewModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TViewModel>*, false>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::ClientInterface::IGraphQLClient::ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, request);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::PauseRequestQueue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::ResumeRequestQueue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::OnApplicationSuspended() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::OnApplicationResumed() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::SetApplicationOnline() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::IGraphQLClient::SetApplicationOffline() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
