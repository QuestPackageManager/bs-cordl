#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NotifyCollectionChangedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedEventHandler_def.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::NotifyCollectionChangedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NotifyCollectionChangedEventHandler::*)(
    ::System::Object*, ::System::IntPtr)>(&::System::Collections::Specialized::NotifyCollectionChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x44849f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NotifyCollectionChangedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::NotifyCollectionChangedEventHandler::*)(
    ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*)>(&::System::Collections::Specialized::NotifyCollectionChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4484af4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Collections::Specialized::NotifyCollectionChangedEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Collections::Specialized::NotifyCollectionChangedEventHandler::Invoke(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* System::Collections::Specialized::NotifyCollectionChangedEventHandler::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler() {}
