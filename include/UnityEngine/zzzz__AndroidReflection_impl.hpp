#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidReflection_def.hpp"
#include "UnityEngine/zzzz__GlobalJavaObjectRef_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidReflection.IsPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::AndroidReflection::IsPrimitive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c878e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsPrimitive", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::UnityEngine::AndroidReflection::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c878f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsAssignableFrom", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetStaticMethodID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::AndroidReflection::GetStaticMethodID)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c87918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetStaticMethodID", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetMethodID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::AndroidReflection::GetMethodID)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c879b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodID", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetConstructorMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ::StringW)>(&::UnityEngine::AndroidReflection::GetConstructorMember)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2c87a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetConstructorMember", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetMethodMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidReflection::GetMethodMember)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2c87bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodMember", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidReflection::GetFieldMember)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2c87ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldMember", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*)>(&::UnityEngine::AndroidReflection::GetFieldClass)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c87fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldClass", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.GetFieldSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*)>(&::UnityEngine::AndroidReflection::GetFieldSignature)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c88040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldSignature", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.NewProxyInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, void*)>(&::UnityEngine::AndroidReflection::NewProxyInstance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2c880e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "NewProxyInstance", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidReflection.SetNativeExceptionOnProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::System::Exception*, bool)>(&::UnityEngine::AndroidReflection::SetNativeExceptionOnProxy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2c854c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "SetNativeExceptionOnProxy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetConstructorID(void* value) {
  ::cordl_internals::setStaticField<void*, "s_ReflectionHelperGetConstructorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetConstructorID() {
  return ::cordl_internals::getStaticField<void*, "s_ReflectionHelperGetConstructorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetMethodID(void* value) {
  ::cordl_internals::setStaticField<void*, "s_ReflectionHelperGetMethodID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetMethodID() {
  return ::cordl_internals::getStaticField<void*, "s_ReflectionHelperGetMethodID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetFieldID(void* value) {
  ::cordl_internals::setStaticField<void*, "s_ReflectionHelperGetFieldID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetFieldID() {
  return ::cordl_internals::getStaticField<void*, "s_ReflectionHelperGetFieldID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperGetFieldSignature(void* value) {
  ::cordl_internals::setStaticField<void*, "s_ReflectionHelperGetFieldSignature", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperGetFieldSignature() {
  return ::cordl_internals::getStaticField<void*, "s_ReflectionHelperGetFieldSignature", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperNewProxyInstance(void* value) {
  ::cordl_internals::setStaticField<void*, "s_ReflectionHelperNewProxyInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperNewProxyInstance() {
  return ::cordl_internals::getStaticField<void*, "s_ReflectionHelperNewProxyInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_ReflectionHelperSetNativeExceptionOnProxy(void* value) {
  ::cordl_internals::setStaticField<void*, "s_ReflectionHelperSetNativeExceptionOnProxy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(
      std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_ReflectionHelperSetNativeExceptionOnProxy() {
  return ::cordl_internals::getStaticField<void*, "s_ReflectionHelperSetNativeExceptionOnProxy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline void UnityEngine::AndroidReflection::setStaticF_s_FieldGetDeclaringClass(void* value) {
  ::cordl_internals::setStaticField<void*, "s_FieldGetDeclaringClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>(std::forward<void*>(value));
}
inline void* UnityEngine::AndroidReflection::getStaticF_s_FieldGetDeclaringClass() {
  return ::cordl_internals::getStaticField<void*, "s_FieldGetDeclaringClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get>();
}
inline bool UnityEngine::AndroidReflection::IsPrimitive(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsPrimitive", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool UnityEngine::AndroidReflection::IsAssignableFrom(::System::Type* t, ::System::Type* from) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "IsAssignableFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, from);
}
inline void* UnityEngine::AndroidReflection::GetStaticMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetStaticMethodID", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, clazz, methodName, signature);
}
inline void* UnityEngine::AndroidReflection::GetMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodID", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, clazz, methodName, signature);
}
inline void* UnityEngine::AndroidReflection::GetConstructorMember(void* jclass, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetConstructorMember", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, jclass, signature);
}
inline void* UnityEngine::AndroidReflection::GetMethodMember(void* jclass, ::StringW methodName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetMethodMember", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, jclass, methodName, signature, isStatic);
}
inline void* UnityEngine::AndroidReflection::GetFieldMember(void* jclass, ::StringW fieldName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldMember", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, jclass, fieldName, signature, isStatic);
}
inline void* UnityEngine::AndroidReflection::GetFieldClass(void* field) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldClass", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, field);
}
inline ::StringW UnityEngine::AndroidReflection::GetFieldSignature(void* field) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "GetFieldSignature", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, field);
}
inline void* UnityEngine::AndroidReflection::NewProxyInstance(void* delegateHandle, void* interfaze) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "NewProxyInstance", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, delegateHandle, interfaze);
}
inline void UnityEngine::AndroidReflection::SetNativeExceptionOnProxy(void* proxy, ::System::Exception* e, bool methodNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidReflection*>::get(), "SetNativeExceptionOnProxy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, proxy, e, methodNotFound);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidReflection::AndroidReflection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
