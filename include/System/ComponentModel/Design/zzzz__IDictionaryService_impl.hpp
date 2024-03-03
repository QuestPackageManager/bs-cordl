#pragma once
#include "System/ComponentModel/Design/zzzz__IDictionaryService_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IDictionaryService.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::Design::IDictionaryService::*)(::System::Object*)>(
    &::System::ComponentModel::Design::IDictionaryService::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDictionaryService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDictionaryService*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IDictionaryService.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::IDictionaryService::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::Design::IDictionaryService::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDictionaryService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDictionaryService*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Object* System::ComponentModel::Design::IDictionaryService::GetValue(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDictionaryService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
inline void System::ComponentModel::Design::IDictionaryService::SetValue(::System::Object* key, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IDictionaryService*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
