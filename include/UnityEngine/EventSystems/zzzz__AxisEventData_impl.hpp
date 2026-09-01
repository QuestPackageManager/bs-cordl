#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\AxisEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.get_moveVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::AxisEventData::*)()>(&::UnityEngine::EventSystems::AxisEventData::get_moveVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "get_moveVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.set_moveVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::AxisEventData::set_moveVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "set_moveVector", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.get_moveDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::MoveDirection (::UnityEngine::EventSystems::AxisEventData::*)()>(
    &::UnityEngine::EventSystems::AxisEventData::get_moveDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "get_moveDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.set_moveDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::EventSystems::MoveDirection)>(
    &::UnityEngine::EventSystems::AxisEventData::set_moveDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "set_moveDir", {}, { ::i2c::type_of<::UnityEngine::EventSystems::MoveDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::EventSystems::AxisEventData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e17db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "get_moveVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::AxisEventData::set_moveVector(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "set_moveVector", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::MoveDirection UnityEngine::EventSystems::AxisEventData::get_moveDir() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "get_moveDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::MoveDirection>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::AxisEventData::set_moveDir(::UnityEngine::EventSystems::MoveDirection value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { "set_moveDir", {}, { ::i2c::type_of<::UnityEngine::EventSystems::MoveDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::EventSystems::AxisEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AxisEventData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::UnityEngine::EventSystems::AxisEventData* UnityEngine::EventSystems::AxisEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::AxisEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::AxisEventData::AxisEventData() {}
