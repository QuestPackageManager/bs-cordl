#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorTransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__ColorTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO.get_normalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::get_normalColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64469d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_normalColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO.get_highlightedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::get_highlightedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64469e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_highlightedColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO.get_pressedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::get_pressedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64469ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_pressedColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO.get_disabledColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::get_disabledColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64469f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_disabledColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO.get_selectedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::get_selectedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_selectedColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO.get_selectedAndHighlightedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::get_selectedAndHighlightedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_selectedAndHighlightedColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorTransitionSO::*)()>(&::GlobalNamespace::ColorTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__normalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__normalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr void GlobalNamespace::ColorTransitionSO::__cordl_internal_set__normalColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__highlightedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__highlightedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor;
}
constexpr void GlobalNamespace::ColorTransitionSO::__cordl_internal_set__highlightedColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__pressedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__pressedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedColor;
}
constexpr void GlobalNamespace::ColorTransitionSO::__cordl_internal_set__pressedColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__disabledColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__disabledColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColor;
}
constexpr void GlobalNamespace::ColorTransitionSO::__cordl_internal_set__disabledColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__selectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__selectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor;
}
constexpr void GlobalNamespace::ColorTransitionSO::__cordl_internal_set__selectedColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__selectedAndHighlightedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorTransitionSO::__cordl_internal_get__selectedAndHighlightedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedColor;
}
constexpr void GlobalNamespace::ColorTransitionSO::__cordl_internal_set__selectedAndHighlightedColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedColor = value;
}
inline ::UnityEngine::Color GlobalNamespace::ColorTransitionSO::get_normalColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_normalColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorTransitionSO::get_highlightedColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_highlightedColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorTransitionSO::get_pressedColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_pressedColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorTransitionSO::get_disabledColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_disabledColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorTransitionSO::get_selectedColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_selectedColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorTransitionSO::get_selectedAndHighlightedColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { "get_selectedAndHighlightedColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorTransitionSO* GlobalNamespace::ColorTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorTransitionSO::ColorTransitionSO() {}
