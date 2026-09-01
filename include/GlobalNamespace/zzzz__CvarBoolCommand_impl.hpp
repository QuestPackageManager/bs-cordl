#pragma once
// IWYU pragma private; include "GlobalNamespace\CvarBoolCommand.hpp"
#include "GlobalNamespace/zzzz__CvarCommand_1_impl.hpp"
#include "GlobalNamespace/zzzz__CvarBoolCommand_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CvarBoolCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CvarBoolCommand::*)()>(&::GlobalNamespace::CvarBoolCommand::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32ce09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarBoolCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CvarBoolCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarBoolCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CvarBoolCommand* GlobalNamespace::CvarBoolCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CvarBoolCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CvarBoolCommand::CvarBoolCommand() {}
