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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::AndroidReflection::IsPrimitive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6860ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsPrimitive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::UnityEngine::AndroidReflection::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6860ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsAssignableFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetStaticMethodID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::AndroidReflection::GetStaticMethodID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6860ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetStaticMethodID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetMethodID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::AndroidReflection::GetMethodID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6860fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetConstructorMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidReflection::GetConstructorMember)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6861088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetConstructorMember", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetMethodMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(
    &::UnityEngine::AndroidReflection::GetMethodMember)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6861238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(
    &::UnityEngine::AndroidReflection::GetFieldMember)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x68613f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidReflection::GetFieldClass)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68615b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldClass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidReflection::GetFieldSignature)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6861620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldSignature", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.NewProxyInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::AndroidReflection::NewProxyInstance)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x68616d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "NewProxyInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.CreateInvocationError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Exception*, bool)>(&::UnityEngine::AndroidReflection::CreateInvocationError)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x685e51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "CreateInvocationError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperClass(::UnityEngine::GlobalJavaObjectRef* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GlobalJavaObjectRef*, "s_ReflectionHelperClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::UnityEngine::GlobalJavaObjectRef*>(value));
}
inline ::UnityEngine::GlobalJavaObjectRef* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperClass() {
  return ::cordl_internals::getStaticField<::UnityEngine::GlobalJavaObjectRef*, "s_ReflectionHelperClass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetConstructorID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetConstructorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetConstructorID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetConstructorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetMethodID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetMethodID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetMethodID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetMethodID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetFieldID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetFieldID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetFieldSignature(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldSignature", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetFieldSignature() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperGetFieldSignature", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperNewProxyInstance(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperNewProxyInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperNewProxyInstance() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperNewProxyInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperCeateInvocationError(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_ReflectionHelperCeateInvocationError", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperCeateInvocationError() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_ReflectionHelperCeateInvocationError",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_FieldGetDeclaringClass(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_FieldGetDeclaringClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidReflection::getStaticF_s_FieldGetDeclaringClass() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_FieldGetDeclaringClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline bool UnityEngine::AndroidReflection::IsPrimitive(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsPrimitive", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool UnityEngine::AndroidReflection::IsAssignableFrom(::System::Type* t, ::System::Type* from) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsAssignableFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, from);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetStaticMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetStaticMethodID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodName, signature);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, clazz, methodName, signature);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetConstructorMember(::System::IntPtr jclass, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetConstructorMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, jclass, signature);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetMethodMember(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, jclass, methodName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetFieldMember(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, jclass, fieldName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::GetFieldClass(::System::IntPtr field) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldClass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, field);
}
inline ::StringW UnityEngine::AndroidReflection::GetFieldSignature(::System::IntPtr field) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldSignature", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, field);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::NewProxyInstance(::System::IntPtr player, ::System::IntPtr delegateHandle, ::System::IntPtr interfaze) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "NewProxyInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, player, delegateHandle, interfaze);
}
inline ::System::IntPtr UnityEngine::AndroidReflection::CreateInvocationError(::System::Exception* ex, bool methodNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "CreateInvocationError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, ex, methodNotFound);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidReflection::AndroidReflection() {}
