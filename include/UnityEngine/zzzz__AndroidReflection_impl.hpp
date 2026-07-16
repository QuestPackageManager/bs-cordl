#pragma once
// IWYU pragma private; include "UnityEngine/AndroidReflection.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidReflection_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GlobalJavaObjectRef_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidReflection.IsPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::AndroidReflection::IsPrimitive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a2c004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "IsPrimitive", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::UnityEngine::AndroidReflection::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a2c020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "IsAssignableFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetStaticMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::AndroidReflection::GetStaticMethodID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a2c03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                                             { "GetStaticMethodID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::AndroidReflection::GetMethodID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a2c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetMethodID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetConstructorMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidReflection::GetConstructorMember)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6a2c1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetConstructorMember", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetMethodMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidReflection::GetMethodMember)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6a2c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                                { "GetMethodMember", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidReflection::GetFieldMember)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6a2c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                                { "GetFieldMember", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidReflection::GetFieldClass)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a2c714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetFieldClass", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidReflection::GetFieldSignature)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a2c77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetFieldSignature", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.NewProxyInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidReflection::NewProxyInstance)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a2c82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                                { "NewProxyInstance", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.CreateInvocationError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Exception*, bool)>(&::UnityEngine::AndroidReflection::CreateInvocationError)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a29678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "CreateInvocationError", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperClass(::UnityEngine::GlobalJavaObjectRef* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GlobalJavaObjectRef*, "s_ReflectionHelperClass", ::UnityEngine::AndroidReflection*>(std::forward<::UnityEngine::GlobalJavaObjectRef*>(value));
}
inline ::UnityEngine::GlobalJavaObjectRef* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperClass() {
  return ::cordl_internals::getStaticField<::UnityEngine::GlobalJavaObjectRef*, "s_ReflectionHelperClass", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetConstructorID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetConstructorID", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetConstructorID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetConstructorID", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetMethodID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetMethodID", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetMethodID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetMethodID", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetFieldID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldID", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetFieldID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldID", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetFieldSignature(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldSignature", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetFieldSignature() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldSignature", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperNewProxyInstance(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperNewProxyInstance", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperNewProxyInstance() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperNewProxyInstance", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperCeateInvocationError(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperCeateInvocationError", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperCeateInvocationError() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperCeateInvocationError", ::UnityEngine::AndroidReflection*>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_FieldGetDeclaringClass(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_FieldGetDeclaringClass", ::UnityEngine::AndroidReflection*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_FieldGetDeclaringClass() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_FieldGetDeclaringClass", ::UnityEngine::AndroidReflection*>();
}
inline bool UnityEngine::AndroidReflection::IsPrimitive(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "IsPrimitive", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool UnityEngine::AndroidReflection::IsAssignableFrom(::System::Type* t, ::System::Type* from) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "IsAssignableFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t, from);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetStaticMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                                           { "GetStaticMethodID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodName, signature);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetMethodID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodName, signature);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetConstructorMember(::System::IntPtr jclass, ::StringW signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetConstructorMember", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, signature);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetMethodMember(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                              { "GetMethodMember", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetFieldMember(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                              { "GetFieldMember", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, fieldName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetFieldClass(::System::IntPtr field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetFieldClass", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, field);
}
inline ::StringW UnityEngine::AndroidReflection::GetFieldSignature(::System::IntPtr field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "GetFieldSignature", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, field);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::NewProxyInstance(::System::IntPtr player, ::System::IntPtr delegateHandle, ::System::IntPtr interfaze) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(),
                                              { "NewProxyInstance", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, player, delegateHandle, interfaze);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::CreateInvocationError(::System::Exception* ex, bool methodNotFound) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidReflection*>(), { "CreateInvocationError", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ex, methodNotFound);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidReflection::AndroidReflection() {}
