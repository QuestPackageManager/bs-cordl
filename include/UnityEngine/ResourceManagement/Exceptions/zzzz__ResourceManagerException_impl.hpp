#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ResourceManagerException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bcfc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bcfc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)(::StringW, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bcfce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bcfd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bcfdd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), 3));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>());
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>(message));
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor(::StringW message,
                                                                                                                                                                ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>(message, innerException));
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException);
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*
UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>(message, context));
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                         ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, context);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ResourceManagerException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
