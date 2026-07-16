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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (
    ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::*)(::System::Reflection::MethodBase*)>(&::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::*)()>(&::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d2b394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(),
                                                                                              { "CreateGet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*>(this, ___internal_method, memberInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(),
                                                                                              { "CreateSet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*>(this, ___internal_method, memberInfo);
}
template <typename T>
inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateMethodCall(::System::Reflection::MethodBase* method) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 4 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>*>(this, ___internal_method, method);
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*
Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor(::System::Reflection::MethodBase* method) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>(this, ___internal_method, method);
}
template <typename T> inline ::System::Func_1<T>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateDefaultConstructor(::System::Type* type) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 6 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<T>*>(this, ___internal_method, type);
}
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::PropertyInfo* propertyInfo) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 7 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*>(this, ___internal_method, propertyInfo);
}
template <typename T> inline ::System::Func_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet(::System::Reflection::FieldInfo* fieldInfo) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 8 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Object*>*>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::FieldInfo* fieldInfo) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 9 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*>(this, ___internal_method, fieldInfo);
}
template <typename T> inline ::System::Action_2<T, ::System::Object*>* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet(::System::Reflection::PropertyInfo* propertyInfo) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), 10 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::System::Object*>*>(this, ___internal_method, propertyInfo);
}
inline void Newtonsoft::Json::Utilities::ReflectionDelegateFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* Newtonsoft::Json::Utilities::ReflectionDelegateFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::ReflectionDelegateFactory() {}
