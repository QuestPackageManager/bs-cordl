#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestAsyncOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller.ConvertToManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (*)(::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c5d8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller*>::get(), "ConvertToManaged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller::ConvertToManaged(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller*>::get(), "ConvertToManaged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*, false>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller::UnityWebRequestAsyncOperation_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequestAsyncOperation::*)(::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c5d848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation.get_webRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::UnityEngine::Networking::UnityWebRequestAsyncOperation::*)()>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5d894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(),
                                                                               "get_webRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation.set_webRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequestAsyncOperation::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5d89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(), "set_webRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& UnityEngine::Networking::UnityWebRequestAsyncOperation::__cordl_internal_get__webRequest_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____webRequest_k__BackingField;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& UnityEngine::Networking::UnityWebRequestAsyncOperation::__cordl_internal_get__webRequest_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____webRequest_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequestAsyncOperation::__cordl_internal_set__webRequest_k__BackingField(::UnityEngine::Networking::UnityWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webRequest_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Networking::UnityWebRequestAsyncOperation::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(),
                                                                             "get_webRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest(::UnityEngine::Networking::UnityWebRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(), "set_webRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequestAsyncOperation::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation::UnityWebRequestAsyncOperation() {}
