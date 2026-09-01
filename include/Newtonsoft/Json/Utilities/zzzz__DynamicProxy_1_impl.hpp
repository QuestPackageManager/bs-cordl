#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\DynamicProxy_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DynamicProxy_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Dynamic/zzzz__BinaryOperationBinder_def.hpp"
#include "System/Dynamic/zzzz__ConvertBinder_def.hpp"
#include "System/Dynamic/zzzz__CreateInstanceBinder_def.hpp"
#include "System/Dynamic/zzzz__DeleteIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__DeleteMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__GetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__GetMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__InvokeBinder_def.hpp"
#include "System/Dynamic/zzzz__InvokeMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__SetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__UnaryOperationBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Newtonsoft::Json::Utilities::DynamicProxy_1<T>::GetDynamicMemberNames(T instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, instance);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryBinaryOperation(T instance, ::System::Dynamic::BinaryOperationBinder* binder, ::System::Object* arg,
                                                                               ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, arg, result);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryConvert(T instance, ::System::Dynamic::ConvertBinder* binder, ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryCreateInstance(T instance, ::System::Dynamic::CreateInstanceBinder* binder, ::ArrayW<::System::Object*> args,
                                                                              ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, args, result);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryDeleteIndex(T instance, ::System::Dynamic::DeleteIndexBinder* binder, ::ArrayW<::System::Object*> indexes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, indexes);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryDeleteMember(T instance, ::System::Dynamic::DeleteMemberBinder* binder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryGetIndex(T instance, ::System::Dynamic::GetIndexBinder* binder, ::ArrayW<::System::Object*> indexes,
                                                                        ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, indexes, result);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryGetMember(T instance, ::System::Dynamic::GetMemberBinder* binder, ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryInvoke(T instance, ::System::Dynamic::InvokeBinder* binder, ::ArrayW<::System::Object*> args, ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, args, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryInvokeMember(T instance, ::System::Dynamic::InvokeMemberBinder* binder, ::ArrayW<::System::Object*> args,
                                                                            ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, args, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TrySetIndex(T instance, ::System::Dynamic::SetIndexBinder* binder, ::ArrayW<::System::Object*> indexes, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, indexes, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TrySetMember(T instance, ::System::Dynamic::SetMemberBinder* binder, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryUnaryOperation(T instance, ::System::Dynamic::UnaryOperationBinder* binder, ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, binder, result);
}
template <typename T> inline void Newtonsoft::Json::Utilities::DynamicProxy_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Utilities::DynamicProxy_1<T>* Newtonsoft::Json::Utilities::DynamicProxy_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::DynamicProxy_1<T>::DynamicProxy_1() {}
