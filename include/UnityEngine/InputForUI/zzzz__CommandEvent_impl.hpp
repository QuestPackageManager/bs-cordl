#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/CommandEvent.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::CommandEvent_Type::CommandEvent_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::CommandEvent_Type::CommandEvent_Type() {}
constexpr ::UnityEngine::InputForUI::CommandEvent_Type UnityEngine::InputForUI::CommandEvent_Type::Validate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Type UnityEngine::InputForUI::CommandEvent_Type::Execute{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::CommandEvent_Command::CommandEvent_Command(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::CommandEvent_Command::CommandEvent_Command() {}
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Invalid{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Cut{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Copy{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Paste{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::SelectAll{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::DeselectAll{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::InvertSelection{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Duplicate{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Rename{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Delete{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::SoftDelete{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::Find{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::SelectChildren{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::SelectPrefabRoot{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::UndoRedoPerformed{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::OnLostFocus{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::NewKeyboardFocus{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::ModifierKeysChanged{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::EyeDropperUpdate{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::EyeDropperClicked{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::EyeDropperCancelled{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::ColorPickerChanged{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::FrameSelected{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::InputForUI::CommandEvent_Command UnityEngine::InputForUI::CommandEvent_Command::FrameSelectedWithLock{ static_cast<int32_t>(0x17) };
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.set_timestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::CommandEvent::*)(::Unity::IntegerTime::DiscreteTime)>(
    &::UnityEngine::InputForUI::CommandEvent::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b5511c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_timestamp", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.get_eventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::CommandEvent::*)()>(
    &::UnityEngine::InputForUI::CommandEvent::get_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b55124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "get_eventSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.set_eventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::CommandEvent::*)(::UnityEngine::InputForUI::EventSource)>(
    &::UnityEngine::InputForUI::CommandEvent::set_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b5512c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_eventSource", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.set_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::CommandEvent::*)(uint32_t)>(&::UnityEngine::InputForUI::CommandEvent::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b55134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_playerId", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.get_eventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::CommandEvent::*)()>(
    &::UnityEngine::InputForUI::CommandEvent::get_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b5513c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "get_eventModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.set_eventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::CommandEvent::*)(::UnityEngine::InputForUI::EventModifiers)>(
    &::UnityEngine::InputForUI::CommandEvent::set_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b55144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_eventModifiers", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::CommandEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::CommandEvent::*)()>(&::UnityEngine::InputForUI::CommandEvent::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b5514c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { ::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::CommandEvent::set_timestamp(::Unity::IntegerTime::DiscreteTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_timestamp", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::CommandEvent::get_eventSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "get_eventSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::CommandEvent::set_eventSource(::UnityEngine::InputForUI::EventSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_eventSource", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::CommandEvent::set_playerId(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_playerId", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::CommandEvent::get_eventModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "get_eventModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::CommandEvent::set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), { "set_eventModifiers", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputForUI::CommandEvent::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::CommandEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr UnityEngine::InputForUI::CommandEvent::operator ::UnityEngine::InputForUI::IEventProperties*() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::CommandEvent::i___UnityEngine__InputForUI__IEventProperties() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::CommandEvent_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "command", ty:
// "::UnityEngine::InputForUI::CommandEvent_Command", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::CommandEvent::CommandEvent(::UnityEngine::InputForUI::CommandEvent_Type type, ::UnityEngine::InputForUI::CommandEvent_Command command,
                                                                ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField,
                                                                uint32_t _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept {
  this->type = type;
  this->command = command;
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
  this->_eventSource_k__BackingField = _eventSource_k__BackingField;
  this->_playerId_k__BackingField = _playerId_k__BackingField;
  this->_eventModifiers_k__BackingField = _eventModifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::CommandEvent::CommandEvent() {}
