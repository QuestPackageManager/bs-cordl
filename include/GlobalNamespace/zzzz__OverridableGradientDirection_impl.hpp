#pragma once
// IWYU pragma private; include "GlobalNamespace/OverridableGradientDirection.hpp"
#include "GlobalNamespace/zzzz__GradientDirection_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "GlobalNamespace/zzzz__OverridableGradientDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverridableGradientDirection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverridableGradientDirection::*)()>(&::GlobalNamespace::OverridableGradientDirection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32c9674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverridableGradientDirection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OverridableGradientDirection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverridableGradientDirection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OverridableGradientDirection* GlobalNamespace::OverridableGradientDirection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverridableGradientDirection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverridableGradientDirection::OverridableGradientDirection() {}
