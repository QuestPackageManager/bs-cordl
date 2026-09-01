#pragma once
// IWYU pragma private; include "GlobalNamespace\MockServerSettings.hpp"
#include "GlobalNamespace/zzzz__MockPlayerSettings_impl.hpp"
#include "GlobalNamespace/zzzz__MockServerSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockServerSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockServerSettings::*)()>(&::GlobalNamespace::MockServerSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cf05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockServerSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockServerSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockServerSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockServerSettings* GlobalNamespace::MockServerSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockServerSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockServerSettings::MockServerSettings() {}
