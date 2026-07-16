#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/Level2Map.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::Level2Map._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::Level2Map::*)(uint8_t, uint8_t)>(&::Mono::Globalization::Unicode::Level2Map::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aae598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::Level2Map*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr uint8_t const& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr void Mono::Globalization::Unicode::Level2Map::__cordl_internal_set_Source(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Source = value;
}
constexpr uint8_t& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Replace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replace;
}
constexpr uint8_t const& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Replace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replace;
}
constexpr void Mono::Globalization::Unicode::Level2Map::__cordl_internal_set_Replace(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Replace = value;
}
inline void Mono::Globalization::Unicode::Level2Map::_ctor(uint8_t source, uint8_t replace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::Level2Map*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, replace);
}
inline ::Mono::Globalization::Unicode::Level2Map* Mono::Globalization::Unicode::Level2Map::New_ctor(uint8_t source, uint8_t replace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::Level2Map*>(source, replace));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::Level2Map::Level2Map() {}
