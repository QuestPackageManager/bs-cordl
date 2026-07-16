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
template <typename TOutputType> template <typename TEventType> inline TOutputType UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>::Map(::by_ref<TEventType> ev) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() }));
  return ::cordl_internals::RunMethodRethrow<TOutputType>(this, ___internal_method, ev);
}
template <typename TEventType> inline ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::Event_MapAsObject::Map(::by_ref<TEventType> ev) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event_MapAsObject>(), { "Map", { ::i2c::class_of<TEventType>() }, { ::i2c::type_of<::by_ref<TEventType>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IEventProperties*>(*this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
constexpr UnityEngine::InputForUI::Event_MapAsObject::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*
UnityEngine::InputForUI::Event_MapAsObject::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__IEventProperties__() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_MapAsObject::Event_MapAsObject() {}
template <typename TEventType> inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::Event_MapAsEventSource::Map(::by_ref<TEventType> ev) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event_MapAsEventSource>(),
                                                                                              { "Map", { ::i2c::class_of<TEventType>() }, { ::i2c::type_of<::by_ref<TEventType>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr UnityEngine::InputForUI::Event_MapAsEventSource::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*
UnityEngine::InputForUI::Event_MapAsEventSource::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventSource_() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_MapAsEventSource::Event_MapAsEventSource() {}
template <typename TEventType> inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::Event_MapAsEventModifiers::Map(::by_ref<TEventType> ev) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event_MapAsEventModifiers>(),
                                                                                              { "Map", { ::i2c::class_of<TEventType>() }, { ::i2c::type_of<::by_ref<TEventType>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(*this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>"
constexpr UnityEngine::InputForUI::Event_MapAsEventModifiers::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*
UnityEngine::InputForUI::Event_MapAsEventModifiers::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventModifiers_() {
  return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::Event_MapAsEventModifiers::Event_MapAsEventModifiers() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.CompareType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputForUI::Event, ::UnityEngine::InputForUI::Event)>(&::UnityEngine::InputForUI::Event::CompareType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b5522c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(),
                                                             { "CompareType", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event>(), ::i2c::type_of<::UnityEngine::InputForUI::Event>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event_Type (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b5537c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::IEventProperties* (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_asObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b55384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_eventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_eventSource)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b55308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_eventSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_eventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_eventModifiers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b553f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_eventModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.Ensure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::Event::*)(::UnityEngine::InputForUI::Event_Type)>(&::UnityEngine::InputForUI::Event::Ensure)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b5546c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "Ensure", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event_Type>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6b55504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { ::i2c::class_of<::UnityEngine::InputForUI::Event>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::KeyEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b55920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::KeyEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asKeyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::KeyEvent (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_asKeyEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b559a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asKeyEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::PointerEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b55a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asPointerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::PointerEvent (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_asPointerEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b55a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asPointerEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::TextInputEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b55b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::TextInputEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asTextInputEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::TextInputEvent (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_asTextInputEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b55b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asTextInputEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::IMECompositionEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b55be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::IMECompositionEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asIMECompositionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::IMECompositionEvent (::UnityEngine::InputForUI::Event::*)()>(
    &::UnityEngine::InputForUI::Event::get_asIMECompositionEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b55c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asIMECompositionEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::CommandEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b55d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::CommandEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::CommandEvent (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_asCommandEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b55d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asCommandEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::Event (*)(::UnityEngine::InputForUI::NavigationEvent)>(&::UnityEngine::InputForUI::Event::From)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b55e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::Event.get_asNavigationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::NavigationEvent (::UnityEngine::InputForUI::Event::*)()>(&::UnityEngine::InputForUI::Event::get_asNavigationEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b55e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asNavigationEvent", {}, {} })));
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
inline void UnityEngine::InputForUI::Event::setStaticF_TypesWithState(::ArrayW<::UnityEngine::InputForUI::Event_Type> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputForUI::Event_Type>, "TypesWithState", ::UnityEngine::InputForUI::Event>(
      std::forward<::ArrayW<::UnityEngine::InputForUI::Event_Type>>(value));
}
inline ::ArrayW<::UnityEngine::InputForUI::Event_Type> UnityEngine::InputForUI::Event::getStaticF_TypesWithState() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputForUI::Event_Type>, "TypesWithState", ::UnityEngine::InputForUI::Event>();
}
inline int32_t UnityEngine::InputForUI::Event::CompareType(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(),
                                                           { "CompareType", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event>(), ::i2c::type_of<::UnityEngine::InputForUI::Event>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::InputForUI::Event_Type UnityEngine::InputForUI::Event::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event_Type>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::Event::get_asObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IEventProperties*>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::Event::get_eventSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_eventSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::Event::get_eventModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_eventModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::Event::Ensure(::UnityEngine::InputForUI::Event_Type t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "Ensure", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event_Type>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t);
}
inline ::StringW UnityEngine::InputForUI::Event::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::Event>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::KeyEvent keyEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::KeyEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event>(nullptr, ___internal_method, keyEvent);
}
inline ::UnityEngine::InputForUI::KeyEvent UnityEngine::InputForUI::Event::get_asKeyEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asKeyEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::KeyEvent>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::PointerEvent pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event>(nullptr, ___internal_method, pointerEvent);
}
inline ::UnityEngine::InputForUI::PointerEvent UnityEngine::InputForUI::Event::get_asPointerEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asPointerEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::TextInputEvent textInputEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::TextInputEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event>(nullptr, ___internal_method, textInputEvent);
}
inline ::UnityEngine::InputForUI::TextInputEvent UnityEngine::InputForUI::Event::get_asTextInputEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asTextInputEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::TextInputEvent>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::IMECompositionEvent imeCompositionEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::IMECompositionEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event>(nullptr, ___internal_method, imeCompositionEvent);
}
inline ::UnityEngine::InputForUI::IMECompositionEvent UnityEngine::InputForUI::Event::get_asIMECompositionEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asIMECompositionEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IMECompositionEvent>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::CommandEvent commandEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::CommandEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event>(nullptr, ___internal_method, commandEvent);
}
inline ::UnityEngine::InputForUI::CommandEvent UnityEngine::InputForUI::Event::get_asCommandEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asCommandEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::CommandEvent>(*this, ___internal_method);
}
inline ::UnityEngine::InputForUI::Event UnityEngine::InputForUI::Event::From(::UnityEngine::InputForUI::NavigationEvent navigationEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "From", {}, { ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::Event>(nullptr, ___internal_method, navigationEvent);
}
inline ::UnityEngine::InputForUI::NavigationEvent UnityEngine::InputForUI::Event::get_asNavigationEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "get_asNavigationEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::NavigationEvent>(*this, ___internal_method);
}
template <typename TOutputType, typename TMapType> inline TOutputType UnityEngine::InputForUI::Event::Map(TMapType fn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "Map", { ::i2c::class_of<TOutputType>(), ::i2c::class_of<TMapType>() }, { ::i2c::type_of<TMapType>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TOutputType>(), ::i2c::class_of<TMapType>() })));
  return ::cordl_internals::RunMethodRethrow<TOutputType>(*this, ___internal_method, fn);
}
template <typename TOutputType, typename TMapType> inline TOutputType UnityEngine::InputForUI::Event::Map() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::Event>(), { "Map", { ::i2c::class_of<TOutputType>(), ::i2c::class_of<TMapType>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TOutputType>(), ::i2c::class_of<TMapType>() })));
  return ::cordl_internals::RunMethodRethrow<TOutputType>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr UnityEngine::InputForUI::Event::operator ::UnityEngine::InputForUI::IEventProperties*() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::Event::i___UnityEngine__InputForUI__IEventProperties() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
