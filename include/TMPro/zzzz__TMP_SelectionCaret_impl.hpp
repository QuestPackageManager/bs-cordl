#pragma once
// IWYU pragma private; include "TMPro\TMP_SelectionCaret.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "TMPro/zzzz__TMP_SelectionCaret_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_SelectionCaret.Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SelectionCaret::*)(::UnityEngine::Rect, bool)>(&::TMPro::TMP_SelectionCaret::Cull)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x699be18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), { ::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SelectionCaret.UpdateGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SelectionCaret::*)()>(&::TMPro::TMP_SelectionCaret::UpdateGeometry)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699bebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), { ::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SelectionCaret._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SelectionCaret::*)()>(&::TMPro::TMP_SelectionCaret::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699bec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_SelectionCaret::Cull(::UnityEngine::Rect clipRect, bool validRect) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipRect, validRect);
}
inline void TMPro::TMP_SelectionCaret::UpdateGeometry() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SelectionCaret::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SelectionCaret*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_SelectionCaret* TMPro::TMP_SelectionCaret::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SelectionCaret*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SelectionCaret::TMP_SelectionCaret() {}
