#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseDelegate_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::System::Net::Http::Headers::TryParseDelegate_1<T>* System::Net::Http::Headers::TryParseDelegate_1<T>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::TryParseDelegate_1<T>*>(object, method));
}
template <typename T> inline void System::Net::Http::Headers::TryParseDelegate_1<T>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TryParseDelegate_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline bool System::Net::Http::Headers::TryParseDelegate_1<T>::Invoke(::StringW value, ByRef<T> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TryParseDelegate_1<T>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, result);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>::TryParseDelegate_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
