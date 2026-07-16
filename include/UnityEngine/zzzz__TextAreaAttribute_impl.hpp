#pragma once
// IWYU pragma private; include "UnityEngine/TextAreaAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TextAreaAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAreaAttribute::*)()>(&::UnityEngine::TextAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad4d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAreaAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAreaAttribute::*)(int32_t, int32_t)>(&::UnityEngine::TextAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ad4d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAreaAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TextAreaAttribute::__cordl_internal_get_minLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLines;
}
constexpr int32_t const& UnityEngine::TextAreaAttribute::__cordl_internal_get_minLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLines;
}
constexpr void UnityEngine::TextAreaAttribute::__cordl_internal_set_minLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minLines = value;
}
constexpr int32_t& UnityEngine::TextAreaAttribute::__cordl_internal_get_maxLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLines;
}
constexpr int32_t const& UnityEngine::TextAreaAttribute::__cordl_internal_get_maxLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLines;
}
constexpr void UnityEngine::TextAreaAttribute::__cordl_internal_set_maxLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxLines = value;
}
inline void UnityEngine::TextAreaAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAreaAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextAreaAttribute::_ctor(int32_t minLines, int32_t maxLines) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAreaAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minLines, maxLines);
}
inline ::UnityEngine::TextAreaAttribute* UnityEngine::TextAreaAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAreaAttribute*>());
}
inline ::UnityEngine::TextAreaAttribute* UnityEngine::TextAreaAttribute::New_ctor(int32_t minLines, int32_t maxLines) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAreaAttribute*>(minLines, maxLines));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAreaAttribute::TextAreaAttribute() {}
