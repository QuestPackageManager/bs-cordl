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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b1e01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (
    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::*)(int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b1e0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Exception* System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::Invoke(int32_t errorCode, ::StringW name,
                                                                                                                 ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, errorCode, name, handle, context);
}
inline ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode::NativeObjectSecurity_ExceptionFromErrorCode() {}
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b1dc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ResourceType>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1d398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ResourceType>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::StringW, ::System::Security::AccessControl::AccessControlSections,
    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*)>(&::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b1dc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ResourceType>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.ClearAccessControlSectionsModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)()>(
    &::System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b1dd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(), { "ClearAccessControlSectionsModified", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.DefaultExceptionFromErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5b1de80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                            { "DefaultExceptionFromErrorCode",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.RaiseExceptionOnFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(&::System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b1dd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                            { "RaiseExceptionOnFailure",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.InternalGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::NativeObjectSecurity::*)(::StringW, ::System::Security::AccessControl::AccessControlSections)>(
    &::System::Security::AccessControl::NativeObjectSecurity::InternalGet)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b1e088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(), 6 }));
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
  this->___exception_from_error_code = value;
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                         ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                         ::System::Object* exceptionContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ResourceType>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, resourceType, exceptionFromErrorCode, exceptionContext);
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                         ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ResourceType>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, resourceType, name, includeSections);
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                         ::System::Security::AccessControl::AccessControlSections includeSections,
                                                                         ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                         ::System::Object* exceptionContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ResourceType>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext);
}
inline void System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(), { "ClearAccessControlSectionsModified", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Exception* System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name,
                                                                                                                 ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                          { "DefaultExceptionFromErrorCode",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, errorCode, name, handle, context);
}
inline void System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle,
                                                                                           ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(),
                          { "RaiseExceptionOnFailure",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, name, handle, context);
}
inline int32_t System::Security::AccessControl::NativeObjectSecurity::InternalGet(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::NativeObjectSecurity*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, includeSections);
}
inline ::System::Security::AccessControl::NativeObjectSecurity*
System::Security::AccessControl::NativeObjectSecurity::New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                ::System::Object* exceptionContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, exceptionFromErrorCode, exceptionContext));
}
inline ::System::Security::AccessControl::NativeObjectSecurity*
System::Security::AccessControl::NativeObjectSecurity::New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, name, includeSections));
}
inline ::System::Security::AccessControl::NativeObjectSecurity* System::Security::AccessControl::NativeObjectSecurity::New_ctor(
    bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections,
    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::NativeObjectSecurity::NativeObjectSecurity() {}
