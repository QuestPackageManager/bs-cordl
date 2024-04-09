#pragma once
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
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method, instance);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryBinaryOperation(T instance, ::System::Dynamic::BinaryOperationBinder* binder, ::System::Object* arg, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, arg, result);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryConvert(T instance, ::System::Dynamic::ConvertBinder* binder, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryCreateInstance(T instance, ::System::Dynamic::CreateInstanceBinder* binder,
                                                                              ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, args, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryDeleteIndex(T instance, ::System::Dynamic::DeleteIndexBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indexes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, indexes);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryDeleteMember(T instance, ::System::Dynamic::DeleteMemberBinder* binder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryGetIndex(T instance, ::System::Dynamic::GetIndexBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indexes,
                                                                        ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, indexes, result);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryGetMember(T instance, ::System::Dynamic::GetMemberBinder* binder, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryInvoke(T instance, ::System::Dynamic::InvokeBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                                      ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, args, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryInvokeMember(T instance, ::System::Dynamic::InvokeMemberBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                                            ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, args, result);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TrySetIndex(T instance, ::System::Dynamic::SetIndexBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indexes,
                                                                        ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, indexes, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TrySetMember(T instance, ::System::Dynamic::SetMemberBinder* binder, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::DynamicProxy_1<T>::TryUnaryOperation(T instance, ::System::Dynamic::UnaryOperationBinder* binder, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, result);
}
template <typename T> inline ::Newtonsoft::Json::Utilities::DynamicProxy_1<T>* Newtonsoft::Json::Utilities::DynamicProxy_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>());
}
template <typename T> inline void Newtonsoft::Json::Utilities::DynamicProxy_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::DynamicProxy_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::DynamicProxy_1<T>::DynamicProxy_1() {}
