#pragma once
// IWYU pragma private; include "UnityEngine/GUIScrollGroup.hpp"
#include "UnityEngine/zzzz__GUILayoutGroup_impl.hpp"
#include "UnityEngine/zzzz__GUIScrollGroup_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIScrollGroup::*)()>(&::UnityEngine::GUIScrollGroup::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b4de80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.CalcWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIScrollGroup::*)()>(&::UnityEngine::GUIScrollGroup::CalcWidth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.SetHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIScrollGroup::*)(float_t, float_t)>(&::UnityEngine::GUIScrollGroup::SetHorizontal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b4df5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.CalcHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIScrollGroup::*)()>(&::UnityEngine::GUIScrollGroup::CalcHeight)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b4e03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.SetVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIScrollGroup::*)(float_t, float_t)>(&::UnityEngine::GUIScrollGroup::SetVertical)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6b4e110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 11 }));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMinWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinWidth;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMinWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinWidth;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_calcMinWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMinWidth = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMaxWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxWidth;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMaxWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxWidth;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_calcMaxWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMaxWidth = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMinHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinHeight;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMinHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinHeight;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_calcMinHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMinHeight = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMaxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxHeight;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__cordl_internal_get_calcMaxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxHeight;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_calcMaxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMaxHeight = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__cordl_internal_get_clientWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientWidth;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__cordl_internal_get_clientWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientWidth;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_clientWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientWidth = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__cordl_internal_get_clientHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientHeight;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__cordl_internal_get_clientHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientHeight;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_clientHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientHeight = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__cordl_internal_get_allowHorizontalScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowHorizontalScroll;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__cordl_internal_get_allowHorizontalScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowHorizontalScroll;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_allowHorizontalScroll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowHorizontalScroll = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__cordl_internal_get_allowVerticalScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowVerticalScroll;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__cordl_internal_get_allowVerticalScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowVerticalScroll;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_allowVerticalScroll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowVerticalScroll = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__cordl_internal_get_needsHorizontalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsHorizontalScrollbar;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__cordl_internal_get_needsHorizontalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsHorizontalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_needsHorizontalScrollbar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needsHorizontalScrollbar = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__cordl_internal_get_needsVerticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsVerticalScrollbar;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__cordl_internal_get_needsVerticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsVerticalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_needsVerticalScrollbar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needsVerticalScrollbar = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUIScrollGroup::__cordl_internal_get_horizontalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalScrollbar;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUIScrollGroup::__cordl_internal_get_horizontalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_horizontalScrollbar(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___horizontalScrollbar = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUIScrollGroup::__cordl_internal_get_verticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalScrollbar;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUIScrollGroup::__cordl_internal_get_verticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__cordl_internal_set_verticalScrollbar(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalScrollbar = value;
}
inline void UnityEngine::GUIScrollGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIScrollGroup::CalcWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIScrollGroup::SetHorizontal(float_t x, float_t width) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, width);
}
inline void UnityEngine::GUIScrollGroup::CalcHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIScrollGroup::SetVertical(float_t y, float_t height) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIScrollGroup*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y, height);
}
inline ::UnityEngine::GUIScrollGroup* UnityEngine::GUIScrollGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIScrollGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIScrollGroup::GUIScrollGroup() {}
