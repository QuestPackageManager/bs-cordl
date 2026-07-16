#pragma once
// IWYU pragma private; include "GlobalNamespace/CvarFloatCommand.hpp"
#include "GlobalNamespace/zzzz__CvarCommand_1_impl.hpp"
#include "GlobalNamespace/zzzz__CvarFloatCommand_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CvarFloatCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CvarFloatCommand::*)()>(&::GlobalNamespace::CvarFloatCommand::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32cc988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarFloatCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CvarFloatCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarFloatCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CvarFloatCommand* GlobalNamespace::CvarFloatCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CvarFloatCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CvarFloatCommand::CvarFloatCommand() {}
