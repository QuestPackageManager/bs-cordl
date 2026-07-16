#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationMoveEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationDeviceType_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction::NavigationMoveEvent_Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction::NavigationMoveEvent_Direction() {}
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::Up{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::Right{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::Down{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::Next{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent_Direction::Previous{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent___c::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9ece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (::UnityEngine::UIElements::NavigationMoveEvent___c::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::NavigationMoveEvent___c::setStaticF___9(::UnityEngine::UIElements::NavigationMoveEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigationMoveEvent___c*, "<>9", ::UnityEngine::UIElements::NavigationMoveEvent___c*>(
      std::forward<::UnityEngine::UIElements::NavigationMoveEvent___c*>(value));
}
inline ::UnityEngine::UIElements::NavigationMoveEvent___c* UnityEngine::UIElements::NavigationMoveEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigationMoveEvent___c*, "<>9", ::UnityEngine::UIElements::NavigationMoveEvent___c*>();
}
inline void UnityEngine::UIElements::NavigationMoveEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent___c* UnityEngine::UIElements::NavigationMoveEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigationMoveEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationMoveEvent___c::NavigationMoveEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent_Direction (*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9e5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                             { "DetermineMoveDirection", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.get_direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent_Direction (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9e628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { "get_direction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.set_direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(::UnityEngine::UIElements::NavigationMoveEvent_Direction)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9e630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                                                           { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.set_move
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::NavigationMoveEvent::set_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9e638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { "set_move", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::Vector2, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6d9e640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                             { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers)>(
        &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d9acf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
            { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::NavigationDeviceType>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6d9e73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::UIElements::NavigationMoveEvent_Direction,
                                                                                                           ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d9ac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                             { "GetPooled",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::NavigationDeviceType>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9e7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9e898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.LocalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent::LocalInit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d9e840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { "LocalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.PostDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::PostDispatch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6d9e8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction& UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_get__direction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
constexpr ::UnityEngine::UIElements::NavigationMoveEvent_Direction const& UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_get__direction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
constexpr void UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::NavigationMoveEvent_Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____direction_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_get__move_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____move_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_get__move_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____move_k__BackingField;
}
constexpr void UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_set__move_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____move_k__BackingField = value;
}
inline ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection(float_t x, float_t y, float_t deadZone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                           { "DetermineMoveDirection", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(nullptr, ___internal_method, x, y, deadZone);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent::get_direction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { "get_direction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::set_direction(::UnityEngine::UIElements::NavigationMoveEvent_Direction value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                                                         { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::set_move(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { "set_move", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::Vector2 moveVector, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                           { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*>(nullptr, ___internal_method, moveVector, modifiers);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent*
UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::Vector2 moveVector, ::UnityEngine::UIElements::NavigationDeviceType deviceType, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
          { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::NavigationDeviceType>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*>(nullptr, ___internal_method, moveVector, deviceType, modifiers);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::UIElements::NavigationMoveEvent_Direction direction,
                                                                                                               ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                              { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*>(nullptr, ___internal_method, direction, modifiers);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::UIElements::NavigationMoveEvent_Direction direction,
                                                                                                               ::UnityEngine::UIElements::NavigationDeviceType deviceType,
                                                                                                               ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(),
                                                           { "GetPooled",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::NavigationDeviceType>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*>(nullptr, ___internal_method, direction, deviceType, modifiers);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::PostDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::NavigationMoveEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigationMoveEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationMoveEvent::NavigationMoveEvent() {}
