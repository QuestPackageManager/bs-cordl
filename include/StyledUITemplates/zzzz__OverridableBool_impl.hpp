#pragma once
// IWYU pragma private; include "StyledUITemplates\OverridableBool.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableBool_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::OverridableBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::OverridableBool::*)()>(&::StyledUITemplates::OverridableBool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f3f5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableBool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void StyledUITemplates::OverridableBool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableBool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StyledUITemplates::OverridableBool* StyledUITemplates::OverridableBool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::StyledUITemplates::OverridableBool*>());
}
// Ctor Parameters []
constexpr ::StyledUITemplates::OverridableBool::OverridableBool() {}
