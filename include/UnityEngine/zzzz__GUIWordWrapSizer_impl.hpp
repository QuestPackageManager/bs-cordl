#pragma once
// IWYU pragma private; include "UnityEngine/GUIWordWrapSizer.hpp"
#include "UnityEngine/zzzz__GUILayoutEntry_impl.hpp"
#include "UnityEngine/zzzz__GUIWordWrapSizer_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIWordWrapSizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIWordWrapSizer::*)(::UnityEngine::GUIStyle*, ::UnityEngine::GUIContent*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUIWordWrapSizer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b43e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(),
                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIWordWrapSizer.CalcWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIWordWrapSizer::*)()>(&::UnityEngine::GUIWordWrapSizer::CalcWidth)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b4bf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(), { ::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIWordWrapSizer.CalcHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIWordWrapSizer::*)()>(&::UnityEngine::GUIWordWrapSizer::CalcHeight)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b4bfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(), { ::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUIContent*& UnityEngine::GUIWordWrapSizer::__cordl_internal_get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr ::UnityEngine::GUIContent* const& UnityEngine::GUIWordWrapSizer::__cordl_internal_get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::GUIWordWrapSizer::__cordl_internal_set_m_Content(::UnityEngine::GUIContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Content = value;
}
constexpr float_t& UnityEngine::GUIWordWrapSizer::__cordl_internal_get_m_ForcedMinHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedMinHeight;
}
constexpr float_t const& UnityEngine::GUIWordWrapSizer::__cordl_internal_get_m_ForcedMinHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedMinHeight;
}
constexpr void UnityEngine::GUIWordWrapSizer::__cordl_internal_set_m_ForcedMinHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcedMinHeight = value;
}
constexpr float_t& UnityEngine::GUIWordWrapSizer::__cordl_internal_get_m_ForcedMaxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedMaxHeight;
}
constexpr float_t const& UnityEngine::GUIWordWrapSizer::__cordl_internal_get_m_ForcedMaxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedMaxHeight;
}
constexpr void UnityEngine::GUIWordWrapSizer::__cordl_internal_set_m_ForcedMaxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcedMaxHeight = value;
}
inline void UnityEngine::GUIWordWrapSizer::_ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style, content, options);
}
inline void UnityEngine::GUIWordWrapSizer::CalcWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIWordWrapSizer::CalcHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIWordWrapSizer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GUIWordWrapSizer* UnityEngine::GUIWordWrapSizer::New_ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIWordWrapSizer*>(style, content, options));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIWordWrapSizer::GUIWordWrapSizer() {}
