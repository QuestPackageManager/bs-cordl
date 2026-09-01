#pragma once
// IWYU pragma private; include "UnityEngine\GUILayoutEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutEntry_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_style
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_style)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4eaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "get_style", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.set_style
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUILayoutEntry::set_style)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b463a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "set_style", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_marginLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_marginLeft)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b4eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_marginRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_marginRight)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b4eb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_marginTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_marginTop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b4eb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_marginBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_marginBottom)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b4eb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_marginHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_marginHorizontal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "get_marginHorizontal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.get_marginVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::get_marginVertical)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4ebc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "get_marginVertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUILayoutEntry::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b4ebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(),
                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*,
                                                                                               ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayoutEntry::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b474cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ".ctor",
                                                                                 {},
                                                                                 { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                   ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.CalcWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::CalcWidth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b4ecc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.CalcHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::CalcHeight)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b4eccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.SetHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(float_t, float_t)>(&::UnityEngine::GUILayoutEntry::SetHorizontal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b4ecd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.SetVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(float_t, float_t)>(&::UnityEngine::GUILayoutEntry::SetVertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b4ecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUILayoutEntry::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b4ece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.ApplyOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutEntry::*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayoutEntry::ApplyOptions)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6b4ed64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutEntry.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUILayoutEntry::*)()>(&::UnityEngine::GUILayoutEntry::ToString)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x6b4efdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 3 }));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::GUILayoutEntry::__cordl_internal_get_minWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minWidth;
}
constexpr float_t const& UnityEngine::GUILayoutEntry::__cordl_internal_get_minWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minWidth;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_minWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minWidth = value;
}
constexpr float_t& UnityEngine::GUILayoutEntry::__cordl_internal_get_maxWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxWidth;
}
constexpr float_t const& UnityEngine::GUILayoutEntry::__cordl_internal_get_maxWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxWidth;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_maxWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxWidth = value;
}
constexpr float_t& UnityEngine::GUILayoutEntry::__cordl_internal_get_minHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHeight;
}
constexpr float_t const& UnityEngine::GUILayoutEntry::__cordl_internal_get_minHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHeight;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_minHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minHeight = value;
}
constexpr float_t& UnityEngine::GUILayoutEntry::__cordl_internal_get_maxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHeight;
}
constexpr float_t const& UnityEngine::GUILayoutEntry::__cordl_internal_get_maxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHeight;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_maxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxHeight = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::GUILayoutEntry::__cordl_internal_get_rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::GUILayoutEntry::__cordl_internal_get_rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_rect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rect = value;
}
constexpr int32_t& UnityEngine::GUILayoutEntry::__cordl_internal_get_stretchWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchWidth;
}
constexpr int32_t const& UnityEngine::GUILayoutEntry::__cordl_internal_get_stretchWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchWidth;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_stretchWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stretchWidth = value;
}
constexpr int32_t& UnityEngine::GUILayoutEntry::__cordl_internal_get_stretchHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchHeight;
}
constexpr int32_t const& UnityEngine::GUILayoutEntry::__cordl_internal_get_stretchHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchHeight;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_stretchHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stretchHeight = value;
}
constexpr bool& UnityEngine::GUILayoutEntry::__cordl_internal_get_consideredForMargin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___consideredForMargin;
}
constexpr bool const& UnityEngine::GUILayoutEntry::__cordl_internal_get_consideredForMargin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___consideredForMargin;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_consideredForMargin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___consideredForMargin = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUILayoutEntry::__cordl_internal_get_m_Style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Style;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUILayoutEntry::__cordl_internal_get_m_Style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Style;
}
constexpr void UnityEngine::GUILayoutEntry::__cordl_internal_set_m_Style(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Style = value;
}
inline void UnityEngine::GUILayoutEntry::setStaticF_kDummyRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "kDummyRect", ::UnityEngine::GUILayoutEntry*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutEntry::getStaticF_kDummyRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "kDummyRect", ::UnityEngine::GUILayoutEntry*>();
}
inline void UnityEngine::GUILayoutEntry::setStaticF_indent(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indent", ::UnityEngine::GUILayoutEntry*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUILayoutEntry::getStaticF_indent() {
  return ::cordl_internals::getStaticField<int32_t, "indent", ::UnityEngine::GUILayoutEntry*>();
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUILayoutEntry::get_style() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "get_style", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUILayoutEntry::set_style(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "set_style", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::GUILayoutEntry::get_marginLeft() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::GUILayoutEntry::get_marginRight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::GUILayoutEntry::get_marginTop() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::GUILayoutEntry::get_marginBottom() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::GUILayoutEntry::get_marginHorizontal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "get_marginHorizontal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::GUILayoutEntry::get_marginVertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { "get_marginVertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::GUILayoutEntry::_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(),
                       { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _minWidth, _maxWidth, _minHeight, _maxHeight, _style);
}
inline void UnityEngine::GUILayoutEntry::_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style,
                                               ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), { ".ctor",
                                                                               {},
                                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                 ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _minWidth, _maxWidth, _minHeight, _maxHeight, _style, options);
}
inline void UnityEngine::GUILayoutEntry::CalcWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUILayoutEntry::CalcHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUILayoutEntry::SetHorizontal(float_t x, float_t width) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, width);
}
inline void UnityEngine::GUILayoutEntry::SetVertical(float_t y, float_t height) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y, height);
}
inline void UnityEngine::GUILayoutEntry::ApplyStyleSettings(::UnityEngine::GUIStyle* style) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style);
}
inline void UnityEngine::GUILayoutEntry::ApplyOptions(::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline ::StringW UnityEngine::GUILayoutEntry::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUILayoutEntry*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::GUILayoutEntry* UnityEngine::GUILayoutEntry::New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUILayoutEntry*>(_minWidth, _maxWidth, _minHeight, _maxHeight, _style));
}
inline ::UnityEngine::GUILayoutEntry* UnityEngine::GUILayoutEntry::New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style,
                                                                            ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUILayoutEntry*>(_minWidth, _maxWidth, _minHeight, _maxHeight, _style, options));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutEntry::GUILayoutEntry() {}
