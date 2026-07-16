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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase_DidActivateDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::HMUI::ViewControllerBase_DidActivateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5883594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase_DidActivateDelegate::*)(bool, bool, bool)>(&::HMUI::ViewControllerBase_DidActivateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5883600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), { ::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::HMUI::ViewControllerBase_DidActivateDelegate::*)(bool, bool, bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::HMUI::ViewControllerBase_DidActivateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5883614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), { ::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidActivateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase_DidActivateDelegate::*)(::System::IAsyncResult*)>(&::HMUI::ViewControllerBase_DidActivateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58836a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), { ::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void HMUI::ViewControllerBase_DidActivateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void HMUI::ViewControllerBase_DidActivateDelegate::Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::System::IAsyncResult* HMUI::ViewControllerBase_DidActivateDelegate::BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling, callback, object);
}
inline void HMUI::ViewControllerBase_DidActivateDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewControllerBase_DidActivateDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::HMUI::ViewControllerBase_DidActivateDelegate* HMUI::ViewControllerBase_DidActivateDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewControllerBase_DidActivateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerBase_DidActivateDelegate::ViewControllerBase_DidActivateDelegate() {}
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::HMUI::ViewControllerBase_DidDeactivateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58836b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(bool, bool)>(&::HMUI::ViewControllerBase_DidDeactivateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x588371c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), { ::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(bool, bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::HMUI::ViewControllerBase_DidDeactivateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5883730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), { ::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase_DidDeactivateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase_DidDeactivateDelegate::*)(::System::IAsyncResult*)>(
    &::HMUI::ViewControllerBase_DidDeactivateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58837a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), { ::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void HMUI::ViewControllerBase_DidDeactivateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void HMUI::ViewControllerBase_DidDeactivateDelegate::Invoke(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline ::System::IAsyncResult* HMUI::ViewControllerBase_DidDeactivateDelegate::BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling, callback, object);
}
inline void HMUI::ViewControllerBase_DidDeactivateDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::HMUI::ViewControllerBase_DidDeactivateDelegate* HMUI::ViewControllerBase_DidDeactivateDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewControllerBase_DidDeactivateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerBase_DidDeactivateDelegate::ViewControllerBase_DidDeactivateDelegate() {}
//  Writing Method size for method: ::HMUI::ViewControllerBase.add_didActivateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidActivateDelegate*)>(&::HMUI::ViewControllerBase::add_didActivateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5883294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "add_didActivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidActivateDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.remove_didActivateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidActivateDelegate*)>(&::HMUI::ViewControllerBase::remove_didActivateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5883340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "remove_didActivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidActivateDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.add_didDeactivateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidDeactivateDelegate*)>(&::HMUI::ViewControllerBase::add_didDeactivateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58833ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "add_didDeactivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.remove_didDeactivateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)(::HMUI::ViewControllerBase_DidDeactivateDelegate*)>(
    &::HMUI::ViewControllerBase::remove_didDeactivateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5883498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "remove_didDeactivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.CallDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)(bool, bool, bool)>(&::HMUI::ViewControllerBase::CallDidActivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5883544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "CallDidActivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase.CallDidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)(bool, bool)>(&::HMUI::ViewControllerBase::CallDidDeactivate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x588356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "CallDidDeactivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewControllerBase::*)()>(&::HMUI::ViewControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5883590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { ".ctor", {}, {} })));
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
  this->___didActivateEvent = value;
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
  this->___didDeactivateEvent = value;
}
inline void HMUI::ViewControllerBase::add_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "add_didActivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidActivateDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::remove_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "remove_didActivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidActivateDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::add_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "add_didDeactivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::remove_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "remove_didDeactivateEvent", {}, { ::i2c::type_of<::HMUI::ViewControllerBase_DidDeactivateDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ViewControllerBase::CallDidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "CallDidActivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ViewControllerBase::CallDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { "CallDidDeactivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::ViewControllerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewControllerBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ViewControllerBase* HMUI::ViewControllerBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewControllerBase*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerBase::ViewControllerBase() {}
