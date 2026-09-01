#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\CallbackEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::CallbackEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionAtTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.HandleEventBubbleUpDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::HandleEventBubbleUpDisabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.HandleEventBubbleUpInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::HandleEventBubbleUpInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9c6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                           { "HandleEventBubbleUpInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.HandleEventTrickleDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::HandleEventTrickleDown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.HandleEventTrickleDownDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::HandleEventTrickleDownDisabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.HandleEventTrickleDownInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::HandleEventTrickleDownInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9c6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                           { "HandleEventTrickleDownInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionDisabledAtTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabledAtTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                           { "ExecuteDefaultActionInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionDisabledInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabledInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d9c6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                             { "ExecuteDefaultActionDisabledInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionAtTargetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionAtTargetInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9c6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                             { "ExecuteDefaultActionAtTargetInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.ExecuteDefaultActionDisabledAtTargetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabledAtTargetInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d9c6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                             { "ExecuteDefaultActionDisabledAtTargetInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler.NotifyPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)(::by_ref<::UnityEngine::UIElements::BindingId>)>(
    &::UnityEngine::UIElements::CallbackEventHandler::NotifyPropertyChanged)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6d9c708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                           { "NotifyPropertyChanged", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CallbackEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CallbackEventHandler::*)()>(&::UnityEngine::UIElements::CallbackEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::CallbackEventHandler::__cordl_internal_get_isIMGUIContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIMGUIContainer;
}
constexpr bool const& UnityEngine::UIElements::CallbackEventHandler::__cordl_internal_get_isIMGUIContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIMGUIContainer;
}
constexpr void UnityEngine::UIElements::CallbackEventHandler::__cordl_internal_set_isIMGUIContainer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isIMGUIContainer = value;
}
constexpr ::UnityEngine::UIElements::EventCallbackRegistry*& UnityEngine::UIElements::CallbackEventHandler::__cordl_internal_get_m_CallbackRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallbackRegistry;
}
constexpr ::UnityEngine::UIElements::EventCallbackRegistry* const& UnityEngine::UIElements::CallbackEventHandler::__cordl_internal_get_m_CallbackRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallbackRegistry;
}
constexpr void UnityEngine::UIElements::CallbackEventHandler::__cordl_internal_set_m_CallbackRegistry(::UnityEngine::UIElements::EventCallbackRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CallbackRegistry = value;
}
template <typename TEventType>
inline void UnityEngine::UIElements::CallbackEventHandler::RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                              { "RegisterCallback",
                                                { ::i2c::class_of<TEventType>() },
                                                { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, useTrickleDown);
}
template <typename TEventType> inline void UnityEngine::UIElements::CallbackEventHandler::AddEventCategories(::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                           { "AddEventCategories", { ::i2c::class_of<TEventType>() }, { ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useTrickleDown);
}
template <typename TEventType, typename TUserArgsType>
inline void UnityEngine::UIElements::CallbackEventHandler::RegisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TUserArgsType>* callback, TUserArgsType userArgs,
                                                                            ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                              { "RegisterCallback",
                                                                                                { ::i2c::class_of<TEventType>(), ::i2c::class_of<TUserArgsType>() },
                                                                                                { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TUserArgsType>*>(),
                                                                                                  ::i2c::type_of<TUserArgsType>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>(), ::i2c::class_of<TUserArgsType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, userArgs, useTrickleDown);
}
template <typename TEventType>
inline void UnityEngine::UIElements::CallbackEventHandler::RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::InvokePolicy invokePolicy,
                                                                            ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                           { "RegisterCallback",
                                                             { ::i2c::class_of<TEventType>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, invokePolicy, useTrickleDown);
}
template <typename TEventType>
inline void UnityEngine::UIElements::CallbackEventHandler::UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                              { "UnregisterCallback",
                                                { ::i2c::class_of<TEventType>() },
                                                { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, useTrickleDown);
}
template <typename TEventType, typename TUserArgsType>
inline void UnityEngine::UIElements::CallbackEventHandler::UnregisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TUserArgsType>* callback,
                                                                              ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                       { "UnregisterCallback",
                                         { ::i2c::class_of<TEventType>(), ::i2c::class_of<TUserArgsType>() },
                                         { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TUserArgsType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>(), ::i2c::class_of<TUserArgsType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, useTrickleDown);
}
inline void UnityEngine::UIElements::CallbackEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::CallbackEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, dispatchMode);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::HandleEventBubbleUpDisabled(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::HandleEventBubbleUpInternal(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                         { "HandleEventBubbleUpInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::HandleEventTrickleDown(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::HandleEventTrickleDownDisabled(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::HandleEventTrickleDownInternal(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                         { "HandleEventTrickleDownInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionInternal(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                         { "ExecuteDefaultActionInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabledInternal(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                         { "ExecuteDefaultActionDisabledInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionAtTargetInternal(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                         { "ExecuteDefaultActionAtTargetInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::ExecuteDefaultActionDisabledAtTargetInternal(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                           { "ExecuteDefaultActionDisabledAtTargetInternal", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::CallbackEventHandler::NotifyPropertyChanged(::by_ref<::UnityEngine::UIElements::BindingId> property) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(),
                                                                                         { "NotifyPropertyChanged", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void UnityEngine::UIElements::CallbackEventHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CallbackEventHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CallbackEventHandler* UnityEngine::UIElements::CallbackEventHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::CallbackEventHandler*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IEventHandler"
constexpr UnityEngine::UIElements::CallbackEventHandler::operator ::UnityEngine::UIElements::IEventHandler*() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IEventHandler"
constexpr ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::CallbackEventHandler::i___UnityEngine__UIElements__IEventHandler() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CallbackEventHandler::CallbackEventHandler() {}
