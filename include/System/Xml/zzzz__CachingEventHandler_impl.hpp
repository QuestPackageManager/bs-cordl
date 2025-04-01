#pragma once
// IWYU pragma private; include "System/Xml/CachingEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/zzzz__CachingEventHandler_def.hpp"
#include "System/Xml/zzzz__XsdCachingReader_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::CachingEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::CachingEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::CachingEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x432a05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CachingEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CachingEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::CachingEventHandler::*)(::System::Xml::XsdCachingReader*)>(
    &::System::Xml::CachingEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x432a15c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CachingEventHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CachingEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Xml::CachingEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CachingEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::CachingEventHandler::Invoke(::System::Xml::XsdCachingReader* cachingReader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CachingEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cachingReader);
}
inline ::System::Xml::CachingEventHandler* System::Xml::CachingEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::CachingEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::CachingEventHandler::CachingEventHandler() {}
