#pragma once
// IWYU pragma private; include "TMPro/Extents.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::Extents._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::Extents::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::TMPro::Extents::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6944168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::Extents>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Extents.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::Extents::*)()>(&::TMPro::Extents::ToString)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6944174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::Extents>(), { ::i2c::class_of<::TMPro::Extents>(), 3 }));
    return ___internal_method;
  }
};
inline void TMPro::Extents::setStaticF_zero(::TMPro::Extents value) {
  ::cordl_internals::setStaticField<::TMPro::Extents, "zero", ::TMPro::Extents>(std::forward<::TMPro::Extents>(value));
}
inline ::TMPro::Extents TMPro::Extents::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::TMPro::Extents, "zero", ::TMPro::Extents>();
}
inline void TMPro::Extents::setStaticF_uninitialized(::TMPro::Extents value) {
  ::cordl_internals::setStaticField<::TMPro::Extents, "uninitialized", ::TMPro::Extents>(std::forward<::TMPro::Extents>(value));
}
inline ::TMPro::Extents TMPro::Extents::getStaticF_uninitialized() {
  return ::cordl_internals::getStaticField<::TMPro::Extents, "uninitialized", ::TMPro::Extents>();
}
inline void TMPro::Extents::_ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::Extents>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline ::StringW TMPro::Extents::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::Extents>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::Extents::Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::TMPro::Extents::Extents() {}
