#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DeserializationEventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DeserializationEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::DeserializationEventHandler::*)(::System::Object*, void*)>(
    &::System::Runtime::Serialization::DeserializationEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x25a65e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DeserializationEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DeserializationEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::DeserializationEventHandler::*)(::System::Object*)>(
    &::System::Runtime::Serialization::DeserializationEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25a6710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DeserializationEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DeserializationEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::DeserializationEventHandler* System::Runtime::Serialization::DeserializationEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::DeserializationEventHandler*>(object, method));
}
inline void System::Runtime::Serialization::DeserializationEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DeserializationEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Runtime::Serialization::DeserializationEventHandler::Invoke(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DeserializationEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DeserializationEventHandler::DeserializationEventHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
