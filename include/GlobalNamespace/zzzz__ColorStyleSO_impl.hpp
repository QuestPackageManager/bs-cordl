#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStyleSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ColorStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorStyle_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyColorStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorStyleSO.get_colorStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadOnlyColorStyle* (::GlobalNamespace::ColorStyleSO::*)()>(&::GlobalNamespace::ColorStyleSO::get_colorStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f5f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyleSO*>(), { "get_colorStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyleSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyleSO::*)()>(&::GlobalNamespace::ColorStyleSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f5f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyleSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorStyle*& GlobalNamespace::ColorStyleSO::__cordl_internal_get__colorStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorStyle;
}
constexpr ::GlobalNamespace::ColorStyle* const& GlobalNamespace::ColorStyleSO::__cordl_internal_get__colorStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorStyle;
}
constexpr void GlobalNamespace::ColorStyleSO::__cordl_internal_set__colorStyle(::GlobalNamespace::ColorStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorStyle = value;
}
inline ::GlobalNamespace::IReadOnlyColorStyle* GlobalNamespace::ColorStyleSO::get_colorStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyleSO*>(), { "get_colorStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadOnlyColorStyle*>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyleSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyleSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorStyleSO* GlobalNamespace::ColorStyleSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorStyleSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorStyleSO::ColorStyleSO() {}
