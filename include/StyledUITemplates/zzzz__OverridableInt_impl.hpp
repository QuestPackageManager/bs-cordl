#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableInt.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableInt_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::OverridableInt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::OverridableInt::*)()>(&::StyledUITemplates::OverridableInt::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f3d2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableInt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void StyledUITemplates::OverridableInt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableInt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StyledUITemplates::OverridableInt* StyledUITemplates::OverridableInt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::StyledUITemplates::OverridableInt*>());
}
// Ctor Parameters []
constexpr ::StyledUITemplates::OverridableInt::OverridableInt() {}
