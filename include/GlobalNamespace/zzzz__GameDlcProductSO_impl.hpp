#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcProductSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GameDlcProductSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameDlcProductSO.get_gameDlcId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameDlcProductSO::*)()>(&::GlobalNamespace::GameDlcProductSO::get_gameDlcId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ef630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductSO*>(), { "get_gameDlcId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcProductSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcProductSO::*)()>(&::GlobalNamespace::GameDlcProductSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ef638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameDlcProductSO::__cordl_internal_get__gameDlcId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcId;
}
constexpr ::StringW const& GlobalNamespace::GameDlcProductSO::__cordl_internal_get__gameDlcId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcId;
}
constexpr void GlobalNamespace::GameDlcProductSO::__cordl_internal_set__gameDlcId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameDlcId = value;
}
inline ::StringW GlobalNamespace::GameDlcProductSO::get_gameDlcId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductSO*>(), { "get_gameDlcId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameDlcProductSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameDlcProductSO* GlobalNamespace::GameDlcProductSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameDlcProductSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcProductSO::GameDlcProductSO() {}
