#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Exceptions/ResourceManagerException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ResourceManagerException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x478d674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x478d6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)(::StringW, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x478d734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x478d7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x478d824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), 3));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException);
}
inline void UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                         ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, context);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>());
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>(message));
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor(::StringW message,
                                                                                                                                                                ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>(message, innerException));
}
inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*
UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*>(message, context));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ResourceManagerException() {}
