#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Exceptions/RemoteProviderException.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__RemoteProviderException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)(
    ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4792704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4792730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.get_WebRequestResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* (
    ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(&::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x479273c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                                 "get_WebRequestResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x4792744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*&
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__cordl_internal_get__WebRequestResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestResult_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* const&
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__cordl_internal_get__WebRequestResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestResult_k__BackingField;
}
constexpr void
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__cordl_internal_set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WebRequestResult_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                        ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                                                                                        ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, location, uwrResult, innerException);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                               "get_WebRequestResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                               ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult, ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(message, location, uwrResult, innerException));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::RemoteProviderException() {}
