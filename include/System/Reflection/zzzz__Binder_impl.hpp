#pragma once
// IWYU pragma private; include "System/Reflection/Binder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Binder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Binder::*)()>(&::System::Reflection::Binder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7b6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Binder.BindToField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (
    ::System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::FieldInfo*>, ::System::Object*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::Binder::BindToField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ::i2c::class_of<::System::Reflection::Binder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Binder.BindToMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (
    ::System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ::by_ref<::ArrayW<::System::Object*>>,
                                     ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>, ::by_ref<::System::Object*>)>(
    &::System::Reflection::Binder::BindToMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ::i2c::class_of<::System::Reflection::Binder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Binder.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::Binder::*)(::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::Binder::ChangeType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ::i2c::class_of<::System::Reflection::Binder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Binder.ReorderArgumentArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Binder::*)(::by_ref<::ArrayW<::System::Object*>>, ::System::Object*)>(
    &::System::Reflection::Binder::ReorderArgumentArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ::i2c::class_of<::System::Reflection::Binder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Binder.SelectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (
    ::System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(
    &::System::Reflection::Binder::SelectMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ::i2c::class_of<::System::Reflection::Binder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Binder.SelectProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::PropertyInfo*>, ::System::Type*, ::ArrayW<::System::Type*>,
                                     ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Binder::SelectProperty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ::i2c::class_of<::System::Reflection::Binder*>(), 9 }));
    return ___internal_method;
  }
};
inline void System::Reflection::Binder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Binder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Reflection::Binder::BindToField(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*> match,
                                                                                ::System::Object* value, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Binder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, bindingAttr, match, value, culture);
}
inline ::System::Reflection::MethodBase* System::Reflection::Binder::BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*> match,
                                                                                  ::by_ref<::ArrayW<::System::Object*>> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers,
                                                                                  ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> names, ::by_ref<::System::Object*> state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Binder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method, bindingAttr, match, args, modifiers, culture, names, state);
}
inline ::System::Object* System::Reflection::Binder::ChangeType(::System::Object* value, ::System::Type* type, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Binder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type, culture);
}
inline void System::Reflection::Binder::ReorderArgumentArray(::by_ref<::ArrayW<::System::Object*>> args, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Binder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, state);
}
inline ::System::Reflection::MethodBase* System::Reflection::Binder::SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*> match,
                                                                                  ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Binder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method, bindingAttr, match, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::Binder::SelectProperty(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo*> match,
                                                                                      ::System::Type* returnType, ::ArrayW<::System::Type*> indexes,
                                                                                      ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Binder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, bindingAttr, match, returnType, indexes, modifiers);
}
inline ::System::Reflection::Binder* System::Reflection::Binder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Binder*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::Binder::Binder() {}
