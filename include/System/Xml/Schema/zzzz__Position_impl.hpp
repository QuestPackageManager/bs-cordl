#pragma once
// IWYU pragma private; include "System/Xml/Schema/Position.hpp"
#include "System/Xml/Schema/zzzz__Position_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Position._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Position::*)(int32_t, ::System::Object*)>(&::System::Xml::Schema::Position::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6318fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Position>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Position::_ctor(int32_t symbol, ::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Position>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, symbol, particle);
}
// Ctor Parameters [CppParam { name: "symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "particle", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::Position::Position(int32_t symbol, ::System::Object* particle) noexcept {
  this->symbol = symbol;
  this->particle = particle;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Position::Position() {}
