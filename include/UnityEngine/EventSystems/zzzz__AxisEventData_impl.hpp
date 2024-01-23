#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.get_moveVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::AxisEventData::*)()>(
    &::UnityEngine::EventSystems::AxisEventData::get_moveVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(),
                                                                               "get_moveVector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.set_moveVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::EventSystems::AxisEventData::set_moveVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), "set_moveVector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.get_moveDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::MoveDirection (::UnityEngine::EventSystems::AxisEventData::*)()>(
    &::UnityEngine::EventSystems::AxisEventData::get_moveDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(),
                                                                               "get_moveDir", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.set_moveDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::EventSystems::MoveDirection)>(
    &::UnityEngine::EventSystems::AxisEventData::set_moveDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d95390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), "set_moveDir", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::MoveDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::EventSystems::AxisEventData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d95398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::AxisEventData::__cordl_internal_get__moveVector_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveVector_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::AxisEventData::__cordl_internal_get__moveVector_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveVector_k__BackingField;
}
constexpr void UnityEngine::EventSystems::AxisEventData::__cordl_internal_set__moveVector_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveVector_k__BackingField = value;
}
constexpr ::UnityEngine::EventSystems::MoveDirection& UnityEngine::EventSystems::AxisEventData::__cordl_internal_get__moveDir_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDir_k__BackingField;
}
constexpr ::UnityEngine::EventSystems::MoveDirection const& UnityEngine::EventSystems::AxisEventData::__cordl_internal_get__moveDir_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDir_k__BackingField;
}
constexpr void UnityEngine::EventSystems::AxisEventData::__cordl_internal_set__moveDir_k__BackingField(::UnityEngine::EventSystems::MoveDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveDir_k__BackingField = value;
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::AxisEventData::get_moveVector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(),
                                                                             "get_moveVector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::AxisEventData::set_moveVector(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), "set_moveVector", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::MoveDirection UnityEngine::EventSystems::AxisEventData::get_moveDir() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), "get_moveDir",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::MoveDirection, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::AxisEventData::set_moveDir(::UnityEngine::EventSystems::MoveDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), "set_moveDir", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::MoveDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::AxisEventData* UnityEngine::EventSystems::AxisEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EventSystems::AxisEventData*>(eventSystem));
}
inline void UnityEngine::EventSystems::AxisEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventSystem);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::AxisEventData::AxisEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
