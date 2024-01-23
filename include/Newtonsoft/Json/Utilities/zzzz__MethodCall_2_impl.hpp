#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T, typename TResult>
inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>* Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>*>(object, method));
}
template <typename T, typename TResult> inline void Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T, typename TResult> inline TResult Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>::Invoke(T target, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, target, args);
}
template <typename T, typename TResult>
inline ::System::IAsyncResult* Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>::BeginInvoke(T target, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, target, args, callback, object);
}
template <typename T, typename TResult> inline TResult Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename T, typename TResult> constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<T, TResult>::MethodCall_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
