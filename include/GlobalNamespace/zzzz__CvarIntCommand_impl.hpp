#pragma once
// IWYU pragma private; include "GlobalNamespace/CvarIntCommand.hpp"
#include "GlobalNamespace/zzzz__CvarCommand_1_impl.hpp"
#include "GlobalNamespace/zzzz__CvarIntCommand_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CvarIntCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CvarIntCommand::*)()>(&::GlobalNamespace::CvarIntCommand::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32cc9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarIntCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CvarIntCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarIntCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CvarIntCommand* GlobalNamespace::CvarIntCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CvarIntCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CvarIntCommand::CvarIntCommand() {}
