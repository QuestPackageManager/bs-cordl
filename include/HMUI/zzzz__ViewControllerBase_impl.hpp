#pragma once
// IWYU pragma private; include "HMUI/ViewControllerBase.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ViewControllerBase_def.hpp"
#include "HMUI/zzzz__ViewControllerBase_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase_DidActivateDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::HMUI::ViewControllerBase_DidActivateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x39ef1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase_DidActivateDelegate::*)(bool, bool, bool)>(
    &::HMUI::ViewControllerBase_DidActivateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39ef268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HMUI::ViewControllerBase_DidActivateDelegate::*)(bool, bool, bool, ::System::AsyncCallback*, ::System::Object*)>(&::HMUI::ViewControllerBase_DidActivateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x39ef288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase_DidActivateDelegate::*)(::System::IAsyncResult*)>(
    &::HMUI::ViewControllerBase_DidActivateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39ef34c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void HMUI::ViewControllerBase_DidActivateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HMUI::ViewControllerBase_DidActivateDelegate::Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::System::IAsyncResult* HMUI::ViewControllerBase_DidActivateDelegate::BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling, callback, object);
}
inline void HMUI::ViewControllerBase_DidActivateDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidActivateDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::HMUI::ViewControllerBase_DidActivateDelegate* HMUI::ViewControllerBase_DidActivateDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerBase_DidActivateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerBase_DidActivateDelegate::ViewControllerBase_DidActivateDelegate() {}
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::HMUI::ViewControllerBase_DidDeactivateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x39ef358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(bool, bool)>(
    &::HMUI::ViewControllerBase_DidDeactivateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39ef3e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(bool, bool, ::System::AsyncCallback*, ::System::Object*)>(&::HMUI::ViewControllerBase_DidDeactivateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x39ef400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(::System::IAsyncResult*)>(
    &::HMUI::ViewControllerBase_DidDeactivateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39ef4a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void HMUI::ViewControllerBase_DidDeactivateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HMUI::ViewControllerBase_DidDeactivateDelegate::Invoke(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline ::System::IAsyncResult* HMUI::ViewControllerBase_DidDeactivateDelegate::BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling, callback, object);
}
inline void HMUI::ViewControllerBase_DidDeactivateDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::HMUI::ViewControllerBase_DidDeactivateDelegate* HMUI::ViewControllerBase_DidDeactivateDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerBase_DidDeactivateDelegate::ViewControllerBase_DidDeactivateDelegate() {}
//  Writing Method size for method: ::HMUI::ViewControllerBase.add_didActivateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidActivateDelegate*)>(
    &::HMUI::ViewControllerBase::add_didActivateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39eef18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "add_didActivateEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidActivateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.remove_didActivateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidActivateDelegate*)>(
    &::HMUI::ViewControllerBase::remove_didActivateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39eefb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "remove_didActivateEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidActivateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.add_didDeactivateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidDeactivateDelegate*)>(
    &::HMUI::ViewControllerBase::add_didDeactivateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ef050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "add_didDeactivateEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.remove_didDeactivateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidDeactivateDelegate*)>(
    &::HMUI::ViewControllerBase::remove_didDeactivateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ef0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "remove_didDeactivateEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.CallDidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)(bool, bool, bool)>(&::HMUI::ViewControllerBase::CallDidActivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x39ef188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "CallDidActivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.CallDidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)(bool, bool)>(&::HMUI::ViewControllerBase::CallDidDeactivate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x39ef1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "CallDidDeactivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerBase::*)()>(&::HMUI::ViewControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ef1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HMUI::ViewControllerBase_DidActivateDelegate*& HMUI::ViewControllerBase::__cordl_internal_get_didActivateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didActivateEvent;
}
constexpr ::HMUI::ViewControllerBase_DidActivateDelegate* const& HMUI::ViewControllerBase::__cordl_internal_get_didActivateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didActivateEvent;
}
constexpr void HMUI::ViewControllerBase::__cordl_internal_set_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didActivateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewControllerBase_DidDeactivateDelegate*& HMUI::ViewControllerBase::__cordl_internal_get_didDeactivateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeactivateEvent;
}
constexpr ::HMUI::ViewControllerBase_DidDeactivateDelegate* const& HMUI::ViewControllerBase::__cordl_internal_get_didDeactivateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeactivateEvent;
}
constexpr void HMUI::ViewControllerBase::__cordl_internal_set_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didDeactivateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewControllerBase::add_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "add_didActivateEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidActivateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::remove_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "remove_didActivateEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidActivateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::add_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "add_didDeactivateEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::remove_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "remove_didDeactivateEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewControllerBase_DidDeactivateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::CallDidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "CallDidActivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ViewControllerBase::CallDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), "CallDidDeactivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::ViewControllerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerBase* HMUI::ViewControllerBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerBase*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerBase::ViewControllerBase() {}
