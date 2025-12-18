#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryDataProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.GetPercentComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::GetPercentComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676528c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                                 "GetPercentComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::Start)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x6764dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), "Start",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.WaitForCompletionHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6765454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                                 "WaitForCompletionHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.RequestOperation_completed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::RequestOperation_completed)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x67654c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), "RequestOperation_completed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.CompleteOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Exception*)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::CompleteOperation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x676569c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                                 "CompleteOperation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.ConvertBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::ConvertBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67652a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), "ConvertBytes",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.SendWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::SendWebRequest)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6765744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6764da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp._SendWebRequest_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_SendWebRequest_b__13_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6765a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                    "<SendWebRequest>b__13_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestQueueOperation;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestQueueOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestQueueOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_PI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PI;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_PI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PI;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PI = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_IgnoreFailures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_IgnoreFailures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_IgnoreFailures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreFailures = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_Complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Complete = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_Timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timeout = value;
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::GetPercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                               "GetPercentComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle,
                                                                                                     ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* rawProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), "Start",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provideHandle, rawProvider);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::WaitForCompletionHandler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                               "WaitForCompletionHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::RequestOperation_completed(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), "RequestOperation_completed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::CompleteOperation(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                               "CompleteOperation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, exception);
}
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::ConvertBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), "ConvertBytes",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, data);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::SendWebRequest(::StringW path) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>::get(),
                                  "<SendWebRequest>b__13_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOperation);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::BinaryDataProvider_InternalOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.get_IgnoreFailures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::get_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6764d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(),
                                                 "get_IgnoreFailures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.set_IgnoreFailures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::set_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6764d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), "set_IgnoreFailures",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)(::System::Type*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Convert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6764d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.Provide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Provide)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6764d24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6765288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::__cordl_internal_get__IgnoreFailures_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreFailures_k__BackingField;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::__cordl_internal_get__IgnoreFailures_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreFailures_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::__cordl_internal_set__IgnoreFailures_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreFailures_k__BackingField = value;
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::get_IgnoreFailures() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(),
                                               "get_IgnoreFailures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::set_IgnoreFailures(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), "set_IgnoreFailures",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Convert(::System::Type* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, data);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provideHandle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::BinaryDataProvider() {}
