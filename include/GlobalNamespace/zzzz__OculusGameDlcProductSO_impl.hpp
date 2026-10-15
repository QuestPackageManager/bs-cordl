#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusGameDlcProductSO.hpp"
#include "GlobalNamespace/zzzz__GameDlcProductSO_impl.hpp"
#include "GlobalNamespace/zzzz__OculusGameDlcProductSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusGameDlcProductSO.get_sku
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OculusGameDlcProductSO::*)()>(&::GlobalNamespace::OculusGameDlcProductSO::get_sku)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f5f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductSO*>(), { "get_sku", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusGameDlcProductSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusGameDlcProductSO::*)()>(&::GlobalNamespace::OculusGameDlcProductSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f5fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OculusGameDlcProductSO::__cordl_internal_get__sku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sku;
}
constexpr ::StringW const& GlobalNamespace::OculusGameDlcProductSO::__cordl_internal_get__sku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sku;
}
constexpr void GlobalNamespace::OculusGameDlcProductSO::__cordl_internal_set__sku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sku = value;
}
inline ::StringW GlobalNamespace::OculusGameDlcProductSO::get_sku() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductSO*>(), { "get_sku", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::OculusGameDlcProductSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusGameDlcProductSO* GlobalNamespace::OculusGameDlcProductSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusGameDlcProductSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusGameDlcProductSO::OculusGameDlcProductSO() {}
