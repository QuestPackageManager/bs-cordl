#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelScore.hpp"
#include "GlobalNamespace/zzzz__LevelScore_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelScore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScore::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::LevelScore::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a326c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScore>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelScore::_ctor(int32_t multiplied, int32_t modified, int32_t maxMultiplied, int32_t maxModified) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScore>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, multiplied, modified, maxMultiplied, maxModified);
}
// Ctor Parameters [CppParam { name: "multiplied", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modified", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "maxMultiplied", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxModified", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LevelScore::LevelScore(int32_t multiplied, int32_t modified, int32_t maxMultiplied, int32_t maxModified) noexcept {
  this->multiplied = multiplied;
  this->modified = modified;
  this->maxMultiplied = maxMultiplied;
  this->maxModified = maxModified;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelScore::LevelScore() {}
