#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TooltipEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TooltipEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TooltipEvent_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TooltipEvent___c::*)()>(&::UnityEngine::UIElements::TooltipEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da6784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TooltipEvent* (::UnityEngine::UIElements::TooltipEvent___c::*)()>(
    &::UnityEngine::UIElements::TooltipEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da6788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TooltipEvent___c::setStaticF___9(::UnityEngine::UIElements::TooltipEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TooltipEvent___c*, "<>9", ::UnityEngine::UIElements::TooltipEvent___c*>(
      std::forward<::UnityEngine::UIElements::TooltipEvent___c*>(value));
}
inline ::UnityEngine::UIElements::TooltipEvent___c* UnityEngine::UIElements::TooltipEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TooltipEvent___c*, "<>9", ::UnityEngine::UIElements::TooltipEvent___c*>();
}
inline void UnityEngine::UIElements::TooltipEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TooltipEvent* UnityEngine::UIElements::TooltipEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TooltipEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TooltipEvent___c* UnityEngine::UIElements::TooltipEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TooltipEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TooltipEvent___c::TooltipEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent.set_tooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TooltipEvent::*)(::StringW)>(&::UnityEngine::UIElements::TooltipEvent::set_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da65f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { "set_tooltip", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent.set_rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TooltipEvent::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::TooltipEvent::set_rect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6da65f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { "set_rect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TooltipEvent::*)()>(&::UnityEngine::UIElements::TooltipEvent::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6da6604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent.LocalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TooltipEvent::*)()>(&::UnityEngine::UIElements::TooltipEvent::LocalInit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6da6674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { "LocalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TooltipEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TooltipEvent::*)()>(&::UnityEngine::UIElements::TooltipEvent::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6da6698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::TooltipEvent::__cordl_internal_get__tooltip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tooltip_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::TooltipEvent::__cordl_internal_get__tooltip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tooltip_k__BackingField;
}
constexpr void UnityEngine::UIElements::TooltipEvent::__cordl_internal_set__tooltip_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tooltip_k__BackingField = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::TooltipEvent::__cordl_internal_get__rect_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rect_k__BackingField;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::TooltipEvent::__cordl_internal_get__rect_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rect_k__BackingField;
}
constexpr void UnityEngine::UIElements::TooltipEvent::__cordl_internal_set__rect_k__BackingField(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rect_k__BackingField = value;
}
inline void UnityEngine::UIElements::TooltipEvent::set_tooltip(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { "set_tooltip", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TooltipEvent::set_rect(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { "set_rect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TooltipEvent::Init() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TooltipEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TooltipEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TooltipEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TooltipEvent* UnityEngine::UIElements::TooltipEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TooltipEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TooltipEvent::TooltipEvent() {}
