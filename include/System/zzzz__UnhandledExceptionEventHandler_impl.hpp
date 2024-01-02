#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__UnhandledExceptionEventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
//  Writing Method size for method: ::System::UnhandledExceptionEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UnhandledExceptionEventHandler::*)(::System::Object*, void*)>(
    &::System::UnhandledExceptionEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x25cdfbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UnhandledExceptionEventHandler::*)(::System::Object*, ::System::UnhandledExceptionEventArgs*)>(
    &::System::UnhandledExceptionEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25ce0ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::UnhandledExceptionEventHandler* System::UnhandledExceptionEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::UnhandledExceptionEventHandler*>(object, method));
}
inline void System::UnhandledExceptionEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::UnhandledExceptionEventHandler::Invoke(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::System::UnhandledExceptionEventHandler::UnhandledExceptionEventHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
