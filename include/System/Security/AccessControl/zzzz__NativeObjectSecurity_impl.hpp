#pragma once
// IWYU pragma private; include "System/Security/AccessControl/NativeObjectSecurity.hpp"
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__ResourceType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::*)(
    ::System::Object*, ::System::IntPtr)>(&::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3cc1704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::*)(int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3cc17c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Exception* System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::Invoke(int32_t errorCode, ::StringW name,
                                                                                                                 ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, errorCode, name, handle, context);
}
inline ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::NativeObjectSecurity_ExceptionFromErrorCode() {}
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3cc1378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3cc0a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::StringW, ::System::Security::AccessControl::AccessControlSections,
    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*)>(&::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3cc13a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.ClearAccessControlSectionsModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)()>(
    &::System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3cc14ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(),
                                                 "ClearAccessControlSectionsModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.DefaultExceptionFromErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3cc1594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "DefaultExceptionFromErrorCode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.RaiseExceptionOnFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(&::System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3cc1418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "RaiseExceptionOnFailure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.InternalGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::NativeObjectSecurity::*)(
    ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::NativeObjectSecurity::InternalGet)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3cc1790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*& System::Security::AccessControl::NativeObjectSecurity::__cordl_internal_get_exception_from_error_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exception_from_error_code;
}
constexpr ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* const&
System::Security::AccessControl::NativeObjectSecurity::__cordl_internal_get_exception_from_error_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exception_from_error_code;
}
constexpr void
System::Security::AccessControl::NativeObjectSecurity::__cordl_internal_set_exception_from_error_code(::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exception_from_error_code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                         ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                         ::System::Object* exceptionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, resourceType, exceptionFromErrorCode, exceptionContext);
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                         ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, resourceType, name, includeSections);
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                         ::System::Security::AccessControl::AccessControlSections includeSections,
                                                                         ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                         ::System::Object* exceptionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext);
}
inline void System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(),
                                               "ClearAccessControlSectionsModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Exception* System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name,
                                                                                                                 ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "DefaultExceptionFromErrorCode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, errorCode, name, handle, context);
}
inline void System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle,
                                                                                           ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "RaiseExceptionOnFailure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, name, handle, context);
}
inline int32_t System::Security::AccessControl::NativeObjectSecurity::InternalGet(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name, includeSections);
}
inline ::System::Security::AccessControl::NativeObjectSecurity*
System::Security::AccessControl::NativeObjectSecurity::New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                ::System::Object* exceptionContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, exceptionFromErrorCode, exceptionContext));
}
inline ::System::Security::AccessControl::NativeObjectSecurity*
System::Security::AccessControl::NativeObjectSecurity::New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, name, includeSections));
}
inline ::System::Security::AccessControl::NativeObjectSecurity* System::Security::AccessControl::NativeObjectSecurity::New_ctor(
    bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections,
    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::NativeObjectSecurity::NativeObjectSecurity() {}
