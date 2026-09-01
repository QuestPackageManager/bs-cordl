#pragma once
// IWYU pragma private; include "GlobalNamespace\MultipliedAndAddedColorSO.hpp"
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MultipliedAndAddedColorSO_def.hpp"
#include "GlobalNamespace/zzzz__SimpleColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultipliedAndAddedColorSO.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MultipliedAndAddedColorSO::*)()>(&::GlobalNamespace::MultipliedAndAddedColorSO::get_color)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36f87a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultipliedAndAddedColorSO*>(), { ::i2c::class_of<::GlobalNamespace::MultipliedAndAddedColorSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultipliedAndAddedColorSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultipliedAndAddedColorSO::*)()>(&::GlobalNamespace::MultipliedAndAddedColorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f8804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultipliedAndAddedColorSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::SimpleColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__multiplierColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__multiplierColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierColor;
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_set__multiplierColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplierColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__addColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__addColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColor;
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_set__addColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addColor = value;
}
inline ::UnityEngine::Color GlobalNamespace::MultipliedAndAddedColorSO::get_color() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultipliedAndAddedColorSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MultipliedAndAddedColorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultipliedAndAddedColorSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultipliedAndAddedColorSO* GlobalNamespace::MultipliedAndAddedColorSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultipliedAndAddedColorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultipliedAndAddedColorSO::MultipliedAndAddedColorSO() {}
