#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamGameDlcProductSO.hpp"
#include "GlobalNamespace/zzzz__GameDlcProductSO_impl.hpp"
#include "GlobalNamespace/zzzz__SteamGameDlcProductSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamGameDlcProductSO.get_appId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SteamGameDlcProductSO::*)()>(&::GlobalNamespace::SteamGameDlcProductSO::get_appId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f7304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductSO*>(), { "get_appId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamGameDlcProductSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamGameDlcProductSO::*)()>(&::GlobalNamespace::SteamGameDlcProductSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f730c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::SteamGameDlcProductSO::__cordl_internal_get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr uint32_t const& GlobalNamespace::SteamGameDlcProductSO::__cordl_internal_get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void GlobalNamespace::SteamGameDlcProductSO::__cordl_internal_set__appId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appId = value;
}
inline uint32_t GlobalNamespace::SteamGameDlcProductSO::get_appId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductSO*>(), { "get_appId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SteamGameDlcProductSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamGameDlcProductSO* GlobalNamespace::SteamGameDlcProductSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamGameDlcProductSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamGameDlcProductSO::SteamGameDlcProductSO() {}
