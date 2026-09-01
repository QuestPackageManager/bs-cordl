#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSchemeSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO.get_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { "get_colorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO.get_order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { "get_order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO.LogColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::LogColorScheme)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x36f7790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { "LogColorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::ColorSchemeSO::__cordl_internal_get__colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::ColorSchemeSO::__cordl_internal_get__colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr void GlobalNamespace::ColorSchemeSO::__cordl_internal_set__colorScheme(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme = value;
}
constexpr int32_t& GlobalNamespace::ColorSchemeSO::__cordl_internal_get__order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
constexpr int32_t const& GlobalNamespace::ColorSchemeSO::__cordl_internal_get__order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
constexpr void GlobalNamespace::ColorSchemeSO::__cordl_internal_set__order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____order = value;
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeSO::get_colorScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { "get_colorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorSchemeSO::get_order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { "get_order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeSO::LogColorScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { "LogColorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemeSO* GlobalNamespace::ColorSchemeSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeSO::ColorSchemeSO() {}
