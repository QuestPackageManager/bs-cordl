#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IMECompositionEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::Event_Type::Event_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_Type::Event_Type() {}
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::Invalid{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::KeyEvent{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::PointerEvent{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::TextInputEvent{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::IMECompositionEvent{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::CommandEvent{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event_Type::NavigationEvent{ static_cast<int32_t>(0x6) };
template <typename TOutputType> template <typename TEventType> inline TOutputType UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>::Map(::ByRef<TEventType> ev) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() }));
  return ::cordl_internals::RunMethodRethrow<TOutputType, false>(this, ___internal_method, ev);
}
template <typename TEventType> inline ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::Event_MapAsObject::Map(::ByRef<TEventType> ev) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event_MapAsObject>::get(), "Map",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TEventType>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IEventProperties*, false>(this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
constexpr UnityEngine::InputForUI::Event_MapAsObject::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*
UnityEngine::InputForUI::Event_MapAsObject::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__IEventProperties__() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_MapAsObject::Event_MapAsObject() {}
template <typename TEventType> inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::Event_MapAsEventSource::Map(::ByRef<TEventType> ev) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event_MapAsEventSource>::get(), "Map",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TEventType>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource, false>(this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr UnityEngine::InputForUI::Event_MapAsEventSource::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*
UnityEngine::InputForUI::Event_MapAsEventSource::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventSource_() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_MapAsEventSource::Event_MapAsEventSource() {}
template <typename TEventType> inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::Event_MapAsEventModifiers::Map(::ByRef<TEventType> ev) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event_MapAsEventModifiers>::get(), "Map",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TEventType>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers, false>(this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>"
constexpr UnityEngine::InputForUI::Event_MapAsEventModifiers::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*
UnityEngine::InputForUI::Event_MapAsEventModifiers::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventModifiers_() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_MapAsEventModifiers::Event_MapAsEventModifiers() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.CompareType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputForUI::Event, ::UnityEngine::InputForUI::Event)>(
    &::UnityEngine::InputForUI::Event::CompareType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x698d2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "CompareType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event_Type (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698d420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::IEventProperties* (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698d428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_eventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_eventSource)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698d3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_eventSource",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_eventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_eventModifiers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698d49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_eventModifiers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.Ensure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::Event::*)(::UnityEngine::InputForUI::Event_Type)>(
    &::UnityEngine::InputForUI::Event::Ensure)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x698d510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "Ensure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event_Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x698d5a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::KeyEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x698d9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::KeyEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asKeyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::KeyEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asKeyEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x698da44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asKeyEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::PointerEvent)>(
    &::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698dabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asPointerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::PointerEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asPointerEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x698db30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asPointerEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::TextInputEvent)>(
    &::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x698dba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::TextInputEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asTextInputEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::TextInputEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asTextInputEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698dc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asTextInputEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::IMECompositionEvent)>(
    &::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x698dc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::IMECompositionEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asIMECompositionEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::IMECompositionEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asIMECompositionEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x698dd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(),
                                                                               "get_asIMECompositionEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::CommandEvent)>(
    &::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x698ddcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::CommandEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asCommandEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::CommandEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asCommandEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698de3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asCommandEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::NavigationEvent)>(
    &::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x698deb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::NavigationEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asNavigationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::NavigationEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asNavigationEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x698df38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asNavigationEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputForUI::Event_Type& UnityEngine::InputForUI::Event::__cordl_internal_get__type() {
  return this->____type;
}
constexpr ::UnityEngine::InputForUI::Event_Type const& UnityEngine::InputForUI::Event::__cordl_internal_get__type() const {
  return this->____type;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__type(::UnityEngine::InputForUI::Event_Type value) {
  this->____type = value;
}
constexpr ::System::Object*& UnityEngine::InputForUI::Event::__cordl_internal_get__managedEvent() {
  return this->____managedEvent;
}
constexpr ::System::Object* const& UnityEngine::InputForUI::Event::__cordl_internal_get__managedEvent() const {
  return this->____managedEvent;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__managedEvent(::System::Object* value) {
  this->____managedEvent = value;
}
constexpr ::UnityEngine::InputForUI::KeyEvent& UnityEngine::InputForUI::Event::__cordl_internal_get__keyEvent() {
  return this->____keyEvent;
}
constexpr ::UnityEngine::InputForUI::KeyEvent const& UnityEngine::InputForUI::Event::__cordl_internal_get__keyEvent() const {
  return this->____keyEvent;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__keyEvent(::UnityEngine::InputForUI::KeyEvent value) {
  this->____keyEvent = value;
}
constexpr ::UnityEngine::InputForUI::PointerEvent& UnityEngine::InputForUI::Event::__cordl_internal_get__pointerEvent() {
  return this->____pointerEvent;
}
constexpr ::UnityEngine::InputForUI::PointerEvent const& UnityEngine::InputForUI::Event::__cordl_internal_get__pointerEvent() const {
  return this->____pointerEvent;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__pointerEvent(::UnityEngine::InputForUI::PointerEvent value) {
  this->____pointerEvent = value;
}
constexpr ::UnityEngine::InputForUI::TextInputEvent& UnityEngine::InputForUI::Event::__cordl_internal_get__textInputEvent() {
  return this->____textInputEvent;
}
constexpr ::UnityEngine::InputForUI::TextInputEvent const& UnityEngine::InputForUI::Event::__cordl_internal_get__textInputEvent() const {
  return this->____textInputEvent;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__textInputEvent(::UnityEngine::InputForUI::TextInputEvent value) {
  this->____textInputEvent = value;
}
constexpr ::UnityEngine::InputForUI::CommandEvent& UnityEngine::InputForUI::Event::__cordl_internal_get__commandEvent() {
  return this->____commandEvent;
}
constexpr ::UnityEngine::InputForUI::CommandEvent const& UnityEngine::InputForUI::Event::__cordl_internal_get__commandEvent() const {
  return this->____commandEvent;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__commandEvent(::UnityEngine::InputForUI::CommandEvent value) {
  this->____commandEvent = value;
}
constexpr ::UnityEngine::InputForUI::NavigationEvent& UnityEngine::InputForUI::Event::__cordl_internal_get__navigationEvent() {
  return this->____navigationEvent;
}
constexpr ::UnityEngine::InputForUI::NavigationEvent const& UnityEngine::InputForUI::Event::__cordl_internal_get__navigationEvent() const {
  return this->____navigationEvent;
}
constexpr void UnityEngine::InputForUI::Event::__cordl_internal_set__navigationEvent(::UnityEngine::InputForUI::NavigationEvent value) {
  this->____navigationEvent = value;
}
inline void UnityEngine::InputForUI::Event::setStaticF_TypesWithState(::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>, "TypesWithState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get>(
      std::forward<::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>>(value));
}
inline ::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*> UnityEngine::InputForUI::Event::getStaticF_TypesWithState() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>, "TypesWithState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get>();
}
inline int32_t UnityEngine::InputForUI::Event::CompareType(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "CompareType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event_Type, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::Event::get_asObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IEventProperties*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::Event::get_eventSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_eventSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::Event::get_eventModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_eventModifiers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::Event::Ensure(::UnityEngine::InputForUI::Event_Type t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "Ensure", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event_Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::StringW UnityEngine::InputForUI::Event::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::KeyEvent keyEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::KeyEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event, false>(nullptr, ___internal_method, keyEvent);
}
inline ::UnityEngine::InputForUI::KeyEvent UnityEngine::InputForUI::Event::get_asKeyEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asKeyEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::KeyEvent, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::PointerEvent pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event, false>(nullptr, ___internal_method, pointerEvent);
}
inline ::UnityEngine::InputForUI::PointerEvent UnityEngine::InputForUI::Event::get_asPointerEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asPointerEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::TextInputEvent textInputEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::TextInputEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event, false>(nullptr, ___internal_method, textInputEvent);
}
inline ::UnityEngine::InputForUI::TextInputEvent UnityEngine::InputForUI::Event::get_asTextInputEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asTextInputEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::TextInputEvent, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::IMECompositionEvent imeCompositionEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::IMECompositionEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event, false>(nullptr, ___internal_method, imeCompositionEvent);
}
inline ::UnityEngine::InputForUI::IMECompositionEvent UnityEngine::InputForUI::Event::get_asIMECompositionEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(),
                                                                             "get_asIMECompositionEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IMECompositionEvent, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::CommandEvent commandEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::CommandEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event, false>(nullptr, ___internal_method, commandEvent);
}
inline ::UnityEngine::InputForUI::CommandEvent UnityEngine::InputForUI::Event::get_asCommandEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asCommandEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::CommandEvent, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::NavigationEvent navigationEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::NavigationEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event, false>(nullptr, ___internal_method, navigationEvent);
}
inline ::UnityEngine::InputForUI::NavigationEvent UnityEngine::InputForUI::Event::get_asNavigationEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "get_asNavigationEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::NavigationEvent, false>(this, ___internal_method);
}
template <typename TOutputType, typename TMapType> inline TOutputType UnityEngine::InputForUI::Event::Map(TMapType fn) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "Map",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutputType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMapType>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMapType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutputType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMapType>::get() }));
  return ::cordl_internals::RunMethodRethrow<TOutputType, false>(this, ___internal_method, fn);
}
template <typename TOutputType, typename TMapType> inline TOutputType UnityEngine::InputForUI::Event::Map() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::Event>::get(), "Map",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutputType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMapType>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutputType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMapType>::get() }));
  return ::cordl_internals::RunMethodRethrow<TOutputType, false>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr UnityEngine::InputForUI::Event::operator ::UnityEngine::InputForUI::IEventProperties*() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::Event::i___UnityEngine__InputForUI__IEventProperties() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_type", ty: "::UnityEngine::InputForUI::Event_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "_managedEvent", ty: "::System::Object*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_keyEvent", ty: "::UnityEngine::InputForUI::KeyEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pointerEvent", ty:
// "::UnityEngine::InputForUI::PointerEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "_textInputEvent", ty: "::UnityEngine::InputForUI::TextInputEvent", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_commandEvent", ty: "::UnityEngine::InputForUI::CommandEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "_navigationEvent", ty:
// "::UnityEngine::InputForUI::NavigationEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::Event::Event(::UnityEngine::InputForUI::Event_Type _type, ::System::Object* _managedEvent, ::UnityEngine::InputForUI::KeyEvent _keyEvent,
                                                  ::UnityEngine::InputForUI::PointerEvent _pointerEvent, ::UnityEngine::InputForUI::TextInputEvent _textInputEvent,
                                                  ::UnityEngine::InputForUI::CommandEvent _commandEvent, ::UnityEngine::InputForUI::NavigationEvent _navigationEvent) noexcept {
  this->_type = _type;
  this->_managedEvent = _managedEvent;
  this->_keyEvent = _keyEvent;
  this->_pointerEvent = _pointerEvent;
  this->_textInputEvent = _textInputEvent;
  this->_commandEvent = _commandEvent;
  this->_navigationEvent = _navigationEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event::Event() {}
