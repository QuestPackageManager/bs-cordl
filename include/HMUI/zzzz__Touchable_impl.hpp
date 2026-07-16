#pragma once
// IWYU pragma private; include "HMUI/Touchable.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__Touchable_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::HMUI::Touchable.get_skew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::Touchable::*)()>(&::HMUI::Touchable::get_skew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5883270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Touchable*>(), { "get_skew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Touchable.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Touchable::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::Touchable::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5883278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::Touchable*>(), { ::i2c::class_of<::HMUI::Touchable*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Touchable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Touchable::*)()>(&::HMUI::Touchable::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5882de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Touchable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::Touchable::__cordl_internal_get__skew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skew;
}
constexpr float_t const& HMUI::Touchable::__cordl_internal_get__skew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skew;
}
constexpr void HMUI::Touchable::__cordl_internal_set__skew(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skew = value;
}
inline float_t HMUI::Touchable::get_skew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Touchable*>(), { "get_skew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::Touchable::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::Touchable*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline void HMUI::Touchable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Touchable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::Touchable* HMUI::Touchable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::Touchable*>());
}
// Ctor Parameters []
constexpr ::HMUI::Touchable::Touchable() {}
