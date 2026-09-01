#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatCvar.hpp"
#include "GlobalNamespace/zzzz__Cvar_1_impl.hpp"
#include "GlobalNamespace/zzzz__FloatCvar_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatCvar.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::FloatCvar::Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3327da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatCvar*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatCvar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatCvar::*)(::StringW, float_t)>(&::GlobalNamespace::FloatCvar::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3327e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatCvar*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FloatCvar::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatCvar*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FloatCvar::_ctor(::StringW name, float_t initialValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatCvar*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, initialValue);
}
inline ::GlobalNamespace::FloatCvar* GlobalNamespace::FloatCvar::New_ctor(::StringW name, float_t initialValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatCvar*>(name, initialValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatCvar::FloatCvar() {}
