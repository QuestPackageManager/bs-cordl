#pragma once
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__RemoteProviderException_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)(
    ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bd01c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
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
  constexpr static std::size_t addrs = 0x2bd01ec;

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
  constexpr static std::size_t addrs = 0x2bd01f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                                 "get_WebRequestResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2bd0200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*& UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__get__WebRequestResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestResult_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> const&
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__get__WebRequestResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestResult_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WebRequestResult_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param location: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (default: nullptr)
/// @param uwrResult: ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* (default: nullptr)
/// @param innerException: ::System::Exception* (default: nullptr)
inline ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                               ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult, ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(message, location, uwrResult, innerException));
}
/// @param location: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (default: nullptr)
/// @param uwrResult: ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* (default: nullptr)
/// @param innerException: ::System::Exception* (default: nullptr)
inline void UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                        ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                                                                                        ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, location, uwrResult, innerException);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), "get_Message",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(),
                                               "get_WebRequestResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::RemoteProviderException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
