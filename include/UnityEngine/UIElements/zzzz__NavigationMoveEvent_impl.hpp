#pragma once
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction::__NavigationMoveEvent__Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction::__NavigationMoveEvent__Direction() {}
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::__NavigationMoveEvent__Direction::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::__NavigationMoveEvent__Direction::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::__NavigationMoveEvent__Direction::Up{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::__NavigationMoveEvent__Direction::Right{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::__NavigationMoveEvent__Direction::Down{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__NavigationMoveEvent__Direction (*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f609c4;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__NavigationMoveEvent__Direction (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(
    &::UnityEngine::UIElements::NavigationMoveEvent::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f60a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                                               "get_direction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.set_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(
    ::UnityEngine::UIElements::__NavigationMoveEvent__Direction)>(&::UnityEngine::UIElements::NavigationMoveEvent::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f60a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_direction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__NavigationMoveEvent__Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.set_move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::set_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f60a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_move", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationMoveEvent* (*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2f60a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationMoveEvent.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationMoveEvent::*)()>(&::UnityEngine::UIElements::NavigationMoveEvent::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f60b10;

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
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f60b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction& UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_get__direction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const& UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_get__direction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
constexpr void UnityEngine::UIElements::NavigationMoveEvent::__cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value) {
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
/// @param deadZone: float_t (default: 0.6)
inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection(float_t x, float_t y, float_t deadZone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "DetermineMoveDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, false>(nullptr, ___internal_method, x, y, deadZone);
}
inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction UnityEngine::UIElements::NavigationMoveEvent::get_direction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(),
                                                                             "get_direction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::set_direction(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_direction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__NavigationMoveEvent__Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::set_move(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "set_move", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::GetPooled(::UnityEngine::Vector2 moveVector) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationMoveEvent*, false>(nullptr, ___internal_method, moveVector);
}
inline void UnityEngine::UIElements::NavigationMoveEvent::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationMoveEvent* UnityEngine::UIElements::NavigationMoveEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::NavigationMoveEvent*>());
}
inline void UnityEngine::UIElements::NavigationMoveEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationMoveEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationMoveEvent::NavigationMoveEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
