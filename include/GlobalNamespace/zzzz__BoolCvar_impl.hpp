#pragma once
// IWYU pragma private; include "GlobalNamespace\BoolCvar.hpp"
#include "GlobalNamespace/zzzz__Cvar_1_impl.hpp"
#include "GlobalNamespace/zzzz__BoolCvar_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoolCvar.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::BoolCvar::Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3327cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolCvar*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoolCvar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoolCvar::*)(::StringW, bool)>(&::GlobalNamespace::BoolCvar::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3327d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolCvar*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoolCvar::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolCvar*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BoolCvar::_ctor(::StringW name, bool initialValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolCvar*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, initialValue);
}
inline ::GlobalNamespace::BoolCvar* GlobalNamespace::BoolCvar::New_ctor(::StringW name, bool initialValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BoolCvar*>(name, initialValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoolCvar::BoolCvar() {}
