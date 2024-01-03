#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>* Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>(object, method));
}
template <typename T> inline void Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline ::System::Object* Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, args);
}
template <typename T>
inline ::System::IAsyncResult* Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::BeginInvoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, args, callback, object);
}
template <typename T> inline ::System::Object* Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::ObjectConstructor_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
