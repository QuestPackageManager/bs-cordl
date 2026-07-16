#pragma once
// IWYU pragma private; include "TMPro/KerningPairKey.hpp"
#include "TMPro/zzzz__KerningPairKey_def.hpp"
//  Writing Method size for method: ::TMPro::KerningPairKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningPairKey::*)(uint32_t, uint32_t)>(&::TMPro::KerningPairKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69572e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningPairKey>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void TMPro::KerningPairKey::_ctor(uint32_t ascii_left, uint32_t ascii_right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningPairKey>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ascii_left, ascii_right);
}
// Ctor Parameters [CppParam { name: "ascii_Left", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascii_Right", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::KerningPairKey::KerningPairKey(uint32_t ascii_Left, uint32_t ascii_Right, uint32_t key) noexcept {
  this->ascii_Left = ascii_Left;
  this->ascii_Right = ascii_Right;
  this->key = key;
}
// Ctor Parameters []
constexpr ::TMPro::KerningPairKey::KerningPairKey() {}
