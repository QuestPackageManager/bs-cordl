#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::NavigationEvent_Type::NavigationEvent_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::NavigationEvent_Type::NavigationEvent_Type() {}
constexpr ::UnityEngine::InputForUI::NavigationEvent_Type UnityEngine::InputForUI::NavigationEvent_Type::Move{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Type UnityEngine::InputForUI::NavigationEvent_Type::Submit{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Type UnityEngine::InputForUI::NavigationEvent_Type::Cancel{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction::NavigationEvent_Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction::NavigationEvent_Direction() {}
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::Up{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::Right{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::Down{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::Next{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent_Direction::Previous{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_timestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(::Unity::IntegerTime::DiscreteTime)>(
    &::UnityEngine::InputForUI::NavigationEvent::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698e93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_timestamp", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.get_eventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::NavigationEvent::*)()>(
    &::UnityEngine::InputForUI::NavigationEvent::get_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698e944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                               "get_eventSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_eventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(::UnityEngine::InputForUI::EventSource)>(
    &::UnityEngine::InputForUI::NavigationEvent::set_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698e94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_eventSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_playerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(uint32_t)>(
    &::UnityEngine::InputForUI::NavigationEvent::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698e954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_playerId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.get_eventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::NavigationEvent::*)()>(
    &::UnityEngine::InputForUI::NavigationEvent::get_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698e95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                               "get_eventModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_eventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(::UnityEngine::InputForUI::EventModifiers)>(
    &::UnityEngine::InputForUI::NavigationEvent::set_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698e964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_eventModifiers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputForUI::NavigationEvent::*)()>(&::UnityEngine::InputForUI::NavigationEvent::ToString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x698e96c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::NavigationEvent_Direction (*)(::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::InputForUI::NavigationEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698eb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                               "DetermineMoveDirection", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::NavigationEvent::set_timestamp(::Unity::IntegerTime::DiscreteTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_timestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::NavigationEvent::get_eventSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                             "get_eventSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::NavigationEvent::set_eventSource(::UnityEngine::InputForUI::EventSource value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_eventSource", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::NavigationEvent::set_playerId(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_playerId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::NavigationEvent::get_eventModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                             "get_eventModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::NavigationEvent::set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), "set_eventModifiers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputForUI::NavigationEvent::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent::DetermineMoveDirection(::UnityEngine::Vector2 vec, float_t deadZone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::NavigationEvent>::get(),
                                                                             "DetermineMoveDirection", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::NavigationEvent_Direction, false>(nullptr, ___internal_method, vec, deadZone);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr UnityEngine::InputForUI::NavigationEvent::operator ::UnityEngine::InputForUI::IEventProperties*() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::NavigationEvent::i___UnityEngine__InputForUI__IEventProperties() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::NavigationEvent_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "direction", ty:
// "::UnityEngine::InputForUI::NavigationEvent_Direction", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldBeUsed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventSource_k__BackingField", ty:
// "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::NavigationEvent::NavigationEvent(::UnityEngine::InputForUI::NavigationEvent_Type type, ::UnityEngine::InputForUI::NavigationEvent_Direction direction,
                                                                      bool shouldBeUsed, ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField,
                                                                      ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField, uint32_t _playerId_k__BackingField,
                                                                      ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept {
  this->type = type;
  this->direction = direction;
  this->shouldBeUsed = shouldBeUsed;
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
  this->_eventSource_k__BackingField = _eventSource_k__BackingField;
  this->_playerId_k__BackingField = _playerId_k__BackingField;
  this->_eventModifiers_k__BackingField = _eventModifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::NavigationEvent::NavigationEvent() {}
