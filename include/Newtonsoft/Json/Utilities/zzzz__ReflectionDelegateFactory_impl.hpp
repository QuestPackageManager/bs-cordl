#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ReflectionDelegateFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionDelegateFactory_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory.CreateParameterizedConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (
    ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::*)(::System::Reflection::MethodBase*)>(&::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

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
  constexpr static std::size_t addrs = 0x3ecf9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateGet",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*, false>(this, ___internal_method, memberInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), "CreateSet",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*, false>(this, ___internal_method, memberInfo);
}
template <typename T>
inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateMethodCall(::System::Reflection::MethodBase* method) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>*, false>(this, ___internal_method, method);
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*
Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor(::System::Reflection::MethodBase* method) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*, false>(this, ___internal_method, method);
}
template <typename T> inline ::System::Func_1<T>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateDefaultConstructor(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<T>*, false>(this, ___internal_method, type);
}
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::PropertyInfo* propertyInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*, false>(this, ___internal_method, propertyInfo);
}
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::FieldInfo* fieldInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*, false>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::FieldInfo* fieldInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*, false>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::PropertyInfo* propertyInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*, false>(this, ___internal_method, propertyInfo);
}
inline void Newtonsoft::Json::Utilities::ReflectionDelegateFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::ReflectionDelegateFactory() {}
