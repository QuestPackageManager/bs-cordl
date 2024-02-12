#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListChangedEventHandler::*)(::System::Object*, void*)>(
    &::System::ComponentModel::ListChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2915bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListChangedEventHandler::*)(
    ::System::Object*, ::System::ComponentModel::ListChangedEventArgs*)>(&::System::ComponentModel::ListChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2915cec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::ListChangedEventHandler* System::ComponentModel::ListChangedEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ListChangedEventHandler*>(object, method));
}
inline void System::ComponentModel::ListChangedEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::ComponentModel::ListChangedEventHandler::Invoke(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListChangedEventHandler::ListChangedEventHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
