#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionDelegateFactory_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory.CreateParameterizedConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (
    ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::*)(::System::Reflection::MethodBase*)>(&::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::*)()>(
    &::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265a4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateGet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*, false>(this, ___internal_method, memberInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateSet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*, false>(this, ___internal_method, memberInfo);
}
template <typename T>
inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateMethodCall(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateMethodCall",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>*, false>(this, ___internal_method, method);
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*
Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateParameterizedConstructor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*, false>(this, ___internal_method, method);
}
template <typename T> inline ::System::Func_1<T>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateDefaultConstructor(::System::Type* type) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateDefaultConstructor",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<T>*, false>(this, ___internal_method, type);
}
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::PropertyInfo* propertyInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateGet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*, false>(this, ___internal_method, propertyInfo);
}
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::FieldInfo* fieldInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateGet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*, false>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::FieldInfo* fieldInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateSet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*, false>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::PropertyInfo* propertyInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateSet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*, false>(this, ___internal_method, propertyInfo);
}
inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>());
}
inline void Newtonsoft::Json::Utilities::ReflectionDelegateFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::ReflectionDelegateFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
