#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationMoveEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent___c::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a2fcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (::UnityEngine::UIElements::NavigationMoveEvent___c::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4a2fcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent___c*>::get(),
                                                                               "<.cctor>b__0_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::NavigationMoveEvent___c::setStaticF___9(::UnityEngine::UIElements::NavigationMoveEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigationMoveEvent___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent___c*>::get>(
      std::forward<::UnityEngine::UIElements::NavigationMoveEvent___c*>(value));
}
inline ::UnityEngine::UIElements::NavigationMoveEvent___c* UnityEngine::UIElements::NavigationMoveEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigationMoveEvent___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent___c*>::get>();
}
inline void UnityEngine::UIElements::NavigationMoveEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent___c*>::get(),
                                                                             "<.cctor>b__0_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent___c* UnityEngine::UIElements::NavigationMoveEvent___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::NavigationMoveEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationMoveEvent___c::NavigationMoveEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent_Direction (*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a2f98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "DetermineMoveDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.get_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent_Direction (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a2f9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                                               "get_direction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.set_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(::UnityEngine::UIElements::NavigationMoveEvent_Direction)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a2f9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_direction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent_Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.set_move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::set_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a2f9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_move", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::Vector2, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4a2f9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers)>(
        &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4a2b03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationDeviceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers)>(
        &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a2faf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent_Direction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType,
                                                                    ::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4a2af90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent_Direction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationDeviceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4a2fba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4a2fc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.LocalInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent::LocalInit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a2fbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                                               "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "DetermineMoveDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent_Direction, false>(nullptr, ___internal_method, x, y, deadZone);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent_Direction UnityEngine::UIElements::NavigationMoveEvent::get_direction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                                             "get_direction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent_Direction, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::set_direction(::UnityEngine::UIElements::NavigationMoveEvent_Direction value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_direction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent_Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::set_move(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_move", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::Vector2 moveVector, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*, false>(nullptr, ___internal_method, moveVector, modifiers);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent*
UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::Vector2 moveVector, ::UnityEngine::UIElements::NavigationDeviceType deviceType, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationDeviceType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*, false>(nullptr, ___internal_method, moveVector, deviceType, modifiers);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::UIElements::NavigationMoveEvent_Direction direction,
                                                                                                               ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent_Direction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*, false>(nullptr, ___internal_method, direction, modifiers);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::UIElements::NavigationMoveEvent_Direction direction,
                                                                                                               ::UnityEngine::UIElements::NavigationDeviceType deviceType,
                                                                                                               ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent_Direction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationDeviceType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*, false>(nullptr, ___internal_method, direction, deviceType, modifiers);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                                             "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::NavigationMoveEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationMoveEvent::NavigationMoveEvent() {}
