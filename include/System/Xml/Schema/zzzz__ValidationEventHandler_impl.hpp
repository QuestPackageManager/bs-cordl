#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ValidationEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::ValidationEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x42a7b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::ValidationEventHandler::*)(::System::Object*, ::System::Xml::Schema::ValidationEventArgs*)>(&::System::Xml::Schema::ValidationEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x42a7c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::ValidationEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::ValidationEventHandler::Invoke(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::ValidationEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ValidationEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ValidationEventHandler::ValidationEventHandler() {}
