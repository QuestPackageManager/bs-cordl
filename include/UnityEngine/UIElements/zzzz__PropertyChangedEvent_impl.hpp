#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PropertyChangedEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropertyChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropertyChangedEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyChangedEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyChangedEvent___c::*)()>(&::UnityEngine::UIElements::PropertyChangedEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cca65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyChangedEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PropertyChangedEvent* (::UnityEngine::UIElements::PropertyChangedEvent___c::*)()>(
    &::UnityEngine::UIElements::PropertyChangedEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6cca660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PropertyChangedEvent___c::setStaticF___9(::UnityEngine::UIElements::PropertyChangedEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PropertyChangedEvent___c*, "<>9", ::UnityEngine::UIElements::PropertyChangedEvent___c*>(
      std::forward<::UnityEngine::UIElements::PropertyChangedEvent___c*>(value));
}
inline ::UnityEngine::UIElements::PropertyChangedEvent___c* UnityEngine::UIElements::PropertyChangedEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PropertyChangedEvent___c*, "<>9", ::UnityEngine::UIElements::PropertyChangedEvent___c*>();
}
inline void UnityEngine::UIElements::PropertyChangedEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyChangedEvent* UnityEngine::UIElements::PropertyChangedEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropertyChangedEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyChangedEvent___c* UnityEngine::UIElements::PropertyChangedEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyChangedEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyChangedEvent___c::PropertyChangedEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyChangedEvent.get_property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingId (::UnityEngine::UIElements::PropertyChangedEvent::*)()>(
    &::UnityEngine::UIElements::PropertyChangedEvent::get_property)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cca4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), { "get_property", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyChangedEvent.set_property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyChangedEvent::*)(::UnityEngine::UIElements::BindingId)>(
    &::UnityEngine::UIElements::PropertyChangedEvent::set_property)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cca4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), { "set_property", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyChangedEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyChangedEvent::*)()>(&::UnityEngine::UIElements::PropertyChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6cca4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyChangedEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PropertyChangedEvent* (*)(::by_ref<::UnityEngine::UIElements::BindingId>)>(
    &::UnityEngine::UIElements::PropertyChangedEvent::GetPooled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6cca574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(),
                                                                                           { "GetPooled", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BindingId& UnityEngine::UIElements::PropertyChangedEvent::__cordl_internal_get__property_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property_k__BackingField;
}
constexpr ::UnityEngine::UIElements::BindingId const& UnityEngine::UIElements::PropertyChangedEvent::__cordl_internal_get__property_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyChangedEvent::__cordl_internal_set__property_k__BackingField(::UnityEngine::UIElements::BindingId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property_k__BackingField = value;
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::PropertyChangedEvent::get_property() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), { "get_property", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingId>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PropertyChangedEvent::set_property(::UnityEngine::UIElements::BindingId value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), { "set_property", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PropertyChangedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyChangedEvent* UnityEngine::UIElements::PropertyChangedEvent::GetPooled(::by_ref<::UnityEngine::UIElements::BindingId> property) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyChangedEvent*>(),
                                                                                         { "GetPooled", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropertyChangedEvent*>(nullptr, ___internal_method, property);
}
inline ::UnityEngine::UIElements::PropertyChangedEvent* UnityEngine::UIElements::PropertyChangedEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyChangedEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyChangedEvent::PropertyChangedEvent() {}
