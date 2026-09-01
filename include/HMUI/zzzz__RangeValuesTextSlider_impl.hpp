#pragma once
// IWYU pragma private; include "HMUI\RangeValuesTextSlider.hpp"
#include "HMUI/zzzz__TextSlider_impl.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.set_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(bool)>(&::HMUI::RangeValuesTextSlider::set_interactable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x587e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.get_minValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::get_minValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "get_minValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.set_minValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::set_minValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x587e2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_minValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.get_maxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::get_maxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "get_maxValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.set_maxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::set_maxValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x587e32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_maxValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::get_value)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x587e3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::set_value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587e3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.add_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*)>(
    &::HMUI::RangeValuesTextSlider::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587e42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(),
                                                             { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.remove_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*)>(
    &::HMUI::RangeValuesTextSlider::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(),
                                                             { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::Awake)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x587e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x587e7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.HandleNormalizedValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)(::HMUI::TextSlider*, float_t)>(&::HMUI::RangeValuesTextSlider::HandleNormalizedValueDidChange)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x587e894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::TextSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.ConvertFromNormalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::ConvertFromNormalizedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x587e3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "ConvertFromNormalizedValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.NormalizeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::NormalizeValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x587e40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "NormalizeValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.TextForNormalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::TextForNormalizedValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x587e8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::RangeValuesTextSlider::*)(float_t)>(&::HMUI::RangeValuesTextSlider::TextForValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x587e8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x587e16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider._Awake_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::_Awake_b__19_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x587e958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "<Awake>b__19_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RangeValuesTextSlider._Awake_b__19_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RangeValuesTextSlider::*)()>(&::HMUI::RangeValuesTextSlider::_Awake_b__19_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x587e9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "<Awake>b__19_1", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::RangeValuesTextSlider::__cordl_internal_get__minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minValue;
}
constexpr float_t const& HMUI::RangeValuesTextSlider::__cordl_internal_get__minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minValue;
}
constexpr void HMUI::RangeValuesTextSlider::__cordl_internal_set__minValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minValue = value;
}
constexpr float_t& HMUI::RangeValuesTextSlider::__cordl_internal_get__maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxValue;
}
constexpr float_t const& HMUI::RangeValuesTextSlider::__cordl_internal_get__maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxValue;
}
constexpr void HMUI::RangeValuesTextSlider::__cordl_internal_set__maxValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxValue = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::RangeValuesTextSlider::__cordl_internal_get__decButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::RangeValuesTextSlider::__cordl_internal_get__decButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decButton;
}
constexpr void HMUI::RangeValuesTextSlider::__cordl_internal_set__decButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::RangeValuesTextSlider::__cordl_internal_get__incButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____incButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::RangeValuesTextSlider::__cordl_internal_get__incButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____incButton;
}
constexpr void HMUI::RangeValuesTextSlider::__cordl_internal_set__incButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____incButton = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*& HMUI::RangeValuesTextSlider::__cordl_internal_get_valueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* const& HMUI::RangeValuesTextSlider::__cordl_internal_get_valueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr void HMUI::RangeValuesTextSlider::__cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueDidChangeEvent = value;
}
constexpr ::HMUI::ButtonBinder*& HMUI::RangeValuesTextSlider::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& HMUI::RangeValuesTextSlider::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::RangeValuesTextSlider::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline void HMUI::RangeValuesTextSlider::set_interactable(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::RangeValuesTextSlider::get_minValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "get_minValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::set_minValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_minValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::RangeValuesTextSlider::get_maxValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "get_maxValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::set_maxValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_maxValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::RangeValuesTextSlider::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::set_value(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::RangeValuesTextSlider::add_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(),
                                                           { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::RangeValuesTextSlider::remove_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(),
                                                           { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::RangeValuesTextSlider::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::TextSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, normalizedValue);
}
inline float_t HMUI::RangeValuesTextSlider::ConvertFromNormalizedValue(float_t normalizedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "ConvertFromNormalizedValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, normalizedValue);
}
inline float_t HMUI::RangeValuesTextSlider::NormalizeValue(float_t rangeValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "NormalizeValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, rangeValue);
}
inline ::StringW HMUI::RangeValuesTextSlider::TextForNormalizedValue(float_t normalizedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, normalizedValue);
}
inline ::StringW HMUI::RangeValuesTextSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void HMUI::RangeValuesTextSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::_Awake_b__19_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "<Awake>b__19_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::RangeValuesTextSlider::_Awake_b__19_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RangeValuesTextSlider*>(), { "<Awake>b__19_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::RangeValuesTextSlider* HMUI::RangeValuesTextSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::RangeValuesTextSlider*>());
}
// Ctor Parameters []
constexpr ::HMUI::RangeValuesTextSlider::RangeValuesTextSlider() {}
