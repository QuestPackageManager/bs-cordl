#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability() {}
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Unknown{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Available{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Unavailable{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult() {}
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult
    GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::Available{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult
    GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::Unavailable{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult
    GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::Failed{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x222ea00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(
    ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult)>(
    &::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x222eac4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::
        __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult,
                                                                                                   ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x222ead8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(
    ::System::IAsyncResult*)>(&::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x222eb5c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*
GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>(object, method));
}
inline void GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::Invoke(
    ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), "Invoke",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::BeginInvoke(
    ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result, ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), "BeginInvoke",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, result, callback, object);
}
inline void GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*>::get(), "EndInvoke",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::
    __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler() {}
//  Writing Method size for method: ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel.get_onlineServicesAvailability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability (
    ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::*)()>(&::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::get_onlineServicesAvailability)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel.GetOnlineServicesAvailability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::*)(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*)>(
    &::GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailability)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 1));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::ISonyOnlineServicesAvailabilityModel::get_onlineServicesAvailability() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailability(
    ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, completionHandler);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
